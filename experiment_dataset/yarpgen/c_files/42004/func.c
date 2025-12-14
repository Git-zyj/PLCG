/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42004
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */unsigned int) (unsigned char)88)), (2960678910U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_0)))))))));
    var_11 = ((/* implicit */short) -8745490596758219005LL);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */short) ((min((min((arr_0 [i_2]), (((/* implicit */unsigned int) arr_4 [i_1])))), (((/* implicit */unsigned int) (unsigned short)5226)))) + (((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)168)), (arr_6 [i_2] [8U])))) - (((unsigned int) arr_2 [11ULL] [i_1]))))));
                    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)40)), (arr_0 [i_0]))))));
                    var_13 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_1]))))) > (max((arr_0 [i_1]), (arr_0 [(unsigned short)2]))))) && (((/* implicit */_Bool) arr_4 [i_1]))));
                    arr_9 [i_1] [i_1] [i_1] [i_0 + 2] = ((/* implicit */short) var_1);
                }
            } 
        } 
    } 
}
