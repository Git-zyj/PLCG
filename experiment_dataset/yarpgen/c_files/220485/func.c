/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220485
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
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) 1211419224)) ? (3U) : (((/* implicit */unsigned int) min(((+(-1211419224))), (((/* implicit */int) var_2)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_15 *= (short)30704;
        var_16 = ((/* implicit */int) -36028797018963968LL);
        var_17 = ((/* implicit */signed char) arr_0 [i_0]);
        var_18 = var_3;
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) (+(((1211419224) / (((/* implicit */int) (short)-31389))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (unsigned char i_3 = 4; i_3 < 21; i_3 += 2) 
            {
                {
                    var_19 -= ((/* implicit */long long int) (unsigned char)168);
                    var_20 = ((/* implicit */int) (unsigned short)23380);
                }
            } 
        } 
        arr_12 [i_1] = ((/* implicit */int) var_10);
    }
    var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) (unsigned short)20031)) : (((/* implicit */int) (short)-24105))));
}
