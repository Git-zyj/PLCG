/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = ((((~var_13) ? (min(var_13, 157)) : -1615372389514225479)));
                var_20 -= ((!((min(((var_18 ? (arr_3 [4]) : -6917460661334925443)), (-6917460661334925457 % 10186))))));
                var_21 = var_0;
                arr_4 [i_0] [i_0] = (((((2975729415 & (arr_0 [i_0] [i_1]))))) & ((((1319237880 ? -127 : 2975729436)))));
            }
        }
    }
    var_22 = (min(var_22, var_8));
    var_23 = 7705255845697443479;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                var_24 -= ((3345905789 >> (((arr_6 [i_2]) / (((var_15 ? 65510 : var_2)))))));
                arr_13 [i_2] = (((((((arr_11 [i_3]) ? 9827985933703983780 : var_4))) ? ((min(-6917460661334925443, (arr_0 [i_3] [i_2])))) : 18185718218518054419)));
                arr_14 [i_3] |= (((min(65526, (-2147483647 - 1)))));
                var_25 ^= ((((2313616434 <= (~1038))) ? (((((min(-104, (-127 - 1))))) / (min(var_5, 5)))) : 17));
                arr_15 [i_3] = (((((((min(50500, 2554159454))) ? -1615372389514225478 : 13149))) ? ((((16383 && ((((arr_10 [i_3]) ? 0 : -1615372389514225471))))))) : ((((min(-88, 4250566276))) ? ((var_7 & (arr_11 [i_2]))) : (arr_6 [i_3])))));
            }
        }
    }
    #pragma endscop
}
