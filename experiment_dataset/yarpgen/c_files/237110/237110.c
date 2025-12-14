/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 7;i_4 += 1)
                        {
                            var_10 *= ((!((((max(var_7, var_2))) == (~var_6)))));
                            var_11 = 1;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_12 = (-(arr_3 [i_1] [i_1]));
                            var_13 = (!var_5);
                            arr_17 [i_0] [i_0] [i_2] [i_3] [i_2] = 13453906104175641218;
                            arr_18 [i_2] [i_1] [i_2] [i_3] = (~-var_2);
                        }
                        arr_19 [i_0] [i_0] [i_0] [i_2] = -var_2;
                        var_14 -= ((-(((var_1 > 1) & (arr_0 [i_0] [i_1])))));
                        var_15 &= ((-1027507765 ? (!1) : (max(1027507765, 2312730300812336457))));
                        var_16 = (max(var_16, ((min(((+((3991018474 >> (((arr_15 [i_0] [i_1] [i_1] [i_1] [i_1]) - 1264059186)))))), var_6)))));
                    }
                }
            }
        }
        arr_20 [i_0] [i_0] = 1;
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_17 = ((-(((((0 <= (arr_24 [i_6])))) >> (((min(2334036398, 932)) - 909))))));
        var_18 = (min(var_18, (((((min(2046, 32759))) ? (((min((arr_22 [i_6]), var_5)) ? (((min((arr_24 [i_6]), 1)))) : (max(1935901748505190337, (arr_24 [i_6]))))) : ((((var_0 || var_1) >> ((((var_5 ? 1420343038 : (arr_23 [i_6] [i_6]))) - 31499))))))))));
    }
    var_19 = var_0;
    var_20 = var_1;
    #pragma endscop
}
