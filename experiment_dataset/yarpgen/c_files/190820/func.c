/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190820
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 22; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) ((unsigned int) min((arr_8 [i_0] [i_1] [i_2] [i_2 - 2]), (arr_8 [i_0] [i_1] [i_2] [i_2 - 1]))));
                            var_17 = ((/* implicit */unsigned long long int) (-(min((((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) arr_11 [i_0 - 2] [i_1] [i_2 - 1] [i_2] [i_1] [i_1])) : (arr_5 [i_2] [i_1] [6]))), (arr_5 [i_3] [14ULL] [i_2 - 2])))));
                            var_18 = ((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_3]);
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_10 [i_0 - 3] [(unsigned short)20] [i_1] [i_2] [i_2] [i_3]))));
                            var_20 = ((min((((/* implicit */long long int) (unsigned char)0)), (((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_1] [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1023))) : (arr_0 [i_2]))))) << ((((+(((/* implicit */int) arr_6 [(signed char)13] [i_0 + 2] [i_0])))) + (24703))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) max((var_21), ((((!(((/* implicit */_Bool) arr_4 [i_0 + 1])))) ? (((arr_4 [i_0 - 4]) ^ (arr_4 [i_0 - 3]))) : ((-(arr_4 [i_0 + 1])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((var_11) && (((/* implicit */_Bool) var_12)))))))) ? (((var_15) ? (((/* implicit */int) ((0ULL) != (var_0)))) : (((/* implicit */int) (!(var_11)))))) : (((/* implicit */int) (unsigned short)13253))));
}
