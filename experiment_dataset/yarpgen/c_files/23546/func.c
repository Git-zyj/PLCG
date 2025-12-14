/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23546
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
    var_15 = (!(((/* implicit */_Bool) (short)-24540)));
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24540)) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) (short)-24539)) : (((/* implicit */int) (short)-24551))))) : ((+(((var_11) ? (arr_2 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned long long int) var_2))))))));
                arr_7 [i_0 - 4] [i_0 - 4] [i_0 - 4] &= ((/* implicit */_Bool) 4791435691912392857LL);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (long long int i_3 = 4; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-19290))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 3; i_4 < 22; i_4 += 3) 
                            {
                                arr_17 [i_0] [i_1] [i_0] [i_2] [i_3 - 2] [i_2] [i_4 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((2730394495U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 1] [i_0] [i_0]))))) ? (((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_4])) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_2])) : (((/* implicit */int) arr_1 [i_3])))))))) ? (((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_3 - 4] [i_3] [i_4 - 1] [i_4 - 1] [i_4])) ? (arr_13 [i_3] [i_3] [i_3 - 4] [i_3]) : (arr_13 [i_1] [i_1] [i_3 - 4] [i_1]))) : (max((((/* implicit */int) arr_1 [i_2])), (arr_13 [i_1] [i_2] [i_1] [i_0])))));
                                arr_18 [i_0] = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) arr_12 [i_4 + 2] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13273502435841526092ULL))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) 359208423U)) : (-4019883905555970199LL)))))) / (max((((/* implicit */unsigned long long int) 9223372036854775804LL)), (((((/* implicit */_Bool) 1911713300)) ? (13273502435841526092ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))))));
                                var_17 = (-((-(((39692034U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_2] [i_3]))))))));
                            }
                            for (short i_5 = 0; i_5 < 24; i_5 += 2) 
                            {
                                arr_22 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) 39692034U)) / (((((/* implicit */_Bool) (signed char)4)) ? (1152921504602652672LL) : (4791435691912392857LL)))));
                                arr_23 [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0 + 1] [i_3 - 4]))))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2]))))));
                            }
                            /* LoopSeq 1 */
                            for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                            {
                                var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_19 [i_0 - 1] [i_1] [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1] [i_6]))));
                                var_19 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_6)), (arr_21 [i_0 - 1] [i_1] [i_1] [i_3] [i_6]))))))));
                                var_20 = (-((+(arr_11 [i_1] [i_3] [i_3 - 1] [i_3]))));
                                arr_26 [i_0] [i_0] [i_2] [i_3 - 3] = ((/* implicit */_Bool) (-(arr_24 [i_0 - 2] [i_0 - 2])));
                            }
                            var_21 -= ((/* implicit */_Bool) ((arr_0 [i_3 - 1]) / (((/* implicit */long long int) min((359208422U), (((/* implicit */unsigned int) (signed char)12)))))));
                        }
                    } 
                } 
                arr_27 [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_16 [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 1] [i_0 + 1]), (((/* implicit */long long int) (!(var_11)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) var_10);
    /* LoopSeq 1 */
    for (short i_7 = 2; i_7 < 19; i_7 += 1) 
    {
        var_23 |= ((/* implicit */long long int) 2147483644);
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) arr_11 [i_7] [i_7 - 2] [i_7 - 2] [i_7 - 2])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-15))))) || (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (short)24536))));
        arr_30 [i_7] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? ((((_Bool)1) ? (arr_0 [i_7 - 2]) : (((/* implicit */long long int) (-2147483647 - 1))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_7]))) : (arr_16 [i_7] [i_7] [i_7 - 1] [i_7] [i_7]))))), (arr_21 [i_7] [i_7 - 1] [i_7] [i_7] [i_7])));
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_28 [i_7] [i_7]) || (((/* implicit */_Bool) arr_3 [i_7] [i_7 - 2] [i_7])))) ? (max((var_4), (((/* implicit */long long int) arr_12 [i_7] [i_7 + 1] [i_7])))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_7])))))) ? (((/* implicit */int) arr_15 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) : (max((((/* implicit */int) (unsigned char)0)), (-2147483638)))));
    }
}
