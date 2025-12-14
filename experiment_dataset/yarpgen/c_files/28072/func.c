/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28072
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
    var_12 = ((/* implicit */_Bool) var_7);
    var_13 *= ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) var_9)))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) min((((((/* implicit */int) arr_3 [i_0])) >> (((((((/* implicit */int) (unsigned char)126)) * (((/* implicit */int) arr_2 [i_0])))) - (11334))))), (((((((/* implicit */int) var_2)) | (((/* implicit */int) (_Bool)0)))) | (((/* implicit */int) (!(arr_3 [i_0])))))))))));
                arr_4 [i_0] [i_0] = arr_0 [i_1];
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((unsigned char) arr_1 [i_2] [i_4]));
                                arr_14 [i_1] [i_1] [i_1] [i_2] [i_1] [i_4] |= ((/* implicit */long long int) arr_13 [i_0 + 1] [i_1] [i_2] [i_3] [(_Bool)1]);
                                var_16 = ((/* implicit */unsigned char) (-((((-(((/* implicit */int) var_4)))) % (((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min(((+(((/* implicit */int) (!(var_1)))))), (((var_9) ? (((/* implicit */int) (short)32755)) : (((/* implicit */int) var_3))))));
            }
        } 
    } 
}
