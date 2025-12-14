/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213858
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [(unsigned short)5] [i_2] = ((/* implicit */short) arr_5 [i_2 + 1] [i_2] [i_2 + 2]);
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 10; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_16 [i_2] [i_2] = ((/* implicit */_Bool) var_10);
                                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */int) (short)32767)) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : (((/* implicit */int) var_5)))))))));
                                var_12 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (var_6))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */short) (_Bool)1);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_6)))) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) var_9))))) ? (min((((((/* implicit */_Bool) var_4)) ? (2093056U) : (4294967293U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32743))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
}
