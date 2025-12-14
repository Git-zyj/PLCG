/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20405
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
    var_15 = ((/* implicit */long long int) var_4);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((arr_2 [i_1 - 3]), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_4 [i_1 - 3] [i_1 - 3] [i_0]), (arr_4 [i_0] [i_1] [i_2])))) ? (arr_5 [i_2] [i_1] [i_1]) : (((/* implicit */int) arr_6 [i_1 + 1] [i_2])))))));
                    arr_8 [i_2] [i_0] [i_1] = ((/* implicit */unsigned char) min((max((12ULL), (((/* implicit */unsigned long long int) (short)6201)))), (((/* implicit */unsigned long long int) arr_2 [0LL]))));
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_2])) ? (var_1) : (((/* implicit */unsigned long long int) arr_0 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_0 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */int) (short)-25081)) : (((/* implicit */int) (unsigned short)58316))))) : (max((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_3 [i_2])) != (arr_4 [i_1 + 2] [i_1 - 1] [i_1 + 2]))))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_3 [i_2]);
                    var_17 = ((/* implicit */unsigned char) arr_0 [i_1 + 1]);
                }
            } 
        } 
    } 
}
