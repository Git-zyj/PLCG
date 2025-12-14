/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246228
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (!((_Bool)1)))) >> (((((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) - (3618928029U)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) min((var_16), (((/* implicit */int) (unsigned char)255))))) ? (var_9) : (((/* implicit */unsigned int) ((int) var_1)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [14LL])))))))));
                arr_6 [(_Bool)1] [i_1] [(_Bool)1] &= ((/* implicit */int) ((_Bool) (~(((/* implicit */int) (unsigned short)13)))));
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) (((+(arr_3 [i_1] [i_1 + 2]))) > (((/* implicit */int) max((((/* implicit */unsigned short) var_14)), ((unsigned short)65535))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 22; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_14 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_5 [i_0] [i_0] [(signed char)4])) < (arr_10 [i_0] [i_1])));
                            var_22 &= ((/* implicit */unsigned int) arr_13 [i_3 - 3] [22U] [i_1 + 3]);
                            arr_15 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_0 [i_1 + 3] [i_2 - 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)1)))) : ((~(var_16)))));
                            var_23 = ((/* implicit */int) (~(max((arr_5 [i_1 - 1] [i_2 + 1] [i_3 - 1]), (((/* implicit */unsigned int) arr_12 [(signed char)4] [i_2 + 1] [i_3 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
