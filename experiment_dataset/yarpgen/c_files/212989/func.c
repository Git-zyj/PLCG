/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212989
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        var_13 ^= ((/* implicit */unsigned short) -8160839003187629646LL);
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) (signed char)66))));
    }
    for (short i_1 = 2; i_1 < 19; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            arr_8 [i_1] [i_1] = ((/* implicit */short) ((arr_4 [i_1] [18U]) >> (((((/* implicit */int) (signed char)-66)) + (128)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    var_15 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))));
                    var_16 = ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
                    var_17 |= arr_5 [i_1 + 3] [i_1 + 1];
                }
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) arr_7 [i_2]))))))));
                var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-55))));
                var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_3)) | (((arr_5 [i_1] [i_2 - 1]) >> (((1125899906842624LL) - (1125899906842595LL)))))));
            }
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                var_21 = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_10 [i_1] [i_2] [i_2])) >= (((/* implicit */int) arr_10 [i_1] [i_1] [i_1 - 1]))))));
                var_22 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_15 [i_1 - 2] [i_1 - 1] [i_1 + 2]))))));
            }
            var_23 = ((/* implicit */long long int) arr_15 [i_1] [i_2 - 1] [i_2 - 1]);
        }
        for (unsigned char i_6 = 3; i_6 < 21; i_6 += 2) 
        {
            var_24 = ((/* implicit */unsigned short) arr_7 [i_1 - 2]);
            var_25 = ((/* implicit */short) arr_11 [i_1] [i_1 + 3] [i_6 - 1] [i_6]);
            var_26 = ((/* implicit */signed char) ((483539272U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2924)))));
            arr_18 [i_1] [(unsigned char)3] [i_1] = ((/* implicit */unsigned short) ((arr_4 [i_1] [i_1]) > (min((arr_4 [i_1] [i_1 + 1]), (arr_4 [i_6 - 2] [(short)3])))));
        }
        arr_19 [i_1] [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (short)-12928)) : (((/* implicit */int) (unsigned char)63))));
        arr_20 [i_1] [i_1] = (unsigned char)192;
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_7 = 2; i_7 < 20; i_7 += 1) 
    {
        var_27 = ((/* implicit */short) ((int) ((((/* implicit */int) arr_23 [i_7 + 2])) ^ (((/* implicit */int) arr_22 [i_7 + 1])))));
        arr_24 [i_7 + 3] = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) var_7)) ? (arr_21 [i_7 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) >> (((((((/* implicit */_Bool) min((arr_21 [(_Bool)1]), (((/* implicit */unsigned long long int) arr_22 [i_7 + 1]))))) ? (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_23 [i_7]))))) : ((-(((/* implicit */int) (unsigned char)63)))))) - (3334)))));
        /* LoopSeq 1 */
        for (signed char i_8 = 3; i_8 < 20; i_8 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 23; i_9 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    var_28 = ((/* implicit */long long int) (signed char)-95);
                    var_29 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_7 + 1] [i_8] [i_8] [i_9] [i_10] [i_8])) && (((/* implicit */_Bool) arr_21 [i_8 + 1]))));
                    arr_33 [i_10] = ((/* implicit */signed char) arr_23 [i_7 + 2]);
                }
                var_30 = ((short) (+(((/* implicit */int) var_11))));
            }
            var_31 ^= ((/* implicit */short) arr_31 [i_7] [i_8] [i_8] [i_7] [i_8]);
            arr_34 [i_7 + 2] [i_7] [i_8] = ((/* implicit */long long int) arr_30 [i_7 + 2] [i_7 + 2] [i_8] [i_8] [i_8 + 2] [(short)5]);
        }
    }
}
