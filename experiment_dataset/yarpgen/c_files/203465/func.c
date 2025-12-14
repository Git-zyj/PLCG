/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203465
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */int) 8394764567730204395ULL);
                var_15 *= ((/* implicit */int) ((((((/* implicit */_Bool) min((var_9), (((/* implicit */signed char) var_6))))) ? (((arr_1 [i_0]) ? (((/* implicit */int) var_9)) : ((-2147483647 - 1)))) : (((/* implicit */int) ((signed char) var_7))))) <= (((((/* implicit */_Bool) ((((/* implicit */int) (short)-3603)) * (((/* implicit */int) var_13))))) ? ((-(arr_0 [i_0] [i_1]))) : (((/* implicit */int) arr_1 [i_1]))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((max((((/* implicit */int) var_8)), (arr_4 [i_0] [i_1] [i_1] [i_2]))) & (((/* implicit */int) var_9))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_5 [i_0] [i_2] [i_0]);
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */int) ((-950502346) < (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141))) : (10051979505979347250ULL)))))));
}
