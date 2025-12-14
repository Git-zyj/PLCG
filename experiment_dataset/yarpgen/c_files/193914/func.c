/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193914
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
    var_14 ^= ((/* implicit */signed char) var_13);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 16393472258480509639ULL)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))) : (min((18202885423009576985ULL), (((/* implicit */unsigned long long int) 449351016)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-23))))) ? (((unsigned int) arr_1 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)10))) : (var_1))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) var_0);
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    {
                        var_16 += ((/* implicit */unsigned long long int) (short)-29);
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (!(((/* implicit */_Bool) var_10)))))));
                        arr_14 [i_1] [i_2] [i_3] [i_4] = ((unsigned long long int) arr_8 [i_3] [i_3]);
                        arr_15 [i_4] [i_4] [i_4] [i_1] = ((/* implicit */unsigned long long int) (signed char)10);
                    }
                } 
            } 
        } 
    }
    for (short i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        var_18 = arr_12 [i_5];
        var_19 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) max(((short)-29), (((/* implicit */short) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (unsigned short)37914)))))))) : ((-(((int) (_Bool)1))))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((((/* implicit */int) arr_16 [i_5] [12ULL])) + (2147483647))) << (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_5])))))) * (((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (short)13214))) : (var_10))))))))));
        arr_20 [(_Bool)1] |= ((/* implicit */unsigned int) arr_13 [i_5] [i_5] [i_5] [i_5] [10]);
    }
    var_21 |= ((/* implicit */unsigned int) var_11);
    var_22 = ((/* implicit */long long int) ((max((((unsigned long long int) (short)-23)), (((/* implicit */unsigned long long int) var_9)))) + (((unsigned long long int) var_6))));
    var_23 = ((/* implicit */short) var_1);
}
