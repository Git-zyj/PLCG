/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209705
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)6)) >> (((var_9) - (802167222501056563ULL))))))));
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) <= ((-(((/* implicit */int) arr_0 [i_0])))))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((min((arr_1 [i_0 - 2]), (arr_1 [i_0 + 1]))), (min((arr_1 [i_0 - 1]), (var_2))))))));
            var_19 = ((((/* implicit */int) ((var_3) < (((/* implicit */int) (unsigned char)242))))) | (((int) arr_0 [i_1 - 2])));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((short) ((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) arr_3 [i_0])))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (664197991U)));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)3)))))));
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_2] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)2184)))))) ? (((/* implicit */int) arr_0 [i_0])) : ((-(arr_7 [i_0] [i_0])))));
                arr_13 [i_0] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) (+(arr_10 [i_0 + 1] [i_0 - 3] [i_0])));
            }
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */int) ((var_7) < (((/* implicit */long long int) var_13)))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_4 = 1; i_4 < 13; i_4 += 3) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)-32761)) && (((/* implicit */_Bool) var_9)))))));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [8U]))) + (var_14)))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
    }
    for (short i_5 = 1; i_5 < 12; i_5 += 2) 
    {
        arr_21 [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((unsigned int) (unsigned short)5968))))) - (max((arr_14 [i_5 + 2]), (((/* implicit */unsigned long long int) arr_1 [i_5]))))));
        /* LoopSeq 2 */
        for (short i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            var_24 *= ((/* implicit */unsigned int) (+(((((/* implicit */int) var_0)) / (((/* implicit */int) arr_25 [i_5 - 1]))))));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) (short)32757)) | (((/* implicit */int) arr_9 [(_Bool)1]))))))) != ((+(var_14)))));
            arr_26 [i_5] [i_5] [i_5] = var_10;
            var_26 ^= ((/* implicit */unsigned short) 1876125504);
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_30 [i_7] [(unsigned short)5] [(unsigned short)5] = ((/* implicit */unsigned char) min(((+((+(((/* implicit */int) (short)-31498)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)5968)) : (-9)))))))));
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */short) ((signed char) (unsigned char)16))), ((short)32752)))))));
            var_28 = ((/* implicit */_Bool) min((((unsigned char) (short)31478)), (var_11)));
        }
        var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) ((arr_14 [i_5]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))), (arr_9 [18LL]))))) + (min((((((/* implicit */_Bool) var_11)) ? (2360023923U) : (((/* implicit */unsigned int) var_15)))), (((/* implicit */unsigned int) (unsigned char)249))))));
        arr_31 [i_5] = ((/* implicit */_Bool) ((short) var_4));
    }
    /* LoopSeq 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_36 [i_8] &= ((/* implicit */signed char) ((((unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) & (((/* implicit */unsigned long long int) var_6))));
        arr_37 [(unsigned char)12] [(unsigned char)12] = ((/* implicit */signed char) var_11);
        arr_38 [i_8] = ((/* implicit */int) (((+(9223372036854775807LL))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [4ULL] [i_8] [i_8] [i_8]))))))));
    }
    for (signed char i_9 = 2; i_9 < 10; i_9 += 3) 
    {
        arr_42 [i_9] = (~(min(((-(((/* implicit */int) arr_35 [i_9] [i_9])))), ((~(((/* implicit */int) (short)32752)))))));
        arr_43 [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_3) / (((/* implicit */int) var_0)))))));
    }
}
