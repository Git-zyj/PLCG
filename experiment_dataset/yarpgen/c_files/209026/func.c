/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209026
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_5))))) == (((/* implicit */int) ((((/* implicit */int) var_16)) == (((/* implicit */int) var_15)))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_6);
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (short)-5324))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((((/* implicit */int) (short)-19385)) + (2147483647))) >> (((((((/* implicit */int) (unsigned short)65535)) >> (((((/* implicit */int) var_9)) - (44205))))) - (8162))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            var_20 = ((/* implicit */_Bool) var_6);
            arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)24318)) >> ((((-(((/* implicit */int) var_11)))) - (27996)))));
        }
        for (short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                var_22 = ((/* implicit */unsigned short) min((var_22), ((unsigned short)0)));
                /* LoopSeq 3 */
                for (short i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_7))))));
                    arr_14 [i_0] [i_2] [(unsigned short)6] [(unsigned short)6] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) << ((((~(9895024696617906368ULL))) - (8551719377091645219ULL)))))) && (((/* implicit */_Bool) ((arr_4 [i_0] [i_2]) * (arr_4 [i_0] [8LL])))));
                }
                for (short i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
                {
                    arr_18 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) var_4);
                    arr_19 [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (short)20951)) == (((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))) << (((9895024696617906368ULL) - (9895024696617906360ULL)))));
                    arr_20 [i_0] [i_2] [i_3] [(unsigned short)4] [i_3] = ((/* implicit */unsigned short) var_12);
                }
                for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    arr_24 [i_0] [i_0] [i_3] [i_6] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_3 [i_0] [i_0] [i_3])) & ((~(((/* implicit */int) arr_8 [i_0]))))))));
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) arr_23 [2ULL] [i_3] [i_0]))));
                }
            }
            var_24 = ((/* implicit */unsigned short) arr_1 [i_0]);
            var_25 = ((/* implicit */unsigned int) (!(arr_1 [i_0])));
        }
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 13; i_7 += 1) 
    {
        arr_28 [i_7 - 1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [i_7 - 2]))));
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15)))))));
        var_27 = ((/* implicit */int) arr_25 [i_7] [(_Bool)1]);
    }
    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) arr_29 [12ULL]))));
        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) var_14))));
        arr_32 [i_8] [i_8] = arr_26 [(short)12];
        arr_33 [i_8] [i_8] = ((/* implicit */unsigned short) 18446744073709551615ULL);
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) /* same iter space */
    {
        arr_37 [i_9] = (i_9 % 2 == zero) ? (((/* implicit */_Bool) ((((var_4) % (((/* implicit */long long int) ((/* implicit */int) var_6))))) / (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_9])))))) : (((/* implicit */_Bool) ((((var_4) % (((/* implicit */long long int) ((/* implicit */int) var_6))))) * (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_9]))))));
        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)50909)))))));
        arr_38 [i_9] = (i_9 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) var_13)) % (((/* implicit */int) arr_34 [i_9]))))) : (((/* implicit */unsigned short) ((((/* implicit */int) var_13)) * (((/* implicit */int) arr_34 [i_9])))));
        arr_39 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_35 [i_9] [i_9])) <= (((/* implicit */int) arr_35 [i_9] [i_9]))));
    }
    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) var_14))));
    var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-10))));
    var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
}
