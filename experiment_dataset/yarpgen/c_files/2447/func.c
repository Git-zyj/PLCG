/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2447
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((9098706122658733863LL), (((/* implicit */long long int) (unsigned char)21)))), (var_5)))) ? (((/* implicit */int) ((_Bool) (unsigned char)147))) : (((((/* implicit */_Bool) 253952U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_2] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */int) arr_12 [i_0])), (((((/* implicit */int) (unsigned char)21)) + (((/* implicit */int) (unsigned char)19))))))) <= ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)27))) : (arr_13 [i_4 - 3] [i_3 - 1] [i_0] [i_3] [i_1] [i_4])))));
                                arr_16 [i_0] [i_1] [i_0] [i_3] [i_4] [(_Bool)1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_11 [i_3 + 1] [i_3 - 1] [i_4 - 2] [i_4 - 3]), (arr_11 [i_3 + 1] [i_3 + 1] [i_4 - 3] [i_4 - 3])))) ? (((unsigned int) arr_11 [i_3 - 1] [i_3 - 1] [i_4 - 3] [i_4 - 2])) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15)))));
                                var_13 ^= ((/* implicit */int) 14924150443947392189ULL);
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */_Bool) 3522593629762159427ULL);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) min((var_2), (((/* implicit */unsigned char) (_Bool)1))));
}
