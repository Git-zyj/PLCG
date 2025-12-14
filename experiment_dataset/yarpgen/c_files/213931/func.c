/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213931
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (var_3))), (((var_10) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) && (((/* implicit */_Bool) var_8))));
    var_18 = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_1)) & (((/* implicit */int) var_4)))) & (((/* implicit */int) (unsigned char)149)))) % (((((/* implicit */int) max(((unsigned char)149), ((unsigned char)87)))) + (((/* implicit */int) var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = (~((-(var_0))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)169);
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((int) max(((unsigned char)149), ((unsigned char)168)))) & (((/* implicit */int) ((unsigned char) ((var_2) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))))));
                arr_8 [i_0] = ((/* implicit */int) arr_0 [9]);
            }
        } 
    } 
}
