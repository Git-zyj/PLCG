/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = ((-1440999917 ? ((((max(149, var_4))) << ((((arr_1 [i_1]) < -822979926))))) : (((arr_6 [i_0] [i_2] [i_2]) ? var_7 : ((min(var_7, (arr_6 [i_0] [i_2] [i_0]))))))));
                    arr_9 [i_2] = (((11038344800036162515 < 1) >= ((var_8 ? var_11 : 8157519251382814500))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                var_16 = (((((arr_11 [i_3 + 3]) ? (arr_11 [i_3 + 1]) : (arr_11 [i_3 + 2]))) >= (arr_11 [i_3 + 1])));
                arr_14 [i_3] = (arr_11 [i_4]);
                var_17 = ((49452 ? 170 : 822979935));
                arr_15 [i_3] [0] [i_3] |= (((~(arr_13 [i_3 + 1] [i_4]))));
            }
        }
    }
    var_18 = (((min(((var_9 ? var_1 : var_13)), var_11))) ? (((((((var_11 ? var_3 : var_5))) || (((var_7 ? var_6 : var_3))))))) : ((1790936620 ? ((3171882333834886738 ? var_11 : var_4)) : var_9)));
    var_19 = (max(var_19, (((255 ? var_3 : -88)))));
    #pragma endscop
}
