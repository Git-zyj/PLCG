/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209611
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
    var_11 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (9223372036854775789LL) : (9223372036854775789LL)))) ? (((/* implicit */long long int) ((int) (unsigned char)201))) : (((((/* implicit */_Bool) 2305280059260272640LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_0))))), (((/* implicit */long long int) var_3))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_13 = ((((/* implicit */int) arr_0 [i_0])) ^ (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_14 |= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : ((-9223372036854775807LL - 1LL))))) && (((/* implicit */_Bool) arr_0 [i_0])))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-1360226296), (((/* implicit */int) (unsigned short)65524))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(-9223372036854775794LL)))) ? ((-(((/* implicit */int) arr_1 [i_0] [i_0])))) : (-2147483628)))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)77))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)-3)))) : (7461467521432280933LL)))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_16 = (i_1 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) -9223372036854775806LL)) && ((_Bool)1)))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39350))) - (arr_2 [i_1]))) - (2772061427687208313ULL)))))) : (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) -9223372036854775806LL)) && ((_Bool)1)))) << (((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39350))) - (arr_2 [i_1]))) - (2772061427687208313ULL))) - (10684664428716134083ULL))))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-9)) - (((/* implicit */int) (short)-6072))))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18543))) : (arr_2 [i_1]))) : (((arr_3 [(_Bool)1]) + (arr_2 [i_1])))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) (short)32747)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)18))));
    }
    for (short i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
    {
        arr_6 [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2199381222175990388ULL)) ? (12492775403700629125ULL) : (((/* implicit */unsigned long long int) 9223372036854775789LL))))) ? (((arr_5 [i_2]) ? (arr_4 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))))) & (arr_4 [i_2])));
        var_19 = ((/* implicit */int) ((min((arr_5 [i_2]), (arr_5 [i_2]))) && (((arr_5 [i_2]) && (((/* implicit */_Bool) (((_Bool)1) ? (arr_2 [i_2]) : (5953968670008922467ULL))))))));
        var_20 -= ((/* implicit */unsigned short) ((unsigned char) (((_Bool)1) ? (16247362851533561219ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
    }
}
