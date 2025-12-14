/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222738
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
    var_10 = ((/* implicit */short) ((var_5) ? (((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) var_6)) ? ((-(((/* implicit */int) (unsigned short)5155)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
    var_11 = ((/* implicit */unsigned long long int) max((((/* implicit */short) (((!(((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)17921)))))))), (min((var_4), (((/* implicit */short) var_8))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_9 [i_0 - 2] [i_0 + 3] [i_2] [i_0 - 2] = ((/* implicit */unsigned char) var_5);
                    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 255ULL)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))) != ((-(((/* implicit */int) max((arr_7 [i_0] [i_2] [i_2 + 2] [i_2 - 1]), (arr_7 [i_2] [i_2] [i_2] [i_0]))))))));
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (min((((/* implicit */long long int) arr_7 [i_0 + 3] [i_2] [(unsigned char)7] [i_2 - 1])), (max((4960054427668709431LL), (((/* implicit */long long int) arr_8 [i_0] [i_2]))))))));
                }
            } 
        } 
    } 
}
