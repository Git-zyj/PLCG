/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37969
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_20 ^= ((/* implicit */int) (~(((((arr_5 [i_0] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_3 [i_0] [(_Bool)1]))) * (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_0)), (var_3)))))))));
                var_21 = ((/* implicit */short) ((max((arr_4 [i_1]), (arr_4 [i_1]))) * (((/* implicit */unsigned long long int) ((int) arr_4 [i_1])))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((_Bool) arr_13 [10LL] [i_3] [i_3 + 1] [i_3 - 1] [i_3]));
                                var_23 = ((/* implicit */long long int) (_Bool)1);
                                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [0LL] [0LL])))))))) ? ((-((~(((/* implicit */int) arr_13 [i_0] [i_2] [i_0] [i_3] [i_4])))))) : (((/* implicit */int) arr_2 [i_0])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) ((_Bool) (+(8421015811494812386LL))));
    var_26 = (!(var_10));
    var_27 = ((/* implicit */int) var_14);
}
