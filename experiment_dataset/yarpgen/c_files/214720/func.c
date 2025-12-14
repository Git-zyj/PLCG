/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214720
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
    var_19 = ((/* implicit */short) ((long long int) ((_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11))))));
    var_20 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_3))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) ((arr_1 [i_1 - 1]) ? (((/* implicit */int) var_5)) : (arr_9 [(_Bool)1] [i_0] [i_1] [i_0 + 1] [i_0])));
                            var_23 = ((/* implicit */unsigned int) arr_3 [i_3]);
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)238)) >= (((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_2] [i_3] [(_Bool)1])) : (max((max((((/* implicit */long long int) var_17)), (var_2))), (((/* implicit */long long int) ((unsigned int) arr_2 [i_0]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                {
                    var_25 = ((/* implicit */signed char) var_17);
                    arr_18 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */int) var_13);
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_16))))))));
                }
            } 
        } 
    } 
}
