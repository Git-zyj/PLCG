/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2743
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) (unsigned char)8)) * (((/* implicit */int) max(((short)2458), (var_13)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] &= ((/* implicit */int) var_8);
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_5 [i_4 - 1]), (arr_5 [i_4 + 1])))) ? (max((0ULL), (((/* implicit */unsigned long long int) arr_5 [i_4 + 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_5 [i_4 + 1]))))));
                            }
                        } 
                    } 
                    var_14 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2] [(unsigned char)13]))))) ? (min((arr_5 [i_0]), (((/* implicit */long long int) (unsigned char)247)))) : (max((arr_7 [i_0] [i_0]), (arr_5 [i_0]))));
                    arr_14 [i_1] [i_1] [i_1] = ((/* implicit */int) 18446744073709551615ULL);
                    /* LoopSeq 4 */
                    for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 3; i_6 < 20; i_6 += 2) 
                        {
                            arr_21 [(_Bool)1] [i_5] [i_1] [(unsigned char)3] = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_10 [i_5] [i_5] [i_5 + 2] [i_5 + 1] [3U] [i_5] [i_2]), (arr_10 [i_5 + 2] [i_5 - 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1] [i_0])))) - (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [i_6 + 1] [i_6] [i_5 - 2] [i_2] [i_2] [i_2] [i_0])) : (((/* implicit */int) arr_10 [i_5 - 1] [(_Bool)1] [i_5 + 1] [i_5] [i_5] [i_5 + 2] [i_5]))))));
                            arr_22 [22LL] [i_1] [i_1] [0U] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))));
                            arr_23 [i_0] [i_6] [i_2] [i_5 - 2] [4] = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned char)6))))), (((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_9))))), (((/* implicit */unsigned long long int) ((long long int) (unsigned char)9)))));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((var_10), (((/* implicit */long long int) arr_9 [(signed char)21] [(signed char)21] [i_2] [i_5 + 2] [i_2] [i_5 + 2] [i_6 + 2]))))) - (((((/* implicit */_Bool) 1077965213)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [22ULL] [i_1] [i_2] [i_5])))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])), (var_8)))) : (((/* implicit */int) min((((((/* implicit */long long int) arr_15 [i_5 - 2] [i_0])) <= (arr_16 [i_0] [i_1] [i_2] [i_5] [i_6]))), (((var_4) < (((/* implicit */int) var_0)))))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            arr_28 [i_0] [i_0] [i_0] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned char)250);
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) max((((short) (unsigned char)255)), (((/* implicit */short) ((((/* implicit */_Bool) -760781162)) && (((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_5 - 1] [i_7] [i_0] [i_5 - 1] [i_2]))))))))));
                        }
                        arr_29 [4LL] [4LL] [i_2] [7ULL] [i_0] = ((((/* implicit */_Bool) min((min((var_1), (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)248)))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)248))))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_11 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 - 2])) : (((/* implicit */int) var_8)))));
                        var_17 = ((/* implicit */unsigned int) var_1);
                        arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((var_9) >= (((/* implicit */unsigned long long int) max((((/* implicit */int) var_0)), (min((var_11), (((/* implicit */int) (signed char)111)))))))));
                    }
                    /* vectorizable */
                    for (signed char i_8 = 1; i_8 < 22; i_8 += 3) /* same iter space */
                    {
                        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)1)) || ((_Bool)0)));
                        arr_33 [i_0] [i_1] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)5)) >> (((-1439353443) + (1439353449)))))) ? (((var_11) - (var_4))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_0])) >= (var_9))))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65511)) ? (2252342148522557927LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                    }
                    for (signed char i_9 = 1; i_9 < 22; i_9 += 3) /* same iter space */
                    {
                        arr_36 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned char)229))))))), (min((min((arr_18 [i_0] [i_2] [i_1] [i_1] [i_0]), (((/* implicit */long long int) (short)-29048)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_4)))))))));
                        arr_37 [i_1] [i_1] [i_2] [i_9 + 1] = ((/* implicit */short) ((unsigned long long int) (+(((((/* implicit */int) (signed char)46)) << (((var_10) - (8042267061159117947LL))))))));
                        arr_38 [i_0] [i_0] [i_0] [i_1] [21LL] [i_9] &= ((/* implicit */int) ((((((/* implicit */_Bool) min((arr_0 [i_2]), (((/* implicit */unsigned long long int) var_5))))) || (((/* implicit */_Bool) (((_Bool)1) ? (1726885517703462343LL) : (arr_16 [i_0] [i_1] [(signed char)21] [(signed char)21] [(signed char)2])))))) ? (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (16187408901787509205ULL))), (((/* implicit */unsigned long long int) min(((unsigned char)236), (((/* implicit */unsigned char) (signed char)-32))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_1] [i_1] [0U])) || (((/* implicit */_Bool) var_7))))), ((unsigned char)250)))))));
                    }
                    for (long long int i_10 = 4; i_10 < 19; i_10 += 3) 
                    {
                        arr_41 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) ((unsigned char) ((arr_31 [i_0] [i_0] [18] [18] [18] [i_10]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))))))) : (max((((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (unsigned char)22))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))))))));
                        arr_42 [i_0] [i_0] [i_10] [i_0] = (_Bool)0;
                        arr_43 [i_0] [i_1] [i_10] [i_10 + 3] = min((((/* implicit */long long int) (unsigned char)1)), (-8234224941335714138LL));
                        arr_44 [i_0] [i_10] [i_10] [i_10 + 1] = ((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_1)) : (var_9))))));
                        arr_45 [i_0] [i_10] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (var_3) : (var_1)))) ? (((/* implicit */int) ((-1726885517703462344LL) == (((/* implicit */long long int) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : ((-(var_4)))))), ((~(max((((/* implicit */long long int) arr_15 [i_1] [i_10])), (2252342148522557927LL)))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_11 = 0; i_11 < 17; i_11 += 1) 
    {
        arr_48 [(unsigned char)15] = ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_11] [i_11] [(unsigned char)15] [i_11] [(signed char)7])) > (1855215975)));
        var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_39 [(unsigned short)12] [i_11] [i_11] [i_11] [i_11] [(unsigned short)12]))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_11] [2U] [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */long long int) var_7)) : (((((/* implicit */long long int) arr_2 [i_11] [i_11] [i_11])) + (arr_8 [(_Bool)1] [(unsigned char)17] [i_11] [i_11])))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_12 = 3; i_12 < 20; i_12 += 1) 
    {
        arr_53 [i_12] [i_12] = (-(((((/* implicit */_Bool) max((-6640648048020025513LL), (var_1)))) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) var_5)))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) 4294967276U))));
    }
}
