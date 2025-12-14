/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233854
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) -1399217506);
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_14 = var_9;
                    var_15 = 1399217506;
                    arr_9 [i_0] |= ((/* implicit */int) arr_6 [i_2]);
                }
            } 
        } 
        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) -1LL))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-17))))) & (305120984U))))));
    }
    var_18 = ((/* implicit */short) (+(var_2)));
    var_19 = ((/* implicit */unsigned int) var_8);
    var_20 = ((/* implicit */unsigned short) var_12);
    /* LoopSeq 1 */
    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) var_4);
        var_22 *= ((/* implicit */signed char) (unsigned char)17);
        var_23 = ((/* implicit */int) 18446744073709551615ULL);
        arr_13 [(unsigned char)3] [i_3] = ((/* implicit */signed char) ((arr_5 [i_3] [i_3]) ^ (((/* implicit */unsigned int) ((int) (_Bool)1)))));
        arr_14 [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((min((1399217506), (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (!(((/* implicit */_Bool) -821175054))))))))));
    }
}
