/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243339
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
    var_17 = ((/* implicit */signed char) ((int) min((4488803491743712789ULL), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (-5365419600552708274LL)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((unsigned int) var_1))));
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            var_19 += (!(((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_12)))));
            arr_6 [i_0] [i_1] [i_1] = var_15;
        }
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)28962)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)173))) : (-5365419600552708268LL)));
        var_21 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)0))))));
        arr_7 [i_0] [i_0] = ((/* implicit */_Bool) var_3);
    }
    for (int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_22 |= ((/* implicit */int) var_11);
        arr_12 [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) (signed char)-1));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            arr_17 [i_3] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)173))));
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) var_15)) * (((/* implicit */int) ((unsigned short) 338517782)))));
        }
    }
    for (short i_4 = 1; i_4 < 20; i_4 += 1) 
    {
        arr_21 [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
        arr_22 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_18 [i_4])) >= (((/* implicit */int) var_11)))) ? (((int) arr_18 [i_4])) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-7841344784822255486LL)))) ? (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) (~(((/* implicit */int) var_13))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) arr_19 [i_4] [i_4])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_15)))))));
        var_24 = ((/* implicit */_Bool) (unsigned char)245);
    }
}
