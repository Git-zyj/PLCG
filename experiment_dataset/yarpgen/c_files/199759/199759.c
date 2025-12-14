/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((8744202758343209853 & (var_6 ^ 18446744073709551587))) ^ (!32)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 -= ((1 ? 14252468682349735323 : 17584062943598824272));
                arr_4 [13] [3] [14] = ((+(((!1) & (max(1934605299814280185, 13835058055282163712))))));
            }
        }
    }
    #pragma endscop
}
