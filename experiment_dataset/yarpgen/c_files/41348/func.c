/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41348
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 3; i_4 < 16; i_4 += 2) /* same iter space */
                        {
                            var_15 |= ((/* implicit */unsigned short) ((int) ((unsigned short) min((((/* implicit */unsigned long long int) -3623093299969756479LL)), (15005058482032887675ULL)))));
                            var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)1))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((long long int) arr_12 [i_4] [i_3 - 2] [i_2] [i_0] [i_0])))));
                            var_18 |= ((/* implicit */short) ((3623093299969756483LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)33)))));
                        }
                        for (unsigned int i_5 = 3; i_5 < 16; i_5 += 2) /* same iter space */
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_3 - 2] [i_5 + 1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [(short)1] [i_2])))))))) && (((/* implicit */_Bool) -3623093299969756479LL))));
                            var_20 = ((/* implicit */signed char) ((max(((~(arr_1 [i_2] [i_2]))), (((/* implicit */long long int) arr_14 [i_5] [i_1] [i_2] [i_2] [i_1] [i_0] [i_0])))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4539628424389459968ULL))))))));
                            var_21 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) (_Bool)0)), (13337514422564959165ULL))), (((/* implicit */unsigned long long int) var_1))));
                        }
                        var_22 = ((/* implicit */unsigned long long int) (short)-4903);
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */short) ((1088689581611747529LL) >> (((((/* implicit */int) arr_18 [i_1 + 1] [i_3 - 2] [4U] [i_3 - 2] [i_3 - 2])) - (45398)))));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_0))));
                            var_25 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_6] [i_6] [i_6])) || (((/* implicit */_Bool) var_2))));
                        }
                        for (unsigned short i_7 = 2; i_7 < 16; i_7 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) arr_9 [i_7 - 1] [i_7 - 2] [i_7] [i_7 + 1])), (1088689581611747513LL))), (((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_2] [16ULL] [i_0])), (7092178853923942130ULL))) <= (((/* implicit */unsigned long long int) ((arr_0 [i_1] [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [4LL] [i_7])))))))))));
                            var_27 = max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [i_7 - 1] [i_1] [i_2] [i_7 - 1] [i_7 - 1] [4]))))), ((~(min((arr_1 [i_0] [i_3]), (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_2] [i_3] [i_7 - 2])))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_8 = 2; i_8 < 16; i_8 += 1) /* same iter space */
                    {
                        var_28 = ((arr_12 [i_1 - 2] [i_1 - 3] [i_1 - 2] [i_1 + 1] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1 + 2] [8LL] [i_1 + 1] [i_1] [i_1]))));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_29 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_1] [i_1 + 1] [i_1 + 2] [i_1 - 2])) && (((/* implicit */_Bool) arr_10 [i_9] [i_8 + 1] [i_0] [i_1 + 1] [i_0] [i_0] [i_0]))));
                            var_30 -= ((/* implicit */unsigned short) (-(var_8)));
                            var_31 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_17 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_2] [i_2] [i_1 + 1] [i_1 + 1]))));
                            var_32 = ((/* implicit */signed char) (unsigned short)5155);
                            var_33 ^= ((/* implicit */unsigned char) ((int) 3428078115U));
                        }
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        var_34 |= ((/* implicit */short) ((((/* implicit */_Bool) (short)-23037)) || (((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1 - 2] [i_1 + 2] [i_10]))));
                        var_35 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0]);
                    }
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_12 = 0; i_12 < 17; i_12 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) arr_25 [i_0] [i_0]))));
                            var_37 = ((/* implicit */unsigned short) ((unsigned char) arr_0 [i_1 - 1] [i_1 - 3]));
                            var_38 = ((/* implicit */unsigned long long int) arr_28 [i_12] [(short)5] [i_2]);
                        }
                        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((-8216808829699514747LL), (((/* implicit */long long int) arr_14 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 - 3] [i_1 - 1] [i_1 + 1]))))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_13 = 0; i_13 < 17; i_13 += 2) 
                        {
                            var_40 = ((/* implicit */unsigned short) var_2);
                            var_41 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_13] [i_11] [(unsigned char)9] [(unsigned char)9])) && (((/* implicit */_Bool) arr_24 [i_1] [i_11] [i_2] [i_1] [i_0]))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_1 - 2] [i_2] [i_2] [(unsigned short)6]))) | (5109229651144592450ULL))), (min((((/* implicit */unsigned long long int) arr_23 [i_0] [(unsigned short)5] [i_0] [i_0] [i_0])), (var_13)))))));
                            var_42 = ((/* implicit */unsigned char) max((((unsigned long long int) arr_15 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_5 [i_2] [i_1 + 1] [(unsigned short)7])), (arr_0 [i_1 + 1] [i_1 - 2]))))));
                        }
                        for (signed char i_14 = 0; i_14 < 17; i_14 += 1) 
                        {
                            var_43 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (short)28023))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (1746524383U)))))))));
                            var_44 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_30 [i_1]))) / (((/* implicit */int) (signed char)104))));
                        }
                        for (unsigned short i_15 = 0; i_15 < 17; i_15 += 3) 
                        {
                            var_45 |= ((/* implicit */unsigned long long int) ((max((arr_37 [i_1 + 1] [i_0] [i_1] [i_0] [i_0]), (((/* implicit */int) arr_28 [i_1 - 2] [i_1 - 3] [i_1 - 2])))) % (arr_37 [i_1 - 3] [i_1 + 1] [i_1 + 2] [i_1] [i_0])));
                            var_46 = ((/* implicit */signed char) arr_9 [i_15] [i_2] [i_1 + 2] [i_0]);
                            var_47 ^= ((/* implicit */signed char) arr_35 [i_0] [i_0] [i_2] [i_11] [i_15] [i_1 - 3] [(short)3]);
                            var_48 = ((/* implicit */short) ((3141348317506569394ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((((unsigned char) 6596864370327153647ULL)), (((/* implicit */unsigned char) arr_7 [i_15] [i_2] [i_1] [i_0]))))))));
                        }
                    }
                    for (signed char i_16 = 0; i_16 < 17; i_16 += 3) 
                    {
                        var_49 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_24 [i_1 + 1] [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_1 - 2])))) && (((/* implicit */_Bool) arr_24 [i_1 - 1] [i_1 - 2] [i_1 + 2] [i_1 - 1] [i_1 + 1]))));
                        /* LoopSeq 1 */
                        for (signed char i_17 = 0; i_17 < 17; i_17 += 2) 
                        {
                            var_50 ^= arr_0 [i_0] [(_Bool)1];
                            var_51 = ((/* implicit */long long int) var_4);
                            var_52 = ((/* implicit */short) ((unsigned short) (!((!(((/* implicit */_Bool) -2147483634)))))));
                        }
                        var_53 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_7 [i_0] [i_0] [i_0] [i_0]), (arr_7 [8ULL] [i_2] [i_1 + 1] [8ULL]))))));
                    }
                }
            } 
        } 
    } 
    var_54 = 1097364144128LL;
    var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_7))))), (min((((/* implicit */long long int) (signed char)-125)), (var_9))))))));
}
