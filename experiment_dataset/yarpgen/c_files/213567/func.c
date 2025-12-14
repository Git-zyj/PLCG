/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213567
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */int) var_0)) : ((+(((/* implicit */int) var_0)))))) : (((/* implicit */int) var_9))));
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_10)))))) != ((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_3))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_11)) + (((/* implicit */int) var_9)))) + (((((/* implicit */int) var_11)) + (((/* implicit */int) var_0))))));
                        arr_11 [i_0] [i_2] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((_Bool) (_Bool)0));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((6950539920070743356ULL) / (((/* implicit */unsigned long long int) var_3)))) : (((25ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                        arr_12 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-19258)) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) 6950539920070743367ULL)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_3])) : (((/* implicit */int) var_1)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_16 *= ((/* implicit */unsigned long long int) (+(-2098358228)));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1]))) & (arr_14 [i_5] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_5 [i_4] [i_1])) : (((/* implicit */int) arr_9 [i_2] [i_4]))));
                        }
                        for (unsigned int i_6 = 1; i_6 < 21; i_6 += 4) 
                        {
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_9 [i_6] [i_2 - 1]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) ((unsigned short) 18446744073709551615ULL))) : ((+(((/* implicit */int) arr_9 [i_1] [i_4]))))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) (short)17))))) != (((/* implicit */int) (!(((/* implicit */_Bool) 746081569U)))))));
                            var_20 = ((/* implicit */unsigned int) 1395984518);
                        }
                        for (int i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            arr_25 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((arr_8 [i_4] [i_0]) / (((/* implicit */int) arr_0 [i_4])))));
                            var_21 -= ((/* implicit */short) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_2 + 3] [i_2 - 1] [i_2 + 2])) != (((/* implicit */int) var_8))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_7])) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_2] [i_4] [i_7])) ? (arr_8 [i_2] [0LL]) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((unsigned char) var_2)))));
                            var_23 = ((/* implicit */unsigned int) (~(arr_14 [i_2 + 4] [i_0] [i_2] [i_2])));
                        }
                        for (unsigned short i_8 = 2; i_8 < 23; i_8 += 3) 
                        {
                            arr_28 [i_8] [i_0] [i_2] [i_0] [(_Bool)1] = ((/* implicit */signed char) arr_18 [i_0]);
                            arr_29 [i_0] [i_1] [(unsigned short)14] [(unsigned short)20] [i_8] &= ((/* implicit */_Bool) arr_16 [i_8] [14] [i_1] [i_2] [i_1] [14] [i_0]);
                        }
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) arr_20 [i_0] [i_4] [i_4] [i_2] [i_1] [i_1] [i_0])))))));
                    }
                    var_25 = ((/* implicit */unsigned char) ((unsigned long long int) max((338548904U), (((/* implicit */unsigned int) (_Bool)1)))));
                    arr_30 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (4294967287U)))) || (((/* implicit */_Bool) var_5))));
                    var_26 = ((/* implicit */long long int) max((var_1), (((/* implicit */unsigned short) var_8))));
                }
            } 
        } 
    } 
    var_27 = ((((((/* implicit */_Bool) var_3)) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (var_2)))))) / (((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), (((var_6) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))))));
    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_8))))) : ((-(var_2))))), (((/* implicit */long long int) (unsigned short)56980)))))));
}
