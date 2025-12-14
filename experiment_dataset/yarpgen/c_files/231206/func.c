/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231206
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)56048))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)9488)) | (((/* implicit */int) (unsigned char)231))))) : (var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))))))) : (((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 7; i_3 += 4) 
                {
                    {
                        arr_11 [i_2] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-2896600566726581499LL)))));
                        arr_12 [i_0] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [i_3] [i_0] [i_3 + 4])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-2507619921283454974LL))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 67100672U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22))) : (-2507619921283454974LL)))) == (arr_2 [i_0 - 2] [i_0 - 2])));
    }
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) arr_15 [i_4])))) ? (((/* implicit */long long int) (+(((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4])))))))) : (((((/* implicit */_Bool) (unsigned char)232)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) -1))))));
        arr_17 [i_4] = ((/* implicit */long long int) ((unsigned int) ((arr_14 [i_4]) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) arr_15 [i_4])))));
        var_14 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)32))))));
        arr_18 [i_4] = ((((/* implicit */_Bool) arr_16 [i_4] [i_4])) ? (344388485U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4]))));
    }
}
