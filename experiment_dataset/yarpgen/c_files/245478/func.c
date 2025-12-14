/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245478
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_1)), (arr_5 [(_Bool)1])))), (arr_1 [i_0] [i_2]))) / (((/* implicit */unsigned long long int) max((-2062644077), (-400620247))))));
                    arr_8 [i_0] [i_1] [(signed char)5] [i_0] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) var_14)), (var_4))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_5 [i_0])))) ? (min((((/* implicit */unsigned long long int) arr_2 [i_1] [i_2])), (arr_1 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) min((arr_0 [i_2]), (arr_0 [18ULL]))))))));
                    var_16 &= ((/* implicit */signed char) var_5);
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_2]) | (arr_1 [i_2] [i_0])))) ? (min((arr_1 [i_0] [i_1]), (arr_1 [i_1] [i_0]))) : (((((/* implicit */_Bool) arr_1 [4LL] [i_2])) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_1] [i_0])))));
                }
            } 
        } 
    } 
    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_11)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / ((-(var_8)))))) : (min((((/* implicit */unsigned long long int) -400620247)), (6852292669681213903ULL)))));
}
