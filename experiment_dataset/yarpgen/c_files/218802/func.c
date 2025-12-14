/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218802
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
    var_19 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */short) max((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551615ULL) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (20ULL)))))))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */long long int) 1643456286U)) > (2LL)))), (((var_3) | (((/* implicit */int) var_0))))))) ? (((/* implicit */int) min(((unsigned short)45466), ((unsigned short)20046)))) : (((/* implicit */int) ((_Bool) (~(-2LL)))))));
                var_22 = max((((((/* implicit */_Bool) (-(18446744073709551615ULL)))) ? (((unsigned long long int) arr_2 [i_1 + 2] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_1 + 2]))))))), (((/* implicit */unsigned long long int) (unsigned short)20044)));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] [i_2] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                            var_23 &= ((/* implicit */long long int) (+(15938008484430746546ULL)));
                            /* LoopSeq 2 */
                            for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                            {
                                var_24 &= ((unsigned short) ((((/* implicit */int) ((unsigned short) 2LL))) * (((/* implicit */int) (signed char)28))));
                                var_25 += ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)17295))) : (11LL)))))))));
                                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((arr_16 [i_0] [i_1 - 1] [i_2] [i_0] [i_4]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42540))))))) ? (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) var_4)), (arr_5 [i_0] [i_1]))))) : (((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_3] [i_3]))));
                                var_27 |= ((/* implicit */int) (signed char)-77);
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_28 -= ((min((((/* implicit */unsigned long long int) var_15)), (arr_18 [i_5] [(short)6] [i_2] [(short)6] [i_0]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-68)))), (arr_4 [i_0] [i_1 + 2] [0]))))));
                                var_29 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((signed char) 377397038))) || (((/* implicit */_Bool) ((var_14) ^ (((/* implicit */int) (_Bool)1))))))));
                                var_30 = ((/* implicit */int) min((((/* implicit */short) ((arr_16 [i_0] [i_1] [i_2 - 2] [i_0] [i_5]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22997)))))), ((short)22562)));
                            }
                            var_31 = ((/* implicit */short) ((unsigned long long int) min((var_12), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-2147483647 - 1)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
