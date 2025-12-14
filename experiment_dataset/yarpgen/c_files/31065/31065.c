/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_18 = (max(var_18, ((min((min(((var_17 ? (arr_0 [i_0] [i_0]) : var_16)), (min(4063354371, (arr_0 [i_0] [i_0]))))), -231612924)))));
        arr_2 [i_0] = ((+((max((!7958206469054243979), ((4063354353 || (arr_0 [i_0] [i_0 - 2]))))))));
        arr_3 [i_0] = -109;
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_10 [15] [15] = ((((231612927 << (((((arr_4 [i_1] [i_1]) * (arr_8 [i_2] [i_1] [9]))) - 3612813870)))) << (((((((-1 ? 0 : 267911168))) ? -1813344930 : (arr_5 [i_1 + 2]))) - 6161806000542912517))));
            var_19 ^= (((((arr_5 [i_1 + 3]) ? (((3310182602794834067 ? 1 : var_10))) : (max(var_13, 231612925)))) + (1 - -2)));
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_20 = (min(var_20, var_13));
                    var_21 ^= (min(181, ((~(max(var_2, 4499123193638689192))))));
                    arr_16 [i_1] [3] [i_1] = (((((44 ? 231612925 : 1879048192))) ? (max((arr_7 [i_3 - 2]), -2022779340)) : -2125590859));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    arr_27 [i_5 + 3] [i_7] [i_7] [i_7] = 212513592;
                    var_22 = (max((24195 > 8088785497008879054), 1));
                    arr_28 [i_5 + 1] [i_6] [i_6] [i_7] = (((((1 - var_8) ? 4174124887 : (arr_4 [i_5 + 3] [19])))) ? (((((min(var_5, var_8)) != (arr_23 [i_5] [17]))))) : (4151803163 ^ 58126));
                }
            }
        }
    }
    var_23 = var_1;
    #pragma endscop
}
