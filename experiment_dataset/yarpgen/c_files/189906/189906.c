/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_21 = (((min(((-(arr_2 [7] [i_0]))), 2230)) >= var_1));
        arr_3 [i_0] [i_0] = ((((max(45228, 26850))) ? (arr_0 [i_0] [i_0]) : (~-2133813620087075048)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((2929186331994517717 ? 29287 : 49));
        var_22 = (max(var_22, (arr_2 [i_1] [4])));
        var_23 = (arr_2 [i_1] [i_1]);
        var_24 = (1 > 195);
        arr_7 [i_1] [i_1] = (12 - -60);
    }
    var_25 = (var_8 - var_7);
    var_26 = (min(65534, 9223372036854775807));
    var_27 = (((!65535) ? (((((240 ? 9899 : 0))) ? 2929186331994517705 : 387714769)) : (((~((-52 ? -7253243098473105625 : 4294967295)))))));
    #pragma endscop
}
