/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45385
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (((/* implicit */int) arr_2 [i_0])) : ((~(((/* implicit */int) arr_0 [i_0] [(_Bool)1]))))))) : (arr_1 [i_0])));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)239))) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (((int) arr_2 [i_0]))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_8 [20ULL] [i_1] = ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) (unsigned short)43549)))));
        arr_9 [i_1] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)7455))));
        arr_10 [i_1] [i_1] = ((/* implicit */signed char) (_Bool)1);
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_13 *= ((((_Bool) arr_11 [(_Bool)1] [i_2])) ? (((/* implicit */int) (!(arr_11 [0ULL] [i_2])))) : (((arr_11 [(unsigned short)12] [i_2]) ? (((/* implicit */int) arr_11 [(signed char)16] [i_2])) : (((/* implicit */int) arr_11 [12U] [i_2])))));
            arr_13 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) 858293790582208072ULL);
        }
    }
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((+(((/* implicit */int) (signed char)123))))))) ? (((/* implicit */int) ((unsigned short) var_6))) : ((~(((/* implicit */int) var_7))))));
}
