/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50416
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
    var_20 = ((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) var_16)) ? (var_15) : (((/* implicit */int) var_3)))))), (((/* implicit */int) (!(var_0))))));
    var_21 = ((/* implicit */_Bool) var_16);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1] [i_0]))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [(unsigned short)2] [11] [i_3] = ((/* implicit */unsigned short) (~(max((((/* implicit */int) ((unsigned short) arr_8 [i_3] [i_2] [i_0]))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_0]))))))));
                            arr_12 [(unsigned short)3] = ((/* implicit */unsigned short) (+(-311722372)));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [(_Bool)1] = ((unsigned short) (+(((((/* implicit */int) arr_3 [i_0])) - (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_1] [i_0]))))));
                arr_14 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (~(var_10))))) % (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [(_Bool)1] [i_1] [3]))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) var_17)))));
}
