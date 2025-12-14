/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20751
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
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-6259)))));
                arr_6 [i_0] [i_1] |= ((/* implicit */int) min((max((((((/* implicit */_Bool) 1706353796198576002LL)) ? (4569826376076396812LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))), (((/* implicit */long long int) arr_3 [i_1] [i_1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((1706353796198576002LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)40)))))) ? (((var_6) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [(short)13])))) : (((/* implicit */int) (signed char)0)))))));
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)224), (((/* implicit */unsigned char) (signed char)-124)))))) : ((+(var_5))))) << ((((-(((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_8))))))) + (98)))));
    var_11 ^= ((/* implicit */long long int) (signed char)-86);
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) max(((+(((/* implicit */int) (signed char)-124)))), (((/* implicit */int) (signed char)-122)))))));
}
