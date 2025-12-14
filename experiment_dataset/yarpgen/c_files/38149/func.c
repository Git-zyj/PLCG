/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38149
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
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_0))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 13; i_2 += 4) /* same iter space */
                {
                    var_15 = ((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (arr_2 [i_2 + 1] [i_1 - 1] [i_1 + 2]))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((unsigned int) -1031140311)) ^ (((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned short)55702)) & (((/* implicit */int) var_9)))), ((~(var_11)))))))))));
                        var_17 = ((/* implicit */signed char) (~(((min((-1657849340), (((/* implicit */int) var_10)))) % (((/* implicit */int) var_9))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) ((unsigned long long int) ((arr_10 [i_4 + 1] [i_4 - 1] [i_2 + 1] [i_0] [i_1 - 1] [i_0]) / (arr_10 [i_4 + 1] [i_4 - 1] [i_2 + 1] [i_1] [i_1 - 1] [i_1]))));
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((min((((/* implicit */long long int) (short)-24027)), (max((((/* implicit */long long int) arr_11 [i_0])), (arr_4 [i_0] [i_1] [i_2]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(6541690303151268682ULL)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2] [i_2])))))))))))));
                        }
                        for (short i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned int) (short)24034);
                            arr_14 [i_0] [i_1] [i_2] [i_0] [i_5] &= ((/* implicit */short) arr_7 [i_0]);
                            var_21 += ((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_5]);
                        }
                    }
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)9833)) ? (max((arr_4 [i_1 + 1] [i_1] [i_2]), (arr_4 [i_1 + 1] [i_1] [i_2]))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)139))) * (arr_0 [i_1 - 1] [i_1]))))));
                        arr_17 [i_1] = min((((arr_4 [i_1 + 1] [i_1 + 1] [i_2 + 1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))))), (((/* implicit */long long int) (_Bool)1)));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 1] [i_1] [i_1 + 2]))) >= (arr_10 [i_1 - 1] [i_1] [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 1]))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned char) 8783834708299676607ULL);
                            var_25 *= ((/* implicit */unsigned short) (-(var_0)));
                            arr_23 [i_8] [i_1] [i_8] [i_7] [i_1] |= ((/* implicit */_Bool) 1186695331U);
                            arr_24 [i_1] [i_8] [i_7] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) var_11);
                        }
                        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)55702))));
                            arr_27 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) arr_6 [i_7] [i_0] [i_0]));
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_13 [i_1 + 1] [i_1 - 1])))))));
                        }
                        for (int i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_1 + 1] [i_0] [i_1]))));
                            arr_30 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned short)9833)) ? (arr_22 [i_1 + 1] [i_1 - 1]) : (arr_22 [i_1 + 2] [i_1 - 1]));
                            var_29 = ((((/* implicit */_Bool) 1186695331U)) ? (-7) : (((/* implicit */int) (_Bool)1)));
                            var_30 |= ((/* implicit */int) (+(arr_13 [i_1 - 1] [i_2])));
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 2) 
                        {
                            var_31 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_7] [i_1 - 1] [i_1 + 1])) || (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_7] [i_7] [i_1]))));
                            var_32 = ((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 1])) << (((/* implicit */int) arr_31 [i_0] [i_1 + 2] [i_2 + 1] [i_2 - 1] [i_11 + 1]))));
                        }
                        var_33 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) (unsigned short)53392)))));
                        arr_33 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) arr_8 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
                    }
                }
                /* vectorizable */
                for (unsigned short i_12 = 1; i_12 < 13; i_12 += 4) /* same iter space */
                {
                    var_34 *= ((arr_9 [i_1] [i_0] [i_0] [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4114))));
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 3; i_13 < 11; i_13 += 1) 
                    {
                        for (long long int i_14 = 0; i_14 < 14; i_14 += 4) 
                        {
                            {
                                var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_13 - 3] [i_13 - 3] [i_13 + 2] [i_13] [i_13 + 2] [i_13]))));
                                var_36 *= ((/* implicit */signed char) 67108848);
                            }
                        } 
                    } 
                }
                arr_40 [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) 4064)) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) (+(4283762362U)))))));
                arr_41 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-5918)), ((~(((/* implicit */int) (unsigned char)2))))));
            }
        } 
    } 
}
