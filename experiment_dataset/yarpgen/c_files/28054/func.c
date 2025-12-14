/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28054
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_10 = ((/* implicit */short) (-(((/* implicit */int) min((arr_3 [i_4] [i_3] [i_1 - 1]), (arr_3 [i_0] [i_1] [(_Bool)1]))))));
                                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_8 [i_3] [i_3])))) ? (((/* implicit */int) (unsigned short)54218)) : (((((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)8])) ? (((/* implicit */int) (unsigned short)11310)) : (((/* implicit */int) (short)-15781))))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) max((var_1), ((_Bool)1)))))));
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 3] [i_1 + 2])) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) arr_7 [i_0] [(unsigned short)10] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_1 - 3])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_0]))))))) ? ((-(((/* implicit */int) arr_0 [(unsigned short)11] [(unsigned short)11])))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0])) / (((/* implicit */int) var_2))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((short) var_8)))))));
                var_13 = ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1 + 1] [i_1]);
            }
        } 
    } 
    var_14 = ((/* implicit */short) min(((_Bool)1), (var_1)));
}
