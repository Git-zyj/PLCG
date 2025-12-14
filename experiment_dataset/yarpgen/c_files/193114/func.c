/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193114
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
    var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (max(((+(((/* implicit */int) var_13)))), (((/* implicit */int) var_14))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_16 -= ((/* implicit */unsigned long long int) arr_2 [i_0]);
        var_17 -= ((/* implicit */int) arr_0 [i_0] [i_0]);
    }
    var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */int) var_12)), (min((((/* implicit */int) var_8)), (var_7))))) : (((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            {
                var_19 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_4))));
                var_21 -= arr_4 [i_2];
                /* LoopSeq 1 */
                for (unsigned int i_3 = 1; i_3 < 11; i_3 += 4) 
                {
                    var_22 += ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) arr_1 [i_3]))))))))));
                    var_23 ^= ((unsigned short) max((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)20)), (arr_3 [i_1])))), (((var_5) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_2)))));
                }
            }
        } 
    } 
    var_24 ^= ((/* implicit */int) (_Bool)0);
}
