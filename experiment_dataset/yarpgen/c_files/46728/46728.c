/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_4;
    var_11 = var_2;
    var_12 = var_5;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((((+(((arr_0 [i_0] [4]) ? var_7 : (arr_0 [i_0] [i_0 + 3]))))) << (((200 || ((max((arr_2 [i_0]), 2906485145))))))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_13 = ((((((arr_6 [i_0 - 1] [i_1] [13]) ^ (arr_2 [i_0 - 1])))) ? (!2906485145) : (max((arr_2 [i_0 + 3]), (arr_1 [i_0 + 3])))));
            var_14 = (((((!((max(1388482151, 1388482150)))))) != (-91 != 1388482167)));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0 + 2] [1] [i_2] |= (((max(1, ((var_9 ? 1 : 15145125934415915685))))) ? (min(1, (max(3605947158, 1)))) : 0);
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_15 = (((arr_15 [i_0 + 3] [i_0 + 1] [i_0]) ? (arr_15 [i_0 + 2] [i_0 + 1] [i_0]) : -16384));
                            var_16 = ((((((((min(1, 1)))) * (max(1388482178, var_4))))) ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : ((31 % (arr_5 [i_0])))));
                        }
                    }
                }
            }
            var_17 = (var_8 ? (((39 >= 1) ? 3918080631 : ((2906485129 ? 0 : 1388482179)))) : ((((var_7 == (arr_5 [i_0]))))));
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    {
                        var_18 = (arr_20 [i_0 - 1]);
                        arr_25 [i_0] = max((((!(!var_9)))), ((14 ? 89 : (arr_0 [i_0 + 3] [i_8 + 1]))));
                    }
                }
            }
            var_19 *= 30;
            var_20 = (max(((min((arr_16 [0] [i_0 - 1] [i_0] [i_0] [i_0]), (!var_9)))), (~119763159)));
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
        {
            var_21 = (((max((arr_7 [i_0]), (max(var_6, 0)))) * ((((((15961774987891616627 ? (arr_7 [i_0]) : 1)) == 119763159))))));
            arr_28 [i_0] = (136 ? (arr_20 [i_0 - 1]) : 15745073417704645769);
            var_22 = ((max((arr_10 [i_0]), 136)));
        }
    }
    #pragma endscop
}
