/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36900
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) max((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2])), (min(((-(((/* implicit */int) (unsigned char)238)))), ((-(((/* implicit */int) arr_2 [i_0]))))))));
                            arr_12 [i_1] [i_3 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_2 [i_3 - 1])))) : (((/* implicit */int) ((unsigned short) var_13)))));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (4031179949U)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        {
                            arr_18 [i_1] [i_5] = ((/* implicit */unsigned char) var_0);
                            var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127))));
                            arr_19 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_4] [i_5]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) max(((signed char)-124), ((signed char)127))))));
}
