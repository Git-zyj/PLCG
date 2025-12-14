/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236505
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(-608222795))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((var_8) ? (var_14) : (((/* implicit */unsigned int) arr_5 [i_0])))))) ? (((int) ((unsigned char) var_7))) : (min((((int) 281474976710655ULL)), (((/* implicit */int) ((arr_1 [(short)6] [i_1]) > (((/* implicit */int) arr_4 [i_1] [12ULL] [i_0])))))))));
            arr_7 [i_1] = ((/* implicit */unsigned short) (+((+(arr_1 [i_0] [i_1])))));
        }
        var_17 += ((/* implicit */int) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : ((~(var_2))))), (((long long int) ((((/* implicit */_Bool) (unsigned short)18210)) ? (((/* implicit */int) (unsigned short)47326)) : (arr_5 [i_0]))))));
        var_18 += var_5;
    }
    var_19 += ((/* implicit */unsigned char) var_0);
    var_20 = ((/* implicit */int) ((max((var_12), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)28)) | (((/* implicit */int) var_11))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    var_21 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) var_11))));
}
