/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54064
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
    var_20 += ((/* implicit */long long int) var_2);
    var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (3930908434U)));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) (_Bool)0))), (var_18)))) & ((+(var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1 + 2] [i_1] = 1199583701U;
                var_23 ^= ((/* implicit */signed char) ((_Bool) var_12));
                arr_8 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_11)), ((unsigned char)192)))), ((~(3095383594U))))))));
            }
        } 
    } 
}
