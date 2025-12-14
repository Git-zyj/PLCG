/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222111
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_14 += ((/* implicit */unsigned char) ((short) ((signed char) arr_0 [i_0])));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)66))) : (18446744073709551610ULL)))) ? (10ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(signed char)11]))) % (18446744073709551610ULL)))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((unsigned short) var_6)))));
            var_15 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) (unsigned char)214))))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 22; i_2 += 1) 
        {
            var_16 += (short)-29549;
            var_17 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -4459470650626608014LL)) / (var_13)));
            arr_11 [i_0] [i_2] [(signed char)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) (unsigned char)151)) : (-2088371003)))) ? (((/* implicit */int) arr_9 [i_2] [13ULL] [i_2])) : (((/* implicit */int) arr_7 [i_0] [i_0]))));
            arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 + 2])) || (((/* implicit */_Bool) 7))));
        }
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            var_18 -= ((/* implicit */short) max((max((arr_9 [i_0] [i_3] [6ULL]), ((unsigned char)201))), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_10 [19LL] [19LL] [i_0]), (((/* implicit */short) (unsigned char)42)))))) == ((+(6ULL))))))));
            var_19 -= ((/* implicit */_Bool) ((short) (unsigned char)0));
            var_20 = min((min((((/* implicit */unsigned long long int) (unsigned short)56893)), (17071737229254434349ULL))), (((/* implicit */unsigned long long int) var_2)));
            arr_15 [22] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0])))))));
        }
    }
    var_21 += ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (min((19ULL), (var_13))))));
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_11))) ? (var_7) : (((/* implicit */int) ((signed char) 4459470650626608014LL)))));
}
