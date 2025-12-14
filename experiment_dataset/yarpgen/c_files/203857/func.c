/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203857
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
    var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)8308))));
    var_17 = ((/* implicit */unsigned char) (-(var_14)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) var_6);
        arr_4 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)68))));
        var_18 = ((/* implicit */signed char) ((unsigned long long int) -5322211078679805917LL));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) (-(((int) arr_8 [i_1]))));
        arr_10 [i_1] = ((/* implicit */signed char) var_2);
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_13))));
        var_20 -= ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_4))))) : (((long long int) var_11)));
        arr_13 [(_Bool)1] [11ULL] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) + (16175938357922418869ULL)));
    }
    /* vectorizable */
    for (long long int i_3 = 1; i_3 < 11; i_3 += 1) 
    {
        var_21 |= ((/* implicit */int) (unsigned short)60860);
        arr_16 [i_3] [(_Bool)1] = ((/* implicit */unsigned long long int) var_13);
    }
    for (short i_4 = 2; i_4 < 12; i_4 += 4) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned int) min((2069237242), (((/* implicit */int) (signed char)-124))));
        var_22 -= ((/* implicit */int) max((max((((/* implicit */long long int) var_2)), (5322211078679805914LL))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (unsigned short)54756)) - (((/* implicit */int) (unsigned short)10802))))))));
    }
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        arr_23 [i_5] [i_5] = ((/* implicit */signed char) var_7);
        var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_8 [i_5]))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_5 [i_5])) ? (607992854) : (((/* implicit */int) var_8)))))) : ((+(((/* implicit */int) arr_0 [i_5]))))));
    }
}
