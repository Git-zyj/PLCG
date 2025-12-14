/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236735
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
    var_16 = ((/* implicit */_Bool) (~(min((var_3), (0LL)))));
    var_17 = ((/* implicit */long long int) var_7);
    var_18 = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_5))))) <= (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 3638975595U)) ? (var_3) : (-11LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 5060205063359142745LL)) != (var_11)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((arr_6 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1]) / (((arr_7 [(unsigned char)4] [i_1] [i_1] [i_0]) / (((/* implicit */long long int) arr_2 [i_0] [i_0])))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_4))) && ((!(((/* implicit */_Bool) var_15))))))))));
                    var_19 = ((/* implicit */_Bool) (~((~(min((((/* implicit */unsigned int) (unsigned short)15001)), (655991701U)))))));
                    var_20 = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) (+(((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_1]))))) >> (((arr_7 [i_0 - 1] [i_1] [(unsigned char)5] [i_1]) - (5609758503607526211LL)))))))) : (((/* implicit */unsigned short) (+(((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_1]))))) >> (((((arr_7 [i_0 - 1] [i_1] [(unsigned char)5] [i_1]) - (5609758503607526211LL))) + (861576679555774223LL))))))));
                }
            } 
        } 
    } 
}
