/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26261
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [(signed char)20] [(signed char)20] |= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) -25648467475993219LL)) | (var_16))) ^ (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) arr_3 [2] [i_1] [2])))) + (2147483647))) >> (((((/* implicit */int) var_2)) - (35243))))))));
                    var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))) ? ((~(arr_5 [i_0] [i_1]))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)160))) & (arr_7 [(signed char)11] [i_1] [i_2] [i_2]))))), (((/* implicit */long long int) ((arr_3 [i_0] [i_1] [i_2]) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_1] [6LL])))))));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)96)))))));
                    var_20 -= ((/* implicit */signed char) (((~(((/* implicit */int) arr_4 [i_2] [i_1] [i_2])))) % (((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */int) max(((unsigned char)160), (((/* implicit */unsigned char) (signed char)-90))))) : (821131342)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max((var_0), ((~(((/* implicit */int) var_9))))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (15441547942754833832ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (((var_14) + (var_15))))))));
    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) min((1073741824), (-1285090445)))))));
}
