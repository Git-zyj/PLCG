/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (12892591548173051992 > 34359738367);
    var_12 = ((((((((14341009164493674918 ? 54 : 2959605003408666958))) ? 63 : var_5))) ? ((((86 ? 18446744073709551615 : 94)) | var_5)) : (((((var_10 < 221) <= (min(var_1, 3178978416018669436))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (~(65525 - 11849312612503741731));
                var_13 = (max(var_13, (((((((var_1 || (arr_3 [0]))) || var_2)) || ((!(18446744073709551614 > 16186))))))));
            }
        }
    }
    #pragma endscop
}
