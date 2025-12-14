/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249231
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
    var_14 = ((/* implicit */unsigned long long int) min((((unsigned char) ((((/* implicit */unsigned long long int) var_1)) % (var_7)))), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_7)))))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        var_15 ^= ((/* implicit */short) max((1560510101334728012ULL), (((/* implicit */unsigned long long int) (short)22380))));
        var_16 = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_11)) ? (9653099558855739286ULL) : (((/* implicit */unsigned long long int) var_4)))));
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_1])));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    {
                        var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8558956334573879294ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_9)))) % (((((/* implicit */_Bool) arr_10 [i_4] [i_1] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) arr_11 [i_1] [i_1] [i_1])) : (arr_6 [i_1])))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [11ULL])) || (((/* implicit */_Bool) arr_11 [i_2] [i_2] [(_Bool)1])))))) | (((var_8) << (((((/* implicit */int) var_6)) - (224)))))));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (var_12)))) ? (((((/* implicit */_Bool) var_1)) ? (var_9) : (var_4))) : (((((/* implicit */_Bool) var_10)) ? (var_11) : (2305807824841605120LL)))))) ? (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_9)))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) << (((((long long int) 894371250U)) - (894371248LL)))))));
    var_22 = ((/* implicit */int) var_2);
}
