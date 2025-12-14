/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201569
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
    var_15 = ((/* implicit */unsigned long long int) var_10);
    var_16 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned int) ((signed char) var_13)))), (max((((/* implicit */long long int) ((signed char) var_11))), (var_7)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-32745))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)99))) & (716966761U))))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 12087030660288425505ULL)))))))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    arr_9 [i_0] |= ((/* implicit */long long int) ((unsigned short) min(((~(var_11))), (((/* implicit */unsigned int) arr_6 [i_2 + 2] [i_2 - 2] [i_2 - 2])))));
                    arr_10 [i_2] [i_1] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_2 - 1] [i_2 + 2])) ? (((/* implicit */int) arr_8 [i_2 + 2] [i_2 - 1] [i_2 + 2])) : (((/* implicit */int) arr_3 [i_2 + 3] [i_2 + 4] [i_2 - 1])))))));
                }
                for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    var_18 = ((/* implicit */unsigned int) ((unsigned char) var_14));
                    arr_13 [i_1] [i_0] = ((/* implicit */long long int) (~((~(((/* implicit */int) (short)1023))))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (-(-7321620152940804974LL))))));
                }
            }
        } 
    } 
}
