/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241687
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
    for (int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) arr_4 [i_0]))));
                var_16 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) min((arr_3 [i_0]), (arr_3 [i_0]))))))));
                var_17 = ((_Bool) min((((/* implicit */unsigned char) (signed char)(-127 - 1))), (arr_3 [i_0 - 3])));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_14 [8] [(_Bool)1] [i_1 + 3] [i_2] [i_2] [i_1 + 3] = ((/* implicit */unsigned char) (-(((arr_8 [i_0 - 2]) - (arr_8 [i_0 - 1])))));
                            arr_15 [i_0 - 3] [(unsigned short)14] [i_2] [(unsigned short)14] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_5 [(unsigned short)8])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_10))))) : (min((var_0), (((/* implicit */unsigned long long int) 190111124)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (-(1099629306U))))))));
                            arr_16 [6U] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 3])) ? (arr_8 [i_0 - 3]) : (((/* implicit */long long int) arr_5 [i_0 - 3]))))) ? (arr_8 [i_0 - 3]) : (min((arr_8 [i_0 - 3]), (((/* implicit */long long int) arr_5 [i_0 - 3]))))));
                        }
                    } 
                } 
                arr_17 [i_0] [i_1 - 2] [i_0] &= ((/* implicit */unsigned short) (-((~(arr_11 [i_0] [i_0 + 1] [i_1])))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_9) | (var_11)))) > (((unsigned long long int) var_3))))) != (((/* implicit */int) var_8))));
    var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_4))) ? (((/* implicit */long long int) ((int) var_8))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) (-(-190111130)))) : (var_9)))));
    var_20 += ((/* implicit */unsigned long long int) var_10);
}
