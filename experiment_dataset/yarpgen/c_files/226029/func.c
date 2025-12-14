/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226029
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
    var_14 *= ((/* implicit */signed char) var_5);
    var_15 = ((/* implicit */unsigned long long int) (~(var_3)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 6; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_6 [(unsigned char)5] [i_2] = ((/* implicit */_Bool) (-((-(min((((/* implicit */unsigned long long int) 0)), (arr_3 [i_0] [i_0])))))));
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_5 [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 6; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (-(((/* implicit */int) ((((((/* implicit */int) var_5)) >> (((var_0) - (11632225178464595270ULL))))) == (min((var_3), (((/* implicit */int) arr_5 [i_2]))))))))))));
                                var_18 = ((/* implicit */unsigned int) ((_Bool) ((((long long int) var_1)) >> (((max((var_1), (((/* implicit */unsigned long long int) var_2)))) - (10565408067124495734ULL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
