/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26450
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
    var_20 = ((/* implicit */signed char) min(((unsigned short)21265), (var_2)));
    var_21 = (unsigned short)0;
    var_22 = ((/* implicit */unsigned int) (signed char)(-127 - 1));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_23 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_1 [3] [(unsigned short)9])))) & (min((((/* implicit */int) ((unsigned char) (signed char)-1))), (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)65513))))))));
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) 268427264))));
        arr_4 [i_0] = ((/* implicit */unsigned short) 0LL);
        var_25 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) (unsigned short)48485)) - (((/* implicit */int) (signed char)-91)))))), (max((((((/* implicit */_Bool) var_3)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) ((int) (unsigned short)65535)))))));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_26 &= ((/* implicit */long long int) ((unsigned short) (unsigned short)65518));
        var_27 = ((/* implicit */_Bool) arr_5 [i_1]);
        var_28 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1]))))) ? (min((807081403), (((/* implicit */int) arr_8 [i_1])))) : (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) arr_8 [i_1]))))))), (((((/* implicit */unsigned int) 0)) % (arr_5 [i_1])))));
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) arr_9 [i_2]))));
        var_30 = ((/* implicit */unsigned char) ((arr_10 [i_2]) & (((arr_10 [i_2]) % (arr_10 [i_2])))));
    }
    var_31 |= ((/* implicit */short) max((((((/* implicit */int) var_4)) & (((/* implicit */int) var_18)))), (((/* implicit */int) min((max((((/* implicit */short) var_13)), ((short)-15084))), (((/* implicit */short) var_13)))))));
}
