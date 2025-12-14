/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52512
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
    var_15 = max((min((12564270298071151210ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) (unsigned char)114))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) && (((/* implicit */_Bool) max(((signed char)-102), (var_12))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_16 = ((unsigned short) (+(((/* implicit */int) arr_4 [i_0] [i_0]))));
                        arr_11 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1])) ? (((unsigned int) arr_3 [i_1] [i_1 + 2])) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_3 [i_1] [i_1 - 1]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            var_17 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65472)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) (unsigned char)121))))) - (min((12172951348799110155ULL), (0ULL))))) < (((unsigned long long int) (+(((/* implicit */int) (unsigned short)41081)))))));
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (int i_6 = 2; i_6 < 23; i_6 += 3) 
                {
                    {
                        arr_20 [i_0] [i_6] [(signed char)0] [i_5] [i_4] [i_0] = ((/* implicit */signed char) (-(15316322551055150152ULL)));
                        arr_21 [i_0] [i_4] [i_5] [i_6] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_0)))) ? (((int) arr_19 [(unsigned short)10] [i_4] [i_6 - 1] [i_6] [i_5])) : (((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_9 [7] [i_0] [i_6]))))));
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_6 - 1]), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)7)) <= (var_8))))))) ? (((max((-4643965792117574332LL), (4643965792117574334LL))) / (((/* implicit */long long int) ((2147483632) << (((2147483647) - (2147483647)))))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)9)) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)10)) == (((/* implicit */int) arr_0 [i_0]))))))))));
                        var_19 = ((/* implicit */unsigned char) (-(((long long int) arr_10 [i_0]))));
                        /* LoopSeq 4 */
                        for (int i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(arr_8 [10ULL] [19ULL] [i_5] [i_5] [i_7]))), (((/* implicit */long long int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 137438887936ULL)))) : (var_11))))));
                            var_21 = ((/* implicit */int) ((long long int) 12172951348799110179ULL));
                            arr_26 [i_0] [(signed char)6] [(unsigned short)16] [i_6 - 2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_5)) : (((int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_23 [i_0] [i_4] [i_4] [i_4] [i_7])) : (((/* implicit */int) arr_19 [i_7] [i_6 - 2] [(signed char)18] [i_4] [i_0])))))));
                        }
                        for (int i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
                        {
                            arr_31 [i_0] [i_0] [i_0] [i_6] [i_6] [i_8] = max((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_4]))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))))));
                            arr_32 [i_0] [18] [i_5] [18] [i_8] = ((var_1) << (((((/* implicit */int) arr_10 [i_0])) - (49))));
                            var_22 = ((/* implicit */unsigned int) (~((~(arr_7 [i_6 + 1] [i_6 + 1] [i_5] [i_5] [i_5])))));
                            arr_33 [i_0] [i_4] [8U] [(unsigned char)11] [i_6] [i_0] = ((/* implicit */signed char) ((int) (signed char)-38));
                        }
                        for (int i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) max((arr_36 [i_4] [i_6 - 2] [i_4] [i_6 + 1] [i_6 - 2]), (((/* implicit */unsigned long long int) (signed char)-78))));
                            arr_38 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (((~(((/* implicit */int) var_9)))) < (((/* implicit */int) arr_29 [i_6] [i_6 - 2] [i_6] [i_6 - 1])))))));
                        }
                        for (int i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            arr_41 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_3 [i_6 - 2] [i_4]), (((/* implicit */long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_40 [i_0] [i_4] [i_0] [23] [i_5] [i_6] [i_10])))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_4] [i_5] [i_0] [i_10]))) : (var_11)));
                            arr_42 [i_10] [i_0] [i_0] [i_0] [i_0] = min((((arr_8 [4LL] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)3))))), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) (short)-7720))))))));
                            var_24 = ((/* implicit */unsigned long long int) var_13);
                            var_25 = ((/* implicit */signed char) 35465847065542656LL);
                        }
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_6)) ? ((-(var_8))) : (((/* implicit */int) arr_37 [(signed char)3] [i_0]))))));
    }
}
