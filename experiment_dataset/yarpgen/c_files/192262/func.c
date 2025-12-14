/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192262
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
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3278)) ? (min((var_9), (((/* implicit */int) (short)-17969)))) : (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) 524287ULL)) ? (((/* implicit */unsigned int) 1420530799)) : (var_0)))))) : (var_6)));
    var_21 = ((/* implicit */int) (-(((((/* implicit */_Bool) (((_Bool)1) ? (18446744073709027328ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) var_5)) : ((+(3205329618488862456ULL)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_22 *= ((/* implicit */unsigned short) min((((((/* implicit */int) arr_2 [(short)8])) * (arr_1 [(unsigned char)10] [i_0 + 1]))), (((((/* implicit */_Bool) -1648711579)) ? (arr_1 [(unsigned char)8] [i_0 + 2]) : (((/* implicit */int) (signed char)3))))));
        arr_3 [i_0 + 2] [i_0] = max((1420530799), (((/* implicit */int) ((short) arr_1 [i_0] [i_0 - 1]))));
        var_23 = ((/* implicit */short) max((1927265633U), (2436603215U)));
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */signed char) max(((_Bool)0), (arr_2 [(short)4])))), (var_13)))))));
    }
}
