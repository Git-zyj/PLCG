/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20570
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
    var_11 ^= ((/* implicit */signed char) ((unsigned char) min(((!(((/* implicit */_Bool) 3318474733U)))), ((!(((/* implicit */_Bool) var_9)))))));
    var_12 *= ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_7))) && (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) -621032631))))) > (((/* implicit */int) ((signed char) var_2)))))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-(var_0))), (((/* implicit */int) (_Bool)1))))) ? (((((((/* implicit */int) (unsigned char)209)) > (((/* implicit */int) (unsigned char)62)))) ? (((/* implicit */int) ((signed char) (_Bool)0))) : (((/* implicit */int) ((var_9) > (((/* implicit */int) (signed char)92))))))) : ((~(var_9)))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) min((18446742974197923840ULL), (((/* implicit */unsigned long long int) ((_Bool) (signed char)3)))));
        var_14 += ((/* implicit */unsigned int) (_Bool)0);
        var_15 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 3])) && (((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_0 + 3] [i_0 - 1])), ((short)16571))))));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min(((((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0 - 3] [i_0]))) : (((/* implicit */int) (unsigned char)47)))), (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-119)) ? (18446742974197923840ULL) : (((/* implicit */unsigned long long int) -1390013385)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [(signed char)11] = ((/* implicit */short) ((3896445858U) * (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned short)9925)))))));
        var_17 = ((/* implicit */int) min((var_17), (((((((/* implicit */int) arr_1 [i_1] [i_1])) >> (((((/* implicit */int) (unsigned char)71)) - (63))))) ^ (((/* implicit */int) ((short) var_1)))))));
    }
}
