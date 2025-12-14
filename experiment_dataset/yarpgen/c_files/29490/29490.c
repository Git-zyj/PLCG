/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (((!((((arr_1 [12]) ? var_9 : 129))))) ? (((~204) ? ((13661624256801474326 ? -7332050251721680956 : (arr_1 [i_0]))) : var_3)) : (+-8843396047847210358));
                arr_5 [i_0] [i_1] = (((((~10127984548681472509) + (var_7 <= var_11))) > ((((-12 & var_11) ? (((var_6 % (arr_3 [i_0] [i_0])))) : ((10127984548681472509 ? (arr_0 [i_0] [9]) : 1046290848)))))));
                var_17 = (8318759525028079106 & 1);
                var_18 = (4426686641741547776 - 8318759525028079106);
            }
        }
    }
    var_19 = (max(var_19, ((((((194089708 + 6575232132481312192) ? ((177 ? var_5 : var_1)) : (((var_4 ? var_0 : 2878183960))))) ^ ((((((0 ? var_7 : var_2)) <= -3362146978)))))))));
    #pragma endscop
}
