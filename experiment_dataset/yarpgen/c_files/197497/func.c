/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197497
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
    var_19 = ((/* implicit */long long int) 12186899076198300482ULL);
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((/* implicit */int) var_9)), (max((((/* implicit */int) (_Bool)1)), (511)))))), (min((((((/* implicit */_Bool) -1714498867048962624LL)) ? (0LL) : (((/* implicit */long long int) 2917118051U)))), (((/* implicit */long long int) var_13))))));
    var_21 = ((/* implicit */unsigned short) var_18);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((var_17) / (2706805339U)))));
                        var_23 += ((/* implicit */unsigned short) ((arr_6 [i_1 + 2] [i_2 - 1] [i_3]) + (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        arr_9 [i_3] [i_1] [i_0] [(short)2] [i_3] [i_3] = ((/* implicit */short) (signed char)-63);
                    }
                } 
            } 
        } 
        var_24 -= ((/* implicit */signed char) ((arr_3 [i_0] [i_0] [i_0]) / (arr_3 [i_0] [i_0] [i_0])));
    }
    for (short i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        arr_13 [(unsigned short)10] |= ((unsigned int) ((((/* implicit */int) (signed char)-14)) - (((/* implicit */int) (short)32760))));
        var_25 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (-(arr_3 [i_4] [i_4] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (var_17))))));
        var_26 *= ((/* implicit */unsigned char) var_4);
    }
    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) var_6))));
}
