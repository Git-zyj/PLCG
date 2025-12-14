/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30979
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
    var_11 = ((/* implicit */unsigned char) ((var_5) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65509)))));
    var_12 = ((/* implicit */signed char) var_10);
    var_13 = (~(((((/* implicit */_Bool) var_4)) ? ((+(0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_4))))))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) -8154188672408225905LL)) ? (((/* implicit */int) var_10)) : (-1331014496))) : (((/* implicit */int) (unsigned char)125))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_7 [i_0 - 2] [i_0 - 2] = ((/* implicit */_Bool) ((arr_6 [i_2 - 2] [i_2 - 3] [i_2 - 3] [i_2 - 3]) & (((arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 4] [i_2]) ^ (arr_6 [i_2 - 4] [i_2 - 2] [i_2 - 1] [i_2 - 4])))));
                    var_15 ^= ((/* implicit */unsigned int) arr_1 [i_0]);
                    var_16 = (+(((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_7))) && (((/* implicit */_Bool) arr_4 [i_0]))))));
                    var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) max((arr_6 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_3 [i_0] [(unsigned short)8])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1])))) < (((((/* implicit */_Bool) min(((signed char)(-127 - 1)), ((signed char)127)))) ? (var_8) : (((/* implicit */int) arr_5 [i_2 + 1] [i_2 - 4] [i_0 - 1] [i_0 - 2]))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_2])) ? (((/* implicit */int) ((unsigned short) var_7))) : (var_8))) > ((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)59832)) >= (((/* implicit */int) (signed char)-124)))))))));
                }
            } 
        } 
    } 
}
