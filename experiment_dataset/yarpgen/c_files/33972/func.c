/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33972
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] = min((4294967280U), (((/* implicit */unsigned int) var_2)));
                var_10 = ((((/* implicit */long long int) ((/* implicit */int) var_3))) & (((long long int) 4085125336U)));
                var_11 = ((/* implicit */_Bool) min((var_4), (min((((2216609990U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))))), (((/* implicit */unsigned int) var_5))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(min((min((var_8), (var_8))), (((/* implicit */long long int) min((((/* implicit */int) var_7)), (1318256545))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            {
                var_12 ^= min((min((((var_0) / (((/* implicit */long long int) 4200890815U)))), (var_0))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)6144)) <= (((/* implicit */int) var_3)))))) + (min((((/* implicit */unsigned int) (short)6144)), (var_9)))))));
                arr_12 [i_2] [i_3] = ((/* implicit */unsigned long long int) ((int) ((_Bool) (short)6162)));
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_13 ^= (((~(((/* implicit */int) var_3)))) + (((/* implicit */int) (short)-6163)));
                    var_14 *= ((/* implicit */long long int) ((((/* implicit */_Bool) 97907504U)) || (((((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (var_9)))) >= (var_8)))));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 9; i_5 += 4) 
                {
                    arr_18 [i_2] [i_2] |= (~(((/* implicit */int) var_7)));
                    arr_19 [i_2] [i_3] [i_5] [i_5 - 1] = ((/* implicit */unsigned int) (~(var_6)));
                }
            }
        } 
    } 
}
