/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199136
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
    var_17 = ((/* implicit */int) min((((/* implicit */short) (!((!(((/* implicit */_Bool) var_0))))))), ((short)7803)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((var_5) / ((~(((/* implicit */int) (short)-7803))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7804)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7803))) : (497343148U)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned int) var_3)) == (((unsigned int) var_13))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (-(min((((/* implicit */int) (unsigned char)235)), ((+(((/* implicit */int) var_10))))))));
        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((long long int) (unsigned char)221)) <= (((/* implicit */long long int) max((var_2), (((/* implicit */int) var_7)))))))) + (((/* implicit */int) arr_0 [i_0]))));
        var_19 *= (unsigned char)9;
    }
    /* LoopNest 3 */
    for (short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        for (unsigned int i_2 = 3; i_2 < 10; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                {
                    var_20 &= ((/* implicit */int) (~(max((max((arr_6 [i_1]), (((/* implicit */unsigned int) arr_13 [(_Bool)1] [12ULL])))), (((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (var_4))))))));
                    var_21 = ((/* implicit */long long int) max((arr_6 [i_3]), (((/* implicit */unsigned int) var_1))));
                }
            } 
        } 
    } 
    var_22 ^= ((/* implicit */unsigned short) (unsigned char)246);
}
