/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_17;
    var_19 = var_17;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = ((-1644715393 ? (arr_2 [i_0] [i_1]) : ((-1885940445 ? 246 : 8))));
            var_20 = (!-1644715369);
            var_21 = (max(var_21, (((0 > (arr_3 [i_1 - 1]))))));
            var_22 = (min(var_22, ((~(var_13 + 5804246324219057674)))));
        }
        var_23 *= (max((min((arr_3 [i_0]), var_7)), var_3));
        var_24 = (min((max((arr_4 [i_0]), (arr_5 [i_0] [i_0] [i_0]))), (arr_5 [i_0] [i_0] [i_0])));
        var_25 -= (min(((((min(15, var_16))))), ((-1362363649304412055 ? (((arr_1 [i_0] [i_0]) ? 18903 : var_1)) : var_17))));
    }

    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        arr_9 [i_2] = ((-((max((arr_7 [i_2 + 2]), 65535)))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_26 ^= (max(((1141588519 ? ((21855 ? (arr_10 [1] [1]) : 8692311508844182348)) : (arr_11 [2] [i_2 - 1] [i_2 + 2]))), ((max(-1644715369, (arr_8 [i_3]))))));
            var_27 = 3153378798;
            arr_12 [i_3] [i_3] = ((((max(-105, (var_15 & 5544249513909073051)))) ? ((min(var_16, -83))) : (((((!(arr_7 [i_3])))) - -119))));
        }
        /* vectorizable */
        for (int i_4 = 3; i_4 < 16;i_4 += 1)
        {
            arr_15 [i_2 + 1] [i_4] = ((10760068993343888677 ? (arr_7 [i_2 + 1]) : 49));
            arr_16 [i_4] [i_4] = (15 < var_9);
            arr_17 [i_2] [i_4] [i_2] = 806958172;
        }
        arr_18 [i_2] = (arr_13 [i_2 + 1] [0] [16]);
        var_28 = ((min(18066442793109684967, ((min(var_1, (arr_13 [6] [1] [i_2])))))) < ((((arr_13 [i_2] [8] [i_2 - 1]) ? ((min(22988, 4294967280))) : (min((arr_10 [0] [i_2]), var_1))))));
        var_29 = (((!var_16) % var_12));
    }
    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {
        var_30 = (max((!14822212082567365875), ((2040159319 ? 32767 : (arr_19 [i_5 - 1] [i_5 - 1])))));
        arr_21 [1] &= (((max(-105, (-1644715369 - 83)))) ? -1362363649304412057 : (arr_8 [i_5 + 1]));
        var_31 *= 1389763835;
    }
    var_32 = (min((max((min(var_5, var_9)), var_1)), (min(var_13, var_3))));
    #pragma endscop
}
