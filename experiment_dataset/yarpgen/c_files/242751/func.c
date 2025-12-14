/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242751
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) arr_3 [i_0] [(signed char)9] [i_2]))));
                            arr_11 [i_1 + 3] [i_2] [i_1 + 3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_10 [i_1 + 3] [i_1 + 2] [i_3 + 1]), (((/* implicit */signed char) var_3))))) ? (((/* implicit */int) ((_Bool) (signed char)-85))) : (((/* implicit */int) max((((/* implicit */signed char) var_0)), (arr_6 [i_0] [i_1] [i_2] [i_3]))))));
                        }
                    } 
                } 
                var_13 *= ((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1 - 1] [i_1]);
                var_14 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_9 [i_1 + 3] [(unsigned char)0] [i_0] [i_0]))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_0] [i_1] [i_1 - 1])) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) arr_0 [i_1]))));
                var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)26), ((unsigned char)95)))) ? (((/* implicit */int) arr_9 [(_Bool)1] [(unsigned char)1] [i_1] [i_1 + 3])) : (((/* implicit */int) ((signed char) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_1] [i_1] [i_1 - 1]))) : (((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_0] [(_Bool)1] [i_1 + 2]))))) : (((/* implicit */int) max((arr_10 [i_1 + 2] [i_1 - 1] [i_1 - 1]), (arr_7 [i_1 + 1] [i_1 + 2] [i_1] [i_1 + 2]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((var_6) ? (((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((short) var_9))) : (((/* implicit */int) min((var_11), (var_5)))))) : (((/* implicit */int) var_0))));
    var_17 = ((/* implicit */_Bool) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned char) var_2))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_2))))));
}
