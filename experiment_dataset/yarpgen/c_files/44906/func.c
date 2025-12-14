/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44906
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
    var_14 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned short) ((unsigned int) var_8)))), (max((((/* implicit */long long int) ((var_12) != (((/* implicit */long long int) ((/* implicit */int) var_11)))))), (min((((/* implicit */long long int) (unsigned char)252)), (var_12)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((((/* implicit */_Bool) min((((0) % (((/* implicit */int) var_2)))), (((/* implicit */int) ((4342035268002882106LL) < (var_12))))))) ? (((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_1 [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)27864)) ? (4342035268002882106LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1]))))) : (((long long int) var_6)))) : (((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) var_5))))))))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min((((((/* implicit */long long int) ((unsigned int) 4342035268002882106LL))) == (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))), (((max((((/* implicit */long long int) (-2147483647 - 1))), (var_12))) != (((((/* implicit */_Bool) -215278620)) ? (arr_0 [i_0] [i_0]) : (-4342035268002882109LL))))))))));
        arr_2 [i_0] [i_0] = max((((min((0LL), (((/* implicit */long long int) var_9)))) % (((/* implicit */long long int) max((var_4), (var_13)))))), (min((((/* implicit */long long int) var_5)), (2100066267180345679LL))));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_17 ^= ((/* implicit */unsigned int) ((((((((/* implicit */long long int) ((/* implicit */int) var_6))) != (arr_3 [5]))) ? (max((((/* implicit */long long int) var_8)), (arr_3 [i_1]))) : (((/* implicit */long long int) max((var_13), (((/* implicit */int) var_9))))))) < (((((((/* implicit */_Bool) (unsigned short)3840)) ? (4342035268002882106LL) : (7521973726048919711LL))) % (((/* implicit */long long int) ((/* implicit */int) ((var_0) || (((/* implicit */_Bool) arr_4 [i_1]))))))))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((max((min((((/* implicit */long long int) (unsigned short)65523)), (4342035268002882090LL))), (((/* implicit */long long int) var_1)))) % (((/* implicit */long long int) ((/* implicit */int) ((max((arr_3 [13LL]), (((/* implicit */long long int) var_6)))) > (((/* implicit */long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) (short)2924)))))))))));
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) min((var_5), (((/* implicit */unsigned int) (unsigned short)65523)))))) - (((((/* implicit */int) (unsigned short)0)) ^ (var_4)))));
    }
}
