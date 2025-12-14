/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        var_19 += 1;
                        var_20 = (max(var_20, ((((((~(max(1361215574, 1))))) ? ((max(0, 4926))) : ((((min(-4927, 1))) ^ ((min(8, 2))))))))));
                        arr_11 [i_0] [i_0] [i_0] [i_1] = ((var_1 ? 23 : ((((232 ? 1 : 3693597566652554581)) | 3693597566652554581))));

                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            arr_14 [i_0] [i_4] = (max(var_3, var_15));
                            arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] &= (((((-var_14 ? -27 : var_5))) ? (88 * 23) : ((-23 ? (!var_15) : ((18446744073709551613 ? 18446744073709551613 : 23))))));
                            arr_16 [i_0] [i_0] [i_0] = max(-32768, ((254 ? 247 : ((var_8 ? 1630905660 : 8444514317483194467)))));
                            var_21 = ((((max(((var_6 ? 9223372036854775807 : var_15)), ((1 ? var_4 : 1))))) ? var_11 : 7291872888332968364));
                        }
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_22 = var_9;
                        var_23 = (((max(18446744073709551596, ((var_7 ? var_16 : 18446744073709551571))))) ? var_16 : (((((31 ? 18446744073709551615 : 18446744073709551571)) < (((246 ? var_9 : 8)))))));
                        var_24 += ((-545916329 ? ((7904495593514573825 ? 1 : -985259140)) : var_9));
                        var_25 = (max(var_16, ((!(((227 ? -896836351 : var_14)))))));
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_26 = (min(var_26, (((1 ? 4926 : (max(7904495593514573825, var_0)))))));
                        var_27 = var_9;
                        var_28 = ((var_3 ? 24 : var_4));
                    }
                    var_29 = (min(var_29, ((((min((max(4294967295, 1)), (((0 ? 2860 : -1869154991))))) << var_16)))));
                }
            }
        }
    }
    var_30 += 124;
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            {
                var_31 *= ((-1 ? ((max(((232 ? 9115 : var_6)), ((var_18 ? -985259140 : -80))))) : 18446744073709551609));
                arr_28 [i_7] [i_7] [i_8] = var_10;
                var_32 = (max(var_32, ((((min((((var_2 ? var_16 : 985259127))), var_2)) * (((1 ? 26 : -27))))))));
            }
        }
    }
    #pragma endscop
}
