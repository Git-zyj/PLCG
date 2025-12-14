/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246959
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((var_3) - (-4173402778236519263LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4696574509264279132ULL)))))) : (var_3)));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
        {
            arr_5 [i_0 + 3] [i_0 + 3] [i_1] &= ((/* implicit */signed char) arr_1 [i_0 - 1]);
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 2] [i_0 + 1])) < (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1]))));
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0])) ? (arr_2 [i_0 - 1] [i_0 - 1]) : (arr_2 [i_0 - 1] [i_0 - 1])));
            var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))))) || (((/* implicit */_Bool) arr_3 [i_0] [i_0]))));
        }
        for (short i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
        {
            arr_11 [i_0] = ((/* implicit */long long int) min((min((arr_2 [i_0 + 3] [i_0 + 1]), (arr_2 [i_0 - 1] [i_0 - 1]))), (((/* implicit */unsigned long long int) ((unsigned int) ((unsigned char) (short)-29346))))));
            arr_12 [i_0] = ((/* implicit */unsigned int) max(((+(arr_1 [i_0 + 3]))), (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_8 [i_2] [i_0] [i_0]))))))));
        }
        for (unsigned char i_3 = 3; i_3 < 9; i_3 += 4) 
        {
            var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((unsigned long long int) arr_10 [i_0 - 1] [i_3 + 1] [i_3 - 3])) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) 3526786360U)) : (-6794657128737501834LL)))))))));
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1747920250)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (4294967292U)));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    {
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (-(var_2))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_6 = 3; i_6 < 7; i_6 += 4) 
                        {
                            arr_24 [i_0] [i_0] = ((/* implicit */int) ((arr_17 [i_0] [i_3 - 2] [i_6 + 1]) >= (arr_17 [i_0] [i_3 - 2] [i_6 - 1])));
                            var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0 + 3] [i_0 + 3] [i_4]))));
                            var_16 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_23 [i_6 - 2] [i_3] [i_0] [i_5] [i_6 - 2] [i_6 + 1] [i_6 + 1]))));
                            var_17 *= ((/* implicit */unsigned int) arr_1 [i_3]);
                        }
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))), (arr_4 [i_0] [i_3] [i_3])));
            arr_25 [i_0] [i_3] = ((/* implicit */int) ((unsigned char) max((arr_4 [i_0 - 1] [i_0 + 3] [i_3 + 1]), (arr_4 [i_0 - 1] [i_0 + 3] [i_3 + 1]))));
        }
        arr_26 [i_0] = min((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -1296131061138073616LL)))))))), ((+(arr_3 [i_0 - 1] [i_0 + 1]))));
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            for (long long int i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                for (unsigned short i_9 = 1; i_9 < 7; i_9 += 2) 
                {
                    {
                        arr_34 [i_0] [i_7] [i_9 + 2] = min(((+(((((/* implicit */_Bool) (short)-29324)) ? (((/* implicit */unsigned long long int) arr_3 [i_8] [i_9 - 1])) : (0ULL))))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_15 [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)21949))) : (arr_29 [i_0] [i_7] [i_8]))))));
                        arr_35 [i_0] [i_0 + 3] [i_0] [i_8] [i_0 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_29 [i_0 - 1] [i_0] [i_0])))) ? (arr_2 [i_9 + 2] [i_0 + 2]) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_8 [i_0 + 2] [i_7] [i_9 + 3])), (arr_21 [i_0 + 3] [i_7] [i_8]))))));
                        arr_36 [i_8] [i_8] [i_8] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_9] [i_9] [i_9] [i_9] [i_9 - 1])) ? (arr_33 [i_9] [i_9] [i_9] [i_9] [i_9 - 1]) : ((-9223372036854775807LL - 1LL))))) || (((/* implicit */_Bool) ((unsigned short) arr_33 [i_9] [i_9 - 1] [i_9] [i_9 + 2] [i_9 - 1])))));
                        var_19 ^= ((/* implicit */short) var_3);
                    }
                } 
            } 
        } 
    }
}
