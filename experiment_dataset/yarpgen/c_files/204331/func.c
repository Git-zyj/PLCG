/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204331
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
    for (signed char i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    var_19 = ((/* implicit */unsigned int) arr_2 [(short)21] [i_1] [i_1 - 1]);
                    arr_6 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)65527)) ? (-1319868375771774873LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9))))) % (((/* implicit */long long int) var_11))));
                }
                arr_7 [i_0] [i_1 + 2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_4 [i_0 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_11)))) : (((((/* implicit */_Bool) arr_0 [3])) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) max((((/* implicit */int) var_1)), ((((-(((/* implicit */int) var_2)))) / (((/* implicit */int) ((((/* implicit */int) (unsigned short)65527)) >= (((/* implicit */int) (signed char)56)))))))));
    var_21 &= ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) == (((/* implicit */int) (((-(((/* implicit */int) var_2)))) == ((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)115)))))))));
    var_22 = var_8;
}
