/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34594
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))))), (((/* implicit */int) (unsigned char)19))));
                arr_8 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) + (2147483647))) << (((max((((/* implicit */unsigned long long int) (signed char)116)), (17128382659907531891ULL))) - (17128382659907531891ULL)))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-20)))));
                arr_9 [(short)6] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)39880)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */int) (short)16161)))), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((unsigned int) (short)-28891)) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-25850)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (_Bool)0);
    var_18 = ((/* implicit */signed char) (((-(((1774027897) / (((/* implicit */int) var_10)))))) & (((((/* implicit */_Bool) ((((/* implicit */int) (short)17994)) + (((/* implicit */int) var_8))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)35671))))))));
}
