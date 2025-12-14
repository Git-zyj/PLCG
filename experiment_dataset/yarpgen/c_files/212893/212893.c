/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 30592364;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((-(18446744073709551611 != 10)));
        var_15 = (max(var_15, ((((((((arr_0 [i_0] [i_0]) == var_13)))) == ((~(arr_0 [i_0] [i_0]))))))));
        var_16 = (min(var_16, (!-var_11)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = (min(var_17, -var_8));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_18 = (min(var_18, (~4)));
            var_19 = (((arr_7 [i_2] [i_2]) >> (((arr_7 [i_1] [i_2]) - 2990819572697060103))));

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_20 = 18446744073709551612;
                arr_10 [i_1] [i_2] [i_1] |= (~26);
            }
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                var_21 = (-var_5 & 31);

                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_22 = -2587257709896090644;
                    arr_16 [i_4] [i_4] [i_1] [i_4] = (arr_14 [i_4] [i_2] [i_4]);
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_23 = (max(var_23, (((var_4 - ((36 << (((arr_13 [i_1] [i_2] [i_6] [i_1]) - 5506)))))))));
                    var_24 = (min(var_24, (((-(arr_11 [i_2] [i_2] [i_2] [17]))))));
                }
            }
            arr_19 [i_1] [i_1] [i_2] = ((((arr_14 [i_1] [i_1] [0]) % 178)));
            var_25 = 12102301740728658707;
        }
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
            {
                var_26 = (max(var_26, ((((-(arr_6 [i_1] [i_7])))))));

                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    arr_27 [i_8] = ((-var_2 ^ (!var_1)));
                    var_27 ^= (min(var_9, (arr_21 [i_7])));
                }
                arr_28 [i_8] [i_7] [i_8] = (((~(arr_22 [i_8] [i_8] [i_7] [i_1]))) ^ (~18446744073709551586));
            }
            for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            arr_37 [i_12] [i_12] [i_10] [i_1] [i_10] [i_7] [i_1] = ((-(var_10 * 1)));
                            arr_38 [i_1] [i_7] [i_10] [i_11] [i_12] = ((+((((arr_33 [i_10] [3] [i_10] [i_7] [i_10]) != (~var_10))))));
                            var_28 = (max(var_28, (var_8 > var_12)));
                        }
                    }
                }
                var_29 = max((!var_9), (min((arr_35 [i_1] [i_7] [i_10] [i_10] [i_7] [i_1] [i_10]), (arr_35 [i_1] [i_7] [i_10] [i_10] [i_1] [i_1] [i_1]))));
            }
            arr_39 [i_1] [i_7] = (-208717662 != 178);
            arr_40 [i_7] [i_7] [i_1] = min((!185), (max(var_11, 18446744073709551567)));
        }
    }
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        arr_43 [i_13] = (max(((((-(arr_30 [i_13] [i_13] [i_13]))))), (min((arr_6 [i_13] [i_13]), (!var_2)))));
        var_30 = (!-28012);

        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            var_31 = (max(var_31, (max(var_5, (arr_25 [i_13] [i_14] [i_13] [i_14])))));
            var_32 = ((!((min(-3374, var_11)))));
            var_33 = (min(var_33, var_5));
        }
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            arr_49 [i_13] [1] = (~var_2);
            var_34 = (max(var_34, (~var_6)));
            var_35 = (max(var_35, (+-446667994)));
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 23;i_16 += 1)
    {
        arr_52 [i_16] = 15859486363813460986;
        var_36 ^= (1 != 18446744073709551584);
    }
    #pragma endscop
}
