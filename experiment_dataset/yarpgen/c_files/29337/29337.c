/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (!0);
    var_17 ^= var_3;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_18 = (min((arr_1 [i_0]), ((var_11 ? var_8 : (arr_0 [i_0] [i_0])))));
        var_19 = (29797 << ((((~((35738 ? 3236226042 : 1058741272)))) - 1058741243)));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_20 ^= ((var_3 ? ((((arr_4 [i_1] [i_1]) > (arr_0 [i_2] [i_1])))) : (arr_6 [18] [18] [i_1])));
            arr_7 [i_2] [i_2] [i_1] = (min((arr_4 [i_1] [i_2]), var_4));
            var_21 ^= (arr_6 [4] [i_1] [i_1]);
            var_22 = ((var_15 >= (!635826667)));
            arr_8 [i_1] [i_1] [i_2] = (((((max(1644440197, 1892088344))) || ((min(var_3, (arr_4 [i_1] [i_1])))))) ? (~27) : ((((!(arr_5 [i_1] [i_1] [i_1]))))));
        }

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_12 [18] [i_3] = ((((((arr_9 [i_3]) ? (arr_2 [i_3]) : 11059224101770743395))) ? var_9 : -29797));
            var_23 *= (~-12);
        }
    }
    #pragma endscop
}
