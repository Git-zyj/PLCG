/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21985
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
    var_11 = ((/* implicit */unsigned int) (signed char)-89);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [(unsigned short)8] = ((/* implicit */long long int) ((unsigned int) ((arr_0 [i_2] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_0]))) : (arr_7 [i_0]))));
                    var_12 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)65)), (14909615628250930295ULL)))) && (((/* implicit */_Bool) 14909615628250930311ULL)))), (((_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned long long int) var_5)) : (var_8))))));
                    var_13 = ((/* implicit */unsigned short) ((int) ((unsigned char) var_6)));
                }
            } 
        } 
        arr_9 [11U] = ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))));
    }
    var_14 = ((/* implicit */long long int) (~(var_8)));
}
