/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248096
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
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        arr_5 [(short)11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1984)) ? (((/* implicit */int) (unsigned short)63551)) : (((/* implicit */int) (unsigned short)1973))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_8 [i_1] |= ((/* implicit */unsigned long long int) ((unsigned char) arr_3 [i_0 + 1]));
            arr_9 [i_0] [i_1] [10U] = ((unsigned char) ((((/* implicit */int) arr_1 [i_1])) >> (((arr_7 [i_0] [i_1]) - (2123882477U)))));
            arr_10 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 2])) >> (((((/* implicit */int) arr_6 [i_0] [i_1])) - (7549)))));
        }
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_3 = 2; i_3 < 9; i_3 += 3) 
            {
                arr_16 [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */long long int) arr_11 [i_0] [i_3 + 2] [i_3])) / (var_18)));
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_19 [i_0] [1U] [i_2] [i_3] [8U] [i_4] = ((/* implicit */_Bool) ((((14141558707847690550ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63561))))) | (((812074923615601216ULL) & (((/* implicit */unsigned long long int) var_5))))));
                    arr_20 [2ULL] [i_2] [7U] [6U] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63552))) | (4140204167U)));
                }
                arr_21 [(signed char)4] [9ULL] [i_3 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 - 1])) ? (arr_7 [i_3 + 2] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
            }
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                arr_26 [8U] = ((/* implicit */unsigned long long int) 4294966784U);
                arr_27 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */long long int) arr_18 [i_0 + 1] [i_0] [i_2] [i_5] [i_0]);
            }
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                arr_32 [i_0 + 1] = ((/* implicit */unsigned long long int) ((arr_7 [i_0 - 1] [i_2]) != (arr_7 [i_0 + 1] [(_Bool)1])));
                arr_33 [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (unsigned short)1984)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
            }
            arr_34 [6LL] [i_2] = ((/* implicit */unsigned char) (unsigned short)1997);
            arr_35 [i_0] [i_2] = ((/* implicit */long long int) (unsigned char)194);
            arr_36 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((var_0) - (8074827905701008672LL)))))) ? (arr_13 [i_0] [i_2] [i_0 + 1] [i_2]) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-1961639891611498010LL)))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_39 [i_0] [4U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1008)) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 2])));
            arr_40 [i_0] [8U] = ((/* implicit */int) arr_13 [i_7] [i_7] [i_7] [i_0 - 1]);
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                arr_43 [i_8] [6U] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) 496U)) ^ (arr_41 [i_0] [i_7] [i_8] [i_7])))) ? (var_11) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) -1022)) : (8932939944670908644ULL)))));
                arr_44 [i_7] [(signed char)7] = ((/* implicit */long long int) var_1);
                arr_45 [i_0 + 1] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) 4294967282U);
                arr_46 [i_0] [(unsigned char)5] [i_8] = ((/* implicit */unsigned short) (-(((arr_29 [i_8] [i_7] [i_0]) % (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0 + 1]))))));
            }
            arr_47 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (1191470907)));
        }
        arr_48 [i_0] = ((/* implicit */unsigned int) (-(arr_12 [0U] [i_0 + 2])));
    }
    var_20 = var_8;
}
