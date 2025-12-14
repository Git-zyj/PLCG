/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48089
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_19 = arr_2 [i_0];
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) * (4168050660588039997ULL))), (((/* implicit */unsigned long long int) ((long long int) var_11))))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)(-127 - 1))))))));
                    var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_1 [i_1])))) ? ((~(arr_4 [i_0] [(unsigned short)9] [i_2]))) : (((/* implicit */unsigned long long int) ((long long int) 54043195528445952ULL)))));
                }
            } 
        } 
        var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_6))) != (((((/* implicit */_Bool) var_7)) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((int) var_5)))))));
    }
    var_23 *= ((/* implicit */signed char) var_2);
}
