/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205535
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */_Bool) arr_1 [i_1]);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) arr_1 [i_0]))));
                            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48095))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)54))))))))), (((13U) - ((+(var_4))))))))));
                            var_14 -= ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) var_5))))));
                            var_15 = (-(min((((2118417110) / (((/* implicit */int) var_8)))), (((/* implicit */int) ((signed char) 7329422688449896962ULL))))));
                        }
                    } 
                } 
                var_16 ^= ((/* implicit */int) arr_4 [i_0] [i_1]);
                var_17 = ((/* implicit */signed char) var_1);
                var_18 = ((/* implicit */_Bool) ((unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) (unsigned short)31025)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_2);
    var_20 = ((/* implicit */long long int) var_0);
    var_21 = ((/* implicit */int) max((((/* implicit */long long int) var_6)), (var_3)));
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        for (long long int i_5 = 1; i_5 < 15; i_5 += 1) 
        {
            {
                var_22 = ((/* implicit */signed char) (-(13U)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_6 = 3; i_6 < 16; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 17; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_1))));
                                var_24 = ((/* implicit */unsigned short) arr_18 [i_4] [i_6 - 1] [i_6 - 1] [i_7 + 2] [i_8 - 1]);
                            }
                        } 
                    } 
                    var_25 &= ((/* implicit */int) -360645539428605553LL);
                    arr_21 [i_4] [i_4] [i_6] [i_4] = ((/* implicit */short) arr_18 [i_5 + 2] [i_5 + 1] [i_6 - 3] [14U] [i_6]);
                }
            }
        } 
    } 
}
