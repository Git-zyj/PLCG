/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22246
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_2] [i_0] [i_0] [(_Bool)0] [i_0] = ((/* implicit */short) max((((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_3] [i_4])) ? (((/* implicit */long long int) arr_7 [(unsigned short)6] [i_1] [i_2] [i_3])) : (arr_0 [i_4])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)14470)))))));
                                var_20 += ((/* implicit */signed char) 124922929U);
                                var_21 = ((((/* implicit */_Bool) min((124922937U), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32754))) == (2084672218038125791ULL))))))) ? (((arr_7 [i_2 + 1] [i_2] [i_2 - 2] [i_2]) << (((arr_10 [i_1 + 1]) + (7848893807815377236LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)110))));
                                var_22 = ((/* implicit */_Bool) ((unsigned long long int) (~(arr_7 [i_0] [i_0] [1ULL] [i_0]))));
                                var_23 = max((((unsigned long long int) arr_4 [i_1 + 2] [i_2 - 2] [i_2 + 3])), (((((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_2 - 1] [i_2 + 3])) ^ (arr_2 [i_1 - 1] [i_2 + 4]))));
                            }
                        } 
                    } 
                    arr_14 [i_2] [20LL] = ((/* implicit */unsigned char) ((((/* implicit */int) (((+(arr_7 [i_0] [(short)8] [(signed char)7] [(short)8]))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2206724441U))))))) >> (((((((((/* implicit */_Bool) arr_10 [i_0])) ? (arr_3 [i_1] [i_2]) : (arr_3 [i_0] [i_0]))) - (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_0] [i_1] [i_0]) < (arr_7 [i_0] [i_0] [i_1] [i_0]))))))) + (4513699366331613353LL)))));
                    var_24 = ((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_0]);
                    var_25 = ((/* implicit */unsigned char) ((((arr_5 [i_1] [i_1] [2ULL]) >= ((~(arr_1 [i_0] [i_1 + 1]))))) ? (arr_12 [i_2]) : (((/* implicit */unsigned long long int) ((unsigned int) 2468720736U)))));
                    var_26 += ((/* implicit */unsigned int) arr_11 [i_2] [i_2] [i_2] [i_2] [i_2 + 3] [20ULL]);
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */int) ((long long int) ((unsigned short) var_13)));
    var_28 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)28))));
}
