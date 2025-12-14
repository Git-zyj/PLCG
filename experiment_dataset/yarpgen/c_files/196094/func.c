/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196094
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) min((min((var_3), (arr_3 [i_1] [i_1]))), (((/* implicit */unsigned int) -12395015))));
                var_17 = arr_6 [i_1] [i_1] [i_0];
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_18 -= (unsigned short)6585;
                            var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) -12395015)) ? (((/* implicit */long long int) var_10)) : (arr_7 [i_0] [i_0]))) > (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)47420)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */unsigned int) var_9))))))))) < (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) (unsigned char)95))))) ? (arr_11 [i_2]) : (((/* implicit */unsigned long long int) var_9))))));
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 2147483647)), (3053371328244532081LL)))) ? (-12395015) : (-12395024)));
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
                var_21 = ((/* implicit */signed char) 8784222934072636208ULL);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_0);
    var_23 |= ((/* implicit */unsigned char) 9662521139636915427ULL);
}
