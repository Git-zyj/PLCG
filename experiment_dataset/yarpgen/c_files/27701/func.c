/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27701
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_13 *= ((/* implicit */unsigned int) var_1);
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 1])) ? (min((var_2), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-2))))))) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))))));
            var_15 = ((/* implicit */unsigned int) arr_4 [i_1] [i_0]);
            var_16 -= ((/* implicit */unsigned long long int) var_1);
            var_17 -= ((var_1) ? (arr_4 [i_0] [i_0]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_3)) : (-9223372036854775807LL)))) ? (((/* implicit */unsigned long long int) ((long long int) arr_4 [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_1 [i_0] [4])) ? (var_12) : (var_12))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_0] [4] = ((/* implicit */long long int) arr_4 [i_2] [i_0]);
            var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 800621052917688952LL)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (arr_0 [i_2]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (6ULL))))), (((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_2])))));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) ((unsigned long long int) var_6));
                        arr_17 [i_3] [i_2] [(signed char)15] = ((/* implicit */_Bool) 4482909184003051782LL);
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((_Bool)0), (var_4)))) * (((/* implicit */int) arr_10 [i_0] [i_2] [i_3] [i_3]))));
                        arr_18 [17LL] [i_3] = ((/* implicit */unsigned short) (short)2);
                        var_20 &= ((/* implicit */long long int) var_4);
                    }
                } 
            } 
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */short) (~(((/* implicit */int) var_1))));
            var_22 = ((/* implicit */unsigned int) ((((_Bool) (signed char)-110)) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((min((var_1), (var_4))) ? ((-(arr_3 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) || (((/* implicit */_Bool) arr_6 [(short)5] [i_0] [i_5])))))))))));
        }
        arr_21 [9U] [i_0] = ((/* implicit */short) (!(((_Bool) var_9))));
    }
    var_23 = ((/* implicit */_Bool) var_11);
}
