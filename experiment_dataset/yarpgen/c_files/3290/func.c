/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3290
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_4 [(unsigned short)10] [(unsigned short)10] |= ((/* implicit */int) var_3);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            var_18 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (arr_0 [(unsigned short)4])))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (unsigned short)51302)))) : (((/* implicit */int) ((signed char) (unsigned short)13743)))));
            arr_7 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_4)))))));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_0 [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)51787)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) || (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) || (((/* implicit */_Bool) arr_6 [i_0]))))));
        }
        arr_8 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (((var_14) / (((/* implicit */int) arr_3 [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) | (var_16))) / (((unsigned int) var_2))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 3; i_3 < 8; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_0] [2LL] = (unsigned short)51795;
                        arr_18 [i_2] [i_3 + 3] [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) var_1)), (599157397U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)227)) / (((/* implicit */int) (unsigned char)255)))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) max((((/* implicit */unsigned long long int) 6342349656892102LL)), (11142147762852716686ULL))))));
    }
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
    {
        var_21 += ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (((-2147483647 - 1)) & (((/* implicit */int) (unsigned short)61920)))))));
        arr_23 [i_5] = ((/* implicit */unsigned short) arr_21 [i_5]);
        arr_24 [i_5] [0U] = ((/* implicit */unsigned short) ((signed char) max((((((/* implicit */_Bool) (unsigned short)61802)) ? (((/* implicit */int) arr_20 [(unsigned short)5] [15U])) : (((/* implicit */int) (unsigned short)51795)))), (((/* implicit */int) var_12)))));
        /* LoopNest 3 */
        for (signed char i_6 = 1; i_6 < 15; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                for (int i_8 = 3; i_8 < 13; i_8 += 1) 
                {
                    {
                        arr_33 [i_6] [i_8] = ((/* implicit */int) (unsigned char)1);
                        var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_7] [i_5])) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) arr_20 [i_6 + 1] [i_6 + 1]))))) > ((+(var_0)))))), (((int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3619))) >= (var_16))))));
                        arr_34 [i_6] [i_5] [i_6] [i_6] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)3619)) ? (((/* implicit */long long int) ((int) (signed char)121))) : (max((arr_28 [i_6 + 1] [i_6 + 2] [i_6] [9]), (((/* implicit */long long int) ((int) 2052388812)))))));
                        arr_35 [i_6] [i_6] [i_7] [i_8] = ((/* implicit */signed char) ((((((arr_28 [i_8 + 1] [i_6 + 2] [i_6 + 1] [i_6 + 2]) + (9223372036854775807LL))) >> (((max((((/* implicit */long long int) var_9)), (2947870648022267337LL))) - (2947870648022267278LL))))) >> (((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) | (max((7267048388029663145LL), (((/* implicit */long long int) var_0)))))) - (7267048388029663135LL)))));
                        arr_36 [i_5] [(signed char)9] [15U] [i_6] = ((/* implicit */signed char) max((((unsigned short) var_12)), (((/* implicit */unsigned short) ((unsigned char) var_13)))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 17; i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                {
                    arr_46 [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)960)) & (((/* implicit */int) var_13))));
                    /* LoopNest 2 */
                    for (signed char i_12 = 2; i_12 < 15; i_12 += 3) 
                    {
                        for (int i_13 = 3; i_13 < 14; i_13 += 1) 
                        {
                            {
                                var_23 = (~(((/* implicit */int) arr_43 [i_13] [i_12 - 2] [i_10] [12])));
                                arr_51 [i_9] [i_10] [i_10] [i_12] = ((unsigned short) ((599157403U) / (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((((/* implicit */int) (unsigned char)11)) + (((/* implicit */int) (signed char)-19)));
    }
    for (unsigned short i_14 = 0; i_14 < 17; i_14 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) min((((/* implicit */int) ((signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)-79)) : (var_8))))), (((int) ((int) var_10)))));
        arr_54 [i_14] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? (((/* implicit */int) (unsigned short)61802)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)36))) >= ((-9223372036854775807LL - 1LL)))))))));
    }
    var_26 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((unsigned short) (-9223372036854775807LL - 1LL)))) | (min((((/* implicit */int) var_4)), (-1217093896)))))));
    var_27 = ((/* implicit */unsigned char) var_2);
    var_28 = ((((/* implicit */_Bool) ((int) var_15))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_7)))) : (((long long int) (((_Bool)1) || (((/* implicit */_Bool) 3695809893U))))));
}
