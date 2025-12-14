/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245343
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-6942))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (((_Bool)1) ? (4194303U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56953)))))))) : (var_1)));
    var_20 = ((((((((/* implicit */int) var_5)) % (((/* implicit */int) var_5)))) >> (((var_2) - (3054056456U))))) + ((~(((/* implicit */int) var_0)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        arr_10 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) arr_9 [i_0] [i_1] [(unsigned short)4] [i_2]);
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_17))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_1 [i_0])));
                        arr_11 [i_2] [i_1] [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((4290772998U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)23080)))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)26)) || ((_Bool)1))))));
                    }
                } 
            } 
        } 
        arr_12 [10] = ((/* implicit */short) arr_5 [i_0] [i_0]);
        var_22 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 4290772993U)))) == (arr_0 [i_0])));
    }
    var_23 *= ((/* implicit */long long int) ((((/* implicit */_Bool) 6829791382040053122ULL)) && (((/* implicit */_Bool) 4194302U))));
}
