/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    var_19 = (((2199023255550 ? 12445066161115774309 : 43646)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                var_20 = (((((((arr_1 [i_0]) ? 43623 : var_8)) | 128)) >> 216172782113783808));
                arr_5 [i_0] [i_0] [i_0] = ((((var_12 || (arr_2 [i_0] [i_0] [i_0])))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_21 = (((14212929191434274411 ? var_1 : var_11)) >= (((var_7 ? var_9 : 77))));
                    var_22 *= (~((1986144946 - (var_14 % 137438953408))));
                    var_23 = 128;
                    var_24 = (min(var_24, ((((((+((var_1 ? (arr_2 [i_0] [i_0] [i_2]) : (arr_6 [i_0] [i_2] [i_2] [i_2])))))) ? (((!(arr_3 [i_0] [i_2])))) : (((!15360) & ((~(arr_7 [6] [i_2] [i_0] [i_0]))))))))));
                    arr_8 [i_0] [i_0] = ((4 ? (!32766) : 2305772640469516288));
                }
                arr_9 [i_0] [i_0] = ((((((((4 ? (arr_3 [i_0] [i_0]) : var_1))) ^ ((var_3 ? var_5 : 2905419620))))) ? 55376 : (((~var_14) << (((((arr_6 [i_0] [i_0] [i_0] [i_1 + 1]) ? 2823 : var_3)) - 2762))))));
            }
        }
    }
    var_25 = ((((var_4 && (((2823 ? -29161 : var_5))))) ? (((((var_7 ? var_7 : var_7))))) : var_14));
    #pragma endscop
}
