/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207237
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (+(((var_0) ? (((/* implicit */int) (unsigned short)55749)) : (arr_0 [i_0]))))))));
        arr_2 [6U] = ((/* implicit */unsigned long long int) ((-4309799567155078915LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_21 = ((/* implicit */_Bool) arr_1 [7U]);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((max((arr_3 [i_0]), (arr_3 [i_0]))) % ((~(((/* implicit */int) var_17)))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) arr_4 [i_0] [i_2]))));
                arr_8 [i_0] [i_1] [i_1 - 1] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 3] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_2 + 2] [(signed char)10]))));
                arr_9 [(unsigned char)4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4309799567155078919LL)) ? (0U) : (((/* implicit */unsigned int) arr_0 [(unsigned short)4]))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)32738))) : ((-(-4309799567155078927LL)))));
            }
            arr_10 [i_0] [i_1 - 2] [i_1] = ((/* implicit */short) 4095U);
        }
        /* vectorizable */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_24 = ((/* implicit */_Bool) ((unsigned short) arr_4 [i_3] [(_Bool)1]));
            arr_15 [i_3] [i_0] [(signed char)4] = ((/* implicit */short) ((long long int) ((((/* implicit */int) (_Bool)1)) & (1172669081))));
            var_25 ^= ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_3 - 1] [i_3 - 1]);
        }
    }
    var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)10687)) * (((/* implicit */int) var_18))))) ? (((var_9) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_14))))))) * (((/* implicit */long long int) ((((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_5))) * (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))))))));
}
