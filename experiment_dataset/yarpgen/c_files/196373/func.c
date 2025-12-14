/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196373
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
    var_19 = (+(((/* implicit */int) var_12)));
    var_20 &= ((((/* implicit */int) ((short) var_15))) >> (((((/* implicit */int) var_6)) - (20703))));
    var_21 -= ((/* implicit */short) ((unsigned long long int) (_Bool)0));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_22 += ((/* implicit */short) var_13);
                    var_23 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_3)), (max((((/* implicit */long long int) max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0])))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_3 [i_0 - 1] [i_1])))))));
                    arr_8 [(short)14] [(short)14] [i_0 - 1] = ((/* implicit */long long int) (signed char)34);
                    arr_9 [i_0 - 1] [14ULL] [i_0 - 1] = ((/* implicit */unsigned char) arr_6 [i_2] [i_2] [i_1 + 1] [i_0 - 1]);
                    arr_10 [i_0] [(signed char)19] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
                }
            } 
        } 
    } 
}
