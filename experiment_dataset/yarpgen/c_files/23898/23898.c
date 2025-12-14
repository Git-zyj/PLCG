/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((((((12828036584580950018 ? var_2 : 64))) ? (((var_10 ? var_7 : var_14))) : (max(12828036584580950018, 98)))), (((min(var_2, 15613627282208377196)) % var_4))));
    var_16 = (min(var_16, var_2));
    var_17 = var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 = 15613627282208377196;
            arr_6 [i_0] [i_1] [i_1] = (max((((arr_4 [i_1]) ? (((arr_3 [i_0]) ? (arr_0 [6]) : var_4)) : (arr_1 [i_0]))), (((12828036584580950019 ? 1 : 65317)))));

            for (int i_2 = 4; i_2 < 17;i_2 += 1) /* same iter space */
            {
                var_19 = ((((max(((4294967295 ? -93639191 : 4398038122496)), ((((arr_0 [i_0]) ? var_8 : var_1)))))) ? (arr_2 [i_1]) : 21));
                arr_9 [i_0] [1] [i_0] = (((var_0 + var_3) ? 18446462598732840960 : ((((((arr_5 [i_0] [i_0] [i_2]) ? (arr_5 [i_0] [i_0] [i_0]) : var_11))) % (min(var_11, 7))))));

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_14 [i_0] [8] [i_1] [i_0] [11] = -2828578512360448233;
                    arr_15 [i_0] [i_0] = var_1;

                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        arr_18 [i_3] [i_0] [4] = ((((var_0 ? (arr_5 [i_0] [i_0] [i_0]) : (arr_2 [i_0])))));
                        arr_19 [1] [i_1] [i_2] [1] [i_0] [10] [17] = -93639183;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_3] [i_0] = (arr_8 [i_0]);
                        arr_23 [i_3] [i_0] = (arr_11 [i_0] [i_1] [i_3] [i_3] [i_1]);
                        var_20 *= ((1 ? 12 : 18446744073709551600));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_1] [i_1] [i_2] [11] [i_0] = (max(((min((((!(arr_1 [i_0])))), 3614137112))), var_8));
                        var_21 = (min(var_21, (((((max((arr_10 [14] [i_1]), ((var_7 ? 5963 : 13))))) ? (((~((5618707489128601566 ? 680830183 : 0))))) : var_4)))));
                        var_22 += ((((((((281474976710654 ? 1 : -10445))) ? (((var_2 ? var_3 : var_10))) : (min(77, 2))))) ? ((281474976710650 ? -1 : 3951659396221938197)) : ((((min(9318503741708992450, 65526))) ? 5275 : 692198631186838333))));
                        var_23 += (((arr_2 [i_6]) ? (arr_16 [i_6] [i_3] [i_2] [i_1] [i_0]) : (max((min(1, 15613627282208377196)), 7))));
                        var_24 = (min(var_24, var_8));
                    }
                    var_25 ^= max(2187, -3947519159645044046);
                    var_26 = (min(var_26, (arr_16 [i_0] [i_1] [i_1] [i_2] [9])));
                }
                arr_27 [i_0] = var_2;
            }
            for (int i_7 = 4; i_7 < 17;i_7 += 1) /* same iter space */
            {
                var_27 += (min(3, 5618707489128601563));
                arr_30 [i_0] [2] [i_0] [i_7] = (arr_25 [i_0]);
                arr_31 [i_0] = (max((min((arr_16 [i_0] [4] [i_0] [16] [i_0]), (((1307952248 ? 0 : 219))))), (((1429129390 ? 54043195528445952 : 12361)))));
                arr_32 [0] &= 4;
            }
            for (int i_8 = 4; i_8 < 17;i_8 += 1) /* same iter space */
            {
                var_28 = ((!var_1) || (1 || 0));
                var_29 += (((max(12828036584580950073, (arr_5 [i_8 - 4] [4] [i_8 + 1]))) ^ (arr_5 [i_8 + 1] [4] [i_8 - 4])));
                arr_36 [i_0] [0] [i_0] [i_0] = 23;
            }
            var_30 = (max(var_30, ((min(67553994410557440, -21)))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            var_31 = (max(var_31, ((((((arr_8 [i_9]) ? var_0 : -18391))) ? (arr_0 [i_0]) : var_11))));
            var_32 = (min(var_32, (((-1 ? var_8 : -54043195528445952)))));
            arr_41 [i_0] [1] = ((var_12 ? (arr_8 [i_0]) : var_1));
            arr_42 [i_0] [i_9] = 3;
        }
        var_33 = (min(var_33, (arr_28 [i_0] [i_0] [i_0])));
        var_34 += 0;
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {

        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            arr_48 [i_10] [i_11] [i_10] = (max(((((var_8 ? var_4 : var_9)))), 36));
            var_35 ^= var_4;
            var_36 *= ((((min(var_3, -1))) ? (((((max(19143, var_14))) && (((-12049 ? var_10 : (arr_7 [i_10]))))))) : (((((arr_38 [8] [i_10]) ? var_14 : 38))))));
        }
        var_37 = var_3;
        var_38 = (max(var_38, (arr_20 [i_10] [i_10] [8])));
    }
    var_39 = ((var_0 ? (((((var_11 ? var_4 : 127))) ? var_12 : ((var_8 ? 12828036584580950072 : 4294967258)))) : (((23 >> ((((var_13 ? var_10 : var_0)) + 374654841)))))));
    #pragma endscop
}
