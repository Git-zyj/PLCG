/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((min(var_5, (min(24129, 2968646779)))))));
    var_11 = (max(var_11, (((61288 ? var_7 : ((((min(var_1, 127))) ? 117 : -8114)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_1] [i_0] = var_1;
                    arr_10 [i_1] [i_2] = -0;
                    var_12 &= 1;
                    arr_11 [i_0] [i_1] [i_2] = ((0 ? 127 : ((var_7 ? 61305 : 1750336516))));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    arr_16 [i_1] = ((((min((((-86 ? 4270 : var_7))), ((1750336516 ? 2170083731 : var_9))))) ? (max((-2147483647 - 1), ((2923123806655292048 ? 335214835314239129 : 14296889401791698148)))) : (!2147483647)));

                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_13 = min(((min(61258, -6679))), (~-8666745523344852587));
                        var_14 = var_0;
                        arr_20 [i_1] [i_3] [i_1] = var_0;
                        var_15 = ((((~((min(62, 40089))))) ^ (((var_0 + 2147483647) << ((var_7 >> (97 - 80)))))));
                        var_16 = (min((((((max(-31446, 25220))) + (var_2 + 4865)))), (min((min(2128896794669525532, 16383)), 898233382))));
                    }
                    arr_21 [i_0] [i_1] = (max((max(1, ((255 ? 1 : 15)))), (((2147483634 ? 4901 : -6679)))));
                }
                var_17 = -2852875806;
                arr_22 [i_1] = ((((max(((var_9 ? var_8 : -21)), (((59877 ? var_9 : 65535)))))) ? ((((-517201720623730823 % -4624) ? -1024 : (min(-9102, var_6))))) : (max(var_8, (min(-30331, 0))))));
            }
        }
    }
    var_18 = (min(var_18, (((max(((1442091478 ? var_0 : 1), (-2147483630 + 35))))))));
    #pragma endscop
}
