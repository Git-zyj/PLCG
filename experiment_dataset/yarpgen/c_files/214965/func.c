/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214965
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
    var_14 = ((/* implicit */signed char) max((min(((unsigned short)35006), (((/* implicit */unsigned short) (signed char)-34)))), (((/* implicit */unsigned short) (signed char)33))));
    var_15 = ((/* implicit */unsigned short) (signed char)34);
    var_16 = ((/* implicit */short) (signed char)29);
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */signed char) (-(((((/* implicit */int) arr_8 [i_2] [i_2] [i_2 + 1])) * (((/* implicit */int) arr_8 [i_2] [i_2] [i_2 + 1]))))));
                        var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_10 [i_2 - 2] [i_0 - 2] [i_3] [i_0 + 1])), (max(((unsigned short)9005), (((/* implicit */unsigned short) var_0)))))))));
                        var_19 &= ((/* implicit */signed char) max((((/* implicit */int) var_6)), (min((((/* implicit */int) arr_5 [i_2 - 1] [i_1] [i_2 - 3])), ((-(((/* implicit */int) var_2))))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) ((signed char) var_8)))))));
    }
}
