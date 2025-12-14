/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193129
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-14052)) && (((/* implicit */_Bool) (unsigned char)92))));
    var_11 = ((/* implicit */unsigned long long int) ((_Bool) (-2147483647 - 1)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_5 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))))), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)92)), ((-2147483647 - 1))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_0] [i_2])), (arr_0 [i_1] [i_0])))) || (arr_4 [0] [i_1]))))));
                    arr_8 [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_0] [i_1]);
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (arr_5 [i_0] [i_0] [i_0])))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_12 [17] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_3] [i_3])) ? (((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_11 [i_3]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_3] [(unsigned char)8] [i_3])) ? (((/* implicit */int) arr_4 [i_3] [i_3])) : (((/* implicit */int) arr_4 [(unsigned char)13] [i_3]))))))) : (((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [6ULL] [i_3] [6ULL]))) ^ (arr_10 [i_3])))) & (((arr_11 [i_3]) & (arr_3 [i_3] [i_3] [i_3])))))));
        arr_13 [7U] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) 524287U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)18913))) : (8065599152486329695LL))));
        arr_14 [(unsigned char)2] [i_3] = min((((((/* implicit */_Bool) ((arr_10 [i_3]) >> (((arr_11 [i_3]) - (4633307575588258644LL)))))) ? (arr_5 [i_3] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3]))) <= (arr_1 [i_3]))))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3]))) & (arr_5 [i_3] [i_3] [i_3]))));
        arr_15 [i_3] [i_3] = ((/* implicit */long long int) min((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (_Bool)1)) : (596869522))), (((/* implicit */int) ((((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3])) >= (((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3])))))));
    }
    var_12 = ((/* implicit */int) var_1);
    var_13 = ((/* implicit */_Bool) ((((/* implicit */long long int) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))))) / (var_2)));
}
