/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    var_20 = (min(var_20, 24767));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                arr_7 [i_1] [i_1] [i_2] = (-9223372036854775807 - 1);
                var_21 = (max(var_21, (((((((max(1175566184108577449, 53621)) ^ (165 == 1)))) ? ((max(1, (((arr_3 [i_0] [10] [i_2]) || (arr_4 [12] [i_1] [i_2])))))) : (!24767))))));
            }
            var_22 = (((-1130149911 ? (!40779) : 40761)));
            var_23 = (12 ? (+-1365968480) : (~53613));
        }

        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            var_24 ^= (max((arr_5 [i_0 - 3] [i_3 - 2] [i_0 - 3]), -48));
            var_25 ^= (3913923483 || 1);
            var_26 = (min(var_26, (!53621)));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_27 ^= ((((!(arr_9 [6] [i_4]))) || (~14)));
            var_28 ^= 1;
        }
        var_29 = 1;
        arr_14 [i_0 + 1] = 2958290110888519918;
    }
    for (int i_5 = 3; i_5 < 14;i_5 += 1)
    {
        var_30 = (max(var_30, ((((1365968480 == (max(6709627579528787789, 1))))))));
        arr_17 [i_5 - 2] = (((max(-80, (~var_12))) ^ ((((~639624023) == (arr_16 [i_5 - 1]))))));
        arr_18 [i_5] [i_5] = (max((arr_16 [i_5 - 1]), (((arr_15 [i_5 - 1]) ? 24769 : (arr_15 [i_5 + 1])))));
        var_31 = (min(var_31, ((((((3913923497 ^ (arr_15 [i_5 - 3])))) || ((max((arr_15 [i_5 - 1]), (arr_15 [i_5 + 1])))))))));
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        arr_21 [i_6] = (arr_19 [i_6] [i_6]);
        var_32 = (max(var_32, ((max(1, (max(((max(24773, 34063))), (~-632123690090424300))))))));
    }

    /* vectorizable */
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        var_33 = -7613371820400961318;
        var_34 = (~-51);
    }
    var_35 = (min(var_35, ((((var_9 || 24767) ? (((var_14 ? var_1 : 65535))) : (((((max(var_17, var_11))) || (((-5578316237309613076 ? -421040370529910279 : 0)))))))))));
    #pragma endscop
}
