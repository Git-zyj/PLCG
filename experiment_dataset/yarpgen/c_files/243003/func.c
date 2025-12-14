/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243003
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_0))));
        var_14 = ((/* implicit */unsigned char) (~(2145386496)));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_15 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [i_1])) | (((unsigned long long int) var_6))));
            var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 2145386496)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)48))));
            var_17 = ((/* implicit */long long int) var_9);
        }
        var_18 &= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)41110)) << (((((((/* implicit */int) var_9)) + (114))) - (16)))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        var_19 = ((/* implicit */short) (~(arr_6 [i_2])));
        var_20 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) -1)) <= (2161314865U))))) : (arr_2 [i_2] [i_2])));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        var_21 = (~(((/* implicit */int) arr_4 [i_3] [i_3] [i_3])));
        var_22 = ((/* implicit */unsigned long long int) ((unsigned char) ((1042715070) >= (((/* implicit */int) var_5)))));
    }
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        var_23 = ((/* implicit */short) var_12);
        var_24 = ((/* implicit */signed char) (unsigned short)0);
        var_25 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_12))) > (-3723567211818808746LL))) ? (10514209000960687775ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (2161314865U))))))))));
    }
    var_26 = ((/* implicit */signed char) var_5);
    var_27 = ((/* implicit */long long int) var_5);
}
