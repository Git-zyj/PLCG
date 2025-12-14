/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198909
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned int) max(((signed char)42), ((signed char)39)))), (min((max((2841602299U), (((/* implicit */unsigned int) (signed char)57)))), (min((2341442340U), (((/* implicit */unsigned int) -705811673))))))));
    var_14 = ((/* implicit */signed char) max((var_14), ((signed char)42)));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) max((max((1453364997U), (((/* implicit */unsigned int) (unsigned short)30788)))), (2841602287U)));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_16 = max((((/* implicit */unsigned int) (unsigned short)30781)), (2841602298U));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        arr_13 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) max((4280881293U), (2841602318U)));
                        var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (signed char)70)), (1477089762U)));
                        var_18 = ((/* implicit */signed char) 1537476141);
                        arr_14 [i_0 - 1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (unsigned short)34754);
                        arr_15 [i_0] [i_1] [i_2] [i_2] = 2841602299U;
                    }
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max((((/* implicit */int) max((max((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)65451))), (((/* implicit */unsigned short) (_Bool)1))))), (max((((/* implicit */int) (unsigned short)34748)), (max((-717492145), (((/* implicit */int) (signed char)67)))))))))));
        arr_16 [i_0] |= ((/* implicit */unsigned short) max((2841602318U), (((/* implicit */unsigned int) (unsigned short)65440))));
    }
}
