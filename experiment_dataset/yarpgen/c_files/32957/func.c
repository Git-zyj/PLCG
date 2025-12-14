/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32957
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
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)8)))))))) | (min((min((var_0), (var_7))), (((var_5) * (((/* implicit */unsigned long long int) 321762334U))))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 3; i_2 < 19; i_2 += 2) /* same iter space */
                {
                    arr_10 [i_2] [i_1] [i_2 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) 3973204961U))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_0] [i_1]))))), (((((/* implicit */_Bool) arr_9 [i_0] [i_2 - 1] [i_2] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_2 [i_0 + 1]))))))));
                    arr_11 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */int) arr_5 [12ULL])) / (((/* implicit */int) (unsigned char)220)))) <= (((/* implicit */int) var_9))))) / (((((/* implicit */_Bool) (~(arr_0 [i_1] [i_2])))) ? (((((((/* implicit */int) arr_3 [i_2])) + (2147483647))) << (((/* implicit */int) arr_4 [5U])))) : (((/* implicit */int) (_Bool)1))))));
                }
                for (unsigned char i_3 = 3; i_3 < 19; i_3 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 18; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) ((int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_7))))), (2750605898963258924LL))));
                                var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) (~(var_3)))) || ((!(((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0])))))))));
                                var_15 -= ((/* implicit */unsigned short) var_6);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_0] [i_6])) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(signed char)17])) && (((/* implicit */_Bool) var_11)))))))) ? (min((((/* implicit */unsigned long long int) ((signed char) var_7))), (min((((/* implicit */unsigned long long int) var_4)), (arr_20 [5ULL]))))) : (((/* implicit */unsigned long long int) (((((~(4350268287780476256LL))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) var_11)) ? (var_5) : (arr_19 [i_6] [4] [i_1] [i_0] [i_0 - 3]))) - (15247111796084978840ULL)))))));
                        arr_22 [i_0 + 1] [i_0 + 1] [(signed char)12] [i_0] [i_3] = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) 3973204947U)))));
                        arr_23 [i_0 + 1] [4ULL] [(unsigned char)9] [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_3 - 3] [i_0]);
                    }
                    arr_24 [i_0] [i_1] [i_3] = ((/* implicit */long long int) 13841918140440592753ULL);
                }
                /* vectorizable */
                for (unsigned int i_7 = 1; i_7 < 18; i_7 += 2) 
                {
                    var_17 -= ((/* implicit */unsigned int) var_6);
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [15U] [i_0] [i_7 + 1] [15U])) ? (-384654708132062716LL) : (((/* implicit */long long int) arr_9 [(unsigned char)14] [i_1] [i_1] [i_1]))))) ? ((-(arr_21 [i_0] [i_0] [i_7 + 2] [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [16] [16])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_0]))))))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    for (unsigned int i_9 = 3; i_9 < 18; i_9 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) min((min((((/* implicit */long long int) max(((signed char)-97), (var_1)))), (-749578705408075746LL))), (((/* implicit */long long int) (+(arr_2 [i_8]))))));
                            /* LoopSeq 3 */
                            for (signed char i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_0 - 1])) * (((/* implicit */int) arr_13 [i_0 - 1] [i_0 - 3] [i_0 - 1] [i_0 - 2]))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_20 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_12 [i_0 - 2] [i_1] [i_8] [(unsigned char)9]))) < (749578705408075743LL)))) : (((/* implicit */int) ((arr_12 [i_0 - 2] [i_9 - 2] [i_8] [6]) >= (arr_12 [i_0 - 2] [i_9 - 2] [i_0 - 2] [i_9]))))));
                                var_21 = ((/* implicit */unsigned long long int) -749578705408075768LL);
                            }
                            for (signed char i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
                            {
                                var_22 = ((/* implicit */_Bool) var_9);
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_7 [i_0] [i_0])) || (((/* implicit */_Bool) arr_31 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0 - 2]))) : (7046990164483586491ULL))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(arr_28 [i_0] [i_1] [i_8] [i_9]))))))))))));
                                var_24 -= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -749578705408075768LL)) ? (((/* implicit */int) (unsigned short)14337)) : (((/* implicit */int) (signed char)126))))) < (((var_2) - (arr_20 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) % (11062747130227357277ULL)))))))) : (((((/* implicit */_Bool) (+(-7470193325440326487LL)))) ? ((~(7046990164483586501ULL))) : (((/* implicit */unsigned long long int) arr_31 [i_9 + 2] [i_1]))))));
                            }
                            for (signed char i_12 = 0; i_12 < 20; i_12 += 2) /* same iter space */
                            {
                                arr_40 [i_0 - 3] [i_1] [i_8] [i_12] [i_12] [i_0] [i_8] = ((/* implicit */long long int) var_7);
                                arr_41 [i_0 - 3] [i_1] [i_8] [i_9] = ((/* implicit */signed char) arr_8 [i_0 - 1] [i_0 + 1]);
                                var_25 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_32 [i_9 + 1])) ? (arr_1 [(signed char)11]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (var_5))))) << (((arr_16 [i_0 + 1] [i_1] [i_8] [(unsigned char)12]) - (2633140147U)))));
                            }
                            arr_42 [i_1] [i_9] |= ((/* implicit */unsigned long long int) ((((unsigned int) arr_36 [i_9 - 2] [i_1] [i_9] [i_9 + 1] [i_9])) << (((((long long int) arr_17 [i_9 - 2] [(_Bool)1] [i_9] [i_9])) - (897239367LL)))));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((2701697673864506536ULL), (((/* implicit */unsigned long long int) arr_28 [i_9] [i_8] [i_1] [i_0 - 3]))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_1))))) : (min((((/* implicit */long long int) arr_34 [0] [(unsigned short)4] [i_1] [12] [i_9] [i_9 + 2])), (arr_35 [i_0 - 3] [i_0 - 1] [i_0] [i_0]))))) * (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -749578705408075753LL)))))))))))));
                        }
                    } 
                } 
                var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_26 [(_Bool)1] [19ULL] [i_0 - 3] [i_1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_2) : (arr_20 [(signed char)10])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (var_7))) : (((/* implicit */unsigned long long int) (-(arr_9 [i_1] [i_1] [i_1] [i_1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))));
                var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2457913126465588692ULL))));
            }
        } 
    } 
    var_29 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) : (var_3))))));
    var_30 = ((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (signed char)-92)));
}
