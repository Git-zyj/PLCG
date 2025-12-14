/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_16 = (!10954);
        var_17 ^= (min(((((arr_0 [i_0] [i_0]) == (arr_1 [i_0] [i_0])))), (arr_1 [i_0] [i_0])));
        arr_2 [4] [8] = ((!((min((arr_0 [i_0] [2]), (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (((arr_3 [i_1]) != (arr_3 [i_1])));
        arr_6 [i_1] [i_1] = (((((!(arr_1 [i_1] [i_1])))) >= var_4));
        var_18 |= var_11;
        var_19 -= (min((arr_0 [i_1] [i_1]), (min(((1 << (var_5 - 15419))), (arr_4 [i_1])))));
        var_20 = (((min((min(19, 877819494)), (arr_1 [i_1] [i_1])))) | (min(((168 ? (arr_3 [4]) : (arr_0 [i_1] [i_1]))), (arr_3 [i_1]))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_21 = ((((((-1 || var_4) % ((min(54582, 10945)))))) ? 2646513143 : (((~(arr_7 [i_2] [i_2]))))));

        for (int i_3 = 4; i_3 < 9;i_3 += 1)
        {
            arr_11 [i_2] [i_2] [i_3 - 1] = 34675;
            var_22 = (((((arr_0 [i_3 - 1] [i_3]) != (arr_1 [i_3 - 3] [i_3])))) + (!49));
            var_23 = -732614939;
            var_24 += ((!(((15913119196656831720 ? 190 : (arr_0 [i_3 - 3] [i_3 - 3]))))));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_25 ^= (min(2147483647, ((-32765 ? 1 : 15913119196656831726))));
            var_26 = -590706685;
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_17 [i_2] [i_2] = (min(((2533624877052719890 | (arr_9 [i_2] [i_5]))), (((arr_13 [i_5] [i_2]) ? (arr_0 [4] [4]) : 2533624877052719875))));
            var_27 ^= (((((var_10 ? (((~(arr_7 [i_2] [i_5])))) : (min(88, 15913119196656831725))))) ? (!164) : (((!(((-(arr_14 [i_2])))))))));
        }
        arr_18 [i_2] = ((-var_13 ? (((8 ? 104 : (arr_15 [i_2])))) : (arr_0 [i_2] [i_2])));
        var_28 *= 15913119196656831695;
        var_29 = -89;
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_30 |= (((arr_19 [i_6] [i_6]) - (arr_19 [i_6] [i_6])));
        arr_23 [i_6] = ((~((((((arr_20 [1]) >= 15913119196656831728))) << var_13))));
        arr_24 [i_6] = ((((min((~214), 168))) ? 65534 : (~var_1)));
    }
    var_31 = var_15;
    #pragma endscop
}
