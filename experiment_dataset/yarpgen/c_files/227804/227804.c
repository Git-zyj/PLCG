/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((max(61944, 3420546022)), 15));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (-2524888847784875681 & 644578431);
                    var_18 -= (((((1839361596 ? 61973 : (0 ^ 2455605699)))) ? (max(5003901563511594913, 3602)) : (max((((15362 ? 851631291 : 29042))), (max(1839361592, 742072966075111224))))));
                    arr_10 [i_0] [i_1 + 1] [i_1] = ((-((+(min((-2147483647 - 1), 1839361592))))));
                    arr_11 [i_1] [i_1] [i_2] [1] = (((((6662074494691719730 ? (max(-2147483647, 337999605)) : 237))) < (+-6056404082440297052)));
                }
            }
        }
    }
    var_19 = ((((max(1153301741, (max(2273568806, (-9223372036854775807 - 1)))))) ? ((((max((-127 - 1), 1))) ? 0 : ((2147483625 ? 9223372036854775807 : -2491959753727263649)))) : -527747785));
    var_20 = 4786734425937822646;
    var_21 = max((((max(2811124862, 105684561)) | 0)), ((max((min(36882, -573613325)), (max(121549789, 553))))));
    #pragma endscop
}
