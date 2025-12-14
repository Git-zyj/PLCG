/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= (((arr_1 [i_0]) ? ((max((4294967295 && 1), 1))) : ((4294967284 ? 4294967294 : 9089084317202616571))));
        arr_3 [i_0] = (max(((((17005222144430054101 ? (arr_0 [i_0] [i_0]) : var_8)) ^ 12159)), ((~(arr_1 [i_0])))));
        var_11 ^= (min((((((127 ? var_2 : (arr_0 [i_0] [i_0])))) ? var_5 : (!69))), (((~(((1 <= (arr_1 [i_0])))))))));

        for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_1 + 3] = (((((-1001398575 ? 90 : 6780261170962738216))) ? 0 : 17005222144430054101));
            var_12 ^= ((!(~var_1)));
        }
        for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_13 = (min(var_13, ((max(-11469503428415409608, 1)))));
            var_14 = (max((((((arr_7 [i_0] [i_2 + 3] [i_2 + 3]) ? (arr_7 [i_0] [15] [i_0]) : var_4)) == (min(var_4, 0)))), ((!(((1 ? 1 : (arr_1 [i_2]))))))));
            var_15 = ((14959 * -1) ? 9013000497808980810 : ((max((((arr_1 [i_2]) + (arr_4 [i_0] [i_2]))), -var_0))));
        }
    }
    var_16 = (((((6977240645294142014 ? (max(1441521929279497510, 4294967286)) : (52229 | 21186)))) ? var_4 : (((4070574662470923784 && (!21))))));
    #pragma endscop
}
