/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (min((((((max(var_7, var_7))) < 21445))), var_18));
    var_21 = (max(((var_10 ? var_12 : var_5)), var_17));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_22 = ((+(min((arr_0 [i_0]), (arr_3 [i_0] [i_0])))));
                    var_23 = (((((226446616 ? 7736854320273889898 : -7736854320273889920))) ? (arr_2 [8]) : ((((max(-7736854320273889899, (arr_2 [i_0]))) >= (max(var_15, 221)))))));
                    arr_6 [i_0] [i_1] = ((-1154689179 ? (((min(-1154689179, 7736854320273889911)))) : 1025242337));
                    arr_7 [i_0] [i_1] [i_2] = ((3112576633 ? ((min(32751, 4294967295))) : (-1154689179 < 6172215297032824101)));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (max(((max((arr_0 [i_2]), (arr_0 [i_2])))), (0 - 1)));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_24 = ((((((65535 ? var_2 : var_7)))) % (-7736854320273889889 + 50)));
                    var_25 ^= (((((-((18446744073709551615 ? var_13 : var_9))))) - (min(var_16, (max((arr_11 [i_0] [i_1] [i_3] [i_3]), (arr_3 [2] [2])))))));
                    var_26 |= ((-(arr_5 [i_0] [i_0] [i_0])));
                }
                var_27 = (((((arr_5 [i_0] [i_0] [i_1]) ? 3420442526 : (min(var_13, (arr_10 [0] [0] [i_1]))))) << (((((((-(arr_1 [i_1])))) ? 1154689179 : (((arr_1 [3]) ? (arr_10 [11] [i_0] [i_1]) : var_19)))) - 1154689148))));
                var_28 = (((((-2946672734 ? (arr_2 [i_0]) : (arr_1 [i_0])))) ? ((((arr_0 [i_1]) ? ((((arr_3 [i_0] [i_0]) || (arr_3 [i_0] [i_1])))) : 1154689179))) : ((79 ? 65535 : 7736854320273889915))));
                var_29 *= 2147483637;
                var_30 = (max(var_30, (((-(min((max(var_12, 3214512962)), (((arr_1 [i_1]) ? (arr_3 [i_0] [i_1]) : (arr_2 [i_1]))))))))));
            }
        }
    }
    var_31 = ((max(var_10, (var_13 || 5))));
    var_32 = (min(var_32, (((+(max((~65535), var_15)))))));
    #pragma endscop
}
