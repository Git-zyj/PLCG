/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((((var_6 ? var_1 : 42)) - (((var_0 ? var_15 : 14)))))) ? ((1 ? 3445251627 : -65)) : ((((((27790 ? 242 : 18446744073709551590))) ? 230 : (203 || var_1))))));
                arr_6 [i_0] [i_0] [i_1] = ((((((((25215 ? 9223372036854775807 : 27))) ? 18446744073709551596 : ((2343621807637620062 ? 14 : 192937300))))) ? (37396 << 1) : ((((0 == ((-75 ? var_9 : 10))))))));
                var_17 = (max((max(26, 64)), -1513191785704301164));
                var_18 = (max(var_18, (((((2604431042 ? 25 : 0)) % (((max(18, 29306)))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_4] [i_4] = -1513191785704301135;
                    var_19 = (!var_11);
                    arr_14 [i_2] [i_2] [i_3] [i_3] |= 164;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                var_20 = (~115);
                var_21 |= var_6;
            }
        }
    }
    #pragma endscop
}
