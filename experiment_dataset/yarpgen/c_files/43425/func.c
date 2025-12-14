/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43425
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)106)), (((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)106))) : (12U)))))) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (136896792) : (((/* implicit */int) (short)-14323))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) (unsigned short)27250)) : (((/* implicit */int) (unsigned short)44737))))))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_13 += ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) var_6))))))))));
        var_14 = ((/* implicit */_Bool) arr_1 [i_0 + 1]);
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (var_9) : (((/* implicit */unsigned long long int) arr_1 [i_0 + 1]))))))))));
        var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_17 -= ((/* implicit */_Bool) arr_3 [(_Bool)1]);
        arr_4 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) == (arr_2 [16LL])))) : (arr_3 [i_1])))) || (((/* implicit */_Bool) var_1))));
        var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (max((var_9), (((/* implicit */unsigned long long int) arr_3 [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (var_6) : (((/* implicit */long long int) -1632692983))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)187)) : (arr_3 [i_1])))) || (((/* implicit */_Bool) (+(arr_3 [i_1]))))))))));
        arr_5 [i_1] = ((/* implicit */long long int) arr_3 [i_1]);
    }
    for (long long int i_2 = 3; i_2 < 17; i_2 += 3) 
    {
        var_19 ^= ((/* implicit */short) (~(min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)128)) ^ (((/* implicit */int) (signed char)106))))), (6353610573729237658LL)))));
        arr_8 [i_2] = (unsigned char)112;
    }
    var_20 = ((/* implicit */unsigned long long int) var_8);
}
