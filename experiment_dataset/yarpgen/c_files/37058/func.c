/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37058
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
    var_16 = ((/* implicit */long long int) (unsigned char)140);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */int) arr_2 [i_0 + 1]);
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 8; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((short) ((arr_0 [i_1 - 3] [i_0 + 1]) << (((arr_0 [i_1 + 2] [i_0 + 1]) - (461622826))))));
                                var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4] [i_0])) ? (arr_3 [i_0 - 1] [i_0] [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))))));
                                arr_14 [i_0 - 1] [i_4] [i_2] [i_1] [i_1] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -51607900726449608LL)) ? (arr_3 [i_0 + 1] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2])))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_12 [i_4 + 1] [i_1] [i_0])), (arr_6 [i_1] [i_1 - 3] [i_1])))) : (18014398509481983LL))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_1] [i_0] [i_0] [i_1]))))), (arr_10 [i_1 + 1] [i_1 + 1] [i_1]))))) : (-51607900726449608LL)));
                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(1688314093))))));
            }
        } 
    } 
}
