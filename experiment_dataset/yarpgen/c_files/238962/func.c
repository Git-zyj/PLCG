/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238962
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
    var_13 = ((/* implicit */int) var_5);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) -1061122132)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (4715249207120669407ULL)));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) arr_0 [i_1]);
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_3 [i_1] [i_1])))) ? (((/* implicit */unsigned int) -909481190)) : (var_12))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 2) 
    {
        var_17 = var_8;
        var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_2])) ? (max((7U), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))))) ^ (arr_0 [i_2])));
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 - 2])) ? (((/* implicit */int) arr_1 [i_2 + 1])) : (((/* implicit */int) arr_1 [i_2 + 1]))))) ? (((long long int) ((((/* implicit */_Bool) 1301920568)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_7 [(signed char)13] [(_Bool)1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8))))));
    }
    for (short i_3 = 1; i_3 < 12; i_3 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_3 [i_3] [5U]))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3])))))))) ? (((/* implicit */int) arr_6 [i_3 + 2])) : (((/* implicit */int) arr_4 [i_3]))));
        var_22 = ((/* implicit */unsigned char) arr_0 [i_3]);
        var_23 = ((/* implicit */unsigned int) arr_7 [i_3 - 1] [i_3 - 1]);
    }
    var_24 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) var_5)) * (((((/* implicit */_Bool) var_7)) ? (6736873523258847884ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8796093022144ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-9818))) : (4294967274U))))));
    /* LoopNest 3 */
    for (unsigned short i_4 = 2; i_4 < 12; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (unsigned char i_6 = 2; i_6 < 13; i_6 += 2) 
            {
                {
                    var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_1) ? (arr_16 [i_4] [i_5] [i_4 + 1]) : (arr_16 [i_4 + 3] [6U] [i_4 - 2])))) ? (((((/* implicit */_Bool) -575747508)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_13 [i_4 + 1] [14LL] [i_6 + 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_14 [i_6 + 2] [i_4 + 3] [i_6])))))));
                    var_26 = ((/* implicit */_Bool) arr_0 [i_5]);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_7 = 1; i_7 < 8; i_7 += 2) 
    {
        var_27 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (+(var_4)))) ? (((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) arr_4 [i_7])) : (((/* implicit */int) arr_1 [i_7])))) : (arr_18 [i_7] [i_7]))));
        var_28 = ((/* implicit */unsigned long long int) arr_1 [i_7]);
    }
    for (int i_8 = 1; i_8 < 21; i_8 += 3) 
    {
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((arr_21 [i_8]), (((/* implicit */unsigned int) var_0))))))) ? (((/* implicit */int) arr_23 [17LL])) : (((/* implicit */int) arr_1 [i_8 - 1]))));
        var_30 *= ((/* implicit */short) var_6);
    }
    for (signed char i_9 = 0; i_9 < 13; i_9 += 1) 
    {
        var_31 = ((/* implicit */unsigned char) ((_Bool) 0ULL));
        var_32 = arr_22 [i_9];
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_10 = 0; i_10 < 13; i_10 += 2) 
        {
            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((876345181) - (876345176)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_10])) ? (arr_12 [i_10] [i_10] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)165)))))) : ((((_Bool)0) ? (2305843009213677568LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)91)))))));
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_9])) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) arr_21 [(unsigned char)13]))));
            /* LoopSeq 1 */
            for (int i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                var_35 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_11] [i_10] [i_9])) ? (((((/* implicit */_Bool) arr_16 [i_10] [i_10] [i_11])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) : (((int) arr_8 [i_11]))));
                var_36 = ((/* implicit */unsigned int) arr_15 [i_9]);
            }
        }
    }
}
