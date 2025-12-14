/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213177
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1872654180)) ? (-1872654180) : (((/* implicit */int) (_Bool)1))));
        arr_2 [i_0] [i_0] = (~(((((/* implicit */_Bool) arr_1 [i_0] [6LL])) ? (max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) 1872654179)))) : (arr_1 [i_0] [i_0]))));
    }
    var_17 = ((/* implicit */unsigned int) min((((((/* implicit */int) ((_Bool) -1084066005650797414LL))) & ((~(((/* implicit */int) (signed char)-105)))))), (((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (long long int i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 1) 
                {
                    var_18 = ((/* implicit */_Bool) ((long long int) ((_Bool) (_Bool)0)));
                    arr_12 [i_3] = ((/* implicit */short) (~((+(((/* implicit */int) arr_7 [i_2]))))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_2] [i_3] [i_3] [i_3 - 1])) ? (((long long int) 4393751543808LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)40542)) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) arr_11 [i_3] [i_1 - 1] [i_2] [i_3 + 2])))))));
                }
                var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((long long int) arr_9 [i_1] [i_1] [i_1 + 2] [i_1 + 2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(-5079630914212377604LL)))) && (((/* implicit */_Bool) ((arr_11 [12LL] [i_2] [i_1 + 2] [i_1 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_1]))) : (340049511538127753LL)))))))) : ((-(arr_9 [i_1 + 2] [i_2] [i_2] [i_2])))));
            }
        } 
    } 
    var_21 *= ((/* implicit */unsigned long long int) max((((/* implicit */signed char) var_14)), (((signed char) var_11))));
}
