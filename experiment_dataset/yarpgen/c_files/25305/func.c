/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25305
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
    var_10 = ((/* implicit */unsigned int) ((var_7) && (((/* implicit */_Bool) max((9ULL), (((/* implicit */unsigned long long int) 557534160)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_11 = ((unsigned int) var_9);
                            var_12 |= ((/* implicit */long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) ((arr_3 [i_2 - 1]) > (arr_3 [i_1 - 1]))))));
                            arr_15 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 17ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47676))) : (((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (9021320758414699536LL))))) >> (((4045554426U) - (4045554421U)))));
                            arr_16 [i_0] [i_1 - 1] [i_1] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)49494)) >> (((2335553943U) - (2335553940U)))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~((-2147483647 - 1))))) & (((((/* implicit */_Bool) (unsigned short)39030)) ? (18446744073709551606ULL) : (18446744073709551615ULL)))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) (((((((~(((/* implicit */int) (_Bool)0)))) + (2147483647))) >> (((var_6) - (6842827293439001303LL))))) ^ (((/* implicit */int) var_0))));
}
