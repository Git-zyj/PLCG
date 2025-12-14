/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225723
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */long long int) (unsigned short)15879);
                    arr_6 [i_1] [6U] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_2])) / (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)107))) * (arr_5 [i_0] [i_1])))) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) (unsigned char)223))))));
                    arr_7 [i_0] [i_0] [0] = ((/* implicit */int) arr_3 [(short)7]);
                    arr_8 [i_0] [i_0] [i_1] [i_0] |= arr_4 [i_2 - 1] [i_2] [i_2 - 3] [i_2 + 1];
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned int) var_8);
    var_12 = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) / (((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
    var_13 = ((/* implicit */unsigned int) (~(var_1)));
}
