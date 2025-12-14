/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236993
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
    var_13 = (+(((/* implicit */int) (unsigned short)0)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3] [i_1] [i_1] [i_1 - 2])) && ((_Bool)0)))), ((-(787677917U)))))) != (arr_0 [i_1]))))));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) ((-150882589) & (150882589))))))) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_9))))))) : ((-(var_8)))));
                            }
                        } 
                    } 
                    var_16 ^= ((/* implicit */_Bool) -150882589);
                    var_17 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), ((+(arr_1 [i_1] [i_2])))))));
                    arr_15 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_11)), (var_10))) << (((min((((/* implicit */long long int) var_5)), (arr_14 [i_0] [i_2]))) - (239379487LL)))))) / (((((/* implicit */_Bool) var_3)) ? (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (signed char)-7)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (150882589))))))));
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_19 = min((min((var_2), (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)2047))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_5)) - (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (var_7)))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (var_4))))) + (min((var_3), (((/* implicit */unsigned long long int) -150882589))))))));
}
