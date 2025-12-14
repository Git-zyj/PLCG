/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_9;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = (--4096);
        var_15 = (min(var_15, ((max((((257673978 < (~-1)))), 3358032958393767243)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_16 -= -4096;
            var_17 = (max(var_17, ((((((0 ? -15866 : (arr_2 [1] [1])))) ? 18529 : -7480783876897677512)))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_18 -= 59704;
                var_19 = (min(var_19, ((((arr_0 [i_2]) + (arr_0 [i_0]))))));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_20 |= (((15848 <= var_13) % ((4037293317 ? 1016 : -6))));

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_21 *= (212 || 4096);
                    var_22 = 127;
                }
            }
            var_23 *= (((arr_12 [i_2] [1] [i_2]) ? (arr_12 [i_0] [0] [i_0]) : (arr_9 [i_2] [i_2] [i_0])));

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                arr_21 [7] [i_2] [i_6] [i_6] = ((257673993 < 1) >= ((-14431 ? 1 : (arr_11 [i_0] [i_0]))));
                var_24 = (max(var_24, (~17733)));
                var_25 -= (((arr_19 [i_0] [i_0] [i_0]) ? 0 : 4037293317));
                var_26 = (((((arr_14 [i_6] [i_6] [i_2]) ? 0 : -6467411820199351373)) == (arr_5 [i_0] [i_6] [i_6])));
            }
        }
    }
    #pragma endscop
}
