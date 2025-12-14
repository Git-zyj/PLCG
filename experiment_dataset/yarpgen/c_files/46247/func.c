/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46247
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
    var_11 = ((/* implicit */signed char) min((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-16069))) - (0U)))) || (((/* implicit */_Bool) var_4)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (arr_2 [i_0])))) ? (max((((/* implicit */int) arr_1 [i_0])), (1604768283))) : (((/* implicit */int) arr_1 [i_1 + 1])))), (max((((/* implicit */int) ((((/* implicit */long long int) 451488854U)) < (-1106237192504298984LL)))), (((int) 693286406))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_1 + 1]) | (arr_2 [i_1 + 2])))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_1 - 2]))) : (((((/* implicit */_Bool) arr_2 [i_1 - 3])) ? (((/* implicit */unsigned long long int) arr_2 [i_1 - 2])) : (14046900782987965168ULL)))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (1604768283)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)-13838)))) : (min((arr_0 [i_0]), (((/* implicit */unsigned int) (signed char)63)))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
            }
        } 
    } 
}
