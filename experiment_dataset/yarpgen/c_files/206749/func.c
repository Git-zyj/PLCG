/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206749
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) var_6);
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_2] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */int) max(((-(var_8))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_6) : (var_4)))) ? (min((((/* implicit */unsigned int) var_4)), (var_10))) : ((+(var_8)))))));
                        var_11 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)29311)) ? (((/* implicit */int) (short)-30418)) : (((/* implicit */int) (unsigned short)32911))));
                        var_12 &= ((/* implicit */unsigned short) (short)29337);
                        var_13 = ((/* implicit */long long int) min((((2007633363731735329ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (var_0)));
                        var_14 = ((/* implicit */signed char) min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29314))) & (16439110709977816269ULL))), (((/* implicit */unsigned long long int) (_Bool)1)))), (((((/* implicit */_Bool) (~(21U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (18446744073709551615ULL)))))));
                    }
                } 
            } 
        } 
        var_15 = min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)34754))))) ? (((/* implicit */unsigned long long int) ((var_8) >> (((((/* implicit */int) var_1)) - (49061)))))) : (min((var_5), (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) (_Bool)1)));
    }
    var_16 = ((/* implicit */unsigned long long int) var_7);
    var_17 |= ((/* implicit */unsigned short) (signed char)-98);
}
