/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25608
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
    var_16 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) max((((/* implicit */unsigned long long int) var_13)), (7829559802331307432ULL)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] [(unsigned char)17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_0]), (4095U)))) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (((/* implicit */int) arr_0 [8] [(signed char)20])) : (((/* implicit */int) ((_Bool) arr_1 [i_0 + 1])))));
        var_17 = ((/* implicit */int) ((signed char) 7829559802331307419ULL));
        var_18 += ((/* implicit */unsigned char) arr_1 [i_0 - 1]);
    }
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))));
    /* LoopSeq 2 */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */long long int) ((signed char) 7829559802331307447ULL));
        var_20 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [(signed char)9])) || (((/* implicit */_Bool) arr_3 [i_1])))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_1]))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [9]))))));
        var_21 = ((/* implicit */int) min((max((7829559802331307435ULL), (((/* implicit */unsigned long long int) arr_5 [i_1])))), (((/* implicit */unsigned long long int) arr_5 [i_1]))));
    }
    for (signed char i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                {
                    arr_17 [i_2] [(unsigned char)11] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_8 [i_2]), (((/* implicit */int) arr_15 [8] [i_3] [i_2]))))) ? (((/* implicit */int) arr_13 [(unsigned short)6] [i_3 + 1] [i_3] [i_2])) : ((~(((/* implicit */int) arr_13 [(_Bool)1] [i_4] [i_2] [i_2]))))))) ? (max((((((/* implicit */_Bool) 1757407566U)) ? (-406244585) : (((/* implicit */int) arr_14 [i_2] [4LL] [9U])))), (0))) : (((/* implicit */int) arr_9 [i_2]))));
                    var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_13 [i_3] [i_3 - 1] [i_3 - 1] [(_Bool)1]) ? (((((/* implicit */_Bool) var_2)) ? (10617184271378244165ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1792))))) : (((((/* implicit */_Bool) (short)2919)) ? (10617184271378244183ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27495)))))))) ? (((/* implicit */int) (unsigned short)7874)) : (((/* implicit */int) ((unsigned short) arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            {
                                arr_23 [i_2] = ((/* implicit */short) (+(min((arr_19 [5LL] [(unsigned char)13] [i_3 - 1] [i_5] [17ULL] [17ULL]), (((/* implicit */unsigned long long int) ((unsigned int) var_4)))))));
                                arr_24 [i_5] [i_2] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 10617184271378244188ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5]))) : (arr_10 [i_5] [i_5]))))));
                                arr_25 [(_Bool)0] [(_Bool)0] [i_4] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_3 + 1] [(short)11] [10ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3 + 1] [(unsigned char)2] [i_3 + 1]))) : (7829559802331307432ULL)));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned char) arr_11 [i_3 - 1] [i_3] [i_3 - 1])));
                    arr_26 [(signed char)1] [i_2] [2ULL] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 9223372036854775797LL))))));
                }
            } 
        } 
        arr_27 [i_2] = ((/* implicit */signed char) min(((~(((((/* implicit */_Bool) arr_7 [i_2])) ? (7829559802331307415ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))))))), ((~(((((/* implicit */_Bool) arr_14 [3U] [3U] [i_2])) ? (((/* implicit */unsigned long long int) arr_18 [i_2] [i_2])) : (arr_3 [i_2])))))));
    }
}
