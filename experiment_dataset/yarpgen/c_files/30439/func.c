/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30439
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
    var_13 = ((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) (short)10214)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        var_14 |= ((/* implicit */_Bool) ((signed char) (short)-32746));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 2])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((int) arr_0 [i_0 - 1] [i_0])) : (((/* implicit */int) var_8))));
    }
    for (unsigned short i_1 = 3; i_1 < 11; i_1 += 3) 
    {
        var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_1 - 2])) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) max((var_0), (arr_4 [i_1 - 1])))) : (max((((/* implicit */unsigned long long int) var_8)), (var_10)))));
        var_18 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned short)24576)) ? (-343467765852887888LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 3] [10])))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        var_19 += ((/* implicit */unsigned short) ((arr_8 [i_2]) > (((/* implicit */int) var_12))));
        var_20 ^= ((/* implicit */short) (~(var_6)));
        arr_9 [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-21440)) : (((/* implicit */int) var_3)))) > (((/* implicit */int) var_12))));
        arr_10 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)21440)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) arr_7 [i_2] [i_2]))));
        var_21 = ((/* implicit */int) (~(var_0)));
    }
    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 2) 
    {
        var_22 = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_3 + 1] [(unsigned short)9]))))), (var_10));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_12))));
        arr_14 [i_3] = ((/* implicit */unsigned long long int) (unsigned short)61922);
    }
    var_24 = ((/* implicit */long long int) (short)-21440);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_4 = 1; i_4 < 20; i_4 += 2) 
    {
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_7 [i_4 - 1] [i_4 - 1]))))) : (((/* implicit */int) arr_15 [i_4 - 1]))));
        /* LoopSeq 3 */
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            arr_20 [i_5] [i_5] = ((/* implicit */signed char) -8234197477944981308LL);
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) 4781309299182793965LL)) ? (((/* implicit */long long int) arr_8 [i_4 + 1])) : (-2033237431553945185LL)));
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    var_27 *= ((/* implicit */signed char) ((arr_22 [i_4] [i_7] [i_4 - 1]) > (((/* implicit */long long int) arr_8 [i_4]))));
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 267386880LL)) | (8028817603607549884ULL)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 3) 
                    {
                        arr_28 [i_8 - 1] [i_5] [15U] [i_5] [i_6] [i_5] [i_4] = ((/* implicit */int) ((unsigned char) (_Bool)0));
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_17 [i_4 + 1]) : (((/* implicit */unsigned long long int) var_7))));
                        var_30 += ((/* implicit */signed char) (-(var_9)));
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) var_2))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_32 &= ((/* implicit */unsigned char) var_8);
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)36859)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (((unsigned int) (signed char)-93))));
                        arr_31 [i_7] [i_5] [i_6] [i_5] [i_9] [i_7] [i_6] = (i_5 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((var_5) > (((/* implicit */long long int) ((/* implicit */int) var_12)))))) << (((((arr_27 [i_4] [i_4] [i_6] [i_7] [i_5] [i_9]) + (((/* implicit */long long int) ((/* implicit */int) var_8))))) - (400703434463111303LL)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((var_5) > (((/* implicit */long long int) ((/* implicit */int) var_12)))))) << (((((((arr_27 [i_4] [i_4] [i_6] [i_7] [i_5] [i_9]) + (((/* implicit */long long int) ((/* implicit */int) var_8))))) - (400703434463111303LL))) + (7676301583210327650LL))))));
                        var_34 *= ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_25 [i_5] [i_5]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2000704534)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_9)) : (arr_27 [i_4] [i_4] [i_4] [(short)18] [i_7] [i_9]))));
                    }
                }
                var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) -2000704534))));
                var_36 ^= ((/* implicit */long long int) arr_24 [i_4] [i_5] [i_6] [i_6]);
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_11 = 2; i_11 < 18; i_11 += 2) 
                {
                    for (short i_12 = 1; i_12 < 20; i_12 += 3) 
                    {
                        {
                            var_37 = var_10;
                            arr_41 [i_5] [i_11 - 1] [i_5] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_38 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) arr_34 [10U] [i_10] [i_5] [i_4])) : (8796093022207LL)))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [i_4] [i_4 - 1]))));
            }
        }
        for (unsigned int i_13 = 0; i_13 < 21; i_13 += 4) 
        {
            var_39 = ((/* implicit */long long int) (+(var_9)));
            var_40 = ((/* implicit */unsigned int) ((_Bool) var_11));
        }
        for (unsigned long long int i_14 = 3; i_14 < 19; i_14 += 3) 
        {
            arr_46 [i_14] = ((/* implicit */short) arr_32 [18]);
            var_41 = ((/* implicit */unsigned int) max((var_41), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)9691)) ? (2000704534) : ((-2147483647 - 1))))) : (arr_33 [2LL])))));
            var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) var_10))));
            var_43 = ((/* implicit */unsigned long long int) (~(arr_33 [4])));
        }
    }
}
