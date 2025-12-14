/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (((((min(3103189187, var_4)))) || (((((min(var_10, var_2))) ? var_9 : var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 += -7847438287730848613;
                    var_13 ^= ((3103189207 | (3103189218 < 3103189219)));
                    arr_8 [i_0] [i_1] = ((var_5 % (arr_3 [i_1] [i_0] [i_2])));
                }
            }
        }
    }
    var_14 = (max(var_14, ((((((1 || 1191778074) ? (min(7847438287730848627, 15)) : 57344)) != var_9)))));
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 20;i_4 += 1)
        {
            {
                var_15 = (((max((max(var_8, 4761840626400260781)), ((var_6 ? 1191778124 : 5161771602187734616))))) ? (arr_11 [i_3]) : ((3103189226 ? ((min((arr_10 [i_3] [i_3]), 4266825131270843429))) : 18446744073709551600)));
                arr_13 [i_3] [i_3] [i_3] = ((((var_8 ? 2409 : var_0)) << ((((((min(var_2, (arr_9 [i_3])))) ? ((1191778067 ? (arr_10 [i_3] [i_4 + 1]) : 2398)) : ((max(2047, -30441))))) - 2035314050))));
                /* LoopNest 3 */
                for (int i_5 = 4; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_23 [i_3] [i_6] [i_5 - 3] [i_6] [i_3] = (((((-7847438287730848606 ? -7847438287730848583 : 1))) && (((arr_19 [i_3] [1] [i_5] [i_6]) || var_0))));
                                var_16 &= (min(-5161771602187734611, ((max(65516, (min((arr_20 [i_3] [i_4] [i_5] [i_4] [i_5]), 3103189222)))))));
                                var_17 = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
