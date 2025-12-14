/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((var_9 ? (arr_1 [i_0]) : (!9)))) ? 25882 : (!32767)));
        var_16 &= (((((((var_4 > (arr_0 [i_0]))) != 30965)))));
        arr_3 [i_0] = ((((-(arr_1 [i_0]))) - (+-1)));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_6 [i_0] = (arr_5 [i_0] [i_1] [i_0]);
            var_17 = (max(var_17, ((~((-4287039323038110077 ^ (arr_1 [i_1])))))));
            arr_7 [i_0] [i_0] [i_0] = (((arr_4 [i_0]) + (max(29984, (arr_1 [i_0])))));
            arr_8 [0] [i_0] [i_0] = ((+(max(-178476176401730161, ((((arr_1 [1]) ^ (arr_0 [i_0]))))))));
        }
    }
    var_18 = (min(((min(0, var_10))), ((-var_7 ? 51821 : (min(-9223372036854775801, var_4))))));
    #pragma endscop
}
