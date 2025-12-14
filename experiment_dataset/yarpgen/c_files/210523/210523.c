/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_13 ? var_8 : ((9007199237963776 ? 132 : 23693)))) <= (min(((9496101520662796336 ? var_13 : (-127 - 1))), (~var_8)))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 1] = 126;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = ((-(((((((arr_1 [i_2]) < 9007199237963773)))) | (arr_3 [i_0] [i_1] [i_2])))));
                    var_17 = var_6;
                    var_18 = 12555967481670619986;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_19 &= (min((((((var_10 >> (var_12 - 1949062607))) >> (((min(var_3, (arr_9 [i_0] [i_6]))) - 11646736106608130291))))), (min(1, (arr_14 [i_0] [i_5 + 1] [i_4] [i_0 - 1] [i_4] [i_5])))));
                                var_20 = (min(((~(arr_15 [i_0 + 1] [i_3] [i_4] [i_5 + 2] [i_5 + 2] [i_6]))), (((arr_15 [i_0 - 1] [i_3] [i_4] [i_5 + 1] [i_6] [i_3]) ? (arr_15 [i_0 + 1] [i_3] [i_0 - 1] [i_5] [i_6] [i_3]) : (arr_15 [i_0] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0] [i_0])))));
                                arr_18 [i_0] [i_6] [i_4] [i_5] [i_6] = ((((min(255, (arr_16 [i_0] [i_6] [i_0 + 1] [i_5 - 1])))) ? ((var_0 ? ((var_8 ? 18437736874471587849 : 9007199237963776)) : (((15374463431604999483 ? var_13 : (arr_7 [i_0])))))) : (((max(15374463431604999465, 1)) << (((arr_3 [i_0] [i_0 + 2] [i_5 + 1]) - 3393143345))))));
                            }
                        }
                    }
                    var_21 *= (min(((1 >> (30484 - 30468))), (((arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1]) + (arr_17 [i_3] [i_0 + 1])))));
                    var_22 -= ((~(((max(-26012, (arr_3 [i_4] [i_0] [i_0])))))));
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
    {
        arr_21 [2] |= (((min(5890776592038931630, 2648473485948853198)) >= (((1 >> (((~var_3) - 1243389151040523741)))))));
        var_23 += (((((~(arr_5 [i_7 + 2] [i_7] [i_7 + 2])))) || var_2));
        arr_22 [i_7] = (((arr_9 [i_7] [i_7 + 1]) * ((max((arr_17 [i_7] [i_7 + 2]), (arr_17 [i_7] [i_7 + 1]))))));
        var_24 = ((~(((16 ? 23896 : 7511773699770380604)))));
    }
    var_25 = ((((var_5 ? (1 > 3072280642104552133) : (var_13 % -27015))) >= (min(var_11, (~var_7)))));
    #pragma endscop
}
