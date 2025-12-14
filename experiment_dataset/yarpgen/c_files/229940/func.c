/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229940
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
    var_15 = ((/* implicit */int) var_6);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] = var_4;
            arr_7 [i_1] [i_0] [i_1] = ((/* implicit */long long int) var_4);
        }
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((((unsigned long long int) (+(-252451020)))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) var_6))))) ? ((~(var_14))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_9 [i_2])), (arr_4 [i_0] [i_0]))))))));
            var_17 ^= ((/* implicit */short) 252451022);
            arr_11 [11ULL] [8ULL] [i_2] = ((/* implicit */unsigned char) ((signed char) arr_0 [i_2]));
        }
        arr_12 [1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_11))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (var_4)))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (-1131608959)))) : (max((((((/* implicit */_Bool) -252451022)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))) : (-6763068515562194036LL))), (-3726471872625625424LL)))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_13 [i_3] [(short)2])) <= (((((/* implicit */_Bool) (short)-6076)) ? (10092696050129977965ULL) : (((/* implicit */unsigned long long int) -1LL))))));
        var_19 = ((/* implicit */unsigned char) max((1191479666), (((((/* implicit */_Bool) -1355297207)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (unsigned char)193))))));
        arr_15 [i_3] = ((/* implicit */int) max((arr_14 [i_3]), (((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) arr_13 [i_3] [i_3]))))))));
    }
    /* LoopSeq 2 */
    for (short i_4 = 1; i_4 < 18; i_4 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */short) -252451022);
        arr_18 [i_4] [i_4] = ((/* implicit */signed char) ((int) ((int) ((((/* implicit */int) var_6)) < (252451020)))));
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned char) ((((-7230786812662649047LL) + (9223372036854775807LL))) >> (((/* implicit */int) (short)0))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_17 [i_4]), (((/* implicit */long long int) ((-5849881987093142556LL) < (arr_13 [i_4] [i_4]))))))) ? (var_11) : (((/* implicit */unsigned long long int) (~(arr_17 [i_4]))))));
    }
    for (short i_5 = 1; i_5 < 18; i_5 += 3) /* same iter space */
    {
        arr_24 [i_5] = ((/* implicit */short) var_13);
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) max((min((min((198238495261528047ULL), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (short)22067)))), (((((/* implicit */_Bool) arr_13 [i_5 + 4] [i_5 + 3])) ? (32760ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40))))))))));
    }
    /* LoopNest 2 */
    for (long long int i_6 = 3; i_6 < 23; i_6 += 1) 
    {
        for (int i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            {
                var_23 -= (unsigned char)218;
                var_24 = ((((/* implicit */_Bool) max((((72057594037927935ULL) >> (((-9223372036854775793LL) + (9223372036854775799LL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_6 + 1] [i_7])) ? (((/* implicit */int) (short)16639)) : (((/* implicit */int) (short)16398))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (short)-16403)) : (((/* implicit */int) (signed char)121))))), (((5930977268549825747ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)33))))))));
                var_25 = var_2;
            }
        } 
    } 
}
