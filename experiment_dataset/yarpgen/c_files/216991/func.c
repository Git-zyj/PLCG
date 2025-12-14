/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216991
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
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned short) var_0);
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) var_5);
    }
    var_11 -= ((/* implicit */_Bool) (~(1335690861)));
    /* LoopSeq 2 */
    for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_12 = ((/* implicit */_Bool) (-(((/* implicit */int) var_1))));
        var_13 -= ((/* implicit */unsigned long long int) var_2);
    }
    for (signed char i_2 = 3; i_2 < 14; i_2 += 1) 
    {
        var_14 = ((/* implicit */signed char) 2825797193U);
        var_15 = ((/* implicit */signed char) 8641641619749373119LL);
        var_16 = ((/* implicit */unsigned short) (-(var_3)));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 3; i_3 < 14; i_3 += 3) 
        {
            var_17 |= ((/* implicit */int) -8070273418713539235LL);
            var_18 = (+((+(var_6))));
        }
        /* LoopSeq 4 */
        for (int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            var_19 = ((/* implicit */short) 8070273418713539209LL);
            var_20 = ((/* implicit */short) (~(var_3)));
            arr_12 [i_2] = ((/* implicit */long long int) 846025791);
        }
        for (unsigned int i_5 = 1; i_5 < 12; i_5 += 1) 
        {
            arr_17 [i_2] [(_Bool)1] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))));
            /* LoopNest 2 */
            for (short i_6 = 2; i_6 < 14; i_6 += 4) 
            {
                for (int i_7 = 1; i_7 < 11; i_7 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)255))));
                        arr_22 [i_2] [i_2] [i_2] [i_6 - 1] [i_7] = ((/* implicit */signed char) (-(var_4)));
                        var_22 = ((/* implicit */int) (short)22);
                        var_23 = ((/* implicit */unsigned long long int) -8070273418713539210LL);
                    }
                } 
            } 
        }
        for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            var_24 = ((/* implicit */_Bool) var_9);
            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)61447)))))));
        }
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))));
            arr_27 [i_2] [i_9] [i_2] = 1131708613;
            arr_28 [i_2] = ((/* implicit */signed char) var_6);
            arr_29 [(unsigned short)2] [i_2] [(unsigned short)2] &= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
            arr_30 [i_2] [i_2] = (_Bool)1;
        }
    }
}
