/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232514
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
    var_13 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32741)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((signed char) var_5)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_6))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_1]))))))))) : (min((arr_8 [i_2 + 2] [i_1] [i_2]), (((/* implicit */unsigned int) var_4)))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)32716)))))));
                    arr_10 [i_2] [i_2 + 2] [i_2] = ((/* implicit */unsigned char) ((signed char) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (2606745638U))), (((/* implicit */unsigned int) arr_3 [i_1])))));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) arr_1 [i_0]);
                }
            } 
        } 
    } 
    var_15 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) -1667878954))))), ((+(((((/* implicit */unsigned int) ((/* implicit */int) (short)32740))) ^ (var_9))))));
    var_16 = ((/* implicit */int) var_9);
}
