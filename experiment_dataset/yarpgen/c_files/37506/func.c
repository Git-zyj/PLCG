/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37506
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
    var_11 = ((/* implicit */long long int) ((var_3) ? ((+(17179869183ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27523)))));
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */int) var_7)), (var_8)))), (((((/* implicit */long long int) ((/* implicit */int) var_7))) - (min((((/* implicit */long long int) -992990102)), (-1LL)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */int) 0LL);
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) arr_1 [i_1]);
                    arr_10 [i_0] [i_2] = ((/* implicit */unsigned int) ((min((max((-1LL), (((/* implicit */long long int) (_Bool)1)))), (arr_8 [i_0] [8LL] [i_1] [i_2]))) / (((/* implicit */long long int) max((min((var_8), (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])))), (((/* implicit */int) arr_7 [i_0])))))));
                    var_14 = ((/* implicit */short) ((unsigned char) ((((((/* implicit */int) (signed char)61)) + (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) arr_2 [i_0])))));
                    var_15 = ((/* implicit */_Bool) ((arr_0 [i_1] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                }
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    arr_14 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_1] [i_3]);
                    var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
                }
                arr_15 [i_0] [i_1] [i_1] = ((/* implicit */int) var_9);
            }
        } 
    } 
}
