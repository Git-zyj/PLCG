/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (min(var_10, var_11));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [i_0] &= ((30006 << (((max(-1, (min(var_11, -1413917515)))) - 4294967286))));
        arr_5 [i_0] = ((((133169152 ? -500893325 : 27664))) > ((94 ^ (15639435199617640575 | 25))));
        arr_6 [i_0] [18] = (+((((((arr_3 [0] [i_0]) % 3365774368))) ? ((min(21, var_16))) : 1)));
        arr_7 [i_0] [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_12 [10] = -101;
        arr_13 [6] [3] = (min((15762598695796736 <= 1), (max(122, 4294967292))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_16 [i_2] = ((min(-100452463, 0)));
        arr_17 [3] [3] = (max(8, 4095800137337697626));
        arr_18 [4] [4] = (max((max(21, 21)), -27));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_26 [i_3] = (~65517);
                    arr_27 [i_4] [i_4] &= (133 || -2926);
                    arr_28 [i_2] [i_2] [i_2] [12] = (arr_1 [i_4]);
                    arr_29 [i_2] [i_3] [i_3] [i_4] = (~65517);
                }
            }
        }
        arr_30 [i_2] = (min((((arr_14 [i_2] [i_2]) ? ((48 ? (arr_14 [16] [16]) : -79)) : (arr_0 [i_2]))), ((((var_12 % var_15) < (1946620900 - -15650))))));
    }
    #pragma endscop
}
