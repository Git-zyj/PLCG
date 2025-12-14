/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (min(((((max(var_11, var_7))) << ((((min(54903, var_1))) - 89)))), ((((3575749934 ^ var_4) || ((max(var_11, var_0))))))));
    var_13 = (((max((max(var_6, var_2)), (var_8 || var_6))) + ((min((var_10 / var_3), (32443 && -1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_14 ^= ((((((arr_1 [i_1]) || var_3))) | ((((arr_5 [i_0] [i_0] [i_1]) >= (arr_8 [i_0]))))));
                    var_15 = ((((((var_8 == (arr_6 [i_0] [i_1] [20]))))) > (var_7 & var_5)));
                    var_16 = (((33093 < 33092) != ((42 * (arr_1 [i_2])))));
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_17 = ((((((((var_9 * (arr_0 [8])))) || ((((arr_11 [i_4] [8] [i_0] [i_0]) | (arr_2 [i_4]))))))) & ((((384 | 0) == ((((arr_9 [i_0] [i_0] [i_3] [i_4]) < (arr_12 [i_0])))))))));

                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            var_18 ^= (max((max(((max((arr_15 [16] [i_5] [i_4] [i_3] [2] [i_0]), (arr_16 [1] [i_5] [2] [i_3] [13] [i_0])))), (min(var_3, var_2)))), (((((arr_0 [i_3]) | var_8)) ^ (-45 | -4)))));
                            var_19 = (min((min((max(-8919, (arr_3 [i_0] [i_4]))), ((min(var_9, var_11))))), ((((((((arr_4 [i_3] [i_1] [i_1]) == (arr_8 [i_4]))))) > (max(var_10, var_10)))))));
                            var_20 = (((min((31413 & 8907992648798826527), 17454000126018723947)) >> ((((((-5320 <= (arr_0 [i_4])))) < (((arr_5 [11] [i_1] [i_3]) / (arr_11 [i_1] [i_3] [4] [i_5]))))))));
                            var_21 ^= (max((((((min(0, -32757))) == (((arr_11 [i_0] [i_3] [i_4] [i_5]) + (arr_0 [i_5])))))), (max((min(var_3, (arr_10 [i_0] [i_0] [i_3] [11]))), ((max(var_1, var_11)))))));
                            var_22 = (max(var_22, (min(((((var_6 - (arr_8 [i_4]))) * (var_9 < 81))), ((((min((arr_5 [i_4] [i_1] [i_3]), (arr_2 [i_1])))) << (var_5 - var_5)))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_23 = max(((((((((arr_15 [i_0] [i_0] [i_0] [i_0] [10] [i_0]) + 2147483647)) << 0))) % (min(var_8, 16104)))), (((min(9538751424910725088, 8907992648798826527)) >> (((min(65529, (arr_14 [11] [i_1] [i_3] [i_6] [i_7]))) - 65527)))));
                                var_24 = ((((max((max((arr_16 [i_0] [i_1] [i_3] [i_3] [i_7] [i_7]), (arr_4 [i_0] [i_1] [i_0]))), (var_8 < var_11)))) + (max((64 & var_1), (((719217362 > (arr_20 [i_6] [i_6]))))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    var_25 = (((40634 <= var_9) && (((3575749935 >> (62118 - 62107))))));
                    var_26 -= (((var_4 << (var_3 - 12799))) - (var_5 != 986954491));
                }

                for (int i_9 = 1; i_9 < 21;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_27 = (max((min((min((arr_27 [i_10] [i_10] [i_9 + 1] [i_10]), (arr_27 [i_0] [i_0] [i_0] [i_0]))), (max((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_11)))), ((((((min(375, 65532)))) == (min(var_4, var_3)))))));
                                var_28 += (((((((max(var_6, 119)))) - (min(var_4, 32635)))) * ((((((((arr_24 [i_11] [i_10] [i_0] [i_0]) * var_5))) || ((max((arr_20 [i_0] [i_9]), var_9)))))))));
                            }
                        }
                    }
                    var_29 *= (max((8219 & 12893017702339010086), ((max((16383 <= -4513), -21936)))));
                }
            }
        }
    }
    #pragma endscop
}
