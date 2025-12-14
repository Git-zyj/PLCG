/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217050
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
    var_19 = ((/* implicit */int) (unsigned char)84);
    var_20 = ((/* implicit */_Bool) (unsigned char)172);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (-(arr_0 [i_0])))))) * ((+(arr_0 [i_0 + 1])))));
        arr_3 [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-60))) : (arr_1 [i_0])));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (unsigned char)175))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) (unsigned char)33);
        var_22 += ((/* implicit */unsigned int) 9223372036854775807LL);
        var_23 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) (unsigned char)171)) >= ((+(((/* implicit */int) (unsigned short)4095))))))), (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45804))) != (var_2)))) << (((((/* implicit */int) max(((unsigned char)81), (((/* implicit */unsigned char) (_Bool)1))))) - (77)))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) (((((-(((/* implicit */int) var_15)))) + (2147483647))) >> ((((~(((/* implicit */int) var_17)))) + (7767)))));
        var_24 = ((/* implicit */signed char) 18080905265974414349ULL);
        arr_11 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) 1292498867)) ? (((/* implicit */long long int) arr_4 [i_2] [18U])) : ((-9223372036854775807LL - 1LL))));
    }
    for (int i_3 = 1; i_3 < 15; i_3 += 2) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned char) ((_Bool) (signed char)-40));
        var_25 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((-1259526448), (((/* implicit */int) (short)-20227))))), ((-(arr_1 [i_3 + 1])))));
        var_26 = ((/* implicit */long long int) max((arr_1 [i_3]), (((/* implicit */unsigned long long int) 9223372036854775794LL))));
    }
}
