/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37488
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) > (var_9)))) == (((((/* implicit */int) var_6)) * (((/* implicit */int) var_16))))))), (var_17)));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (int i_4 = 4; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((min((((/* implicit */int) var_10)), (((((/* implicit */int) var_5)) & (((/* implicit */int) var_16)))))) != (((/* implicit */int) ((((var_3) / (((/* implicit */int) var_14)))) == (min((((/* implicit */int) var_10)), (var_15))))))));
                                arr_13 [i_0] [(unsigned short)1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((((/* implicit */int) var_18)) << (((/* implicit */int) var_10))))) + (((((/* implicit */long long int) ((/* implicit */int) var_16))) - (var_7))))) / (((/* implicit */long long int) var_13))));
                                var_20 *= ((/* implicit */short) min((((((/* implicit */int) ((var_7) != (((/* implicit */long long int) ((/* implicit */int) var_12)))))) * (((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_0)))))), (((((/* implicit */int) min((var_10), (var_16)))) | (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (var_12))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) & (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_8)))))))) == (((((((/* implicit */int) var_14)) + (((/* implicit */int) var_0)))) * (((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_8)))))))));
                    var_21 -= ((/* implicit */short) ((((/* implicit */int) (unsigned short)50545)) & (2071041342)));
                }
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) max((((/* implicit */short) var_0)), (var_18))))))), (((((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_14))))) | (((/* implicit */int) var_18)))))))));
                    arr_18 [i_1] [i_1] [14U] = ((/* implicit */long long int) ((min((((((/* implicit */int) (signed char)-50)) | (2071041342))), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_17))))))) <= (((((((((/* implicit */int) var_14)) + (2147483647))) >> (((((/* implicit */int) var_1)) - (17))))) + (var_3)))));
                    var_23 -= ((/* implicit */unsigned char) ((2311614590725502317ULL) % (((/* implicit */unsigned long long int) 17451448556060672LL))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 12; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            {
                                var_24 += ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) min((var_15), (((/* implicit */int) var_12))))))))) >= (((((/* implicit */long long int) ((/* implicit */int) var_12))) & (var_9)))));
                                var_25 &= ((/* implicit */unsigned int) ((((((((/* implicit */int) var_12)) - (((/* implicit */int) var_2)))) - (((((/* implicit */int) var_1)) - (var_15))))) == (((((/* implicit */int) var_10)) / (max((((/* implicit */int) var_8)), (var_3)))))));
                            }
                        } 
                    } 
                    var_26 *= ((1331946197U) * (((/* implicit */unsigned int) -2071041342)));
                }
                for (short i_8 = 3; i_8 < 14; i_8 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_9 = 1; i_9 < 15; i_9 += 4) 
                    {
                        arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((var_15) != (((((/* implicit */int) var_11)) & (((/* implicit */int) var_5))))));
                        arr_33 [(short)9] [(signed char)5] [(_Bool)1] [i_9] [i_1] [i_9] = ((/* implicit */unsigned short) var_1);
                        var_27 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) * (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_5)))))));
                    }
                    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) max((((((/* implicit */int) ((((/* implicit */unsigned int) 2071041342)) != (2221496074U)))) > (((/* implicit */int) var_18)))), (((((/* implicit */_Bool) max((2071041342), (1663192118)))) || ((_Bool)1))))))));
                    arr_34 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) < (var_13))))) >= (min((((/* implicit */long long int) var_10)), (var_9)))))), (((((((/* implicit */int) var_2)) * (((/* implicit */int) var_10)))) * (((/* implicit */int) var_14))))));
                    var_29 = ((/* implicit */unsigned int) ((max((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (var_13))), (((((/* implicit */int) var_10)) <= (((/* implicit */int) var_2)))))) || (((/* implicit */_Bool) ((((var_17) | (var_17))) | (min((((/* implicit */int) var_12)), (var_17))))))));
                    arr_35 [i_0] [(signed char)1] [i_8] [i_8 - 1] = ((((var_3) ^ (((/* implicit */int) var_12)))) + (((((/* implicit */int) var_5)) + (((/* implicit */int) var_5)))));
                }
            }
        } 
    } 
    var_30 ^= ((((((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_11)))) && (((((/* implicit */_Bool) (short)1158)) && (((/* implicit */_Bool) 3551691975764503589LL)))))) && (((/* implicit */_Bool) max((min((((/* implicit */unsigned short) var_14)), (var_8))), (min((((/* implicit */unsigned short) var_6)), (var_8)))))));
    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((var_7) & (((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_10)))))))))))));
    var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) * (((((/* implicit */int) var_2)) * (((/* implicit */int) ((((/* implicit */int) var_16)) < (var_17))))))));
}
