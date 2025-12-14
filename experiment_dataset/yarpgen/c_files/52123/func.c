/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52123
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (~(var_6))))));
            arr_4 [i_0] [i_1] [i_0] = ((/* implicit */short) ((1863339212407144651ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)199)))));
            arr_5 [i_0] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)56))));
        }
        for (short i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            arr_9 [(unsigned char)12] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(var_12)))) == ((~(var_0)))));
            arr_10 [i_0] = ((/* implicit */unsigned char) ((((arr_1 [i_2]) % (((/* implicit */long long int) ((/* implicit */int) var_13))))) > (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (2765982698U))))));
        }
        for (unsigned short i_3 = 3; i_3 < 16; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 2; i_4 < 16; i_4 += 3) 
            {
                for (unsigned short i_5 = 2; i_5 < 16; i_5 += 3) 
                {
                    {
                        var_18 -= ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_7))))));
                        /* LoopSeq 3 */
                        for (short i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            arr_21 [i_3] [i_4 - 1] [i_3] = ((arr_3 [i_4 - 2] [i_3 - 1]) + (arr_3 [i_0] [i_3 + 1]));
                            arr_22 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_3] [i_3] [i_3 + 2]);
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 3) 
                        {
                            var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_4] [i_4 + 1] [i_4] [i_4] [i_4])) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)4)) << (((((/* implicit */int) (short)-1266)) + (1285))))))));
                            arr_27 [i_3] [i_3 - 3] [i_4] [(unsigned char)12] [16U] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_5 + 1] [i_7 + 2] [i_4 - 1])) * (((/* implicit */int) arr_2 [i_5 + 2] [i_7 + 1] [i_4 - 2]))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            arr_30 [i_3] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)45528))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((unsigned int) var_10)))));
                        }
                    }
                } 
            } 
            var_21 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_0] [i_3 + 2] [i_3 - 1]))));
            arr_31 [i_0] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */unsigned long long int) arr_18 [(signed char)7] [(signed char)7] [i_3] [i_3] [i_3 - 2] [i_0])) : (var_4)));
            arr_32 [i_3] [i_3] = arr_25 [i_0] [i_0] [i_0] [i_3] [i_3 + 2];
            arr_33 [i_3] [i_3] = ((/* implicit */long long int) ((unsigned char) (unsigned char)34));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_36 [i_0] = (~(arr_6 [i_0] [i_9]));
            arr_37 [i_0] [i_9] = ((/* implicit */short) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_6)));
        }
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (short i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            {
                var_23 |= ((/* implicit */short) -395691545416357757LL);
                var_24 &= ((/* implicit */unsigned char) var_2);
                /* LoopNest 2 */
                for (short i_12 = 2; i_12 < 9; i_12 += 2) 
                {
                    for (short i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        {
                            arr_46 [i_10] [i_11] = ((/* implicit */unsigned char) arr_12 [(unsigned char)8] [i_11] [i_10]);
                            var_25 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((unsigned int) arr_24 [i_11]))))), (((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)199))) : (arr_14 [i_13] [i_11] [i_11] [i_13])))));
                            arr_47 [i_10] [i_11] [i_12] [i_13] = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_26 [i_12] [i_11] [i_11] [i_13])), ((unsigned short)8191)))) == (((int) ((17317646607011589693ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83))))))));
                        }
                    } 
                } 
                arr_48 [i_10] [i_10] [i_10] = ((/* implicit */short) (-(((/* implicit */int) var_16))));
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (short i_14 = 0; i_14 < 16; i_14 += 3) 
    {
        for (long long int i_15 = 2; i_15 < 15; i_15 += 2) 
        {
            for (long long int i_16 = 3; i_16 < 15; i_16 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 1; i_17 < 13; i_17 += 2) 
                    {
                        for (unsigned int i_18 = 4; i_18 < 13; i_18 += 3) 
                        {
                            {
                                arr_63 [i_14] = ((/* implicit */unsigned char) ((unsigned long long int) (~((-(arr_61 [i_14] [i_15 - 1] [i_14] [i_16] [i_17] [i_17] [i_16]))))));
                                arr_64 [i_14] [i_15] [i_14] [i_17] [i_14] [i_15 - 1] [(unsigned char)4] = ((/* implicit */_Bool) arr_17 [1U] [i_15 + 1] [i_16] [i_15 + 1]);
                            }
                        } 
                    } 
                    arr_65 [i_15] [i_14] [i_16 - 3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) var_14)))));
                    arr_66 [i_14] [i_14] [i_16 + 1] = ((/* implicit */long long int) max(((-(arr_8 [i_15 - 1]))), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)199))) ^ (17177772032ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)191))))))));
                }
            } 
        } 
    } 
}
