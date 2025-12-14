/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242788
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
    var_20 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)27))));
        arr_5 [i_0] [i_0] = ((/* implicit */int) 6606777799275494508ULL);
        var_21 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)-28)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))), (-4035289315707824920LL)));
        arr_6 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) min(((short)19720), (((/* implicit */short) (_Bool)1)))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 4) /* same iter space */
    {
        arr_11 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_1 + 1]))));
        arr_12 [i_1] [i_1 - 2] = ((/* implicit */long long int) (unsigned char)0);
        arr_13 [i_1] = ((/* implicit */unsigned char) min((min(((short)29053), ((short)2303))), (((/* implicit */short) arr_7 [i_1 - 1] [i_1 + 1]))));
        arr_14 [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)32626)))) / (((((/* implicit */_Bool) 4472777739681325282ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1]))) : (13973966334028226333ULL)))))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 4) /* same iter space */
    {
        arr_18 [i_2] [i_2] = ((unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)-2304))) + (((((/* implicit */_Bool) (unsigned short)53882)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53882))) : (min((((/* implicit */long long int) (_Bool)1)), (var_16)))))));
        arr_19 [i_2] [(unsigned char)3] = ((/* implicit */unsigned short) min((((unsigned int) 8551931836936827474LL)), ((-((-(0U)))))));
        arr_20 [i_2] = ((/* implicit */unsigned char) arr_8 [i_2]);
    }
}
