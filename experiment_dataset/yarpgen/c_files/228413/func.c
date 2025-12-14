/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228413
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
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) var_9))));
    var_15 *= ((/* implicit */unsigned short) var_12);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) var_2))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_16 -= ((/* implicit */signed char) ((var_4) != (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3]))) ^ (arr_7 [(unsigned char)1] [i_1] [(unsigned char)7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [8ULL]))) : (3571943793U)))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_11 [i_4] [i_3] [i_2] [i_1 + 2] [i_0] [i_0]))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_0 [i_1 - 1]))))) - (((((/* implicit */_Bool) arr_10 [i_1] [i_1 - 3] [i_3 + 1] [i_3 + 1] [i_4])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) : (min((((/* implicit */unsigned long long int) arr_6 [(_Bool)1] [i_1] [i_2] [(_Bool)1])), (var_10)))))));
                            var_18 = ((/* implicit */unsigned long long int) (+(((var_4) >> (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (var_4))) - (1829654777U)))))));
                        }
                        for (unsigned int i_5 = 3; i_5 < 11; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */_Bool) var_9);
                            var_20 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((unsigned char) arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1]))) | (((/* implicit */int) (signed char)45))))));
                            var_21 = ((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_2])), ((~(-7673701932458144429LL)))));
                        }
                        var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_1] [i_1 + 3] [i_1 - 3] [i_1 - 3]))))) * (((((/* implicit */_Bool) 1895749947U)) ? (143833713099145216ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                        var_23 = ((/* implicit */signed char) -1953484899);
                    }
                } 
            } 
        } 
    }
}
