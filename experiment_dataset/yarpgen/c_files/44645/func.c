/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44645
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (!(((arr_0 [i_0]) >= (arr_0 [i_0]))));
        var_15 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) - (var_3)))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (~((~(((/* implicit */int) arr_5 [i_1])))))))));
        arr_6 [i_1] [i_1] = (short)-16555;
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 14; i_2 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_9 [i_2 + 4] [i_2 + 4]))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                {
                    arr_15 [i_2] = ((((/* implicit */_Bool) var_8)) ? (arr_7 [i_2 + 1] [i_2 + 1]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)1))))));
                    /* LoopSeq 4 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) arr_7 [i_2] [i_2 + 2])) ? (3281475926016240518LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-16555))));
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            var_18 += ((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_2]))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)16554)) & (((/* implicit */int) arr_19 [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 1] [i_2 + 2]))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            arr_24 [i_2] = ((/* implicit */int) var_6);
                            arr_25 [i_7] [i_2] [i_2 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2])))) ^ (((/* implicit */int) arr_9 [i_3] [i_3]))));
                            var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
                        }
                        for (unsigned int i_8 = 3; i_8 < 15; i_8 += 3) 
                        {
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_20 [i_2] [i_3] [i_2] [i_2] [i_2])))))));
                            var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-16531)))));
                            var_23 = ((/* implicit */unsigned int) arr_20 [i_2] [i_3] [i_2] [i_5] [i_5]);
                            arr_28 [i_2] [i_2 - 2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) var_0);
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) /* same iter space */
                        {
                            arr_31 [i_9] [i_2] [i_2] = ((/* implicit */unsigned int) ((int) arr_8 [i_2]));
                            arr_32 [i_9] [i_2] [2] [2] [i_2] [i_2 - 1] = ((/* implicit */unsigned char) (~(arr_12 [i_4])));
                            arr_33 [i_2] [i_2] [i_2] [i_2 + 1] = ((/* implicit */short) 822522490U);
                        }
                        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
                        {
                            arr_36 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) var_11);
                            var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_4]))));
                            arr_37 [i_5] [i_5] [i_2] [8LL] [8LL] [8LL] [(_Bool)1] = ((/* implicit */unsigned char) arr_11 [i_2 + 4]);
                        }
                        arr_38 [i_2] = var_5;
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 18; i_11 += 1) 
                        {
                            arr_41 [i_2] [(unsigned char)5] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (-(var_1)));
                            var_25 = ((/* implicit */unsigned long long int) arr_8 [i_2]);
                        }
                    }
                    for (long long int i_12 = 1; i_12 < 17; i_12 += 3) 
                    {
                        arr_45 [i_2] [i_3] [i_3] [5ULL] [i_2] [i_2] = ((/* implicit */_Bool) (short)16554);
                        var_26 = ((/* implicit */signed char) var_5);
                    }
                    for (unsigned short i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
                    {
                        arr_49 [i_2 + 1] [4] [(signed char)8] [i_2 + 1] [i_3] |= ((/* implicit */unsigned short) (short)-16555);
                        var_27 = ((/* implicit */unsigned long long int) ((signed char) (~(arr_34 [i_2] [i_2] [i_2] [i_2] [i_2]))));
                        /* LoopSeq 3 */
                        for (signed char i_14 = 0; i_14 < 18; i_14 += 1) 
                        {
                            arr_53 [i_2] [17LL] [i_2] [(signed char)17] [5ULL] [i_2] = ((/* implicit */unsigned long long int) var_0);
                            var_28 -= ((/* implicit */short) (-(var_13)));
                            arr_54 [i_2] [i_3] [i_3] [i_4] [i_2] [i_3] = ((((/* implicit */int) var_0)) ^ (((/* implicit */int) (unsigned char)192)));
                        }
                        for (unsigned short i_15 = 0; i_15 < 18; i_15 += 2) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_2])) ^ (((/* implicit */int) arr_8 [i_2]))));
                            arr_57 [i_2] [i_2] [i_2] [i_2] [i_13] [i_15] = ((/* implicit */long long int) arr_51 [i_2] [i_2] [i_2] [i_4] [i_4] [i_15] [i_15]);
                            var_30 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_6))))));
                        }
                        for (unsigned short i_16 = 0; i_16 < 18; i_16 += 2) /* same iter space */
                        {
                            arr_61 [i_16] [i_2 - 2] [i_2] [i_2] [i_2 + 2] [i_2 + 2] [i_2 - 2] = ((/* implicit */signed char) arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_4]);
                            var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
                            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (~(((arr_7 [i_4] [i_3]) ^ (var_5))))))));
                        }
                        arr_62 [i_2] [i_2] [i_2] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) (short)16555)) % (((/* implicit */int) (short)-16555))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 18; i_17 += 2) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_60 [i_2 + 4] [i_2 + 4] [i_2 + 4] [i_2 + 4] [i_2 - 1] [i_2 - 2] [i_3])) ? (((/* implicit */unsigned long long int) 1919330873U)) : ((~(var_3)))));
                        var_34 = ((((int) var_12)) / (((/* implicit */int) arr_43 [i_2 + 4] [i_2] [i_2])));
                        arr_65 [i_2] [i_3] [i_3] [(_Bool)1] = (+(arr_22 [i_2] [i_2 + 3]));
                        arr_66 [i_3] [4ULL] [i_3] [i_17] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_55 [i_4] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 3] [i_17])) > (((/* implicit */int) arr_55 [i_17] [i_2 - 2] [i_4] [i_17] [i_17] [i_3]))));
                    }
                    arr_67 [i_2] = ((/* implicit */unsigned long long int) (signed char)-93);
                }
            } 
        } 
    }
    var_35 = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) (short)16526)), (((964450933U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-16555))))))), (((/* implicit */unsigned int) ((unsigned char) var_12)))));
}
