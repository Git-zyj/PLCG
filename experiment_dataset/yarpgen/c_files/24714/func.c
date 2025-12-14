/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24714
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), ((+(((/* implicit */int) (_Bool)0))))))) && (((/* implicit */_Bool) var_8))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)32085))))) : (((/* implicit */int) max((var_1), (var_1))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 4])) ? (((/* implicit */long long int) (~(arr_11 [i_1] [(short)10])))) : ((-(var_0))))))));
                                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) max(((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_0] [i_1] [(_Bool)1])))))), (((/* implicit */int) arr_0 [i_0 + 1] [(_Bool)1])))))));
                                arr_13 [i_1] [(short)9] [i_2] [i_3] [i_3] = ((((/* implicit */int) var_5)) >= (((/* implicit */int) max(((short)-32105), (((/* implicit */short) ((_Bool) var_5)))))));
                                arr_14 [i_4] [i_1 + 1] [i_1] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) ((max((5588542950722474411LL), (((/* implicit */long long int) 3673231908U)))) >> (((((/* implicit */_Bool) 8409494767415939426LL)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (_Bool)0))))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 + 2]))) : (arr_5 [i_0 - 1] [i_1]))), (arr_9 [i_0] [i_1] [i_1 + 1] [i_2]))) / (((arr_12 [i_2] [i_2 - 1] [i_2] [i_2]) | (((/* implicit */long long int) var_6))))));
                }
            } 
        } 
    } 
}
