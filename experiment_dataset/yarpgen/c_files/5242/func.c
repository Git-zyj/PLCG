/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5242
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (var_15)));
                var_17 = min((max((((/* implicit */unsigned long long int) (unsigned short)49692)), (3983249233534936150ULL))), (((/* implicit */unsigned long long int) (signed char)30)));
                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
                var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)0)), (var_10)));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    arr_9 [(short)2] [i_0] [i_2] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_15) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-31), ((signed char)-28)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)32767), ((short)(-32767 - 1)))))) : (max(((-(arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) var_8))))));
                    arr_10 [i_1] [i_1] [1LL] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (((((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2])) ? (((/* implicit */int) (short)20383)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))) << (((var_1) - (4328213042515019117ULL)))))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((17260216993466568707ULL), (((/* implicit */unsigned long long int) 3601406238U))))) ? (((min((12000284312613165752ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_1])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 6446459761096385863ULL)) && (((/* implicit */_Bool) (unsigned short)49691)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 3093431777037792642LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9))) : (1006632960U))) >> (((((((/* implicit */_Bool) (-(((/* implicit */int) (short)-31400))))) ? (((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */int) var_8)))) : (-1))) - (382798613)))));
    var_22 = ((/* implicit */unsigned short) var_15);
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) ((((/* implicit */_Bool) -2007759580)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24576))) : (var_3)))))))));
}
