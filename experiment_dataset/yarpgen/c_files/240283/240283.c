/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (((((((((-127 - 1) & -34))) || 34))) + ((~(5933542961470348899 >= 126)))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_12 = (arr_1 [i_0]);
        arr_3 [i_0] = arr_2 [i_0];
        var_13 = (max((arr_2 [i_0 + 1]), (arr_2 [i_0 + 2])));
        var_14 = ((((-(5933542961470348906 ^ var_10))) & (((((((34 > (-2147483647 - 1)))) > (((5933542961470348899 < (arr_1 [i_0]))))))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_15 ^= (max(((~(arr_4 [i_1] [4]))), (max((arr_4 [i_1] [i_1]), (arr_1 [2])))));
        var_16 = ((12513201112239202717 ? -127 : (!-3106)));
        var_17 = (max(var_17, ((((-127 - 1) ? 33 : (((((var_3 > (arr_1 [1]))) || (17592186044415 > -3675411748649750765)))))))));
        arr_7 [i_1] [i_1] = ((((max(var_0, (-39 <= 5933542961470348896))))) | 12513201112239202717);
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((var_10 > (~17592186044423)));
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_18 = ((var_5 >= (arr_9 [i_2])));
                    var_19 -= (124 > 14);
                    var_20 = ((((min(-34, 18446726481523507175))) - 47));
                }
            }
        }
        var_21 = (max(var_21, ((((((min((arr_1 [1]), (arr_6 [i_2]))))) ? (((~((var_8 ? (arr_1 [18]) : (arr_5 [i_2])))))) : 5933542961470348916)))));
    }
    var_22 -= ((var_0 ? (~-104) : (17592186044402 >= 12513201112239202717)));
    var_23 = (5933542961470348888 ^ 4);
    var_24 &= ((((5933542961470348899 << (1470814727 - 1470814702))) % var_10));
    #pragma endscop
}
