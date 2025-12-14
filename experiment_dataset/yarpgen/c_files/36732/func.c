/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36732
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
    for (int i_0 = 2; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */short) (-((~(((/* implicit */int) var_1))))));
        var_13 = ((/* implicit */int) var_2);
        var_14 *= ((/* implicit */short) min((max((((long long int) (unsigned short)28489)), (arr_0 [i_0]))), (((/* implicit */long long int) max((((/* implicit */int) ((short) -4271952141875690597LL))), (((((/* implicit */int) (short)32744)) | (((/* implicit */int) (unsigned short)28496)))))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 1729877340)) % (117440512U))))))) ? (arr_0 [i_0]) : ((+(max((arr_0 [i_0]), (((/* implicit */long long int) (signed char)-86))))))));
    }
    for (int i_1 = 2; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_15 *= ((/* implicit */signed char) arr_1 [i_1]);
        var_16 = ((/* implicit */unsigned short) min((min((264564730844976292ULL), (((/* implicit */unsigned long long int) arr_5 [i_1 - 2])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32744)) != (((/* implicit */int) (short)-32761)))))));
    }
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) -1760798564789619626LL)) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)16)))) : (((/* implicit */int) (signed char)86))));
        var_18 *= ((/* implicit */signed char) (_Bool)1);
    }
    var_19 += ((/* implicit */unsigned int) var_9);
}
