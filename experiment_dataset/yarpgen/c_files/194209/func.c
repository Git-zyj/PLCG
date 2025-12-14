/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194209
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
    var_10 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))));
    var_11 = ((/* implicit */signed char) (unsigned char)232);
    var_12 = ((/* implicit */_Bool) 1629776903U);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_0 - 1] = max((((/* implicit */int) var_1)), (max((((int) arr_3 [i_0])), (((/* implicit */int) ((short) arr_6 [i_0] [i_1]))))));
                    var_13 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) >= (arr_1 [i_2])))) & (((/* implicit */int) max(((unsigned char)16), (((/* implicit */unsigned char) arr_2 [i_2]))))))) >= ((-(((/* implicit */int) min((arr_6 [i_0] [i_1]), (arr_2 [i_2]))))))));
                    arr_8 [i_0] [i_1] [i_2] = min(((+(var_8))), (((/* implicit */long long int) max((((((/* implicit */int) (unsigned char)16)) / (((/* implicit */int) arr_6 [i_0] [i_1])))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)232)) == (((/* implicit */int) var_0)))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */short) arr_6 [i_0] [i_1]);
                }
            } 
        } 
    } 
}
