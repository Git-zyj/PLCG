/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2145
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */long long int) (signed char)26);
        var_15 = ((/* implicit */signed char) ((arr_2 [i_0 + 1]) >= (((/* implicit */int) (short)-26794))));
    }
    for (signed char i_1 = 1; i_1 < 20; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_4 = 2; i_4 < 18; i_4 += 4) 
                {
                    var_16 = ((/* implicit */int) var_0);
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1] [i_1 + 1] [i_4 - 2])) ? (14410210714322957750ULL) : (((/* implicit */unsigned long long int) arr_14 [i_1] [i_1 + 1]))));
                }
                arr_15 [i_1] [i_2] [i_2] = ((/* implicit */signed char) 531284275U);
                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1 - 1])))))));
                arr_16 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (((/* implicit */unsigned int) var_3)) : (31424710U)))) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) ((((/* implicit */_Bool) (-(arr_10 [i_1] [i_2] [i_1])))) && (((/* implicit */_Bool) var_6)))))));
            }
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
            {
                arr_19 [i_1] [i_1] [i_5] = ((/* implicit */unsigned int) ((int) arr_18 [i_1 - 1] [i_2] [i_2] [i_1 + 1]));
                arr_20 [i_1] [i_1] [11U] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(signed char)15] [i_1]))) ^ ((~(31424710U)))));
                /* LoopSeq 2 */
                for (unsigned short i_6 = 3; i_6 < 19; i_6 += 1) 
                {
                    var_19 = ((/* implicit */unsigned int) arr_1 [i_1]);
                    var_20 = ((/* implicit */signed char) arr_12 [i_1] [i_1] [(signed char)7] [i_1]);
                    arr_23 [(signed char)17] [(signed char)17] [i_1] [(unsigned short)17] [i_1 - 1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_5] [i_1])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 1])))));
                }
                for (unsigned short i_7 = 1; i_7 < 18; i_7 += 2) 
                {
                    arr_28 [(signed char)1] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2199006478336LL)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (_Bool)1))));
                    var_21 = ((/* implicit */int) var_9);
                }
            }
            /* vectorizable */
            for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) /* same iter space */
            {
                var_22 = ((/* implicit */int) var_1);
                var_23 = ((/* implicit */unsigned char) ((unsigned short) arr_31 [i_1 + 1] [i_1 + 1]));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned int i_10 = 2; i_10 < 20; i_10 += 1) 
                    {
                        {
                            arr_40 [i_1] = ((/* implicit */int) ((arr_5 [i_1 - 1]) >= (arr_0 [i_1])));
                            arr_41 [i_1] = ((/* implicit */signed char) ((int) arr_33 [i_1] [i_1] [i_1 - 1] [i_1]));
                        }
                    } 
                } 
            }
            arr_42 [i_1] [17ULL] = ((/* implicit */signed char) ((((((/* implicit */int) arr_39 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2] [i_2])) >= (((/* implicit */int) arr_39 [i_2] [i_2] [(signed char)10] [i_1] [i_1 - 1])))) ? (((((/* implicit */int) arr_39 [i_2] [i_2] [i_2] [i_1] [i_1 - 1])) - (((/* implicit */int) var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-83)))))));
        }
        var_24 = ((((/* implicit */_Bool) -597277525)) ? (-673740613) : (((/* implicit */int) (short)22608)));
        arr_43 [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)-106)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_1] [i_1 + 1] [i_1] [i_1]))) : (((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) -2199006478336LL)))) ? (arr_10 [i_1] [i_1] [(signed char)20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
    }
    var_25 = ((/* implicit */signed char) min((((/* implicit */short) var_13)), (var_1)));
}
