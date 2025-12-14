/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205318
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
    var_11 = ((/* implicit */unsigned int) (unsigned short)51381);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (~(19U)));
        arr_4 [(short)6] = ((/* implicit */unsigned short) var_0);
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                {
                    var_12 *= ((/* implicit */unsigned long long int) var_10);
                    var_13 ^= ((/* implicit */unsigned int) ((((long long int) arr_9 [i_1] [i_2] [i_1])) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) max(((short)7813), (((/* implicit */short) arr_13 [(signed char)2] [i_2] [i_2] [i_2])))))))));
                    arr_16 [4U] [i_1] &= ((/* implicit */long long int) arr_0 [i_2]);
                }
            } 
        } 
        arr_17 [(signed char)17] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_15 [i_1])) ? (((((/* implicit */int) (short)7813)) >> (((arr_2 [i_1] [i_1]) + (2722753675412480097LL))))) : (((/* implicit */int) arr_10 [i_1] [i_1])))) + (((/* implicit */int) ((((/* implicit */int) (short)-7814)) == (((/* implicit */int) var_10)))))));
        var_14 ^= ((/* implicit */unsigned int) min((((((/* implicit */int) arr_5 [i_1])) / (((/* implicit */int) arr_5 [(short)11])))), (((((/* implicit */_Bool) arr_5 [(unsigned short)11])) ? (((/* implicit */int) (short)14659)) : (((/* implicit */int) (signed char)-8))))));
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (unsigned char i_5 = 1; i_5 < 23; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((unsigned int) arr_24 [i_5 + 1] [i_5 - 1] [i_5] [i_7] [(signed char)20])) == (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_6]))))))));
                            var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_10 [i_1] [i_6])) - (((/* implicit */int) var_7)))), (((/* implicit */int) arr_13 [i_4] [i_4] [i_6] [i_7]))))), ((-(arr_18 [i_4] [i_4] [i_4])))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 2; i_8 < 20; i_8 += 1) 
                        {
                            arr_29 [i_1] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7814)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (signed char)-2))))), (((arr_19 [i_4] [i_5 - 1] [i_8 + 2]) ^ (arr_19 [i_4] [i_5 + 1] [i_8 + 4])))));
                            var_17 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_27 [i_8 - 2] [i_1] [i_5] [i_1] [i_1]))))));
                        }
                        var_18 |= ((/* implicit */unsigned int) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_1] [i_5] [i_5] [i_5] [i_5]))) + (var_5))), (((/* implicit */unsigned long long int) arr_10 [i_5 + 1] [i_5 + 1])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_1] [i_1] [i_4] [i_6] [i_4] [i_6])))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)26))))) + (arr_2 [i_1] [i_1])));
    }
}
