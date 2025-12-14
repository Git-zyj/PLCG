/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197626
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
    var_15 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */short) ((unsigned char) var_8))), (var_4)))), (var_6)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_0 [i_0] [i_0]))))) && (((/* implicit */_Bool) arr_1 [i_0])))))));
        var_17 &= arr_0 [i_0] [i_0];
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)77)))))) >= (((var_3) << (((((/* implicit */int) var_7)) - (60)))))))) >> (max((((((/* implicit */_Bool) (short)-28556)) ? (((/* implicit */int) arr_0 [(unsigned short)16] [(unsigned short)16])) : (((/* implicit */int) arr_0 [i_0] [14U])))), (((/* implicit */int) arr_1 [i_0]))))));
        var_19 = ((/* implicit */signed char) arr_1 [i_0]);
    }
    for (unsigned int i_1 = 2; i_1 < 14; i_1 += 4) 
    {
        var_20 = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1])) ^ (((/* implicit */int) (short)28568))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [(_Bool)0]))) | (var_13)))))));
        var_21 -= ((/* implicit */unsigned long long int) max((((unsigned int) (short)28568)), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [15LL])) | (((/* implicit */int) max((arr_1 [12ULL]), (((/* implicit */short) var_7))))))))));
    }
}
