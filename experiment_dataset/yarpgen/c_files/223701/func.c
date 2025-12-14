/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223701
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */short) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) <= (((/* implicit */int) (signed char)10)))) ? (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) arr_0 [i_0]))))) : (var_11)));
        arr_3 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) var_2)) : (arr_0 [i_0 - 1]))) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)70)))))));
        var_18 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */short) (unsigned char)75)))))) + (((1069671100U) ^ (((/* implicit */unsigned int) arr_0 [i_0 + 1]))))))));
        var_19 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)133)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) (unsigned short)63211)))) : (((/* implicit */int) (unsigned short)48305)))));
    }
    for (signed char i_1 = 2; i_1 < 19; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) var_4);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((((/* implicit */_Bool) 968473311U)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_17))) + (968473311U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-17416)))))));
            arr_12 [14] [i_2] |= ((/* implicit */short) (unsigned short)63231);
            /* LoopSeq 2 */
            for (signed char i_3 = 1; i_3 < 20; i_3 += 3) 
            {
                arr_16 [i_1] = ((/* implicit */unsigned char) arr_7 [i_1]);
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_0))));
                /* LoopSeq 3 */
                for (unsigned int i_4 = 2; i_4 < 21; i_4 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_5 = 2; i_5 < 20; i_5 += 4) 
                    {
                        arr_21 [i_5] [i_4] [i_5] [i_2] [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_5] [i_1 + 3] [i_4] [i_1] [i_5] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17238))) : (var_10)));
                        arr_22 [i_1] = ((/* implicit */unsigned short) arr_19 [i_1] [i_2] [i_3] [i_2] [i_5] [i_1]);
                    }
                    for (unsigned short i_6 = 1; i_6 < 20; i_6 += 2) 
                    {
                        var_22 ^= ((/* implicit */_Bool) (signed char)53);
                        arr_25 [i_1] [i_2] [i_1] [i_4] [i_1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) && (((/* implicit */_Bool) (signed char)-90))));
                    }
                    arr_26 [i_1] [i_1] [i_3 + 2] = ((/* implicit */unsigned char) var_17);
                    arr_27 [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) (short)-17416);
                }
                for (unsigned int i_7 = 1; i_7 < 20; i_7 += 2) 
                {
                    arr_30 [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2306)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_9 [i_1] [i_2]))))) ? (((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_0))) : (arr_19 [i_1] [i_1] [i_3] [i_3 - 1] [i_3 + 2] [i_7 - 1])));
                    arr_31 [i_1] [i_2] [i_3] [i_1] = ((unsigned char) var_4);
                }
                for (long long int i_8 = 2; i_8 < 20; i_8 += 3) 
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))) : (3860671995U)));
                    arr_34 [i_1 + 2] [i_1] [i_3] [i_8] = ((/* implicit */int) (short)17416);
                }
            }
            for (unsigned int i_9 = 3; i_9 < 21; i_9 += 4) 
            {
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                var_25 = ((/* implicit */unsigned int) ((_Bool) var_6));
            }
        }
    }
    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 4) 
    {
        arr_39 [i_10] = ((/* implicit */unsigned long long int) ((int) min((arr_36 [i_10] [i_10] [i_10] [i_10]), (((/* implicit */unsigned short) var_6)))));
        arr_40 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? ((-(max((((/* implicit */unsigned long long int) (signed char)33)), (var_11))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)30939)) - (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)51416)))))))));
        arr_41 [i_10] = ((((/* implicit */_Bool) min((((arr_33 [i_10] [i_10] [i_10] [i_10]) & (((/* implicit */unsigned int) -1157755219)))), (((/* implicit */unsigned int) arr_5 [i_10]))))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) min((var_2), (((/* implicit */short) (!(((/* implicit */_Bool) 3064053489U)))))))));
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_16)), ((+(((/* implicit */int) var_16))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34596)) ? (((/* implicit */int) (short)-15383)) : (((/* implicit */int) (unsigned short)46309))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_17)))) : ((~(((/* implicit */int) (short)20785))))));
    }
    var_27 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) <= (min((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_10))), (((/* implicit */unsigned int) ((5062111511426468716ULL) == (var_11))))))));
}
