/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1959
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
    var_18 ^= ((/* implicit */unsigned short) max((((/* implicit */int) var_11)), (var_13)));
    var_19 = (!(((/* implicit */_Bool) (short)(-32767 - 1))));
    var_20 = ((((((/* implicit */int) (short)32767)) == (((/* implicit */int) (unsigned char)19)))) ? (((/* implicit */int) (short)32764)) : (((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (var_5)))) ? (((((/* implicit */int) (unsigned short)13107)) / (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)42991)))))));
    var_21 = ((/* implicit */short) ((var_9) ? (((/* implicit */int) min((((((/* implicit */int) var_4)) != (((/* implicit */int) (unsigned char)173)))), (((((/* implicit */int) var_15)) >= (((/* implicit */int) (_Bool)1))))))) : (min(((+(((/* implicit */int) var_4)))), (((((/* implicit */int) var_12)) | (((/* implicit */int) var_11))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)32745)) - (((/* implicit */int) (unsigned short)65519))));
        var_22 += ((/* implicit */signed char) ((((/* implicit */int) var_1)) << ((((((_Bool)1) ? (var_2) : (18446744073709551612ULL))) - (2546986301103105262ULL)))));
        arr_3 [i_0 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (short)-28069)))))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) min(((_Bool)0), ((_Bool)1))))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (11277417728620805770ULL))) % (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)20)) : (((/* implicit */int) (signed char)-119)))))));
        arr_8 [i_1] = ((/* implicit */signed char) ((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) ((unsigned char) (unsigned char)239))) : ((~(((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32756))))))));
        arr_9 [i_1] = ((/* implicit */short) min((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32762))) : (19ULL))))), (((((/* implicit */int) var_6)) ^ (var_0)))));
        var_23 = ((((/* implicit */_Bool) (signed char)115)) ? (-221617372) : (1615633215));
    }
}
