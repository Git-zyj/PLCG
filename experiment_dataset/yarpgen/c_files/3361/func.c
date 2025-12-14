/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3361
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_12 = ((/* implicit */unsigned int) ((unsigned short) arr_0 [i_0 - 1] [i_0 - 2]));
            arr_6 [i_0] [i_0 - 2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0 - 2])) ? ((-(var_5))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))))));
            var_13 = ((/* implicit */unsigned short) (-(arr_1 [i_0] [i_0])));
            arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0 - 1]))));
            var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_2 [i_0] [i_0 - 2]))))));
        }
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            arr_11 [(short)12] [i_2] [i_2] = ((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_1 [i_0] [i_2])));
            arr_12 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_8 [i_0] [i_0] [(_Bool)1])), (arr_10 [i_0] [i_0] [i_2])))) ? (((/* implicit */int) ((signed char) (unsigned char)72))) : (((/* implicit */int) max((arr_9 [i_0] [2ULL]), (((/* implicit */signed char) arr_8 [i_0 - 1] [i_2] [i_2])))))));
            var_15 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) var_5)))));
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1] [i_0 - 1]))))) / (((/* implicit */int) (unsigned char)9))));
        }
        var_17 += min((var_9), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)90))))));
        arr_13 [i_0 - 2] = arr_0 [i_0] [i_0];
    }
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (var_3)));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((var_11) / (((/* implicit */long long int) var_4)))) : (max((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-123))))), (var_11)))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */int) var_1))));
    var_21 = ((/* implicit */unsigned int) (-(var_3)));
}
