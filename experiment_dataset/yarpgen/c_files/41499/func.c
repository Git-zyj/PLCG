/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41499
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
    var_10 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) min((var_1), (var_1))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) (!(var_5)))))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_2])) >= (((/* implicit */int) max(((short)3547), (((/* implicit */short) var_1))))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */short) var_5);
                                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) arr_11 [i_0] [i_0 - 4] [i_0] [i_0] [i_0] [i_0]))));
                                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) min((var_4), ((short)-28688))))) ? ((+(arr_2 [i_0 - 4]))) : (((/* implicit */int) (signed char)-84))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_0 - 3] [i_1] [(signed char)0] [i_1] [(_Bool)1] [(_Bool)1]))) * (arr_7 [i_2] [(_Bool)1] [(_Bool)1] [i_0])))) ? (((((/* implicit */int) (unsigned short)28248)) * (((/* implicit */int) arr_8 [(unsigned short)4] [i_1] [(unsigned short)4])))) : (((var_1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_2] [i_1] [i_0 - 3])))))))))));
                }
            } 
        } 
    } 
}
