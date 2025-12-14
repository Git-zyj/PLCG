/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245551
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (_Bool)1))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        var_19 &= ((/* implicit */unsigned char) var_16);
                        var_20 = ((/* implicit */unsigned char) arr_4 [i_0]);
                        var_21 = ((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0] [i_0])));
                    }
                    /* LoopSeq 4 */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_4])))))) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (7440337194908469416LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_4]))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_5 [i_2 + 2]))))), (arr_4 [i_0])))));
                        arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_2);
                        var_22 = ((/* implicit */unsigned long long int) arr_1 [i_2]);
                    }
                    for (int i_5 = 1; i_5 < 16; i_5 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) -7440337194908469417LL)), (15589313756566238328ULL)));
                        var_24 = ((/* implicit */unsigned char) arr_7 [i_1 + 1] [i_1 - 1] [i_1 + 1]);
                    }
                    for (int i_6 = 1; i_6 < 16; i_6 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_0 [i_0 - 1] [i_0 - 1]), (arr_0 [i_1 - 1] [i_6 + 2])))) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7440337194908469402LL))) : (((((/* implicit */_Bool) var_17)) ? (arr_17 [i_1] [i_1] [i_0]) : (((/* implicit */long long int) arr_21 [i_0 - 1])))))) : (((/* implicit */long long int) min((10U), (((/* implicit */unsigned int) (_Bool)1)))))));
                        var_26 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])) : (18446744073709551604ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) var_16)))))));
                        var_27 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 16799848089013250071ULL)) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) (unsigned char)220))))), (min(((((_Bool)1) ? (arr_20 [i_6 + 3] [i_6 - 1] [i_2 + 2] [i_0 - 1] [i_0 - 1]) : (((/* implicit */long long int) var_2)))), (arr_4 [i_0])))));
                        var_28 = ((/* implicit */signed char) var_13);
                        var_29 = arr_1 [i_0];
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 16; i_7 += 2) /* same iter space */
                    {
                        arr_26 [i_0] [i_2 + 1] [i_1 + 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])) : (0ULL)));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 2; i_8 < 17; i_8 += 3) 
                        {
                            var_30 -= ((/* implicit */unsigned char) arr_16 [i_7 + 4] [i_7 + 3] [i_7 + 4] [i_7 + 3] [i_8 - 1]);
                            arr_30 [i_0] [i_0 - 1] [i_2 - 1] [i_7 + 4] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (-9223372036854775786LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (var_14) : (var_14))))));
                            var_31 = ((/* implicit */unsigned long long int) arr_21 [i_2]);
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (624211677U) : (3918467071U)))) ? (arr_24 [i_1 + 1] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        var_33 = ((/* implicit */unsigned char) arr_29 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_2 + 1] [i_2 + 1] [i_7 + 4]);
                    }
                    arr_31 [i_2 - 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_2);
                }
            } 
        } 
    } 
    var_34 = (unsigned char)106;
}
