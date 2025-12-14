/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((max(var_4, var_7)))) + ((((max(558446353793941504, 53))) ? 8643822587647231633 : (8643822587647231633 + 0)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (min(((4294967270 ? 8643822587647231633 : -9)), ((min((((arr_6 [i_0] [i_1] [i_1]) || var_1)), var_8)))));
                var_14 = (((((46 ? 1 : 133169152))) || ((min(var_2, -var_10)))));
                arr_7 [i_0] [i_0] = ((((min(((var_6 ? var_11 : (arr_3 [i_0]))), -32))) ? (((((min((arr_2 [i_1]), 6422))) ? (((!(arr_2 [i_1])))) : (((arr_4 [i_0]) ? var_9 : (arr_5 [i_1] [20] [i_0])))))) : (min(0, -87))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_15 = (2408594078 ? -2744221345122728990 : 86);
        arr_11 [2] = ((((((arr_5 [i_2] [i_2] [i_2]) ? var_3 : var_8))) ? (min(-82, 2320288857042778321)) : ((max(255, 1194169552)))));
        arr_12 [i_2] = (min(((((min((arr_1 [i_2]), (arr_10 [1] [i_2])))) ^ ((~(arr_5 [i_2] [i_2] [i_2]))))), (((((arr_3 [1]) ? (arr_6 [i_2] [i_2] [i_2]) : (arr_5 [i_2] [i_2] [i_2])))))));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    var_16 ^= 4294967286;
                    var_17 &= (((min(27608, (0 >= var_5))) ? -25 : (((arr_4 [16]) ? var_0 : var_7))));
                    var_18 = ((min((max(var_0, 1557416851)), ((((-9223372036854775807 - 1) ? var_6 : (arr_17 [i_3])))))));
                }
            }
        }
        arr_18 [i_2] [i_2] = (((((((max(0, 68))) ? 3664210454 : (((min(1, 187))))))) ? (((((864581089559031762 ? 37919 : -87))) ? -var_3 : (min(var_4, var_9)))) : ((max(-82, 8)))));
    }
    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {
        var_19 = (max(var_19, ((((((((((arr_0 [i_5]) * (arr_21 [i_5] [i_5 - 2])))) ? (((arr_5 [1] [i_5] [i_5]) ? (arr_19 [i_5] [i_5]) : 1)) : var_5))) ? (min((((2142562934 ? 1 : 65535))), (arr_19 [i_5 - 2] [i_5 - 1]))) : (((~((min(-102, 125)))))))))));
        arr_22 [i_5] = (min(0, 32));

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            arr_26 [i_5] [i_6] = (((((-78703041 ? 1 : 28818))) ? (min((-87 >= 242), var_9)) : (27608 / 1)));
            var_20 = (((max((min((arr_0 [i_6]), var_11)), (~16)))) ? (max(122880, 1)) : -var_10);
        }
    }
    var_21 = min(var_4, (min(var_2, var_3)));
    #pragma endscop
}
