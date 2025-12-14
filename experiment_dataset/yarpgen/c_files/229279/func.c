/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229279
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (max((((var_1) >> (((((/* implicit */int) var_0)) + (69))))), (((/* implicit */unsigned long long int) var_7))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) (~(min((var_9), (((/* implicit */long long int) var_4))))));
        var_14 = ((/* implicit */unsigned int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)-27155))));
        var_15 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13902))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)24576)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_0 [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)44123))))))));
        var_16 = ((/* implicit */signed char) (~(((/* implicit */int) max(((short)29435), (((/* implicit */short) (_Bool)1)))))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (short i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    {
                        var_17 &= ((/* implicit */unsigned short) var_11);
                        arr_12 [i_1] [i_1] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) var_3);
                        var_18 = arr_6 [i_1] [i_2];
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (arr_8 [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) min((arr_5 [i_1]), ((signed char)-101)))) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1] [i_1]))))) ? ((((!(((/* implicit */_Bool) -8671627460996427987LL)))) ? (((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) (unsigned short)40987)) : (((/* implicit */int) (short)27603)))) : (((/* implicit */int) var_2)))) : (((((/* implicit */int) var_4)) + (((/* implicit */int) min((((/* implicit */short) var_0)), (arr_6 [i_1] [i_1]))))))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_10)) - (((((/* implicit */int) arr_4 [i_1])) + (((/* implicit */int) var_6))))));
    }
    var_21 = ((/* implicit */_Bool) ((long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) != (var_3))))));
}
