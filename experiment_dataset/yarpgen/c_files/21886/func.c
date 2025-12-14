/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21886
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
    var_20 &= ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */int) var_4);
                var_21 = ((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) <= (((((/* implicit */_Bool) arr_3 [i_0 + 3] [i_1])) ? (((((/* implicit */int) (short)-29041)) | (((/* implicit */int) arr_1 [i_0] [i_1])))) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 2]))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((int) min((((((/* implicit */int) (unsigned char)104)) ^ (((/* implicit */int) arr_2 [(unsigned char)10] [i_1])))), (((/* implicit */int) arr_0 [i_0 + 3])))));
            }
        } 
    } 
}
