/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32310
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
    var_20 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)1))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) min(((short)-12391), (((/* implicit */short) arr_0 [i_0]))))) >= ((~(((/* implicit */int) arr_1 [i_0]))))))), ((~((~(2251799679467520ULL)))))));
        arr_2 [i_0] = ((/* implicit */short) arr_1 [i_0]);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (short i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_22 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) var_5)) * (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))));
            var_23 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (var_4))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) arr_10 [i_1] [i_1] [i_3]);
            var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_1] [i_1] [(_Bool)1]))));
            var_26 -= ((((((/* implicit */unsigned long long int) 7)) | (var_4))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)0)) >> (((((/* implicit */int) (unsigned char)250)) - (236)))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
        {
            arr_15 [i_1] = ((/* implicit */unsigned int) ((((-7) + (2147483647))) >> (((-3002762689532677509LL) + (3002762689532677525LL)))));
            var_27 = ((/* implicit */signed char) 50331648U);
        }
        for (int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            var_28 = ((/* implicit */unsigned int) ((unsigned short) ((8866358938995996496LL) <= (((/* implicit */long long int) ((/* implicit */int) var_2))))));
            arr_18 [i_1] = ((unsigned long long int) arr_7 [i_1] [i_1]);
        }
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) 8866358938995996499LL)) ? (2147483644) : (((/* implicit */int) (unsigned short)47021))));
    }
    var_30 = ((/* implicit */unsigned short) (unsigned char)114);
    /* LoopSeq 2 */
    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        var_31 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)168)) << (((((/* implicit */int) (short)-32766)) + (32784))))) < (((/* implicit */int) var_18))));
        var_32 *= var_13;
        var_33 = ((/* implicit */unsigned long long int) arr_14 [i_6] [i_6] [i_6]);
        var_34 = ((/* implicit */unsigned char) ((var_9) * (((/* implicit */long long int) ((/* implicit */int) var_18)))));
        arr_21 [i_6] [i_6] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) (unsigned char)153)), (2251799679467502ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_6])))))));
    }
    for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        var_35 = var_15;
        var_36 = ((/* implicit */short) var_1);
        var_37 = ((/* implicit */_Bool) -2599299487217766867LL);
    }
    var_38 = ((/* implicit */long long int) var_11);
}
