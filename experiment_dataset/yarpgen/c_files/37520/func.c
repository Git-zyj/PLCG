/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37520
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            var_12 = ((/* implicit */unsigned short) (((_Bool)1) ? (arr_0 [i_1 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1376428887)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32027))))))));
            var_13 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 4294967269U)))) >= ((-(var_6)))));
            arr_6 [0ULL] = var_8;
        }
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 2097274508)) ? (18446744073709551583ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
            arr_11 [i_0] = ((/* implicit */int) var_10);
        }
        var_15 = ((/* implicit */int) var_0);
    }
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) | (14954655633257506805ULL))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 2) /* same iter space */
    {
        arr_15 [i_3] = (unsigned short)24644;
        arr_16 [i_3] = ((/* implicit */int) arr_13 [i_3]);
    }
    for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 2) /* same iter space */
    {
        var_17 ^= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_9)) : (arr_20 [i_4 + 2]))));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 4; i_5 < 23; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_6 = 1; i_6 < 23; i_6 += 1) 
            {
                var_18 ^= ((/* implicit */unsigned long long int) (short)-9088);
                arr_25 [i_4] [i_4 - 1] [i_4] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (18446744073709551593ULL)));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                arr_30 [0ULL] [18] [i_7] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)-26)) ? (3492088440452044804ULL) : (((/* implicit */unsigned long long int) 8336597823281442557LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned short)40966)))))));
                arr_31 [i_4] [i_5] [12ULL] [i_7] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 581435124529092852ULL)) ? (651679906U) : (651679909U)))));
                var_19 = ((/* implicit */signed char) 651679917U);
            }
            var_20 = ((/* implicit */unsigned char) (-(arr_21 [i_5 - 2] [i_5 + 1])));
            var_21 = ((/* implicit */unsigned short) (+((+(min((651679910U), (((/* implicit */unsigned int) var_1))))))));
        }
    }
    for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 2) /* same iter space */
    {
        arr_35 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((483011055U) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_8 + 2] [i_8 - 1]))))))));
        arr_36 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_9) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((short) var_5))) : (((/* implicit */int) min((arr_13 [i_8 + 1]), (arr_13 [i_8 + 3]))))));
    }
    var_22 = ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) (unsigned short)42721)) ? (var_9) : (((/* implicit */int) var_10))))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))));
}
