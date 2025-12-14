/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 = ((((((!1) ? (!1) : 2416798590229870052))) ? (max(1024, (~20977))) : ((20970 ? ((2 ? 44558 : 44560)) : 0))));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_12 = 0;
                        var_13 = ((((min(20976, 44565))) ? (!0) : -7365872430585215929));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_14 = (max((min((((-32762 ? 0 : 0))), (((-127 - 1) ? 5290506097390286293 : 127)))), ((max(127, 44558)))));

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_15 = (-127 - 1);
                            var_16 = (max((min(((max(0, 1))), 2940622610)), (~13387)));
                            var_17 = ((((min((((-125 ? 44559 : 2))), ((39 ? 4294967295 : 4294967295))))) ? ((9792455162969577906 ? 96 : 2733868431)) : ((-((0 ? -92 : 1839278965))))));
                            var_18 = ((((((min(1839278965, 4220892997)) < -32742))) - 972));
                            arr_15 [i_0] [i_1] [i_2] [i_4] [i_5] = (((2825348014761533543 ? 0 : 52149)) + 54);
                        }
                        arr_16 [i_4] [i_1] [i_4] [i_4] = ((4125903957 ? 18446744073709551608 : 1692989205));
                    }
                }
            }
        }
    }
    var_19 = (((min(-44294, -21241)) >= (((((max(65535, 18446744073709551615))) && ((max(1, 13387))))))));
    var_20 = 1;
    #pragma endscop
}
