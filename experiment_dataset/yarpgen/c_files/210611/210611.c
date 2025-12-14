/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((var_5 < (arr_2 [i_0])));
        var_17 |= 255;
        arr_4 [i_0] [i_0] = ((-6541054546718863221 <= (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_9 [i_1] = ((-(min(255, -1268350173))));
            arr_10 [i_2] [i_2] |= -1;
            var_18 *= 255;
            arr_11 [9] [i_1] [2] = var_14;
        }
        arr_12 [i_1] = ((((min(var_5, (arr_2 [i_1])))) | (0 & 1)));
    }
    var_19 |= (((max(1, 255))));
    #pragma endscop
}
