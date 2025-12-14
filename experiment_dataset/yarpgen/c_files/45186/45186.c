/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min(46243, 6583))) ? 6555 : -8746));
    var_11 = (min((25775 % 64154), ((max(6583, -8751)))));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_12 = (max(var_12, (((~((((min(0, var_0))) ? ((2161 / (arr_1 [11]))) : ((54488 ? -8634 : 1387)))))))));
        var_13 = ((((arr_2 [i_0 - 2]) ? 43405 : (arr_2 [i_0 - 3]))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = -30317;

        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            arr_8 [i_1] [i_2] [4] = (max(var_8, (((arr_1 [i_1]) ? var_7 : (!30291)))));
            arr_9 [12] [i_2] [i_1] = ((!(((-((min(53764, 38544))))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_14 ^= var_4;
            var_15 = (((arr_4 [i_1]) ? (arr_13 [i_3] [i_1]) : (arr_4 [i_3])));
            arr_14 [1] [3] [4] = (((8757 ? -20915 : var_0)));
            arr_15 [i_3] [i_3] [i_1] = (((arr_4 [i_1]) << (var_6 - 24785)));
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] = ((((min((!8634), (((arr_1 [7]) - 60452))))) ? (!56) : ((46377 ? -6132 : var_4))));
        arr_20 [i_4] = ((min((8 + 2526), var_9)));
        arr_21 [8] = (!35955);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        arr_25 [i_5] = (((~8796) ? 30306 : -10691));
        arr_26 [i_5] = (arr_7 [i_5] [i_5] [i_5]);
    }
    var_16 = 11043;
    #pragma endscop
}
