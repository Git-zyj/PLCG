/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222844
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
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-1)))))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_1 [i_0 - 4]) : (arr_1 [i_0 + 2])));
        var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_1 [2U]) <= (arr_1 [9U]))))));
    }
    for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) (+(((long long int) 1ULL))));
        var_19 *= ((/* implicit */unsigned int) (~((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [6U]))) : (min((var_11), (((/* implicit */long long int) var_13))))))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_1))));
        arr_4 [(_Bool)1] &= ((/* implicit */unsigned int) arr_0 [i_1]);
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            var_21 += ((/* implicit */_Bool) arr_1 [(unsigned char)19]);
            var_22 = ((unsigned int) max((((unsigned int) 1ULL)), (((/* implicit */unsigned int) var_13))));
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) 0LL);
            arr_8 [i_2] [8U] [i_2] &= ((/* implicit */unsigned int) arr_2 [i_2]);
            var_23 ^= ((/* implicit */unsigned int) (((_Bool)0) ? (max((max((-1995325354), (((/* implicit */int) (_Bool)1)))), (min((-1995325354), (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) min(((unsigned short)49645), (((/* implicit */unsigned short) var_6)))))));
        }
    }
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) == (4294967295U))) ? (((/* implicit */int) var_3)) : (var_9))))));
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((805306368ULL) >= (((/* implicit */unsigned long long int) var_4))))) / (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_5))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))));
    var_26 -= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) || (((var_8) <= (var_0)))))) & (((/* implicit */int) min((((/* implicit */short) (unsigned char)79)), (var_10))))));
}
