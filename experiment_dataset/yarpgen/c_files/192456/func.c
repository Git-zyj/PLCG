/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192456
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_10 [i_3] [i_2] [i_1] [i_0] = ((int) ((int) ((unsigned short) arr_5 [i_0] [i_3])));
                            arr_11 [i_2] = ((/* implicit */unsigned char) ((short) ((int) ((int) var_1))));
                        }
                    } 
                } 
                var_10 = ((/* implicit */signed char) ((unsigned char) ((int) ((unsigned short) arr_4 [i_1 - 1] [i_0]))));
                var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((_Bool) ((unsigned short) ((signed char) (unsigned short)255)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((unsigned short) ((_Bool) ((short) (short)15569)))))));
}
