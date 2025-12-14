/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 64985;
    var_11 = ((max(var_8, var_1)));
    var_12 = (((min(-var_3, 670007041966618730)) >> (((((min(var_7, var_0))) >= var_2)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 += (((max(var_4, (max(var_5, var_3)))) > (4294967295 * 0)));
        arr_3 [i_0] = ((((!(arr_2 [i_0]))) ? ((((max(var_8, 1))) >> (((551 <= (arr_0 [i_0])))))) : 0));
        arr_4 [i_0] = ((((8191 ? var_5 : (arr_2 [i_0]))) * 670007041966618718));
        var_14 = (((var_6 / 64980) != (((min(25426, 816))))));
        var_15 = ((2183813376 && ((max(20, 1)))));
    }
    #pragma endscop
}
