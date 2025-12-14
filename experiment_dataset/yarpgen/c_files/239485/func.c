/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239485
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (+(0ULL)));
        var_19 = ((/* implicit */unsigned short) (_Bool)1);
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) ^ ((-((~(((/* implicit */int) var_18))))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */int) var_10);
                        arr_12 [i_2] [i_1] [i_2] [i_1] [i_1] = (+((~(((/* implicit */int) (_Bool)1)))));
                        var_22 = ((/* implicit */unsigned short) 18446744073709551592ULL);
                        arr_13 [12] [(unsigned short)2] [i_0] [i_1] = ((/* implicit */unsigned long long int) min(((+(var_9))), (((/* implicit */long long int) ((-4201050521373248120LL) <= (8512854932465646039LL))))));
                        var_23 += ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) <= ((+(8512854932465646050LL))))))));
                    }
                } 
            } 
        } 
    }
    var_24 = (-(var_3));
    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) var_5))));
}
