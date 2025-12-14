/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2578
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
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_5))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) arr_3 [i_0] [i_0] [i_1]);
                var_19 = ((/* implicit */short) ((2917763765U) * (arr_1 [i_0])));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [17ULL] [i_3])) ? (var_12) : (((/* implicit */long long int) 976255257))))) ? (((/* implicit */unsigned long long int) (+(164948988)))) : (16450816113664728613ULL))) << (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (10U)))));
                        arr_11 [(short)11] [i_1] [(unsigned short)18] [i_3] = ((/* implicit */unsigned char) (-(0ULL)));
                        arr_12 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((arr_2 [i_0] [i_0]), (((/* implicit */int) ((((/* implicit */int) min((arr_4 [i_1]), (((/* implicit */short) var_7))))) != (min((arr_6 [i_3] [(short)16] [i_2]), (arr_6 [i_0] [i_1] [3U]))))))));
                        var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_8 [22ULL] [i_1] [i_2] [22ULL])), (((((/* implicit */_Bool) 18446744073709551605ULL)) ? ((((_Bool)0) ? (12095305018883303606ULL) : (21ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */short) max((((((/* implicit */_Bool) var_10)) ? (arr_3 [i_1] [i_4] [i_5]) : (((/* implicit */unsigned long long int) arr_5 [(short)1] [(short)1] [i_4] [i_5])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (3040021770U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (1254945511U) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_16))))))))));
                                var_22 = arr_16 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_2] [15U] [i_4] [(short)4];
                                arr_19 [(unsigned char)21] [i_1] [i_2] [i_4] [i_5] = ((/* implicit */short) arr_15 [i_0] [i_1] [i_2] [i_4] [i_5]);
                                arr_20 [(unsigned short)8] [i_1] [i_2] [i_4] [i_5] = ((/* implicit */short) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((int) var_9))) : (arr_10 [i_2] [i_4] [i_2] [i_0]))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_1] [i_4] [i_5])) || ((_Bool)0))))) : ((-(var_14))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        arr_23 [i_0] [i_1] [i_2] [i_6] = (~(((((((/* implicit */int) (_Bool)1)) < (arr_6 [i_1] [i_1] [i_6]))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)32767))))) : (min((((/* implicit */long long int) arr_4 [i_0])), (var_14))))));
                        var_23 ^= ((/* implicit */long long int) (short)11284);
                        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 14LL))));
                        var_25 = ((/* implicit */unsigned int) arr_21 [i_6] [i_1] [i_2] [i_6]);
                    }
                    for (short i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        var_26 = ((/* implicit */_Bool) (-(-1026239811)));
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 2; i_8 < 22; i_8 += 4) 
                        {
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_7] [7U] [(unsigned short)5] [i_7])) ? (arr_21 [i_7] [i_7] [i_2] [i_7]) : (((/* implicit */int) var_9))));
                            var_28 = ((/* implicit */_Bool) (+(9223372036854775807LL)));
                            arr_30 [i_1] [i_1] [i_1] [0LL] [i_1] [i_7] = ((/* implicit */unsigned int) ((var_16) || (((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_7] [20LL]))));
                            var_29 = ((/* implicit */short) (~((~(((/* implicit */int) var_9))))));
                            arr_31 [i_7] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31488)) ? (-6727952422703284954LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1791)))))) ? ((-(18446744073709551605ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            var_30 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_15 [i_0] [(short)17] [i_0] [i_0] [i_0])) ? (arr_2 [i_7] [i_0]) : (((/* implicit */int) var_1))))));
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) arr_27 [i_0] [i_1] [i_7] [i_9]))))) ? (((var_16) ? (((/* implicit */unsigned long long int) arr_24 [i_0] [9] [i_2] [i_7])) : (arr_3 [i_0] [i_1] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1299)))))) ? (((/* implicit */int) arr_33 [i_0] [i_2] [i_2] [i_7] [i_9])) : (((/* implicit */int) min((((/* implicit */short) ((var_0) > (((/* implicit */unsigned long long int) arr_9 [i_7] [i_1] [i_1] [i_0]))))), (arr_22 [i_0] [i_1] [i_2] [i_7]))))));
                        }
                        var_32 = ((/* implicit */long long int) var_11);
                        arr_34 [i_7] = ((/* implicit */unsigned int) arr_14 [i_2] [i_1] [i_2] [i_2] [i_1]);
                        var_33 += arr_26 [i_0] [22];
                    }
                    var_34 ^= ((/* implicit */unsigned long long int) arr_4 [i_0]);
                    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-32760)), ((unsigned short)11)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1682515379)) || (((/* implicit */_Bool) ((var_16) ? (arr_9 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */int) var_3))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_15 [i_0] [20ULL] [20ULL] [i_1] [0U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */long long int) arr_24 [i_0] [i_1] [i_1] [i_2])) : (var_6)))));
                }
                var_36 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [(unsigned short)5])) != (min((var_15), (min((arr_5 [i_0] [i_1] [i_0] [i_0]), (((/* implicit */int) var_4))))))));
            }
        } 
    } 
}
