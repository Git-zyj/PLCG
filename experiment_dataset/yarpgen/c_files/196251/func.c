/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196251
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
    var_18 = ((/* implicit */unsigned long long int) (signed char)-37);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) arr_2 [i_0]);
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) 470165627))));
    }
    for (long long int i_1 = 2; i_1 < 9; i_1 += 4) 
    {
        var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_5 [i_1]) : (arr_0 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : ((((_Bool)1) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 1])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_13)))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_10))))))))) : (var_1)));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            arr_9 [(unsigned short)9] [(unsigned short)9] [i_2] = ((/* implicit */_Bool) ((((arr_0 [i_1 - 2]) | (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 2]))))) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) (~(((/* implicit */int) var_6)))))))));
            var_22 = var_11;
        }
        for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            arr_12 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_7))));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)28)) % (((/* implicit */int) var_15))))) ? (((/* implicit */long long int) arr_4 [i_1 + 2])) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [(signed char)0])))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (4837445267631845053ULL)))) ? ((~(17978245846391899850ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
        }
    }
    var_24 = ((/* implicit */long long int) ((((/* implicit */int) var_15)) - (((/* implicit */int) (_Bool)1))));
    var_25 = ((/* implicit */unsigned char) var_10);
    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || ((!((_Bool)0)))))) != (((/* implicit */int) var_0)))))));
}
