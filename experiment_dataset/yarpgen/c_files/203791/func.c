/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203791
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
    var_17 = ((/* implicit */int) var_6);
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (+(max((((((/* implicit */_Bool) var_5)) ? (var_15) : (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))))))))));
    var_19 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (-(max((var_12), (((/* implicit */unsigned int) var_5)))))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) ((unsigned short) (unsigned short)32767))) - (((/* implicit */int) ((unsigned short) 712799641))))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_22 &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)32755)) != (((/* implicit */int) (unsigned short)32767))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (unsigned char i_3 = 1; i_3 < 17; i_3 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) ((2000012339) == (((/* implicit */int) (unsigned short)32784))));
                    var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-89))));
                    var_25 = ((((/* implicit */int) arr_8 [i_1])) * (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))));
                }
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        arr_17 [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
        var_26 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [16])) ? (((/* implicit */unsigned long long int) arr_14 [i_4] [i_4])) : (var_4)))) && (((/* implicit */_Bool) (~(arr_16 [(short)0]))))));
    }
}
