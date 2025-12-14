/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26456
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
    var_20 = ((/* implicit */int) var_13);
    var_21 = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)9188)) ? (var_1) : (var_1))) - (((/* implicit */unsigned int) ((/* implicit */int) (short)9173)))))));
    var_22 = ((/* implicit */unsigned int) (short)-9189);
    var_23 = ((/* implicit */unsigned long long int) min((max(((~(((/* implicit */int) var_11)))), (var_7))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) | (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-117))))) : (arr_1 [i_0] [i_0])));
        var_25 = ((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) arr_0 [i_0])))));
        var_26 -= ((/* implicit */unsigned int) arr_1 [0U] [0U]);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (short)-9184)) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)9168))))));
        var_27 -= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (unsigned short)21615)) - (((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
        {
            var_28 ^= ((/* implicit */short) arr_10 [i_1] [i_2 + 1] [i_1]);
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
            {
                var_29 = arr_3 [i_1] [i_2 + 1];
                var_30 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_1] [i_2 - 1] [i_2 + 1])) ? (arr_10 [i_2 + 2] [i_2 + 2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16384)))));
                var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((unsigned short) arr_8 [i_2] [i_2 + 1])))));
            }
            for (signed char i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
            {
                var_32 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1] [i_2 + 2])) ? (((/* implicit */int) ((((/* implicit */int) (short)9189)) <= (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (((/* implicit */int) (short)9184)) : (((/* implicit */int) (short)9187))))));
                var_33 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (arr_6 [i_1]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9181)))));
                var_34 = ((signed char) (-(((/* implicit */int) arr_14 [i_1] [i_1] [i_2]))));
            }
            for (signed char i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
            {
                arr_20 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_2])) ? (((/* implicit */int) (short)9209)) : (((/* implicit */int) (signed char)-8)))))));
                var_35 ^= ((/* implicit */short) (+(((/* implicit */int) arr_18 [i_1]))));
            }
        }
        arr_21 [i_1] [i_1] = ((/* implicit */signed char) (short)-1);
        var_36 -= ((/* implicit */unsigned long long int) (short)9175);
    }
    for (short i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
    {
        arr_25 [i_6] = ((/* implicit */unsigned char) (((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)15]))) : (-2630222860428009448LL))) >= (((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_6] [i_6] [i_6]))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)9180), (((/* implicit */short) arr_3 [i_6] [i_6])))))) != ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (7527663628074154068ULL)))))) : (((/* implicit */int) var_8))));
        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) arr_19 [i_6] [i_6] [i_6]))));
        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32)) < (((/* implicit */int) arr_16 [i_6] [i_6] [i_6] [i_6]))))), (min((arr_10 [i_6] [i_6] [i_6]), (((/* implicit */unsigned long long int) arr_9 [i_6] [i_6])))))))));
        arr_26 [i_6] = ((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6]);
    }
}
