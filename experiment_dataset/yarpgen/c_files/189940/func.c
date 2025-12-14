/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189940
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
    var_20 = ((/* implicit */unsigned long long int) var_17);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */int) ((unsigned int) var_19));
                    var_22 = ((/* implicit */signed char) 1886015900);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1 - 1] [i_2] [i_3] [i_2] [10LL] [i_4] = ((/* implicit */int) ((16799183278906760376ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_8 [i_1 - 2] [i_1] [i_1] [i_1 + 1]))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((3333926230U), (((/* implicit */unsigned int) var_6))))) ? (var_8) : (min((((unsigned int) 3333926238U)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-3224)) ? (((/* implicit */int) var_19)) : (1886015909))))))));
                                arr_14 [i_0] [19] [i_2] [i_0] [19] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) -1886015901))), (arr_5 [i_0] [i_1 + 1])));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) arr_8 [i_0] [i_1 - 1] [i_2] [i_0]);
                }
            } 
        } 
    } 
}
