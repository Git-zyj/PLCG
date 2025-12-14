/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197915
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) | (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */unsigned int) var_2)) | (var_3)))))) > (var_6)));
    var_13 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4]))))) & (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                                var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_1]))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) ((((((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_0] [2U] [i_2])), (arr_10 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2])))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_0))))))) - (((((/* implicit */int) var_11)) & (((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 4] [i_2 + 1] [i_2 + 2]))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((var_9) % (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_7))))) ? (((var_10) >> (((/* implicit */int) var_8)))) : (((var_6) & (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
}
