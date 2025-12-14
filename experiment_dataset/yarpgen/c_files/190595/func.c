/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190595
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
    var_19 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        var_20 *= ((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) (unsigned char)80)))));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_2 [i_1] [i_1] [i_3 + 2]))));
                        var_22 -= ((/* implicit */long long int) (+((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)176))) : (2707422417955247163ULL)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        var_23 = (+(arr_5 [i_4] [i_4] [i_4] [i_4]));
        var_24 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_4] [i_4] [i_4]))));
    }
    for (signed char i_5 = 2; i_5 < 13; i_5 += 4) 
    {
        arr_14 [i_5 - 2] [i_5] = ((/* implicit */short) ((long long int) arr_8 [4] [i_5] [(unsigned short)0] [(unsigned short)0]));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (signed char)(-127 - 1))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_8))))))) : (((var_2) << (((arr_5 [i_5] [i_5] [i_5] [i_5]) - (7127923311360150880LL)))))));
        arr_15 [i_5] = ((/* implicit */unsigned short) var_4);
        var_26 = ((/* implicit */unsigned long long int) (-(max((arr_8 [i_5 - 2] [i_5] [i_5 - 1] [i_5 + 1]), (arr_8 [i_5 - 2] [i_5] [i_5] [i_5 + 1])))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 1; i_6 < 23; i_6 += 4) 
    {
        var_27 = ((_Bool) ((((/* implicit */int) arr_16 [i_6])) - (((/* implicit */int) (unsigned short)63342))));
        var_28 = ((/* implicit */unsigned int) arr_17 [i_6 - 1]);
    }
    var_29 = ((/* implicit */signed char) var_10);
    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) var_18))));
}
