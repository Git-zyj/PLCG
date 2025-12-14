/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209429
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
    var_16 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(arr_2 [i_1 + 4] [i_1] [i_1])))) / ((-(3959513248U)))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 536870880))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_9 [i_2])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_2])))))))) ? ((+(max((((/* implicit */long long int) arr_1 [i_0])), (var_0))))) : (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_4 [i_3] [i_0]))) & (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_1])))))));
                            var_20 = arr_7 [i_0] [4ULL] [i_1 + 2] [i_3];
                        }
                    } 
                } 
            }
        } 
    } 
}
