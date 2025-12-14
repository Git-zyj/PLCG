/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195741
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
    var_17 = ((/* implicit */signed char) var_14);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0 + 2]))));
                /* LoopSeq 2 */
                for (long long int i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (_Bool)1))));
                    var_20 = ((/* implicit */short) arr_1 [i_0 + 1]);
                    var_21 = ((/* implicit */unsigned int) min((arr_0 [i_0]), ((-(max((((/* implicit */int) arr_6 [i_0 + 2] [i_1] [i_0])), (var_14)))))));
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_0 [i_2]))));
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) 18446744073709551615ULL))));
                }
                for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    var_24 = ((/* implicit */short) (_Bool)1);
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            {
                                var_25 ^= ((/* implicit */signed char) arr_5 [i_0] [i_3] [i_4 + 1]);
                                arr_15 [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                                var_26 += ((/* implicit */long long int) (((_Bool)1) ? (1508054804) : (-820505102)));
                                var_27 = ((/* implicit */int) (_Bool)1);
                            }
                        } 
                    } 
                    var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1] [i_3])) ? ((((_Bool)1) ? (var_5) : (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) ((_Bool) arr_7 [i_0 + 2] [i_0 + 2] [i_0 - 1]))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) == (((/* implicit */int) max((((/* implicit */short) var_1)), (var_7))))))));
                    /* LoopSeq 3 */
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        var_29 = ((/* implicit */signed char) arr_4 [i_0] [i_1] [i_3] [i_6]);
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (unsigned char)10))));
                        var_31 = arr_0 [i_0];
                    }
                    for (signed char i_7 = 2; i_7 < 15; i_7 += 3) 
                    {
                        var_32 |= ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 3503942350494674712LL))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_8 = 2; i_8 < 18; i_8 += 2) 
                        {
                            arr_23 [i_0] [i_0] [i_3] [i_7 - 2] [i_8 - 2] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_12) : (var_2)))) ? (((/* implicit */int) arr_18 [i_0 - 1] [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_7 + 1]))));
                            var_33 *= ((/* implicit */unsigned int) arr_4 [i_7 - 2] [i_3] [i_1] [i_0 + 1]);
                            var_34 = ((/* implicit */int) max((var_34), (arr_17 [i_0 - 1] [i_1] [i_3] [i_8 - 1])));
                            arr_24 [i_3] [i_3] [i_3] [i_0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_3] [i_0] [i_8]);
                        }
                        for (int i_9 = 1; i_9 < 18; i_9 += 2) 
                        {
                            var_35 ^= ((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_0 + 2] [i_1] [i_3] [i_7] [i_9 - 1]))));
                            var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_7 - 2] [i_0 + 1] [i_3])) ? (((/* implicit */int) arr_16 [i_7] [i_0] [i_3] [i_7 + 1])) : (((/* implicit */int) ((unsigned char) (-(929281826U))))))))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) 
                        {
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 820505102)) ? (2147483647) : (((/* implicit */int) (short)17534))));
                            var_38 = ((/* implicit */signed char) (((-(((int) 1508054809)))) | (((/* implicit */int) arr_6 [i_0] [i_10] [i_0]))));
                        }
                        var_39 += ((/* implicit */unsigned char) max((((/* implicit */short) ((var_10) < (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), ((short)-23298)));
                    }
                    for (long long int i_11 = 1; i_11 < 18; i_11 += 1) 
                    {
                        arr_33 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */short) (signed char)56)), ((short)23270)));
                        arr_34 [i_0] [i_0] [i_3] [i_11 + 1] = ((/* implicit */short) (_Bool)1);
                    }
                }
            }
        } 
    } 
}
