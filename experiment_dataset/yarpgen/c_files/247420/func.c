/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247420
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
    var_17 = ((/* implicit */unsigned int) (~((~(((11840500330062689785ULL) ^ (var_15)))))));
    var_18 = ((max((var_15), (((/* implicit */unsigned long long int) 512U)))) + (((/* implicit */unsigned long long int) (~(min((2997501769U), (var_7)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (((-(((((/* implicit */_Bool) 4294967289U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (14734839984103062011ULL))))) == (((/* implicit */unsigned long long int) max((arr_8 [i_2 + 1]), (7U))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_16 [6ULL] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned long long int) 3264323340U);
                                var_20 *= ((((/* implicit */_Bool) ((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? ((+(arr_13 [i_1] [i_1 + 1] [i_2 - 1] [i_4] [2ULL]))) : (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (var_1))) / (3264323329U)))));
                                var_21 += arr_3 [(_Bool)1] [4ULL] [4ULL];
                            }
                        } 
                    } 
                    arr_17 [i_0 - 1] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) (_Bool)1);
                }
            } 
        } 
    } 
    var_22 = ((unsigned long long int) (+(max((3003763737675370751ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
}
