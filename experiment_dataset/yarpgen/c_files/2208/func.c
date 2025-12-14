/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2208
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_19 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        var_20 -= ((/* implicit */int) ((_Bool) arr_0 [i_0 - 2]));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0 + 1] [i_1 - 1])) << (((((/* implicit */int) arr_4 [i_0 - 2] [i_1 + 3])) - (16283)))));
            var_22 = ((((/* implicit */_Bool) (+(0ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (arr_3 [i_0] [i_0 - 1]))) : (arr_3 [i_0] [10ULL]));
            var_23 = ((arr_2 [i_0 - 2]) << (((arr_1 [i_0 + 1]) - (15788432118199888345ULL))));
        }
        for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            arr_10 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [(unsigned char)5] [i_0])) + (((/* implicit */int) arr_5 [i_0] [i_2])))))));
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (((_Bool)1) ? (arr_9 [(_Bool)1] [i_0 - 1] [i_2]) : (2974403497U))))));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0]))))) ? (arr_1 [i_2]) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_0 + 1]))) : (var_12)))));
                var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [(unsigned char)9] [i_3])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) (unsigned char)241)) ? (var_13) : (1576154861U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_5 [(unsigned char)11] [13ULL])) == (((/* implicit */int) arr_14 [i_0] [(signed char)8] [i_3] [i_0]))))))));
            }
            var_27 = ((/* implicit */signed char) ((unsigned int) ((unsigned short) arr_0 [i_0])));
        }
        for (unsigned int i_4 = 1; i_4 < 13; i_4 += 1) 
        {
            var_28 += ((/* implicit */unsigned int) ((arr_1 [i_0]) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)42058)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4)))))));
            var_29 *= ((/* implicit */_Bool) arr_7 [i_0 + 1] [i_4 - 1]);
        }
    }
    for (unsigned short i_5 = 1; i_5 < 24; i_5 += 2) 
    {
        var_30 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (0)))) == (((((/* implicit */_Bool) ((arr_18 [i_5]) + (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (6430864880438764566ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5] [i_5])))))));
        var_31 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)49152)), (1304925291U)))) ? (((/* implicit */int) arr_20 [i_5 + 1] [i_5 + 1])) : ((-(((/* implicit */int) arr_20 [i_5] [(unsigned char)8])))))), (((/* implicit */int) (unsigned char)180))));
        /* LoopNest 3 */
        for (unsigned short i_6 = 1; i_6 < 23; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_28 [i_5] [(short)24] [(short)24] [7] [7] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) max((arr_21 [i_5] [i_5] [(unsigned char)12]), (((/* implicit */unsigned int) arr_23 [i_5] [i_6] [i_5]))))) ? (((((/* implicit */_Bool) arr_22 [i_5])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [(unsigned char)16]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))))));
                        var_32 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) >= (arr_26 [(unsigned short)17] [i_6] [i_6] [i_5] [i_7]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) ? (arr_18 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))))))) : (arr_21 [i_8] [i_7] [i_5 - 1])));
                        var_33 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(unsigned char)15] [(unsigned char)15] [i_6]))) / (min((((/* implicit */unsigned long long int) var_13)), (arr_27 [i_5] [i_7] [i_8]))))), (min((var_14), (((/* implicit */unsigned long long int) arr_22 [14]))))));
                        /* LoopSeq 4 */
                        for (int i_9 = 2; i_9 < 22; i_9 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned int) (unsigned char)160);
                            var_35 = (i_9 % 2 == 0) ? (((/* implicit */signed char) ((((((/* implicit */_Bool) (-(arr_32 [i_9] [i_9])))) ? (max((((/* implicit */int) arr_24 [(unsigned char)5] [i_9])), (var_17))) : (((/* implicit */int) arr_24 [i_5 + 1] [i_7])))) << (((((/* implicit */int) arr_30 [i_5] [i_6] [i_9] [i_8] [i_9] [i_9 + 2])) - (235)))))) : (((/* implicit */signed char) ((((((/* implicit */_Bool) (-(arr_32 [i_9] [i_9])))) ? (max((((/* implicit */int) arr_24 [(unsigned char)5] [i_9])), (var_17))) : (((/* implicit */int) arr_24 [i_5 + 1] [i_7])))) << (((((((((/* implicit */int) arr_30 [i_5] [i_6] [i_9] [i_8] [i_9] [i_9 + 2])) - (235))) + (246))) - (14))))));
                            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((2718812435U), (((/* implicit */unsigned int) (unsigned short)23469))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39))) : (((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5] [i_6 + 2])))))));
                        }
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1576154861U)))))) + (((min((arr_27 [i_7] [i_7] [i_7]), (((/* implicit */unsigned long long int) (unsigned char)160)))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))))));
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_22 [i_10 - 1]))))) == ((-(arr_32 [i_10] [i_5 - 1])))));
                        }
                        for (unsigned short i_11 = 1; i_11 < 23; i_11 += 1) 
                        {
                            var_39 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_11 + 2] [i_6 + 1])) ? (((0) ^ (13))) : (min((((/* implicit */int) (unsigned short)23505)), (-534801075)))));
                            var_40 -= ((/* implicit */signed char) ((int) ((_Bool) ((((/* implicit */_Bool) arr_20 [i_8] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4))) : (var_12)))));
                            var_41 = ((/* implicit */unsigned int) -6398819350200466167LL);
                            var_42 = ((/* implicit */short) (~(((/* implicit */int) var_9))));
                            var_43 = ((((/* implicit */_Bool) -716907502)) ? (max((2974403497U), (((/* implicit */unsigned int) 1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_33 [8ULL] [i_8]), (((/* implicit */int) (unsigned short)23504))))) || (((((/* implicit */_Bool) -1282538711762867634LL)) && (((/* implicit */_Bool) arr_18 [i_11])))))))));
                        }
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            var_44 *= max((20), (((/* implicit */int) arr_35 [i_5] [i_6] [i_7] [i_8] [i_12])));
                            var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned char) arr_22 [i_12]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_5] [(signed char)23] [i_8])) || (((/* implicit */_Bool) 6398819350200466165LL)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (var_13)))))) ? (((long long int) ((((/* implicit */_Bool) arr_33 [i_6 - 1] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_6] [22ULL] [i_12] [(unsigned char)5] [15] [i_6]))) : (arr_27 [i_7] [i_7] [i_5])))) : (((/* implicit */long long int) 1))));
                            var_46 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_29 [i_5] [i_5] [i_5] [i_5 + 1] [i_5])) == (((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5 - 1]))) * (((((/* implicit */_Bool) arr_25 [i_12 - 1])) ? (arr_26 [i_5] [i_12] [i_7] [i_8] [i_8]) : (var_8)))))));
                            var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_14) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_5] [i_12] [i_7] [i_8] [(unsigned char)3]))))))))) ? (max((((/* implicit */long long int) arr_22 [i_5 - 1])), (((((/* implicit */_Bool) arr_26 [18] [i_6 + 1] [i_7] [i_8] [i_12])) ? (arr_18 [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)107))))))) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_30 [i_12] [i_8] [i_12] [i_12] [i_5] [i_5])) : (((/* implicit */int) var_0)))))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_48 ^= var_15;
}
