/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [4] [i_0] = ((((((arr_2 [i_1 - 1] [i_1 + 1]) ? 6144 : (arr_4 [i_1 - 1] [i_1 + 1])))) && ((min((arr_4 [i_1 - 1] [i_1 + 1]), var_13)))));
                var_16 = 6144;

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_17 += (max(((var_15 ? (2147483647 * var_9) : 4294967295)), ((max(((-72 ? 4294967295 : (arr_4 [i_1] [i_1]))), (~var_10))))));
                    var_18 = (!49);

                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        var_19 = ((6170 ? -9063584705363367517 : ((((arr_4 [16] [i_3]) * -6124)))));
                        var_20 += (((!28282) ? (max((max(0, (arr_6 [0] [2] [i_0]))), ((min(6170, var_5))))) : (min(var_14, ((-(arr_7 [i_0] [i_0] [i_0])))))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_5] [i_4] [17] [i_5] [i_5] = ((6549113876762210955 ? 6043733949109534476 : 1));
                            var_21 = ((-6043733949109534482 << ((((-(arr_7 [1] [i_1] [i_2]))) - 664117952008992367))));
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_22 = 4294967295;
                            var_23 = ((!(arr_6 [i_0] [i_6 - 2] [i_0])));
                            var_24 = (arr_18 [18] [i_1] [18] [12] [i_4] [i_6]);
                            var_25 = 6917529027641081856;
                            var_26 = ((-6172 ? 133693440 : (((-6043733949109534476 ? -327284883 : var_10)))));
                        }
                        arr_20 [i_0] [i_0] [i_1] [i_2] [i_1] = (((((30949 ? -6185 : 5763712647594093556))) ? (((1 ? ((max(-6187, 6596))) : ((6144 ? 101 : 1155429045))))) : (((!var_14) ? (((max((arr_9 [13] [i_2] [12] [i_1 - 1] [4] [i_0]), 32767)))) : (max(var_15, 133693441))))));
                    }
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        var_27 *= (max((max(2267790387, (((arr_3 [i_7 - 2]) ? var_0 : 0)))), ((min((arr_16 [i_7 - 2] [i_7 - 2] [i_7] [i_7] [i_7]), (arr_16 [i_7 - 1] [i_7 - 1] [i_7] [i_7] [18]))))));
                        var_28 = (min(var_13, ((((arr_8 [i_1] [i_1] [i_1] [i_7 + 2] [i_1 + 1] [i_1]) == (arr_14 [i_0] [9] [i_2] [i_7 + 2]))))));
                    }
                    var_29 = var_0;
                }
                arr_23 [i_1] [i_0] [i_0] = (arr_7 [i_0] [i_0] [1]);
            }
        }
    }
    var_30 = (max(var_30, var_12));
    #pragma endscop
}
