/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((~(((min(var_4, 1)) >> (((arr_1 [8] [i_1]) + 179611165))))));
                    var_18 = ((((max((!23888), var_12))) && (!23884)));
                }
            }
        }
    }
    var_19 = (max((max((((8418 << (7467591128445935307 - 7467591128445935307)))), (min(7467591128445935307, 1)))), (((((max(var_0, var_16))) / (max(1, var_2)))))));
    var_20 = (((max(1425787200, 7467591128445935306)) | ((~(var_7 | var_4)))));
    #pragma endscop
}
