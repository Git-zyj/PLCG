/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202727
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
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned char i_3 = 3; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_1] [i_3] [i_2 + 1] = (!(((/* implicit */_Bool) ((unsigned char) (((_Bool)0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)24)))))));
                            arr_14 [i_0] [i_1] [i_1] [i_3 - 3] [i_1] [i_1] = ((/* implicit */unsigned char) var_6);
                            var_12 = (+((((_Bool)1) ? (((((/* implicit */_Bool) (unsigned short)56490)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned short) (unsigned char)150))))));
                            arr_15 [i_0] [i_0] [i_1] [i_0] = ((unsigned short) ((signed char) var_9));
                            var_13 -= ((/* implicit */unsigned char) (+(var_3)));
                        }
                    } 
                } 
                arr_16 [i_1] = ((/* implicit */unsigned char) (~(max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (-33233079))), (((/* implicit */int) max((((/* implicit */unsigned char) var_4)), ((unsigned char)89))))))));
            }
        } 
    } 
    var_14 = var_4;
}
