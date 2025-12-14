/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212532
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((((/* implicit */int) arr_4 [(unsigned char)5] [i_0])) + (9335)))))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) ((unsigned short) var_3)))));
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
            var_16 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_1] [i_0])) != (((/* implicit */int) (unsigned short)50224))));
        }
        var_17 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) var_1)))));
        /* LoopSeq 4 */
        for (short i_2 = 2; i_2 < 8; i_2 += 2) 
        {
            var_18 = ((/* implicit */int) arr_1 [(signed char)0] [(short)5]);
            arr_8 [i_2 + 2] &= ((/* implicit */int) ((var_12) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 - 2] [(unsigned short)0] [(short)8])))));
            arr_9 [i_0] [i_2 - 2] [i_2 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)229)) ? (17907520129411467121ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))))))));
            arr_10 [1U] [2U] = ((((/* implicit */_Bool) (unsigned short)27263)) ? (((/* implicit */int) arr_0 [i_2 + 1])) : (((/* implicit */int) var_0)));
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)27247)))))));
        }
        for (short i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && ((!(var_1)))));
            arr_13 [i_3] [i_0] [i_0] = ((/* implicit */_Bool) var_11);
        }
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
        {
            var_21 = arr_7 [i_0] [8] [i_0];
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */int) arr_3 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_3 [i_4] [1ULL] [i_0]))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 4; i_7 < 8; i_7 += 2) 
                {
                    {
                        var_23 = ((/* implicit */long long int) ((_Bool) arr_18 [i_5] [i_5] [i_7 - 3] [i_6]));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) (_Bool)1)))));
                            var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_8]))));
                            arr_25 [i_5] [i_8] [i_7 + 1] [i_6] [(short)6] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) arr_20 [8] [i_7 + 2] [(_Bool)1] [8ULL])) * (((/* implicit */int) var_2))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)-49)))) && (((/* implicit */_Bool) arr_12 [i_7 + 2] [(short)2]))));
                            arr_28 [i_0] [i_0] [i_5] [(_Bool)1] [(_Bool)1] [(unsigned char)9] = ((/* implicit */_Bool) ((var_7) % (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
                            arr_29 [(unsigned short)8] [(_Bool)1] [6U] [(_Bool)0] [i_0] [i_9] |= ((/* implicit */int) (-(var_5)));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    for (signed char i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */short) ((arr_12 [(unsigned short)4] [3LL]) / ((~(arr_12 [(unsigned char)6] [i_5])))));
                            var_28 &= ((/* implicit */short) ((var_5) | (((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))))));
                        }
                    } 
                } 
            } 
            var_29 ^= ((/* implicit */long long int) (unsigned short)38289);
            /* LoopSeq 3 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)38300)) - (((/* implicit */int) (unsigned short)38312)))) * (((/* implicit */int) ((_Bool) arr_27 [i_5] [i_13] [i_5] [i_5] [i_5])))));
                var_31 = ((/* implicit */unsigned char) var_9);
                var_32 = ((((/* implicit */_Bool) arr_7 [i_0] [i_5] [i_13])) ? (((/* implicit */int) arr_7 [i_0] [i_5] [i_13])) : (((/* implicit */int) var_1)));
            }
            for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
            {
                var_33 = ((/* implicit */_Bool) (-(var_12)));
                arr_43 [i_5] [i_5] [(short)9] = ((/* implicit */unsigned int) arr_22 [(unsigned char)1] [i_5] [i_5] [i_0]);
                var_34 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-66))));
            }
            for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 4) /* same iter space */
            {
                arr_48 [i_5] [(short)2] [3U] [i_5] = ((/* implicit */short) 3003661775U);
                arr_49 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0])) ? (arr_16 [i_15]) : (arr_16 [i_15])));
                var_35 |= ((/* implicit */unsigned int) 130048);
                arr_50 [i_5] [i_5] [i_15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_10))))));
            }
            arr_51 [i_5] [(signed char)5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_31 [(_Bool)1] [i_5] [i_5])))) ? (((((/* implicit */int) var_11)) * (((/* implicit */int) arr_11 [i_0] [i_0] [(unsigned char)1])))) : (28672)));
        }
        var_36 = ((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0] [i_0])) ? ((((_Bool)0) ? (arr_23 [8] [i_0]) : (((/* implicit */unsigned int) arr_45 [(unsigned char)7] [i_0] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
        arr_52 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(130029)))) ? (((var_13) ^ (arr_36 [i_0] [i_0] [i_0] [i_0] [7U]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [2ULL] [6LL] [i_0] [2])))));
    }
    /* LoopNest 2 */
    for (unsigned char i_16 = 1; i_16 < 17; i_16 += 3) 
    {
        for (unsigned char i_17 = 0; i_17 < 18; i_17 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 4) 
                {
                    arr_60 [i_16 + 1] [i_17] [i_16] = ((/* implicit */signed char) var_10);
                    var_37 = ((/* implicit */signed char) arr_53 [(_Bool)1]);
                }
                var_38 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */int) (signed char)92)) : (-1367074327)))) || (((/* implicit */_Bool) arr_56 [i_16 - 1] [(unsigned char)17])));
            }
        } 
    } 
}
