/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200782
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
    var_10 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((int) 1707631789U))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))) : (var_6)))));
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? ((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_0)) : (var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-15))))) ? ((+(((/* implicit */int) (signed char)31)))) : (((/* implicit */int) var_5)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (signed char)62)))))) ? (((min((7609751241874916768ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)2))) : (var_6))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_8 [i_1] [i_0] |= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) arr_6 [i_0] [i_1] [i_1])) != (((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)228))) : (var_6))))))));
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) ? ((-(((/* implicit */int) arr_9 [i_0] [i_1] [i_2])))) : (((/* implicit */int) arr_11 [i_2] [i_1]))))) ? (((/* implicit */int) (signed char)-22)) : ((((!(var_5))) ? (((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned char)228)))) : (((/* implicit */int) arr_4 [i_2] [i_1])))))))));
                arr_12 [i_0] [(unsigned char)23] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_10 [i_0] [i_1] [(short)0] [(short)8])))) ? (((/* implicit */int) arr_5 [i_1])) : (((((/* implicit */_Bool) 1417499599)) ? (var_0) : (((/* implicit */int) (unsigned char)217))))))) - (1800987005193025385ULL)));
            }
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_15 [(short)21] [(short)21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (arr_14 [i_0] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
            var_13 = ((/* implicit */unsigned int) ((arr_14 [i_0] [(signed char)19] [i_0]) * (arr_14 [(_Bool)1] [i_0] [i_0])));
            var_14 = ((/* implicit */unsigned char) ((arr_11 [i_3] [i_3]) ? (((/* implicit */unsigned int) ((var_7) - (((/* implicit */int) arr_4 [i_0] [i_3]))))) : (285026626U)));
        }
    }
    var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) var_1))));
}
