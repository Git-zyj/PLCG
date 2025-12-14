/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236512
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_11 [i_3] [i_1 - 1] = ((arr_6 [i_0] [i_0] [i_2 + 3] [i_0]) ? (arr_7 [i_0] [i_1] [i_2 + 1] [i_3 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_1))))))));
                            arr_12 [i_0] [i_1 - 1] [i_2 + 1] [i_3 + 1] [i_1 - 2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_5 [i_2] [(_Bool)1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1761379819)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) var_11)) : (((((/* implicit */_Bool) -1226748604)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_7 [i_3] [i_3] [i_2] [i_3])))))));
                        }
                    } 
                } 
                var_16 = (((+(var_11))) <= (var_10));
                var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0]))));
                arr_13 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (arr_10 [i_0] [i_0] [i_0] [i_1 - 2]))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)12945)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)203))))), (((unsigned int) (unsigned short)11952)))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_13)), (var_10))))));
    var_19 = (+(max(((-(((/* implicit */int) var_6)))), ((-(((/* implicit */int) (unsigned short)11970)))))));
}
