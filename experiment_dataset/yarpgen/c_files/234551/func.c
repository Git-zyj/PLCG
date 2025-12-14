/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234551
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
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) -1949408971);
        var_12 *= ((/* implicit */_Bool) -2025656788);
    }
    for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
    {
        arr_6 [8] = ((/* implicit */unsigned short) -2025656788);
        /* LoopNest 3 */
        for (unsigned char i_2 = 1; i_2 < 8; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 4; i_4 < 10; i_4 += 2) 
                {
                    {
                        arr_15 [i_4] [i_3] [i_3] [i_1] = (i_3 % 2 == 0) ? (((/* implicit */int) (+(((((arr_11 [i_3]) + (9223372036854775807LL))) >> (((arr_11 [i_3]) + (2654425725297154253LL)))))))) : (((/* implicit */int) (+(((((arr_11 [i_3]) + (9223372036854775807LL))) >> (((((arr_11 [i_3]) + (2654425725297154253LL))) + (6535181348197070004LL))))))));
                        arr_16 [10] [i_3] = ((/* implicit */_Bool) var_10);
                        arr_17 [i_3] [i_2] = ((/* implicit */unsigned long long int) ((long long int) ((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) var_9)) : (var_10))) == (((/* implicit */long long int) ((/* implicit */int) ((arr_10 [i_1]) != (arr_10 [i_4]))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_5 = 1; i_5 < 10; i_5 += 3) 
    {
        var_13 *= ((/* implicit */unsigned long long int) var_9);
        var_14 *= ((/* implicit */_Bool) (short)(-32767 - 1));
    }
    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            for (short i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        for (int i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            {
                                arr_38 [i_6] [i_7] [i_8] [i_6] [i_9] [i_10] = ((/* implicit */unsigned short) ((long long int) (unsigned char)254));
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) -1949408967)) ? (7372815803523284372ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) (-(var_2)))) != ((+(16055972124421894622ULL)))))));
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                        {
                            {
                                arr_44 [i_6] [i_8] [i_8] [i_11] [i_6] [(short)1] = (+(((-2025656788) - (((/* implicit */int) arr_35 [i_6] [i_6] [i_11] [i_12])))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_23 [i_12] [i_6])))) - ((((!(((/* implicit */_Bool) (unsigned char)0)))) ? (max((((/* implicit */unsigned long long int) arr_29 [i_12] [i_6] [5LL])), (arr_40 [i_7] [i_6] [i_11]))) : (((/* implicit */unsigned long long int) (~(-2025656792))))))));
                                arr_45 [i_6] [i_6] [i_6] = ((/* implicit */int) ((_Bool) arr_22 [i_6]));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_35 [i_6] [(unsigned short)2] [i_6] [i_6]))) + ((+(((/* implicit */int) var_1))))));
        var_19 *= arr_32 [i_6] [i_6] [16LL] [(short)6] [i_6] [i_6];
        arr_46 [i_6] = ((/* implicit */short) ((arr_24 [i_6]) - (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_6] [i_6] [i_6] [i_6])))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_13 = 2; i_13 < 20; i_13 += 2) 
    {
        for (int i_14 = 3; i_14 < 19; i_14 += 3) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_8)) + (var_11)))) ? (arr_40 [i_13] [i_13] [i_15]) : (max((arr_34 [i_13] [i_13 + 1] [i_13]), (arr_34 [i_13] [i_14] [i_13])))))))))));
                    /* LoopSeq 3 */
                    for (signed char i_16 = 3; i_16 < 20; i_16 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) arr_39 [i_13] [i_14] [i_15] [i_13]);
                        var_22 = ((/* implicit */_Bool) arr_30 [i_16] [i_13] [i_14 - 3]);
                    }
                    for (unsigned long long int i_17 = 3; i_17 < 17; i_17 += 3) 
                    {
                        arr_58 [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (short)9505)) : (((/* implicit */int) arr_33 [i_15] [i_13] [i_15] [i_17]))));
                        arr_59 [i_13] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_13 - 2] [i_17 - 1] [i_13]))));
                        var_23 = ((/* implicit */int) arr_27 [i_17] [i_13] [i_14 - 3]);
                        var_24 = ((/* implicit */unsigned int) arr_37 [i_17] [i_13] [i_14] [i_13] [i_13]);
                    }
                    for (unsigned char i_18 = 3; i_18 < 20; i_18 += 3) 
                    {
                        arr_64 [i_13] [i_13] [i_18] [14ULL] = ((((/* implicit */_Bool) -1949408971)) ? (1949408959) : (((/* implicit */int) (signed char)0)));
                        var_25 *= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) arr_43 [i_13] [i_18 - 3] [i_13] [i_18 - 1] [i_13] [i_13])) + (((/* implicit */int) arr_43 [i_13] [i_18 - 3] [i_18] [i_15] [i_15] [i_13])))));
                        var_26 = ((/* implicit */unsigned int) (short)-32760);
                    }
                    arr_65 [i_13] [i_13] = ((/* implicit */signed char) ((unsigned char) max((((/* implicit */long long int) (unsigned short)65535)), (9223372036854775807LL))));
                    var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_13] [i_14 - 3] [i_15])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_13] [i_14 + 2] [4U]))))))));
                }
            } 
        } 
    } 
}
