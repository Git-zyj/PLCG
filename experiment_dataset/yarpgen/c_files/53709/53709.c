/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((((((1176106673 & 11512633624801863159) ? 227391897 : -1240878406))) ? 1 : ((227391898 ? ((max(1, -227391905))) : 3118860622)))))));
    var_20 = (min(var_20, var_11));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 = ((-156655625 ? ((~(arr_3 [i_0] [i_0]))) : (((arr_3 [i_0] [i_0]) | 1))));
        arr_4 [i_0] [i_0] = (min((arr_2 [i_0]), (max(3328797951, -2751756105385363501))));
    }
    #pragma endscop
}
