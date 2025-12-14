/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235719
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
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_15 = min(((-(((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */long long int) arr_0 [i_0 + 2])) : (-4379691050112685954LL))))), (((/* implicit */long long int) arr_2 [i_0] [i_1])));
            var_16 = ((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_1] [i_0]));
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_14)))), (1002121103))))));
        }
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-127)))) : (((/* implicit */int) (unsigned char)58))))) ? ((-(min((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (var_4))))) : (min((min((var_9), (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-18357)) : (var_10))))))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_18 = ((/* implicit */_Bool) ((unsigned long long int) 4379691050112685947LL));
        arr_8 [(short)2] |= arr_5 [i_2];
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 2) 
    {
        arr_11 [i_3] [i_3 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_9 [i_3]))));
        var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18347)) ? (1717433373U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(short)0])))))) ? (-8428146033728982617LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [(_Bool)1])))));
    }
    for (unsigned long long int i_4 = 3; i_4 < 14; i_4 += 2) 
    {
        arr_15 [i_4] = ((/* implicit */short) ((unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_4])) ? (4379691050112685954LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (min((var_13), (((/* implicit */unsigned long long int) arr_13 [i_4])))))));
        var_20 &= var_5;
        var_21 = ((/* implicit */_Bool) min((((/* implicit */long long int) (((-(((/* implicit */int) var_12)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))))), (min((((long long int) 4379691050112685956LL)), ((+(-1011936089727659357LL)))))));
        var_22 = ((/* implicit */unsigned long long int) (+((((~(var_1))) ^ (var_4)))));
    }
    /* vectorizable */
    for (long long int i_5 = 2; i_5 < 8; i_5 += 2) 
    {
        var_23 -= ((/* implicit */_Bool) var_3);
        var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-7210)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_17 [i_5])) : (((((/* implicit */_Bool) (short)15609)) ? (((/* implicit */int) var_12)) : (-156179352)))));
        var_25 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (short)18365)))));
        var_26 &= ((/* implicit */_Bool) ((arr_12 [i_5 - 2]) ^ (arr_12 [i_5 - 2])));
    }
    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_1)))) : (((var_2) ? (var_13) : (var_13)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_1)));
}
