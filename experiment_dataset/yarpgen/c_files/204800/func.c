/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204800
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
    var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_2)) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_12 += ((/* implicit */unsigned long long int) ((2147483647) ^ (arr_1 [(unsigned char)10])));
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-2147483647) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) -796335760)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (int i_3 = 4; i_3 < 21; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_1] [i_2] &= ((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) == (arr_6 [i_0]))));
                        var_14 = ((/* implicit */unsigned short) -4598139435794450977LL);
                        arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((var_5) + (5408177697043763214LL)))))) ? (arr_12 [i_0] [i_3 - 1] [i_2] [i_2]) : (arr_4 [i_0] [i_0])));
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) + (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (int i_4 = 1; i_4 < 20; i_4 += 1) 
        {
            arr_17 [i_4] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((arr_10 [i_0] [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_4))))) << (((((((var_5) / (((/* implicit */long long int) var_6)))) + (2592408020LL))) - (6LL)))))) : (((/* implicit */unsigned char) ((((((arr_10 [i_0] [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_4))))) + (9223372036854775807LL))) << (((((((var_5) / (((/* implicit */long long int) var_6)))) + (2592408020LL))) - (6LL))))));
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_4 - 1] [i_4 + 3] [i_4 - 1] [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_4 + 2] [i_4 + 1]))));
        }
        for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            arr_20 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_5])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
            var_17 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-15765))))));
            /* LoopSeq 1 */
            for (short i_6 = 3; i_6 < 21; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    for (unsigned int i_8 = 3; i_8 < 19; i_8 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)3454)) * (((/* implicit */int) (unsigned short)34577)))) / (((/* implicit */int) (unsigned short)34608))));
                            var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_6] [i_7] [i_0])) ? (arr_8 [i_0] [i_5] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) ((signed char) ((short) var_3)));
                /* LoopSeq 3 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6 + 1] [i_6 + 2] [i_6 + 2] [i_9]))) : (((long long int) (unsigned char)148))));
                    var_22 -= ((/* implicit */short) (~(((/* implicit */int) var_8))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (((!((_Bool)1))) ? (((arr_18 [i_0] [i_5]) << (((var_2) - (2412850220U))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_5]))))))));
                        var_24 = ((/* implicit */unsigned char) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (short i_12 = 0; i_12 < 23; i_12 += 1) /* same iter space */
                    {
                        arr_37 [i_6 + 1] [i_6 + 1] [i_6] [i_6] [i_6 + 1] [i_0] [i_6] = (+(var_5));
                        arr_38 [i_12] [i_5] [i_6 - 1] [i_5] [i_0] &= ((/* implicit */signed char) 32767LL);
                        arr_39 [i_0] [i_5] [i_5] [i_5] [i_12] |= ((/* implicit */unsigned char) ((long long int) arr_19 [i_6 + 2] [i_6 + 1] [i_6 - 2]));
                        var_25 = ((/* implicit */int) ((((/* implicit */unsigned int) arr_19 [i_6] [i_6] [i_6 - 3])) < (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_6] [i_10])) ? (((/* implicit */unsigned int) -1127814671)) : (var_2)))));
                    }
                    for (short i_13 = 0; i_13 < 23; i_13 += 1) /* same iter space */
                    {
                        arr_42 [i_0] [i_5] [i_6] [i_10] [i_0] = ((/* implicit */short) (+(arr_29 [i_0] [i_5] [i_6 + 1] [i_6 - 2] [i_6 - 3])));
                        var_26 = ((/* implicit */long long int) max((var_26), (((((/* implicit */_Bool) (+(arr_6 [i_10])))) ? (arr_11 [i_6 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                    }
                    /* LoopSeq 2 */
                    for (int i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        var_27 = ((/* implicit */int) var_3);
                        var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)20937)) : (((/* implicit */int) arr_31 [i_5] [i_5] [i_5] [i_10]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_14] [i_10] [i_14] [i_14] [i_5] [i_0]))))) : (((/* implicit */int) ((_Bool) arr_9 [i_0] [i_5] [i_6] [i_14])))));
                        var_29 = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) (((-(arr_41 [i_0] [i_0] [i_5] [i_0] [i_6 + 2] [i_10] [i_14]))) - (arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned int) (((-(arr_41 [i_0] [i_0] [i_5] [i_0] [i_6 + 2] [i_10] [i_14]))) + (arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    }
                    for (short i_15 = 0; i_15 < 23; i_15 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_0] [i_10] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)142))) : (-1581775082488308412LL))))));
                        var_31 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_30 [i_0] [i_0] [i_6] [i_10] [i_15]))) - (((/* implicit */int) var_4))));
                        arr_51 [i_0] [i_5] [i_6] [i_0] [i_15] [i_15] [i_6 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_6 - 1] [i_6 + 1] [i_6 - 3])) ? (((/* implicit */long long int) arr_16 [i_6 - 2] [i_6 - 1] [i_6 - 1])) : (var_3)));
                        var_32 = ((/* implicit */long long int) (unsigned char)70);
                    }
                }
                for (unsigned short i_16 = 2; i_16 < 22; i_16 += 1) 
                {
                    arr_54 [i_0] [i_0] [i_6] [i_16] = ((/* implicit */long long int) arr_52 [i_0] [i_5] [i_6 - 2] [i_16]);
                    var_33 = ((/* implicit */short) ((arr_28 [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6] [i_6]) > (arr_28 [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6] [i_6 - 2])));
                    arr_55 [i_0] [i_5] [i_6] [i_16 - 2] = ((arr_49 [i_0] [i_6] [i_6 + 2] [i_0] [i_6] [i_6 - 3]) << ((((_Bool)1) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_5] [i_6 + 1] [i_6 + 1]))))));
                }
                var_34 = ((/* implicit */long long int) ((int) arr_43 [i_6 + 1] [i_5] [i_6 + 2] [i_5] [i_6]));
                var_35 = ((_Bool) ((unsigned char) var_6));
            }
        }
        for (unsigned char i_17 = 1; i_17 < 19; i_17 += 3) 
        {
            arr_58 [i_0] [i_17] = ((/* implicit */short) ((var_5) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_0] [i_17] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_7)))))));
            var_36 -= ((/* implicit */unsigned int) ((var_10) * (((/* implicit */unsigned long long int) arr_47 [i_17 + 1] [i_17 - 1] [i_17 + 1]))));
            /* LoopNest 3 */
            for (unsigned short i_18 = 0; i_18 < 23; i_18 += 1) 
            {
                for (short i_19 = 1; i_19 < 22; i_19 += 1) 
                {
                    for (int i_20 = 0; i_20 < 23; i_20 += 1) 
                    {
                        {
                            var_37 ^= ((/* implicit */short) arr_29 [(unsigned char)18] [i_17] [i_18] [i_19 + 1] [i_20]);
                            var_38 = ((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */int) arr_22 [i_19 + 1] [i_0])) : (((/* implicit */int) arr_22 [i_19 + 1] [i_0])));
                        }
                    } 
                } 
            } 
        }
    }
    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_8)), ((unsigned char)128)))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) >= (-1853348950)))))))) ? (((/* implicit */unsigned int) ((67108863) - (((/* implicit */int) var_9))))) : (((unsigned int) max((((/* implicit */unsigned int) var_0)), (var_2))))));
}
