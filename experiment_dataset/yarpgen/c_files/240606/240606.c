/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((+(((-2099692032690453881 + 9223372036854775807) >> (99 - 75)))));
                    var_16 = (min(var_16, (((((((-19 > 35184363700224) ? (var_8 && -35184363700224) : 35184363700224))) ? 13391 : ((((max((-32767 - 1), (arr_7 [i_0] [i_1] [i_2])))) ? 41194 : (((!(arr_2 [i_2])))))))))));
                    var_17 |= 1630750155;
                }
            }
        }
    }
    #pragma endscop
}
