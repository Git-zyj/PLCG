/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199629
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) var_1);
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_7)) < (var_8)));
        arr_3 [i_0] = ((/* implicit */long long int) var_9);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */short) var_6);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            arr_14 [i_1] [i_2] = ((/* implicit */signed char) var_6);
                            arr_15 [i_0] [i_0] [i_2] [i_2] [i_4] = ((/* implicit */int) ((_Bool) arr_4 [i_2 - 1] [i_1 - 2] [i_0]));
                            var_14 = var_6;
                        }
                        for (unsigned int i_5 = 2; i_5 < 14; i_5 += 2) 
                        {
                            arr_18 [i_0] [i_2] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_5] [i_5 - 1] [i_2 + 1])) ? ((+(var_11))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))))));
                            arr_19 [i_2] [i_2] = ((/* implicit */int) (+(((var_10) & (var_3)))));
                        }
                    }
                } 
            } 
        } 
    }
    var_15 = ((/* implicit */int) min((var_2), (((/* implicit */unsigned char) var_9))));
    var_16 = ((/* implicit */unsigned char) var_5);
    var_17 &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((var_5), (var_5)))))) ? ((((_Bool)1) ? (15626607564823050498ULL) : (((/* implicit */unsigned long long int) 461363465796260925LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37616)))));
}
