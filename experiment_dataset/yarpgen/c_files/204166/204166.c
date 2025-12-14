/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = 0;
                var_16 *= ((((((((arr_3 [i_0 + 1]) - (arr_0 [i_0])))) ? (var_9 >= 0) : ((64792 ? 144 : var_12)))) & ((245 ? 2 : 740))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_17 = 24609;
                    var_18 = ((((!((max((arr_1 [i_0]), (arr_4 [i_0] [11] [i_0 - 2])))))) ? (((((1007 ? -661033087 : 661033097))) ? (arr_1 [i_0 - 1]) : -var_4)) : ((min((((arr_3 [i_0]) ? 16 : (arr_0 [i_2]))), var_5)))));
                    var_19 = (((min(var_5, 90))));
                    arr_7 [i_0] [i_0] [i_0 - 1] |= (((arr_6 [i_1 + 1] [i_1 - 2] [i_1 - 2]) ? ((((max((arr_2 [i_0 + 1]), 661033090)) + ((var_0 - (arr_0 [i_0])))))) : (min((((arr_5 [2] [i_1 - 1] [i_0 - 1]) ? -1 : (arr_1 [i_0]))), (((-1025751127 ? 168 : (arr_3 [12]))))))));
                }
                var_20 = (((((0 ? 64793 : -748223868))) ? ((((((-661033087 ? (arr_2 [i_1]) : 18320)) != ((min(var_7, (arr_3 [i_1])))))))) : ((((var_9 ? (arr_6 [i_0] [i_0] [i_1]) : (arr_5 [i_0] [i_0] [i_0]))) | ((((arr_0 [i_1]) ^ 255)))))));
            }
        }
    }
    var_21 ^= ((~(((var_12 / 661033087) / var_14))));
    #pragma endscop
}
