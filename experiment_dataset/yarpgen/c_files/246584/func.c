/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246584
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
    var_14 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10031217232278471317ULL)) ? (((/* implicit */int) (short)-13343)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) 969723119U)))));
    var_15 = ((/* implicit */unsigned int) var_1);
    var_16 = ((_Bool) ((int) (unsigned short)30638));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (arr_5 [i_0] [(_Bool)1] [i_1]))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [11LL]) : (arr_0 [i_0])))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_4] [i_1] [(signed char)3]))))), ((+(((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [4LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (281474976710655ULL)))))));
                                arr_17 [i_0] [i_4] [(unsigned short)20] [i_0] [i_2] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_11 [i_0] [6ULL] [i_0] [i_4 + 2] [i_1]))));
                                arr_18 [i_0] [24LL] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */unsigned char) arr_12 [16ULL] [16ULL] [(_Bool)1] [(short)20] [i_4])), ((unsigned char)80)))), ((-(arr_8 [i_0])))))) + ((-(min((-4382167796598088979LL), (((/* implicit */long long int) (_Bool)1))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
