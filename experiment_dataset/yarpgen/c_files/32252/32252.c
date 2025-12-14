/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= ((var_0 && (((max(var_5, var_5))))));
    var_13 ^= (min(((((max(var_0, 8433180177777455048)) >= 8433180177777455048))), 386562875));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            arr_15 [i_2] = (((((var_11 - (arr_1 [i_0])) - (arr_11 [i_4 + 3] [0] [i_4 + 4] [i_3])))));
                            var_14 = (max(var_14, (arr_3 [i_0])));
                            arr_16 [i_0] [i_0] [i_0] [i_2] [5] [i_2] [i_0] = (386562867 >= 1558597647);
                            arr_17 [i_2] [i_3] [i_2] [i_2] [i_2] = 1800242251;
                            var_15 = (min(var_15, (((((((arr_7 [i_0] [6] [i_2] [i_4]) & (arr_6 [i_0] [i_2] [2])))) - (max(-8433180177777455049, -8433180177777455069)))))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_16 += var_4;
                            var_17 = (min(var_17, (~1)));
                        }
                        var_18 ^= ((~(7940121516275484346 + var_10)));
                        var_19 ^= (-1886234449 / 2736369648);
                        var_20 = (min(var_20, (((max(30216, 2736369644))))));
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                    {
                        var_21 += ((-var_3 * ((((((arr_19 [8] [i_2] [1] [2] [2] [i_0]) + var_9))) / ((-(arr_12 [i_0] [i_0] [i_6] [10] [i_0] [i_0])))))));
                        var_22 = (max(var_22, ((((max(((~(arr_5 [i_0]))), (((var_8 && (arr_11 [i_0] [i_0] [i_0] [i_0])))))) >> (((~-8433180177777455070) - 8433180177777455015)))))));
                        var_23 = (min(var_23, ((((((35602 | (7940121516275484346 + -2120742438)))) ? 111 : (0 < 386562875))))));

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_24 = (~(arr_9 [i_0] [i_1] [i_2] [i_7]));
                            var_25 |= -2509325333724306115;
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_26 = var_0;
                            var_27 = (!10972466196251581399);
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            var_28 = (min(var_28, (((!(arr_1 [i_1]))))));
                            var_29 = (min(var_29, (((arr_5 [i_0]) ^ (arr_27 [i_0] [i_1] [i_2] [i_6] [i_6])))));
                        }
                        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            var_30 += (max((max(var_9, (arr_12 [i_0] [6] [10] [i_10] [6] [i_0]))), (((max(3585776572257296448, 1459976491))))));
                            var_31 = (max(var_31, ((((7432935209937804711 ? 2736369649 : 0))))));
                        }
                    }
                    var_32 *= (max(-8433180177777455038, 15865079326584634519));
                }
            }
        }
    }
    #pragma endscop
}
