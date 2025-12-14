/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26032
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
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_14 -= ((/* implicit */unsigned int) arr_1 [i_0 + 1] [i_0 - 1]);
        var_15 *= ((/* implicit */unsigned char) (+(((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_1 [i_0] [i_0])))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) var_5);
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (short)-507)))))) >= (min((var_7), (((/* implicit */long long int) arr_6 [i_1] [14]))))))) < (min((((((/* implicit */int) (_Bool)0)) >> (((var_1) - (3362968973U))))), ((+(((/* implicit */int) arr_6 [(short)2] [(short)2])))))))))));
    }
    for (int i_2 = 1; i_2 < 9; i_2 += 4) 
    {
        var_18 -= ((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_2] [i_2]))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) arr_1 [i_2 + 2] [i_2 + 1])) : (((/* implicit */int) ((signed char) var_8)))))) ? ((~(((((/* implicit */int) arr_3 [i_2 + 3] [i_2])) | (((/* implicit */int) var_3)))))) : (((((/* implicit */int) arr_6 [i_2 - 1] [16ULL])) >> (((/* implicit */int) arr_8 [i_2] [i_2])))))))));
        var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) max(((+(var_13))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_1 [i_2] [i_2])), (arr_2 [(unsigned short)8]))))))) ? (min((((((/* implicit */int) var_11)) - (var_9))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_6 [i_2] [4ULL])))))) : (((((/* implicit */int) (unsigned short)65530)) / (((((/* implicit */int) (_Bool)1)) * (arr_2 [(_Bool)1])))))))));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((arr_5 [16ULL]), (arr_5 [12LL]))))));
        var_22 += ((/* implicit */unsigned short) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)3)))))))));
    }
    var_23 = ((/* implicit */long long int) max((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16289)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_7)))));
    /* LoopSeq 1 */
    for (int i_3 = 2; i_3 < 15; i_3 += 3) 
    {
        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)255)), (2147483647))))));
        var_25 *= ((/* implicit */short) var_3);
        arr_11 [i_3] = (~(((/* implicit */int) arr_9 [i_3] [i_3 - 2])));
    }
}
