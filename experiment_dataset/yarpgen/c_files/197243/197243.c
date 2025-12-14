/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_7, var_3));
    var_12 -= 0;
    var_13 = (min(var_13, ((((-32767 - 1) ? var_10 : (-446200749 != var_7))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = arr_1 [i_0];

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_10 [i_2] [i_2] [i_2] [i_1] [i_1] = -20064;
                        var_14 = (((max(72, -26392))));
                        arr_11 [i_0] = ((((((-(arr_4 [i_3] [i_1] [i_0]))))) ? ((9223372036854775807 ? 1751959384 : 2137919794)) : ((((arr_6 [i_3 - 1]) >= var_1)))));
                    }
                }
            }
            arr_12 [i_0] [i_0] = (((((var_7 ? ((var_4 ? -2930785900573190225 : 7054010869870614327)) : var_10))) ? ((((arr_3 [i_1 - 1] [i_1 + 1]) && (arr_3 [i_1 + 1] [i_1])))) : (min((((arr_9 [i_0] [i_0]) ? var_1 : var_3)), (!2930785900573190224)))));
        }
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            var_15 ^= (((95 - (max(118, (arr_15 [i_0] [7] [i_4]))))));
            var_16 += (!-7023005411362983801);
        }
        arr_16 [5] [8] = (max(((((1 ? -1430187138756955617 : var_3)))), ((var_8 ? ((max((arr_7 [i_0] [i_0] [i_0] [0]), (-2147483647 - 1)))) : ((65535 ? 117440512 : var_1))))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_17 = ((~(((var_8 >> (var_9 - 1133606493))))));
        var_18 = (max(var_18, ((((((((var_9 ? 3942650136736394820 : var_8)) >> (((max((-2147483647 - 1), var_4)) + 2147483658))))) <= ((var_7 ? -1 : 4294967295)))))));
        arr_21 [i_5] = (max(var_2, (arr_18 [i_5] [i_5])));
        var_19 = var_1;
    }
    for (int i_6 = 2; i_6 < 20;i_6 += 1)
    {
        arr_25 [16] = 5013022615108884022;
        arr_26 [i_6] &= var_9;
        var_20 = ((((((min(var_0, -17134))) && (arr_24 [1] [4]))) ? (((max(var_9, var_3)) << (var_5 - 11554))) : (!65535)));
        var_21 += (max((0 <= var_2), 144));
    }
    #pragma endscop
}
