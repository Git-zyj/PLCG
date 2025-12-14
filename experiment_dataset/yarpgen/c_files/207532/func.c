/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207532
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
    var_17 *= ((/* implicit */unsigned long long int) var_11);
    var_18 = var_15;
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            arr_7 [i_1] = ((/* implicit */_Bool) ((unsigned int) min((arr_5 [i_1] [i_1] [i_0]), (((/* implicit */unsigned int) (short)1722)))));
            arr_8 [i_0] [6ULL] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) var_11))), (((((/* implicit */int) arr_6 [(_Bool)1])) * (((/* implicit */int) arr_6 [i_1]))))));
        }
        for (signed char i_2 = 3; i_2 < 11; i_2 += 4) 
        {
            arr_11 [i_2] = ((/* implicit */unsigned char) min((((unsigned short) var_16)), (var_1)));
            var_19 *= ((/* implicit */short) (unsigned char)255);
            var_20 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-1732))));
        }
        for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            arr_14 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) + (((/* implicit */int) ((((/* implicit */int) (unsigned char)89)) < (((/* implicit */int) (unsigned char)217)))))));
            var_21 = ((/* implicit */unsigned long long int) 647235418U);
            arr_15 [i_0] [i_3] [i_3] = ((/* implicit */long long int) min(((short)-9912), ((short)9912)));
            arr_16 [i_0] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_4 [(unsigned short)13] [i_3] [(unsigned char)2])))) ^ (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_4 [i_0] [i_3] [i_3]))))));
        }
        var_22 *= ((/* implicit */unsigned int) var_12);
        var_23 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((arr_13 [i_0] [i_0] [i_0]), (((/* implicit */long long int) 579357424U))))), (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0])) : (11210209740467526191ULL)))));
    }
    for (int i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_18 [i_4]))) ? (((/* implicit */unsigned long long int) min((5721631086445681088LL), (((/* implicit */long long int) arr_18 [i_4]))))) : (max((((/* implicit */unsigned long long int) var_1)), (1044480ULL)))));
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned short) var_7);
    }
    for (int i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_12)), (-1404674449)))) ? (min((((((/* implicit */int) (short)1722)) * (((/* implicit */int) arr_20 [i_5] [i_5])))), (((((/* implicit */int) var_0)) << (((((/* implicit */int) var_15)) + (302))))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_5] [i_5])) : (((/* implicit */int) arr_4 [i_5] [i_5] [i_5]))))));
        arr_22 [(signed char)9] = ((/* implicit */unsigned long long int) ((int) min((((unsigned long long int) var_14)), (((/* implicit */unsigned long long int) (~(var_5)))))));
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (((_Bool)1) ? (max((((/* implicit */unsigned int) 3145728)), (((((/* implicit */_Bool) (short)-19903)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54414))) : (579357424U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19914))))))));
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            var_27 = ((/* implicit */long long int) min((((/* implicit */signed char) var_4)), (((signed char) arr_5 [i_5] [i_5] [i_6]))));
            arr_25 [i_5] = ((/* implicit */signed char) min((((((var_5) + (2147483647))) >> (((((/* implicit */int) var_8)) - (38))))), (((/* implicit */int) arr_24 [i_6]))));
        }
    }
    /* LoopSeq 2 */
    for (short i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        var_28 = ((/* implicit */unsigned short) var_14);
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) (+(((((/* implicit */int) var_1)) & (-1318361773)))))) : ((+(var_7))))))));
    }
    for (int i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            for (int i_10 = 2; i_10 < 9; i_10 += 4) 
            {
                for (unsigned char i_11 = 2; i_11 < 7; i_11 += 4) 
                {
                    {
                        arr_37 [i_8] [i_10] [i_8] &= ((/* implicit */signed char) arr_5 [i_8] [i_8] [(unsigned short)1]);
                        var_30 -= arr_29 [i_10 + 1];
                    }
                } 
            } 
        } 
        arr_38 [i_8] [8ULL] = ((/* implicit */int) arr_31 [i_8] [(short)6] [(short)7]);
    }
}
