/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53344
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
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_14))));
    var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)240)) ^ (((/* implicit */int) (unsigned char)16))))) ? ((~(11LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)126)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (unsigned char)158))))))) | (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)240)))))));
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)92))) : (-2039019371943754868LL))), (-4202275307679628003LL)))) ? (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 2761615405U)) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (((((/* implicit */_Bool) min((var_4), (((/* implicit */int) (unsigned short)10246))))) ? (((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (14U))) : (((/* implicit */unsigned int) var_4))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((((/* implicit */int) (unsigned short)33188)), (arr_2 [i_0])))))) ? (((((/* implicit */_Bool) -373106575491440454LL)) ? (min((18446744073709551615ULL), (var_8))) : (((/* implicit */unsigned long long int) 3861426145961584823LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) (signed char)77))))))));
        arr_4 [6] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_4)) | (((((/* implicit */_Bool) min(((unsigned short)1006), (((/* implicit */unsigned short) var_0))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_1 [4]))))))))));
    }
}
