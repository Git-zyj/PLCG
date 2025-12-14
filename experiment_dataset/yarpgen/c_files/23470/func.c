/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23470
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
    var_12 = ((/* implicit */_Bool) (+((+(((/* implicit */int) (short)2324))))));
    var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), ((-(((/* implicit */int) var_9))))));
    var_14 = ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_3)))));
    var_15 = ((/* implicit */signed char) ((unsigned short) var_11));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)18307)) ? (((/* implicit */unsigned long long int) -392906330)) : (6142321175998926420ULL)));
            var_16 = ((/* implicit */unsigned char) min((var_16), (arr_4 [i_0])));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) var_6);
            arr_7 [14ULL] [i_1] &= ((/* implicit */unsigned char) (_Bool)0);
            var_17 = ((arr_3 [i_0] [i_1] [i_1]) | (((long long int) 5665013777259423982LL)));
        }
        var_18 += (((!(((/* implicit */_Bool) 16003824072914319622ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned short)25997))))) ? (max((arr_0 [i_0]), (((/* implicit */unsigned int) (_Bool)0)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_4))))))))));
    }
    for (unsigned long long int i_2 = 4; i_2 < 16; i_2 += 2) 
    {
        var_19 += ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) (short)18307)), (min((var_4), (((/* implicit */unsigned long long int) var_0))))))));
        var_20 -= ((unsigned short) min((var_1), (((/* implicit */short) var_0))));
        arr_11 [i_2] = ((/* implicit */_Bool) (~(min(((~(9238543598348862261ULL))), (((/* implicit */unsigned long long int) (~(arr_1 [i_2 + 2] [i_2 - 2]))))))));
    }
}
