/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206601
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
    var_19 = var_5;
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 2; i_2 < 10; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_20 += ((/* implicit */short) arr_8 [i_0 - 4] [i_1] [i_2]);
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((((_Bool) (short)-32755)) ? (min((arr_1 [i_2]), (((/* implicit */long long int) arr_7 [i_1] [i_1] [i_2])))) : (arr_0 [i_0]))) >> (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_4 [i_0] [i_1] [i_0])))) < (((long long int) arr_8 [i_0 - 2] [i_1] [i_2 - 1]))))))))));
                    }
                    for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) arr_11 [i_0] [i_2 - 1] [i_2] [i_5])) : (((/* implicit */int) arr_11 [i_0] [i_2 - 2] [i_2] [i_5]))))))));
                            arr_14 [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((int) var_15))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) arr_3 [i_4] [i_5]))))))));
                        }
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) << ((((~(1691041912U))) - (2603925366U)))));
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((unsigned char) 2147483647));
                            var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)32704)) ? (-7669776086282631350LL) : (((/* implicit */long long int) 6U))));
                            var_26 *= ((/* implicit */_Bool) arr_17 [i_0] [i_0 - 4] [i_0 - 4]);
                            var_27 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2046)) ? (((/* implicit */long long int) 1344624891U)) : (((long long int) ((arr_1 [i_0]) >> (((((/* implicit */int) (unsigned short)128)) - (69))))))));
                            var_28 = (i_2 % 2 == zero) ? (((/* implicit */signed char) ((((((int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_8)) : (-1)))) + (2147483647))) >> (((max((arr_4 [i_0 - 4] [i_1] [i_2]), (((/* implicit */unsigned int) arr_13 [7] [i_1] [i_1] [i_1] [i_1])))) - (765027545U)))))) : (((/* implicit */signed char) ((((((int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_8)) : (-1)))) + (2147483647))) >> (((((max((arr_4 [i_0 - 4] [i_1] [i_2]), (((/* implicit */unsigned int) arr_13 [7] [i_1] [i_1] [i_1] [i_1])))) - (765027545U))) - (3481753297U))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            var_29 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2 + 1] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) min((arr_17 [i_0] [i_0] [i_0]), (((/* implicit */short) var_1))))) && (((/* implicit */_Bool) arr_18 [i_0]))))) : (((((/* implicit */_Bool) var_16)) ? (((int) 8874220144047149620LL)) : ((~(arr_12 [i_0])))))));
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((((/* implicit */_Bool) var_10)) ? (arr_2 [i_0 - 1]) : (((/* implicit */long long int) arr_12 [i_0])))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_0])) >= (((/* implicit */int) arr_5 [i_2] [i_2] [i_4])))))))))));
                            var_31 |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4]))) % (((((/* implicit */_Bool) (unsigned char)22)) ? (33554400U) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_7] [i_2]), (((/* implicit */short) (unsigned char)22))))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            var_32 = ((/* implicit */long long int) max((((int) arr_12 [i_2])), (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0]))));
                            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((unsigned char) ((int) arr_13 [i_2 - 2] [i_1] [i_1] [i_4] [i_1]))))));
                        }
                    }
                    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3555657717846195199LL)) ? (((/* implicit */unsigned int) 395692364)) : (3211387011U)))) ? (-1) : (((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [(_Bool)1])) ^ (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_2] [i_2]))))));
                    var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) var_9))));
                    arr_23 [i_0] [i_2] [i_0] = ((/* implicit */int) var_18);
                }
                for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    arr_27 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) -40770549)) >= (max((((/* implicit */long long int) (signed char)-1)), (((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0]))) / (arr_1 [i_9])))))));
                    var_36 ^= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_26 [i_0 + 1] [(unsigned char)4] [i_0 + 1] [i_0])) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((_Bool) arr_15 [i_9] [i_1] [i_1] [i_1] [i_0 - 1] [i_0] [i_0]))) : (((/* implicit */int) var_4)))));
                }
                /* vectorizable */
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    var_37 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(signed char)3] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [(signed char)6] [i_1]))) : (var_18)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_18 [i_10])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_10])))) : (((int) arr_17 [i_0] [i_0] [i_10])));
                    var_38 ^= ((/* implicit */signed char) var_0);
                }
                var_39 ^= ((/* implicit */unsigned int) 276323781);
                var_40 -= ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_1] [2])) > (((/* implicit */int) var_3))))), (((((/* implicit */int) arr_19 [i_0 + 1] [i_0] [i_0])) - (((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_1] [i_0]))))))) ? (((/* implicit */int) arr_18 [i_0])) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 559471137))))));
            }
        } 
    } 
    var_41 = ((/* implicit */_Bool) var_11);
}
