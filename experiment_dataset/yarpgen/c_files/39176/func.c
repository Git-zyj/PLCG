/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39176
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) >= (((/* implicit */unsigned int) -1936562342)))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_10)))))) ? (((/* implicit */int) var_4)) : (1581967614)));
    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), (arr_3 [i_0 - 1] [i_0] [i_0 + 1])))) ? ((+(((/* implicit */int) var_5)))) : ((-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0 + 1]))))));
            arr_7 [(unsigned short)6] [i_1] [i_1] = ((/* implicit */signed char) arr_5 [i_0 - 1]);
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) arr_4 [2ULL] [i_2]);
            var_17 -= ((/* implicit */unsigned int) ((arr_0 [i_0 - 1]) << (((/* implicit */int) (_Bool)1))));
            var_18 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))) < (arr_1 [i_2]))))));
            /* LoopSeq 2 */
            for (long long int i_3 = 1; i_3 < 12; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 2; i_4 < 11; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_8 [i_2] [i_2] [(unsigned char)12])))) ^ (((/* implicit */int) arr_17 [i_2] [i_0 - 1] [i_3 + 2] [i_5] [i_4 - 1]))));
                            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_17 [9ULL] [i_5] [(unsigned char)10] [i_4 + 1] [i_5]))));
                            arr_21 [i_2] [i_4] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_4 - 1] [i_5] [i_5])) >= (((/* implicit */int) arr_3 [i_4 + 3] [i_5] [i_5]))));
                        }
                    } 
                } 
                arr_22 [i_2] = ((/* implicit */_Bool) ((signed char) ((unsigned short) arr_0 [(signed char)8])));
            }
            for (short i_6 = 4; i_6 < 12; i_6 += 1) 
            {
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) 134217727U))));
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_0 + 1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_2] [i_6 - 4] [i_0 - 1]))) : (arr_5 [i_0 - 1])));
            }
        }
        /* LoopSeq 1 */
        for (signed char i_7 = 1; i_7 < 10; i_7 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) max((3895786094385256484ULL), (((unsigned long long int) ((((/* implicit */int) (unsigned char)236)) >> (((288230376151711680ULL) - (288230376151711679ULL))))))));
            var_24 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1006632960U)) && (((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_7 + 3])) != (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1] [i_7 + 4]))))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)59)) ? ((-(((/* implicit */int) (unsigned char)224)))) : (((/* implicit */int) ((_Bool) arr_17 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])))));
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) var_9))));
        }
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? ((+(((/* implicit */int) arr_31 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) : (((/* implicit */int) ((((/* implicit */int) arr_31 [i_0 + 1] [i_0 + 1] [i_0])) > (((/* implicit */int) arr_31 [i_0] [1U] [1U])))))));
    }
    for (unsigned char i_9 = 1; i_9 < 9; i_9 += 1) 
    {
        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_31 [i_9] [i_9] [i_9 + 1])))) ? (var_10) : (((/* implicit */unsigned long long int) 3288334328U))))) ? (((/* implicit */int) arr_32 [i_9 - 1])) : (((/* implicit */int) ((short) ((_Bool) arr_34 [i_9 - 1]))))));
        var_29 ^= ((/* implicit */_Bool) (((~(((/* implicit */int) ((short) var_7))))) << ((((((~(8556380160LL))) + (8556380185LL))) - (23LL)))));
        var_30 = ((/* implicit */unsigned char) max((((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [0ULL])) && (((/* implicit */_Bool) arr_5 [i_9]))))) << (((((/* implicit */int) arr_6 [i_9 - 1])) + (150))))), (min(((~(((/* implicit */int) var_3)))), (((/* implicit */int) var_3))))));
        var_31 = ((/* implicit */unsigned char) min((((/* implicit */int) max((arr_2 [i_9 - 1]), (arr_2 [i_9 - 1])))), ((+(((/* implicit */int) arr_2 [i_9 + 1]))))));
        arr_36 [i_9] [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 493996546U)) && (((/* implicit */_Bool) arr_14 [i_9 - 1] [i_9 - 1] [i_9 + 1])))) ? (((((((-8556380160LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_3 [i_9] [i_9] [i_9])) - (22483))))) & (((/* implicit */long long int) ((3288334327U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-19788)))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_9])))));
    }
    var_32 -= ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
    var_33 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (var_10) : (((/* implicit */unsigned long long int) (+(var_11)))))), (((/* implicit */unsigned long long int) var_5))));
}
