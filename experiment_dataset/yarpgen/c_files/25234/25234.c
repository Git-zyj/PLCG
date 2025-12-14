/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_14 ^= ((-((((max((arr_3 [i_0 + 1]), (arr_3 [i_0 + 2])))) & (arr_3 [i_0])))));
        var_15 &= ((max(1, -99)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_16 = (-17418778026462387805 ? (169 ^ -107672745) : 3183768796162130399);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_17 = (min(var_17, (arr_0 [i_2] [i_3])));
                    var_18 ^= (!var_8);
                    var_19 = (arr_8 [i_3] [i_1] [i_2]);
                    var_20 = (arr_8 [i_1] [i_2] [i_3]);
                    arr_10 [i_1] [i_1] [i_1] [i_1] = 926034139229140775;
                }
            }
        }
        var_21 |= ((-((~(arr_5 [1])))));
        var_22 = (min(var_22, 3));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_23 = (18446744073709551609 <= 2);
        var_24 *= (arr_3 [i_4]);

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_15 [i_5] [i_5] = ((((((arr_0 [i_4] [8]) ^ (arr_0 [i_4] [i_5])))) ? ((min((-127 - 1), 13))) : ((15972899252325174530 ? -61 : 22))));
            arr_16 [i_5] = (max(1812760466, 202));
        }
        arr_17 [i_4] [i_4] &= (min((arr_4 [i_4] [i_4]), (min((arr_4 [i_4] [i_4]), (arr_4 [i_4] [11])))));
    }
    var_25 += (((min(((var_2 ? var_8 : 15088688826526279187)), 0)) >= 17));
    var_26 &= (max((max((var_1 << 0), var_6)), var_9));

    /* vectorizable */
    for (int i_6 = 2; i_6 < 16;i_6 += 1)
    {
        var_27 += ((-60 || (arr_19 [4])));
        var_28 = (max(var_28, (arr_18 [i_6] [i_6 + 4])));
        var_29 = ((var_10 * (arr_19 [i_6 - 2])));
    }
    for (int i_7 = 2; i_7 < 23;i_7 += 1)
    {
        var_30 = (((((-(var_8 == 167)))) < (arr_24 [i_7 + 1] [i_7 + 1])));
        var_31 ^= (((((max(7451, (arr_24 [22] [i_7 - 1]))))) + ((max((arr_22 [i_7 - 2]), (arr_22 [i_7 - 1]))))));
        var_32 = ((var_4 != (arr_22 [i_7])));
    }
    #pragma endscop
}
