/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200756
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
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_0] = max((((((/* implicit */_Bool) ((int) (short)17491))) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) (short)24399)) & (arr_0 [i_0]))))), (((/* implicit */int) var_7)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (!(((max((((/* implicit */unsigned int) arr_7 [i_2] [i_1])), (var_1))) != (var_5))))))));
                            arr_11 [i_2] [i_2] [i_2] = (+(((/* implicit */int) (short)26212)));
                            arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) var_3);
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] [i_1] = var_1;
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_11);
    var_16 = ((/* implicit */int) ((unsigned int) max((((/* implicit */short) var_6)), (max((var_2), (((/* implicit */short) var_3)))))));
}
