/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31407
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) var_3)), (var_1)))))) ? (((((/* implicit */_Bool) min((1LL), (((/* implicit */long long int) var_9))))) ? (var_7) : (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned int) (unsigned short)51355))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)51355)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_0)) : (10691125576625244975ULL))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)247))))) > (var_7)))) / (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0])) : ((-(((/* implicit */int) (unsigned char)230))))))));
                var_12 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */int) (unsigned short)4))))) * (arr_0 [i_0]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) var_0)))), (((((/* implicit */_Bool) var_0)) || (var_4)))))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_13 = ((/* implicit */_Bool) ((((((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_9)) : (arr_3 [i_1] [i_2]))) + (2147483647))) >> (((/* implicit */int) ((arr_0 [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) ^ (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))));
                    var_14 = (!(((/* implicit */_Bool) ((short) ((unsigned long long int) (unsigned char)16)))));
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_9)), (max((arr_4 [i_2] [i_1]), (((/* implicit */unsigned short) (_Bool)1))))))) ? (max((((((/* implicit */int) (unsigned short)39198)) ^ (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_4 [i_2] [i_2])) ^ (((/* implicit */int) (unsigned short)1)))))) : (((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 2] [i_1] [i_0 - 2]))));
                }
                for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_4 = 1; i_4 < 12; i_4 += 4) 
                    {
                        arr_12 [i_4] [i_0] [i_1] [i_0] = arr_7 [i_0] [i_0] [i_3] [i_4];
                        var_16 = ((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1]);
                        var_17 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_8))))));
                    }
                    for (unsigned short i_5 = 1; i_5 < 14; i_5 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_10 [i_5] [i_5] [i_5 - 1] [i_5] [i_5 - 1])) & (var_0))) + (2147483647))) << (((((((/* implicit */int) (unsigned short)1)) << (((((/* implicit */int) (unsigned char)65)) - (61))))) - (16))))))));
                            var_19 = ((/* implicit */signed char) arr_5 [i_0] [i_0 - 1] [i_0]);
                        }
                        for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            var_20 ^= ((/* implicit */signed char) ((((/* implicit */int) max((arr_6 [i_0 - 1] [i_3] [i_0 - 1] [i_5 - 1]), (arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_5 - 1])))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)39)))))));
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_14 [i_7] [(signed char)3] [i_1] [i_0]))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            arr_26 [i_0] [i_1] [i_3] [i_5] [i_8] &= ((/* implicit */long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)124))) <= (var_7)))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((max((-6965291320553391882LL), (((/* implicit */long long int) (unsigned short)8)))) + (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)236)) << (((((/* implicit */int) arr_4 [i_5 - 1] [i_0 - 2])) - (22564)))))))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 2; i_9 < 14; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) > (((arr_15 [i_0] [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
                            var_24 = ((/* implicit */long long int) max((var_24), (((((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)1792)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)3))))))) + (((((/* implicit */long long int) ((/* implicit */int) max(((short)-31769), (((/* implicit */short) (_Bool)1)))))) | (var_1)))))));
                            arr_29 [i_9] [i_5] [i_9] [i_1] [i_9] = ((/* implicit */long long int) ((unsigned short) min((((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_5 + 1] [i_9])) == (((/* implicit */int) (unsigned short)61500))))), ((+(((/* implicit */int) (unsigned char)204)))))));
                            var_25 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (((+(arr_24 [i_3]))) != (((/* implicit */int) (!(((/* implicit */_Bool) 1340461271855575470ULL)))))))), (((((/* implicit */_Bool) 2251799813685232ULL)) ? (((/* implicit */int) arr_21 [i_9] [i_9] [i_5 + 2] [i_5] [i_5 + 1])) : (((/* implicit */int) arr_16 [i_5] [i_5] [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 + 1]))))));
                        }
                        for (unsigned char i_10 = 1; i_10 < 14; i_10 += 1) 
                        {
                            var_26 ^= ((/* implicit */signed char) 13391847803124515718ULL);
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)1), (((/* implicit */unsigned short) (signed char)-8)))))) / (var_1))))));
                        }
                        var_28 = ((/* implicit */int) (short)7459);
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        var_29 ^= (!(((/* implicit */_Bool) min((max((arr_5 [i_0] [i_1] [i_11]), ((unsigned short)4033))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 144115188075855872ULL)))))))));
                        var_30 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) min((0ULL), (((/* implicit */unsigned long long int) arr_16 [8LL] [i_0] [i_3] [i_0] [i_0 + 2] [i_0]))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_12 = 1; i_12 < 13; i_12 += 1) 
                    {
                        var_31 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 5471863987681629873ULL)))))));
                        arr_38 [i_1] [i_3] [(_Bool)1] [i_1] [i_0 + 1] = ((/* implicit */unsigned char) (+(arr_23 [i_12] [i_12] [i_12 + 1] [i_12] [i_12 + 3] [i_12 + 3])));
                        arr_39 [i_0] [i_1] [i_0] [i_12] [i_12] = ((/* implicit */int) ((unsigned long long int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0]));
                        var_32 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_23 [(_Bool)1] [5LL] [i_1] [i_1] [i_12 + 3] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_25 [i_0] [i_0] [i_1] [i_3] [i_0] [i_12 + 2] [i_0]))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (arr_3 [5LL] [i_1])))))));
                    }
                    arr_40 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(var_2)))) * (((/* implicit */int) (_Bool)0))));
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */unsigned char) var_5)), ((unsigned char)90)))), (((((/* implicit */int) arr_14 [i_3] [i_1] [i_1] [i_0])) / (arr_24 [i_0])))))) ? (min((((((/* implicit */int) (short)9235)) - (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_3])))), ((~(((/* implicit */int) var_3)))))) : (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_0] [i_3] [i_3]))) : (var_1))) < (((/* implicit */long long int) ((/* implicit */int) (signed char)124)))))))))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 4; i_13 < 12; i_13 += 3) 
                {
                    arr_44 [i_0] [i_1] [i_13] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) 2147483620)), (18446744073709551610ULL)));
                    var_34 = ((/* implicit */long long int) var_8);
                }
            }
        } 
    } 
}
