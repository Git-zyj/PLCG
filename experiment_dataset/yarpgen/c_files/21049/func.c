/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21049
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) arr_5 [i_0] [i_1]);
                    arr_10 [i_0] = ((/* implicit */long long int) (unsigned short)39664);
                    arr_11 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) max((arr_3 [i_0] [i_2]), (max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_6 [i_0] [i_1 - 2] [i_1 + 1] [i_2])), (var_6)))), (max((arr_5 [i_0] [i_1 - 2]), (((/* implicit */unsigned long long int) var_13))))))));
                }
            } 
        } 
    } 
    var_17 = var_12;
    var_18 = ((/* implicit */unsigned int) ((long long int) (-2147483647 - 1)));
    var_19 = ((/* implicit */unsigned short) (-(var_10)));
    var_20 = (-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) >= (((8276771727543223831ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
}
