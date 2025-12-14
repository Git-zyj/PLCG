/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189642
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) max((max((((1593381317) + (((/* implicit */int) var_12)))), (((int) arr_3 [i_0] [i_0] [i_0])))), (((/* implicit */int) ((arr_2 [i_0]) || (((/* implicit */_Bool) ((int) arr_5 [i_2] [i_0] [(_Bool)1]))))))));
                                arr_12 [i_0] [i_0] [i_0] = arr_0 [i_0];
                                var_14 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) arr_11 [i_0] [i_3] [i_3 + 1] [i_3] [i_3 + 1] [i_3] [i_0])) - (((/* implicit */int) arr_8 [i_4] [i_4] [i_3 + 1] [i_3 + 1] [2] [2])))));
                            }
                        } 
                    } 
                    var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1593381317)) ? (((/* implicit */int) (unsigned char)7)) : (1593381321)));
                    arr_13 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) || (((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_1] [i_1] [i_1] [i_0])))) ? (((/* implicit */int) max((arr_7 [i_2] [i_2] [i_1] [i_0]), (var_9)))) : (((/* implicit */int) max((arr_8 [i_0] [i_1] [(_Bool)1] [i_2] [i_1] [i_2]), (arr_7 [i_0] [i_1] [i_2] [i_1]))))));
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 524288)) ? (((/* implicit */int) (_Bool)0)) : (-686471732)))) ? (((/* implicit */int) (_Bool)0)) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (-1593381294))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (var_3)))) : (((int) var_6))))) ? (((int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_1))))) : (((((/* implicit */int) var_9)) | (((var_5) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))))));
}
