/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24336
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
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_10))));
    var_19 = ((/* implicit */_Bool) var_10);
    var_20 = ((/* implicit */_Bool) (~(((((/* implicit */int) var_3)) >> ((((+(var_2))) + (1019998741866259017LL)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((_Bool) ((unsigned char) arr_2 [i_0])));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (short)13995)) != (0)));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) -1224845120);
                                var_23 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_13 [i_2] [i_0]), (((/* implicit */short) (unsigned char)78)))))) : (arr_4 [i_3 - 1]))));
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((((((/* implicit */_Bool) 12381868511871950752ULL)) ? (1224845119) : (((/* implicit */int) (_Bool)0)))) | (((((((/* implicit */int) arr_13 [i_0] [i_0])) + (2147483647))) << (((/* implicit */int) (_Bool)0))))))));
                                var_25 ^= ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_1] [i_3 - 1])), (((unsigned int) var_5))));
                                var_26 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) min(((~(((/* implicit */int) var_10)))), (var_1)))) : (var_14));
                            }
                        } 
                    } 
                    arr_14 [i_2] [i_1] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) >= (var_4))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) / (var_12)))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) ((var_0) >> (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
}
