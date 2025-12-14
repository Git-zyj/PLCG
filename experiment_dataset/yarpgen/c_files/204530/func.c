/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204530
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_13 = max((((/* implicit */unsigned long long int) var_4)), (((arr_5 [i_3 - 1] [i_1 + 1]) % (arr_5 [i_3 + 1] [i_1 - 1]))));
                                var_14 |= ((/* implicit */unsigned int) arr_13 [i_2]);
                                var_15 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_4 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U))));
                                var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1])), ((-(14309179607206633906ULL)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_8 [i_1 + 1] [i_1] [19] [i_1] [i_0])))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0]))))));
                    var_18 = ((/* implicit */long long int) ((unsigned int) var_0));
                    var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) & (var_8)))), (13190991252972163895ULL)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_12)) : (var_8)));
    var_21 = ((/* implicit */signed char) var_9);
    var_22 = ((/* implicit */unsigned long long int) (unsigned char)249);
}
