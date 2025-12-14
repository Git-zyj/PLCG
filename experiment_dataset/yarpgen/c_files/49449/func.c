/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49449
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
    var_17 = ((/* implicit */unsigned char) var_4);
    var_18 = ((/* implicit */int) var_8);
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) / (var_12)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((((/* implicit */_Bool) min((12710272414145877364ULL), (12704162950983727688ULL)))) && (var_11))))));
    var_20 = ((/* implicit */long long int) min((((/* implicit */short) min((((/* implicit */unsigned char) ((((/* implicit */int) var_15)) <= (((/* implicit */int) (unsigned char)253))))), (var_16)))), (var_14)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_21 ^= ((/* implicit */int) ((unsigned int) (+(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_1 [i_0])))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    arr_10 [(short)12] [16] [i_1] [i_0] = ((/* implicit */_Bool) (-(var_12)));
                    arr_11 [i_1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
                }
                for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) var_3)) ? (9117848335827206604ULL) : (arr_8 [i_3] [i_3] [i_1] [i_0]))))) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32766)))))));
                    var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_0 [i_3])) % (-3362401222336806150LL)))) ? (((/* implicit */unsigned long long int) (-(arr_6 [i_3] [i_1] [i_0])))) : (arr_8 [i_0] [i_1] [(short)6] [i_3])))) ? (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_1] [i_1])))) - ((~(((/* implicit */int) var_4)))))) : (((((/* implicit */int) var_14)) - (((var_5) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_7 [7] [i_1])))))));
                }
                arr_15 [i_0] [i_1] = ((/* implicit */unsigned char) min(((~(arr_3 [i_1] [i_1] [i_1]))), (min((arr_12 [i_0]), (((/* implicit */unsigned int) var_14))))));
            }
        } 
    } 
}
