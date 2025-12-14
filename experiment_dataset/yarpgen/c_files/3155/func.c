/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3155
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)5)) ? (4LL) : (7LL)));
        var_15 = ((/* implicit */short) ((unsigned int) -10LL));
        var_16 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) var_11)) : (18LL)));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)11327)))) && (((/* implicit */_Bool) var_3)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_18 = ((/* implicit */short) (((-(((((/* implicit */_Bool) -27LL)) ? (-26LL) : (((/* implicit */long long int) 596025839)))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4LL))))))));
        /* LoopNest 3 */
        for (long long int i_2 = 3; i_2 < 22; i_2 += 3) 
        {
            for (int i_3 = 2; i_3 < 23; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    {
                        arr_14 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) arr_11 [i_1] [i_2 - 2] [i_3 - 1] [i_2 - 2]);
                        var_19 = ((/* implicit */short) var_5);
                    }
                } 
            } 
        } 
        arr_15 [i_1] = ((/* implicit */unsigned long long int) var_6);
    }
    for (unsigned char i_5 = 2; i_5 < 8; i_5 += 2) 
    {
        var_20 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -22LL)) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) (short)11327))))) ? (arr_6 [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
        var_21 -= ((/* implicit */signed char) ((unsigned short) (unsigned char)132));
    }
    for (int i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 2; i_7 < 18; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) arr_13 [i_7] [i_8]);
                    var_23 = ((/* implicit */signed char) arr_22 [i_7]);
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((-7LL) & (((/* implicit */long long int) -2046066503)))) : (-2LL)))) ? (-5820529547608133909LL) : (((/* implicit */long long int) 817405199U))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_8 [i_6])))) ? ((~(((/* implicit */int) arr_8 [i_6])))) : (((/* implicit */int) arr_12 [i_6] [i_6] [i_6] [i_6])))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_9 = 4; i_9 < 22; i_9 += 3) 
    {
        for (int i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 2; i_12 < 24; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 25; i_13 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) arr_36 [i_9] [i_10]);
                                var_27 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((-25LL) != (((/* implicit */long long int) ((/* implicit */int) (short)9616)))))) : (((/* implicit */int) ((arr_35 [i_9] [i_10] [(_Bool)1] [i_12 - 2]) <= (((/* implicit */int) arr_36 [i_9] [i_9]))))))));
                                var_28 = ((short) (~(var_12)));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */int) ((unsigned char) ((arr_39 [i_9 - 3] [i_9 - 3] [i_9 + 1] [i_9 - 2] [i_11]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_9] [i_9]))))));
                    var_30 -= ((/* implicit */short) ((((/* implicit */_Bool) -19LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54791))) : (-33LL)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_14 = 0; i_14 < 14; i_14 += 1) 
    {
        for (unsigned char i_15 = 1; i_15 < 13; i_15 += 4) 
        {
            for (short i_16 = 0; i_16 < 14; i_16 += 4) 
            {
                {
                    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(unsigned short)14])))))) ? (((/* implicit */int) arr_38 [i_14] [i_14] [i_16] [i_16] [i_16])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_33 [i_14] [i_16] [i_16] [i_16]))) > (arr_7 [i_16] [i_15] [i_14])))))), (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_27 [i_14] [i_15] [i_16])) : (((/* implicit */int) arr_30 [12] [i_15 - 1] [i_16])))) : (((/* implicit */int) arr_30 [i_15 - 1] [i_15 + 1] [i_16])))))))));
                    var_32 = ((/* implicit */int) -15LL);
                }
            } 
        } 
    } 
}
