/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189906
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
    var_20 = ((/* implicit */int) var_8);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) ((min(((-(arr_2 [(signed char)7] [i_0]))), (((/* implicit */long long int) (unsigned short)2230)))) >= (((/* implicit */long long int) ((/* implicit */int) var_1)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)45228), (((unsigned short) (unsigned short)26850))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : ((~((+(-2133813620087075048LL)))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2929186331994517717ULL)) ? (((/* implicit */int) (unsigned short)29287)) : (((/* implicit */int) (signed char)49))));
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_2 [i_1] [(short)4]))));
        var_23 = ((/* implicit */unsigned short) arr_2 [i_1] [i_1]);
        var_24 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)195))));
        arr_7 [i_1] [i_1] = ((((/* implicit */int) (unsigned short)12)) - (((/* implicit */int) (signed char)-60)));
    }
    var_25 = ((/* implicit */unsigned char) (((+(var_8))) - (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    var_26 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned short)65534)), (9223372036854775807LL)));
    var_27 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned short)65535)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 240LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)9899))) : (0LL)))) ? (2929186331994517705ULL) : (((/* implicit */unsigned long long int) 387714769)))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)-52)) ? (-7253243098473105625LL) : (((/* implicit */long long int) 4294967295U)))))))));
}
