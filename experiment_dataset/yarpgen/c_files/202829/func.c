/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202829
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
    var_13 = ((/* implicit */short) min(((unsigned char)99), (((/* implicit */unsigned char) var_8))));
    var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) 5911519588331965727ULL))))), (min((var_11), (((/* implicit */short) var_6)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 4; i_2 < 9; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) ((((unsigned int) min((((/* implicit */unsigned short) (unsigned char)111)), (arr_10 [1LL] [i_0] [1LL] [i_1] [i_0])))) > (((/* implicit */unsigned int) ((/* implicit */int) (short)32757)))));
                                var_16 = ((/* implicit */short) arr_0 [(short)0]);
                                var_17 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)44))))) ? (((/* implicit */unsigned long long int) arr_4 [i_2])) : ((-(7424472433420172866ULL)))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1 - 1] [i_0] [i_0] [i_0] [i_0]))));
                var_19 = min((((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned char) var_8))))) ? (min((((/* implicit */unsigned int) (signed char)127)), (arr_9 [i_0] [i_0] [i_0] [(short)8] [(short)8] [i_1 + 1]))) : (531399665U))), (2394030496U));
                var_20 = ((/* implicit */short) arr_6 [i_0] [i_0]);
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (11022271640289378733ULL) : (((/* implicit */unsigned long long int) 2987912389U))));
}
