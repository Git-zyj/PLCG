/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_17 ? var_6 : ((((((var_3 ? 34260 : var_5))) ? 33199861 : -55)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, ((((((33199861 ? ((4793749823012808432 ? 12929026449679315640 : var_5)) : -63))) ? ((((var_8 & 0) || (var_1 == 1695606824)))) : (~var_16))))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_21 &= ((((min(116, (~4261767454)))) ? var_12 : (((((var_16 ? 47649 : 33199855)))))));

                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            var_22 ^= ((-((~((55841 ? 4261767454 : (arr_7 [i_1])))))));
                            var_23 = 2060586466;
                            var_24 = (max(((-(((arr_3 [i_1] [1]) & 8920756679691596678)))), (((var_14 < (var_18 & var_5))))));
                            var_25 = (max(var_25, (((3206211671558773001 / (arr_7 [i_0]))))));
                            var_26 = ((((((arr_7 [i_2 - 1]) ? (arr_7 [i_2 - 1]) : 4261767480))) ? (((var_2 ? var_14 : var_17))) : ((((var_11 / (arr_0 [i_1]))) - (arr_6 [i_0] [i_0] [i_2] [i_4])))));
                        }
                        arr_11 [i_0] = (((((((1 >= 2905181074) != (~1))))) ^ ((~(65525 & var_1)))));
                        arr_12 [i_0] [i_1] = ((((((arr_5 [i_0 - 1] [i_2 - 2]) & var_4))) ? ((33199854 ? var_10 : (arr_5 [i_0 - 1] [i_2 - 2]))) : -7639961362502108568));
                    }
                    var_27 ^= ((~(~103)));
                }
            }
        }
    }
    #pragma endscop
}
