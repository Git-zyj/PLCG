/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49457
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
    var_10 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_1) : (((/* implicit */unsigned long long int) 512LL)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_4 [i_0] |= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (!(var_9)))) >> (((var_2) - (1204684401U)))))));
        arr_5 [i_0] = ((/* implicit */short) ((int) ((((((/* implicit */_Bool) 4125096058996373339ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7955))) : (var_1))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483640)))))))));
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0])) % ((-2147483647 - 1))))) : (((((unsigned long long int) 491520)) % (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_5)))))))))));
        var_12 = ((/* implicit */unsigned short) ((unsigned char) (+(((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64116))) : (18446744073709551615ULL))))));
    }
    for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (unsigned short)65535))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((signed char) ((unsigned long long int) arr_9 [i_1] [i_1 + 1]))))));
        arr_10 [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) arr_6 [14LL]))))))) ? (((((/* implicit */int) ((short) -2147483641))) * (((-1228239095) / (-2147483640))))) : (((/* implicit */int) ((signed char) (+(1228239106)))))));
        var_15 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((13730771585348580158ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_2]))) ? (((long long int) var_1)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-14))))))));
        var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_2])) == (((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_2))) > (((/* implicit */int) var_8)))))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) (short)13264))))))))));
    }
}
