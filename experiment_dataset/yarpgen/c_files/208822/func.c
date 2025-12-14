/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208822
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
    var_12 = ((/* implicit */long long int) max((var_12), (((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)32834))))) ? (((/* implicit */long long int) ((var_6) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))) : (((long long int) 1263446491)))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((~(9223372036854775807LL))) / (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)34)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_4] = ((/* implicit */short) (+(arr_1 [i_4 - 1])));
                            var_13 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))) + ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)32682))))));
                        }
                        for (long long int i_5 = 3; i_5 < 23; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (+(((((/* implicit */_Bool) -5482871862630069350LL)) ? (3556125268702017516LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                            var_15 = ((/* implicit */signed char) ((var_0) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_5 - 1] [i_3])))));
                        }
                        var_16 = ((/* implicit */unsigned long long int) (-(var_5)));
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-22050))) ^ (arr_15 [i_0] [(short)23] [i_1 + 3] [i_0 + 1] [i_3] [13LL]))))));
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_3))));
                        arr_16 [i_3] [i_3] [19] [i_3] [i_3] = ((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_1 - 2]);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
            {
                var_19 = ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_10)));
                var_20 = ((/* implicit */unsigned short) var_9);
            }
            for (long long int i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    var_21 += ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) << (((((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) - (26679)))));
                    /* LoopSeq 2 */
                    for (long long int i_9 = 2; i_9 < 21; i_9 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_2))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3556125268702017516LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)64547))))) ? (arr_8 [(_Bool)1] [(_Bool)1] [i_0 + 1] [i_1 - 1]) : (((/* implicit */int) var_4))));
                    }
                    for (long long int i_10 = 2; i_10 < 21; i_10 += 1) /* same iter space */
                    {
                        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_15 [i_7] [i_1 + 1] [i_7] [i_8] [i_1] [i_8]) : (-3556125268702017529LL)))) ? (((((/* implicit */int) (_Bool)0)) >> (((arr_20 [i_0] [i_1] [(_Bool)1] [6]) + (2743559633458985235LL))))) : (((/* implicit */int) (unsigned short)32702)));
                        arr_28 [(short)14] &= ((/* implicit */signed char) var_8);
                        arr_29 [i_0] [i_0] [i_1] [12] [12] [i_8] [i_10] = ((/* implicit */long long int) (+(arr_24 [i_8] [(short)0] [(short)0] [4ULL] [i_1 - 3])));
                    }
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (((+(3556125268702017512LL))) + (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8238799060671453892LL)) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_7] [i_8] [i_1 - 1] [(short)16])) : (-781278636)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [(unsigned char)13] [(signed char)5] [i_0 + 1])) ? (-1856383609) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_10)) ? (8817052406320036454ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_27 = ((/* implicit */unsigned char) arr_21 [i_0] [i_1] [i_7] [i_1]);
                    var_28 = ((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 + 2] [i_1 - 3] [i_1 - 3])) == (((/* implicit */int) var_9))));
                }
                for (long long int i_12 = 1; i_12 < 23; i_12 += 4) 
                {
                    var_29 = ((/* implicit */short) ((_Bool) var_10));
                    arr_36 [i_0] [i_1 - 1] [(unsigned short)12] [i_0] [(short)15] [(unsigned char)14] = ((/* implicit */int) ((((arr_20 [i_0] [i_0 - 1] [i_1 + 3] [i_1 + 3]) + (9223372036854775807LL))) << (((arr_24 [16] [16] [i_1 + 3] [i_1 + 3] [(unsigned char)22]) - (2194749726326074766ULL)))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_39 [i_0] [i_0] [(short)23] [(short)6] [i_13] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_2 [i_7] [i_7])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11)))));
                    var_30 = ((/* implicit */int) min((var_30), (((((/* implicit */_Bool) 1LL)) ? (((/* implicit */int) (short)-32762)) : (((/* implicit */int) (short)32767))))));
                }
                var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42781))) : (-5538963378962795781LL))))));
            }
        }
        var_32 += ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1]))))), (((((((((/* implicit */_Bool) 15ULL)) ? (arr_27 [0LL] [i_0] [i_0] [i_0 + 1] [i_0] [i_0]) : (((/* implicit */int) var_11)))) + (2147483647))) >> (((min((arr_15 [i_0] [i_0] [i_0] [i_0] [14] [14]), (((/* implicit */long long int) var_11)))) - (269LL)))))));
    }
    for (unsigned char i_14 = 4; i_14 < 17; i_14 += 1) 
    {
        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) min((((((/* implicit */_Bool) (short)29621)) ? (((((/* implicit */_Bool) (short)20618)) ? (((/* implicit */long long int) -2133171518)) : (-7220924320429405623LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)81))))), (((/* implicit */long long int) (signed char)-116)))))));
        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((unsigned long long int) arr_23 [18LL] [21] [i_14 - 4] [i_14 + 2] [i_14] [i_14 - 1])) >= (((/* implicit */unsigned long long int) min((arr_15 [i_14] [i_14] [i_14 + 3] [i_14] [i_14] [i_14 - 2]), (arr_15 [(short)4] [(short)4] [(short)4] [i_14] [i_14] [i_14 - 2])))))))));
        arr_42 [i_14] = (-(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_2 [i_14] [i_14 + 2]) : (((/* implicit */long long int) ((var_0) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))))));
    }
    var_35 = ((/* implicit */unsigned char) ((((var_2) >> ((((+(781278635))) - (781278613))))) > (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)6144)) : (((/* implicit */int) var_8)))))))));
    var_36 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)74)), ((short)-17781)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (max((143833713099145216ULL), (((/* implicit */unsigned long long int) var_10)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))))))))));
}
