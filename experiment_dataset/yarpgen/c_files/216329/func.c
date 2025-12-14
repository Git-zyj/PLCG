/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216329
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
        for (unsigned int i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_11 [i_0] = ((/* implicit */unsigned long long int) var_10);
                    arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)50)))) - (arr_1 [i_1])));
                    arr_13 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_15)), (arr_3 [i_1 + 2])))), (((min((((/* implicit */unsigned int) (unsigned short)1)), (arr_7 [i_0] [i_0] [i_2]))) % (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_11))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) min((var_1), (((/* implicit */long long int) min(((_Bool)0), ((_Bool)1))))));
    var_17 = ((/* implicit */unsigned short) var_2);
}
