/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = (max((max((arr_0 [i_0] [i_1]), 7035735277659811903)), ((5475858425303939074 ? 11411008796049739723 : 5241723650570064932))));
                arr_6 [i_0] [i_0] = (max((arr_2 [i_0] [i_1]), ((17804399984540082057 ? (arr_4 [i_0] [i_1]) : (arr_4 [i_0] [i_1])))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_15 = ((6120079769504562303 ? 32208 : 18446744073709551612));
                    var_16 = (arr_5 [i_2] [i_0] [i_0]);
                    var_17 = var_3;
                    var_18 = arr_1 [i_0];
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_19 = ((((((var_13 % (arr_7 [i_3] [i_4]))) + (arr_5 [i_3] [i_3 + 2] [i_3 + 2]))) != ((((arr_13 [i_3 - 1]) - (((arr_11 [i_4]) ? (arr_1 [5]) : var_3)))))));
                var_20 = ((-((((arr_9 [i_4] [i_4] [i_3 + 1]) <= (arr_9 [i_3] [i_4] [i_3 - 1]))))));

                for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    var_21 = ((~((8113 * (39931 - 11411008796049739723)))));
                    var_22 *= (max((arr_12 [i_3] [i_3 - 1] [3]), (arr_16 [i_3 + 1])));
                }
                for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    var_23 = -7737118058025004014;
                    var_24 ^= (arr_19 [i_6] [i_3] [i_6 + 2]);
                }
            }
        }
    }
    var_25 &= var_6;
    var_26 = var_6;
    #pragma endscop
}
