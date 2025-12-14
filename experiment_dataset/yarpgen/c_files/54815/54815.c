/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] = (((5404002881403573447 ? -24386 : 125)));
                    arr_11 [i_0] [7] [i_0] [i_0] = (((-1358231253781576147 ? 1670343759 : (arr_2 [i_0] [i_1]))));
                    arr_12 [i_0] [i_1] [i_0] = ((((((!((((arr_6 [i_0] [i_0]) % 193))))))) & (max(((~(arr_1 [1]))), ((min(var_0, (arr_0 [i_0]))))))));
                }
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    var_20 = 9223372036854775807;
                    arr_16 [i_0] [i_1 + 1] [i_3] = ((((min(var_0, (~8286606429229641428)))) ? (max(13253, -5404002881403573443)) : (arr_4 [i_0])));
                    var_21 = (-53 ? -53 : 0);
                    var_22 = ((((((max(1369160819274908363, (arr_3 [i_1 - 1])))))) ^ (min((4281630424 < 4572032405112420160), (arr_5 [i_0 + 3])))));
                    var_23 = (((~169) ? -14588346797601179618 : ((((((arr_9 [i_0]) < (arr_0 [i_0]))))))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_24 = (arr_7 [i_0]);
                    var_25 |= (((arr_17 [i_1]) >> ((((4572032405112420160 ? (arr_15 [i_0]) : 52)) - 1041546215))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_26 |= -962021902589776314;
                                var_27 = (((arr_13 [i_1 + 1] [i_5] [i_0 - 1]) ^ (arr_13 [i_1 - 1] [i_4] [i_0 - 1])));
                            }
                        }
                    }
                    var_28 = 2954738000;
                }
                var_29 = -2169251369368066021;
                arr_27 [i_0] [1] [i_1] = (arr_21 [i_1] [11] [i_0 - 1] [i_0] [14] [14]);
                var_30 = (arr_17 [i_0]);

                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    arr_30 [i_0] = (arr_21 [1] [0] [1] [i_7] [i_7] [i_7]);
                    var_31 = ((min(30629, (arr_17 [i_0]))));
                }
            }
        }
    }
    var_32 = var_14;
    #pragma endscop
}
