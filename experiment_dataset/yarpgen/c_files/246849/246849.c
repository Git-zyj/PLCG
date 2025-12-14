/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((max(var_8, -18104))) ? (~17013600931908346990) : var_12))) ? var_6 : var_10);

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_14 = ((!(((-((2251293399 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))))));
        var_15 = ((((((arr_2 [i_0 - 2] [i_0 - 1]) / var_0))) ? var_11 : ((((arr_2 [i_0] [i_0 + 1]) ? 31 : 15)))));
        arr_3 [i_0] = ((((arr_1 [i_0] [i_0 + 1]) ? 24125 : var_1)));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_16 &= ((-25145 < ((0 ? (arr_1 [i_1] [i_1]) : (arr_0 [i_0 + 1] [i_1 - 1])))));
            arr_6 [i_0 - 1] = (((((-((1 ? 25242 : var_12))))) ? ((max(var_0, var_1))) : var_6));
            arr_7 [i_0] &= ((max((0 || 0), ((!(arr_5 [18] [i_1]))))));
            var_17 &= ((((((1393772401 + (arr_5 [0] [19]))))) ? ((12364756393787655464 ? 6144 : -1910770858)) : 14546));
            arr_8 [i_0] [i_0] = 231;
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_18 = (min(var_18, var_5));
            var_19 *= (max(-1393772422, (arr_0 [i_0] [i_0])));
            var_20 = (((806570317135260433 % 3) << (((max(66584576, (arr_0 [i_0 + 1] [i_0 - 1]))) - 66584554))));
        }

        /* vectorizable */
        for (int i_3 = 4; i_3 < 19;i_3 += 1)
        {
            arr_15 [17] = ((((15843788657172910873 ? 17013600931908346990 : 2207020537900842420))) ? (arr_0 [i_0 - 1] [i_3]) : (-2328121310044924454 && 14953));
            arr_16 [i_3] = ((((~(arr_13 [i_0])))) ? (arr_13 [i_0 - 2]) : -67108864);
        }
    }
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            var_21 = (min(var_21, ((((arr_10 [i_5]) ? (!1) : ((var_6 ? var_11 : (~692648175))))))));
            var_22 ^= (((arr_14 [i_4] [i_4] [i_4 - 2]) ? ((((max(50990, (arr_20 [i_4] [i_4])))))) : -10930520226981541300));
        }
        arr_21 [i_4] = -21;
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 9;i_6 += 1)
    {
        arr_24 [i_6] = ((-6309565467515457060 ^ ((((63488 == (arr_18 [i_6])))))));
        arr_25 [i_6] [i_6] = ((~(arr_17 [i_6 + 1])));
        var_23 = (-(arr_13 [i_6 + 1]));
    }
    var_24 = (min(var_24, ((((!var_0) > (max((!1364), ((var_6 ? var_3 : 7516223846728010315)))))))));
    #pragma endscop
}
