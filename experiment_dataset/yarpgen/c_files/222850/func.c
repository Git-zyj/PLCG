/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222850
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57947))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_6)))))))))) != (((var_12) ? (((((/* implicit */_Bool) 7010631886432991324ULL)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) : (min((((/* implicit */unsigned long long int) (short)-21)), (791230027652947099ULL)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 + 4] [i_2 + 3])) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1] [i_2 - 1]))))) ? (((/* implicit */int) ((var_13) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 - 1] [i_2 + 2] [i_2 + 4])))))) : (((int) var_1))));
                    arr_7 [(signed char)13] [i_1] [i_2] = ((/* implicit */unsigned int) 7469813843042575975ULL);
                    var_20 -= max((10976930230666975641ULL), (((/* implicit */unsigned long long int) (signed char)-106)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_21 &= ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_15)) ? (arr_1 [i_3] [i_4]) : (((/* implicit */int) var_10))))))));
                                arr_14 [i_1] [(unsigned char)5] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (var_11)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-20612))) : (var_7)))) : (var_4))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15635469792375134269ULL)))))) : (15635469792375134269ULL)));
            arr_17 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2811274281334417348ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_5]))) : (var_11)))) && (((/* implicit */_Bool) (unsigned short)44147))));
            var_23 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) * (15635469792375134269ULL)));
        }
        for (short i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            arr_21 [i_0] = ((/* implicit */short) var_14);
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)64)) < (min((((((/* implicit */int) (unsigned char)88)) - (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)-32765))))));
        }
        arr_22 [i_0] = ((/* implicit */short) arr_13 [i_0] [i_0] [i_0] [(short)2] [i_0]);
        var_25 = ((/* implicit */short) (((_Bool)1) ? ((+(((/* implicit */int) ((arr_11 [i_0] [(short)20] [(short)20] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)87)))))))) : ((+(((/* implicit */int) (unsigned char)95))))));
    }
    for (int i_7 = 0; i_7 < 17; i_7 += 2) 
    {
        var_26 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned char)6] [i_7] [i_7]))) ^ (var_2)))));
        arr_25 [i_7] = ((/* implicit */unsigned short) max((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_20 [i_7] [i_7] [i_7])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_7])) && (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) max((((/* implicit */short) (signed char)17)), ((short)-462))))))));
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) max(((signed char)-48), ((signed char)-63))))));
        var_28 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(_Bool)1])))))))) ? (max((((/* implicit */unsigned long long int) ((unsigned char) var_8))), (((((/* implicit */_Bool) (short)-6222)) ? (arr_11 [i_7] [2ULL] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_7] [i_7] [i_7]))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_23 [i_7])))))));
    }
    for (unsigned short i_8 = 3; i_8 < 20; i_8 += 1) 
    {
        arr_28 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_8] [i_8 - 3] [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1])) || (((/* implicit */_Bool) arr_12 [14LL] [i_8 - 1] [i_8] [i_8] [(short)7] [i_8 - 3] [i_8 - 2])))))) : ((-(min((((/* implicit */unsigned long long int) var_16)), (var_1)))))));
        /* LoopSeq 3 */
        for (short i_9 = 1; i_9 < 19; i_9 += 2) 
        {
            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((unsigned long long int) min((((/* implicit */short) (_Bool)1)), (arr_3 [i_8 + 1] [i_9] [i_9 + 1])))))));
            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) 1699129338U))));
            arr_31 [(short)8] [i_9] [i_9] |= ((/* implicit */_Bool) arr_3 [i_8 - 1] [i_8] [(short)10]);
        }
        for (unsigned short i_10 = 1; i_10 < 20; i_10 += 1) 
        {
            arr_36 [i_8] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_11 [i_8 - 2] [i_10 + 1] [i_8] [i_8 - 3])) && (((/* implicit */_Bool) arr_11 [i_8] [i_10 + 1] [i_8] [i_8 - 3]))))));
            var_31 |= ((/* implicit */short) ((long long int) max(((~(((/* implicit */int) var_6)))), (((/* implicit */int) arr_2 [i_8] [i_10 - 1] [i_10])))));
            var_32 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_10 - 1] [i_8 - 2])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (var_14)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10976930230666975640ULL)) ? (((/* implicit */int) (unsigned short)40946)) : (2147483647)))) : (10976930230666975665ULL)));
            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_8 - 2] [i_8 - 2] [i_8]))) + (((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18120)))))))) ? (((((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) var_17))))) % (((/* implicit */int) ((signed char) (signed char)-126))))) : (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [i_10] [i_10] [i_10] [i_8] [i_8] [10U] [i_8])) : (((/* implicit */int) var_12)))) : (((/* implicit */int) arr_8 [i_8] [i_8] [i_10 - 1]))))));
        }
        for (signed char i_11 = 0; i_11 < 21; i_11 += 1) 
        {
            var_34 = ((((/* implicit */_Bool) 7469813843042575975ULL)) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((var_1) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) & (var_14))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-88)) % (((/* implicit */int) (signed char)-46))))));
            var_35 = ((/* implicit */unsigned char) ((2802799425U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70)))));
        }
        var_36 = max((3072), (((/* implicit */int) (signed char)(-127 - 1))));
        var_37 &= ((/* implicit */int) var_16);
        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) << (((((/* implicit */int) (unsigned char)255)) - (243))))) & (((/* implicit */int) arr_30 [20]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3013206259U)) ? (((/* implicit */int) arr_3 [i_8 - 2] [i_8] [i_8 - 2])) : (((/* implicit */int) var_16))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (var_13))))))))));
    }
}
