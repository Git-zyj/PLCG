/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26605
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
    var_20 *= ((/* implicit */signed char) (((~(var_16))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) & (((/* implicit */int) (unsigned char)247))))) & (min((((/* implicit */unsigned int) (unsigned char)16)), (var_12))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) (~((-(((/* implicit */int) arr_4 [i_2 + 2] [i_2 + 2] [(_Bool)1]))))));
                    arr_6 [i_0 - 1] [i_1] [i_0 - 2] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (max((((/* implicit */unsigned int) arr_1 [i_0])), (var_8)))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_11)))))));
                }
            } 
        } 
        arr_7 [i_0 - 2] = ((/* implicit */unsigned short) ((((((var_8) == (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned short)23] [i_0 - 2] [i_0]))))) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) ((arr_3 [i_0]) && (((/* implicit */_Bool) var_14))))))) > ((~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 + 1])) > (((/* implicit */int) var_6)))))))));
    }
    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)31)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15))))), (((long long int) var_9)))))));
    var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((var_18), (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) var_17)))))) * (((/* implicit */int) ((((/* implicit */_Bool) var_19)) || (((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) (short)31))))))))));
    var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_13)))) && (((/* implicit */_Bool) max((-4332515792509551751LL), (var_3)))))))) * (min((((/* implicit */unsigned long long int) var_10)), ((~(var_16)))))));
}
