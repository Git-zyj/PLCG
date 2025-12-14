/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_19 = (60 ? (min(((6445503977720176835 ? 7679745528222402543 : 7679745528222402543)), 12001240095989374777)) : (((max((arr_0 [i_0]), 10766998545487149092)) % 5110)));
        arr_3 [i_0] = ((((((arr_2 [i_0 + 2]) >> (((arr_2 [i_0 + 1]) - 64974))))) ? (((arr_2 [i_0 + 3]) ? var_16 : var_14)) : var_2));
    }
    var_20 &= var_3;
    var_21 &= 10766998545487149072;
    var_22 = ((12001240095989374775 ? 31 : 0));
    #pragma endscop
}
