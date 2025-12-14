/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49392
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
    var_19 |= ((/* implicit */unsigned short) (signed char)(-127 - 1));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_20 = ((/* implicit */long long int) ((unsigned long long int) 1306106052));
        var_21 = ((/* implicit */unsigned long long int) ((((arr_0 [i_0]) < (arr_0 [i_0]))) ? (((arr_0 [i_0]) + (((/* implicit */int) (unsigned short)23587)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_5 [8U] [i_1] |= ((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]);
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    {
                        arr_17 [(short)0] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) (unsigned short)23587);
                        var_22 = ((/* implicit */short) ((_Bool) 9913976360348778349ULL));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (+(arr_15 [i_4] [i_3] [i_1] [i_1]))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_5 = 4; i_5 < 8; i_5 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            arr_23 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5 - 2] [i_6]))) & (arr_16 [i_5] [i_5] [i_5 + 2] [i_6])));
            var_24 &= ((/* implicit */short) ((long long int) (~((-2147483647 - 1)))));
        }
        var_25 = (-(((/* implicit */int) (_Bool)1)));
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) 2197975328280537907ULL))));
    }
    var_27 = ((/* implicit */unsigned long long int) var_7);
}
