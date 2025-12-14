/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240065
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
    var_15 = ((/* implicit */unsigned long long int) max((var_1), (var_14)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_10 [4ULL] [i_1] [0LL] [i_2] [i_1] [(unsigned char)2] = ((/* implicit */signed char) var_2);
                            var_16 = ((/* implicit */unsigned long long int) max((max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) || ((_Bool)1)))))), (((/* implicit */unsigned char) ((signed char) (_Bool)1)))));
                            var_17 = ((/* implicit */unsigned int) arr_1 [i_1 + 1]);
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((arr_4 [i_0] [i_1 + 2]), (min((arr_4 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_5)))))))));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((max((arr_0 [i_0]), (((/* implicit */int) var_2)))) == (arr_0 [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
    {
        arr_13 [i_4] [13ULL] = ((/* implicit */signed char) arr_11 [i_4]);
        var_20 = ((/* implicit */signed char) (unsigned short)0);
        arr_14 [i_4] [i_4] = ((/* implicit */signed char) min((min((arr_12 [i_4]), (((/* implicit */unsigned long long int) (unsigned short)65533)))), (((/* implicit */unsigned long long int) ((long long int) var_13)))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
    {
        arr_18 [i_5] = ((/* implicit */unsigned char) 8388608U);
        var_21 -= ((/* implicit */short) arr_12 [i_5]);
        var_22 -= ((/* implicit */signed char) var_7);
    }
    var_23 = ((/* implicit */int) var_6);
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_0))));
}
