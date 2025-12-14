/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210117
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
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) max((max(((+(var_4))), (max((((/* implicit */unsigned long long int) 7271782132776945547LL)), (var_1))))), (((/* implicit */unsigned long long int) var_8)))))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1713581279)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (max((var_6), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) & (1713581279))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */long long int) var_4);
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1713581280)) ? (((/* implicit */int) (unsigned char)20)) : (-1713581279)));
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) & (((/* implicit */long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) (signed char)61)))))));
    }
}
