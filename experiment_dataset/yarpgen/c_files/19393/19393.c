/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(min(((1 ? var_0 : var_10)), var_8))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = 84129229;
        var_17 ^= (((-(((arr_1 [i_0]) ? 45255 : (arr_0 [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_18 = (arr_4 [i_1] [i_2]);
                        var_19 = (max(var_19, ((((((~(arr_9 [i_0] [1] [i_0 + 1] [i_1 + 3] [i_1 + 3] [i_1 + 3])))) ? ((((!((max((arr_5 [i_0] [i_1]), 7))))))) : (arr_5 [i_0 + 2] [i_3]))))));
                        var_20 = (max(var_20, ((min(((~(min((arr_8 [i_0] [i_1] [i_2] [4]), var_9)))), ((min((arr_6 [i_1] [i_1] [i_1] [4]), ((((arr_9 [i_1] [8] [i_1] [i_1] [i_1] [i_1]) ? (arr_6 [i_0] [i_1 + 1] [i_2] [2]) : (arr_9 [8] [6] [i_2] [i_3] [i_3] [i_2]))))))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                {
                    var_21 *= ((-22 ? (arr_9 [i_0 + 2] [i_4] [i_0 - 1] [i_5 - 1] [i_0 + 2] [i_0 + 2]) : 245));
                    var_22 = 12840;
                }
            }
        }
        var_23 = (min(var_23, (((((!(((var_0 ? 227 : 45499))))) ? ((min((9 << 0), ((2710370188617951151 ? var_6 : (arr_7 [i_0])))))) : 14838291223201229336)))));
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            {
                var_24 = 2519836855;
                var_25 = (-(((!(arr_16 [i_6 - 1])))));
                var_26 -= ((+(((arr_16 [i_6 + 1]) ? (arr_16 [i_6 + 1]) : (arr_16 [i_6 + 1])))));
                var_27 ^= ((((((var_2 ? 79360321127325881 : (arr_15 [i_6]))))) ? -45499 : ((min((!var_13), (arr_16 [i_6 + 1]))))));
            }
        }
    }
    var_28 &= var_4;
    #pragma endscop
}
