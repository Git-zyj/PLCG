/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216079
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
    var_11 = (-(min((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_2)), (var_8)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    var_12 |= ((/* implicit */unsigned char) 6ULL);
                    arr_8 [i_2 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) (unsigned char)192))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_0] [i_2] [i_0]))))) : (max((var_0), (18446744073709551609ULL)))))) ? ((~(min((((/* implicit */unsigned int) (short)-12564)), (var_5))))) : (((/* implicit */unsigned int) ((int) ((var_10) > (var_4)))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_0]))))), (max((18446744073709551613ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_0])))))) * (((/* implicit */unsigned long long int) var_6))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_10);
}
