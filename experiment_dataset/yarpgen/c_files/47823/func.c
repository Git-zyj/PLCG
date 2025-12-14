/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47823
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
    var_14 = ((/* implicit */signed char) var_5);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] [(signed char)7] = ((/* implicit */unsigned int) var_6);
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            arr_5 [i_1] [i_0] = ((/* implicit */short) ((long long int) ((signed char) arr_4 [i_0] [i_1 + 1])));
            arr_6 [i_0] = ((/* implicit */signed char) ((_Bool) var_13));
        }
        /* vectorizable */
        for (short i_2 = 3; i_2 < 20; i_2 += 4) 
        {
            arr_9 [i_0] [i_2] = ((/* implicit */short) ((arr_7 [i_2 - 3]) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117)))));
            arr_10 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((unsigned char) arr_7 [i_0]))) : (((/* implicit */int) ((unsigned char) var_8)))));
        }
        arr_11 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((unsigned int) (unsigned char)53)))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) < (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [1LL])) > (var_13))))))) : (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))) < (arr_7 [i_0])))) >> (((((long long int) var_5)) - (30735LL)))))));
    }
    var_15 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((int) var_12))))) < (min((var_9), (((/* implicit */long long int) ((short) var_4)))))));
}
