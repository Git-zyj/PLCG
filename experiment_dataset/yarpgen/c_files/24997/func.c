/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24997
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
    var_13 = (+(var_7));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] = arr_0 [i_0];
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [(unsigned short)15] [10ULL]))));
        var_14 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 3458764513820540928ULL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (arr_2 [i_0])))) : (((/* implicit */int) ((unsigned short) var_0)))));
    }
    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
    /* LoopSeq 4 */
    for (unsigned short i_1 = 3; i_1 < 15; i_1 += 4) 
    {
        arr_8 [i_1] = ((unsigned char) ((14987979559889010687ULL) | (min((var_7), (((/* implicit */unsigned long long int) var_11))))));
        arr_9 [i_1 - 1] [(unsigned char)18] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned char) min((14987979559889010682ULL), (var_5))))), (((18446744073709551615ULL) + (18446744073709551615ULL)))));
        arr_10 [i_1 - 2] = ((/* implicit */unsigned char) max((3458764513820540933ULL), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((3458764513820540929ULL) < (var_5))))) < (((((/* implicit */_Bool) var_3)) ? (var_1) : (var_8))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) (((~(arr_1 [i_2] [i_2]))) & (arr_2 [i_2])));
        arr_13 [i_2] = arr_2 [i_2];
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (unsigned short i_5 = 3; i_5 < 23; i_5 += 4) 
            {
                for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    {
                        arr_24 [i_3] [i_4] [(unsigned short)12] [(unsigned short)21] = arr_19 [i_4];
                        /* LoopSeq 3 */
                        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            arr_27 [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_26 [i_3] [i_5 + 1] [(unsigned char)10] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 - 3]))));
                            var_17 = ((/* implicit */unsigned short) var_9);
                            var_18 = ((/* implicit */unsigned short) var_11);
                            arr_28 [i_3] [i_4] [i_5] [i_3] [i_3] [i_6] [i_3] = var_12;
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            arr_31 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)65535));
                            var_19 = ((/* implicit */unsigned short) (((-(3458764513820540908ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5 - 2])))));
                            arr_32 [i_3] [i_4] [i_5 + 1] [i_3] [i_8] [i_3] = ((/* implicit */unsigned long long int) arr_20 [i_3] [18ULL] [13ULL]);
                            arr_33 [i_3] [i_4] [i_5 - 1] [i_6] [i_3] = ((/* implicit */unsigned short) ((unsigned char) arr_20 [i_5 + 1] [i_5 - 3] [i_5 + 1]));
                            var_20 = ((/* implicit */unsigned short) 3458764513820540928ULL);
                        }
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            arr_37 [0ULL] = var_5;
                            arr_38 [i_3] [i_4] [i_4] [i_6] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4])))))));
                            var_21 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_3] [i_3])) << (((((/* implicit */int) (unsigned char)238)) - (229)))))) * (var_6));
                        }
                    }
                } 
            } 
        } 
        arr_39 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_21 [i_3] [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_20 [i_3] [i_3] [i_3]))));
        arr_40 [i_3] = ((/* implicit */unsigned short) ((var_6) >> (((((/* implicit */int) ((unsigned char) var_3))) - (99)))));
        /* LoopNest 2 */
        for (unsigned short i_10 = 1; i_10 < 23; i_10 += 4) 
        {
            for (unsigned long long int i_11 = 1; i_11 < 23; i_11 += 4) 
            {
                {
                    arr_46 [i_3] [(unsigned char)6] = ((unsigned char) var_5);
                    arr_47 [(unsigned char)21] [i_10 - 1] [i_11] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_10 + 1]))));
                    var_22 = ((/* implicit */unsigned short) arr_44 [i_3] [i_3]);
                    arr_48 [i_3] [i_10 + 1] [i_11 + 1] = ((/* implicit */unsigned short) (~(0ULL)));
                    arr_49 [0ULL] [i_3] [i_10] [(unsigned char)23] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_45 [i_3] [i_10 + 1] [(unsigned short)13]))));
                }
            } 
        } 
        arr_50 [i_3] [i_3] = ((unsigned short) ((unsigned char) 3458764513820540905ULL));
    }
    for (unsigned long long int i_12 = 2; i_12 < 20; i_12 += 4) 
    {
        arr_53 [i_12 + 2] = ((/* implicit */unsigned long long int) var_11);
        var_23 = max((((/* implicit */unsigned long long int) arr_0 [(unsigned short)4])), ((~((~(3458764513820540900ULL))))));
        var_24 = ((/* implicit */unsigned char) ((((max((var_5), (((/* implicit */unsigned long long int) (unsigned short)65535)))) >> (((((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (unsigned char)236)))) - (252))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_12 - 2]))) ? (((/* implicit */int) arr_44 [(unsigned char)20] [(unsigned char)20])) : (((((/* implicit */int) arr_22 [i_12 - 2] [i_12])) - (((/* implicit */int) arr_45 [i_12 - 2] [i_12 - 1] [i_12])))))))));
    }
}
