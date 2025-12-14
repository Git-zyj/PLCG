/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((max(63, 115)), var_4));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_19 = 16678079015269582154;
            arr_4 [i_0] [i_0] [i_0] = ((-118 ? 121 : var_10));
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] [i_4] = (var_5 + ((97 ? var_1 : ((9744258359424773454 ? 16678079015269582153 : 28672)))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = (((((((max(28680, 117))) ? (((var_14 ? -123 : 47879))) : ((1853054477 ? 13 : var_13))))) ^ ((99 & ((-66 ? -116 : 134217727))))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_18 [i_5] = (max(28680, 28656));
        var_20 = 127;
    }
    for (int i_6 = 3; i_6 < 16;i_6 += 1)
    {
        arr_21 [i_6] = (((689168305 / var_11) * (((var_10 ? var_17 : (8533084886348302427 / var_5))))));
        arr_22 [i_6] = ((12845539983189869504 ? -1560473189 : 6074822216254330371));
        var_21 = ((29241 | (((((-127 ? -28645 : -26057))) ? ((12845539983189869518 ? 98 : 62)) : -12131))));
    }
    #pragma endscop
}
