/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;

    for (int i_0 = 4; i_0 < 16;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            var_19 = ((+(((((arr_1 [i_0 + 1] [i_1 + 2]) ? 33 : 222)) | ((-(arr_3 [i_0] [i_1])))))));
            var_20 = ((46281 ? (arr_2 [i_1 - 2] [i_1 - 2] [i_1 + 2]) : (arr_3 [i_0] [i_0])));
        }
        var_21 += ((-(arr_2 [i_0 + 3] [i_0 - 2] [i_0 + 3])));
    }
    for (int i_2 = 4; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_22 = (arr_0 [11]);
        var_23 = ((((((((33 ? 215 : 4294967295))) ? (((-(arr_6 [i_2])))) : (((arr_4 [i_2]) ? 28 : (arr_4 [i_2])))))) || (arr_5 [i_2])));
        var_24 = ((arr_4 [i_2 - 3]) ? ((((((-(arr_4 [i_2]))) == (arr_3 [i_2] [8]))))) : (((arr_3 [i_2] [0]) ? (((((arr_4 [i_2]) || -4979853061391277780)))) : -18446744073709551605)));
    }
    #pragma endscop
}
