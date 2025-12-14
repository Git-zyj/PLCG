/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212834
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_16 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_17 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) - ((+(var_6)))));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_1] [i_1]);
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(min((var_13), (((/* implicit */unsigned int) (signed char)-109))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))) : (max((((((/* implicit */_Bool) var_14)) ? (6464893480649860954LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))), (((/* implicit */long long int) arr_1 [i_1] [i_1]))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 2; i_3 < 23; i_3 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(max((((/* implicit */int) arr_8 [i_2])), (var_10)))))) ? (((((/* implicit */_Bool) var_13)) ? (arr_13 [i_3 - 2] [i_3 + 1] [i_3 + 1]) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_2))))))) : (max((((/* implicit */int) (short)164)), ((+(((/* implicit */int) arr_9 [i_2] [i_3 - 1])))))))))));
            arr_14 [i_2] [(short)2] [i_3] = ((/* implicit */unsigned short) (~(var_8)));
        }
        var_19 = ((/* implicit */long long int) var_1);
        var_20 = ((/* implicit */unsigned long long int) (unsigned char)251);
    }
    /* LoopSeq 4 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned long long int) arr_13 [i_4] [i_4] [i_4]);
        var_21 = ((/* implicit */long long int) arr_8 [i_4]);
        arr_19 [i_4] [i_4] = ((/* implicit */short) ((unsigned long long int) ((((_Bool) var_0)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-125))))))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        arr_23 [(short)0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_5])) ? (arr_22 [i_5]) : (arr_22 [i_5])));
        var_22 = ((/* implicit */_Bool) var_2);
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        arr_26 [i_6] [i_6] = (signed char)124;
        arr_27 [(short)9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)-18897))))) ? (var_5) : (((/* implicit */int) arr_10 [i_6] [i_6] [i_6]))));
        /* LoopSeq 4 */
        for (short i_7 = 1; i_7 < 9; i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    {
                        arr_34 [i_8] = ((/* implicit */short) arr_1 [i_6] [i_8]);
                        arr_35 [i_8] [i_8] [i_8] = ((/* implicit */short) var_6);
                    }
                } 
            } 
            arr_36 [i_6] [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_6]))));
        }
        for (short i_10 = 1; i_10 < 9; i_10 += 1) /* same iter space */
        {
            arr_40 [i_10] [i_10] = ((/* implicit */unsigned short) (-(((unsigned int) arr_8 [19U]))));
            arr_41 [i_10] = ((/* implicit */long long int) (signed char)63);
            var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_15 [i_10 + 1] [i_10 + 2])) : (((/* implicit */int) arr_17 [i_10 + 1] [i_10 + 2]))));
        }
        for (signed char i_11 = 1; i_11 < 11; i_11 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_12 = 0; i_12 < 12; i_12 += 1) 
            {
                arr_48 [i_12] [i_12] [i_12] = ((/* implicit */short) (_Bool)1);
                var_24 -= ((/* implicit */signed char) ((unsigned short) (unsigned short)34796));
                arr_49 [i_12] [i_11] [i_6] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_15))));
            }
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_44 [i_11 + 1])) ? (((/* implicit */int) arr_44 [i_11 - 1])) : (((/* implicit */int) (short)13042))));
            var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_6] [i_11 - 1] [i_11] [i_11 - 1])) < (((/* implicit */int) arr_32 [i_6] [i_11 - 1] [i_11] [i_11 + 1]))));
        }
        for (short i_13 = 4; i_13 < 8; i_13 += 1) 
        {
            var_27 = ((/* implicit */unsigned short) arr_37 [i_13 + 4] [i_13 + 2] [i_13 + 2]);
            /* LoopSeq 2 */
            for (short i_14 = 0; i_14 < 12; i_14 += 2) 
            {
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 12; i_15 += 1) 
                {
                    for (unsigned short i_16 = 3; i_16 < 10; i_16 += 1) 
                    {
                        {
                            var_28 -= ((/* implicit */unsigned char) (_Bool)1);
                            var_29 = ((/* implicit */long long int) arr_56 [i_6] [i_6] [i_6] [i_15] [i_16 + 2]);
                        }
                    } 
                } 
                arr_60 [0ULL] [i_13] [0ULL] [i_13] = ((/* implicit */unsigned char) (~(arr_16 [i_13 - 2] [i_13])));
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                arr_63 [i_17] [i_6] [i_6] = ((259570445340427428LL) != (((/* implicit */long long int) var_5)));
                arr_64 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) arr_51 [i_13] [6LL]);
                /* LoopNest 2 */
                for (unsigned int i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    for (unsigned char i_19 = 1; i_19 < 8; i_19 += 1) 
                    {
                        {
                            arr_71 [i_6] [i_13 + 1] [i_17] [i_18] [i_13 + 1] [i_17] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_67 [i_17] [(short)1] [i_19 + 2] [(short)1] [7LL] [(short)1])) ? (((/* implicit */int) arr_67 [i_13 - 4] [i_13 - 4] [i_13 - 4] [i_13 - 4] [i_13 - 2] [i_17])) : (((((/* implicit */_Bool) arr_67 [i_6] [i_17] [i_17] [i_17] [i_17] [i_19])) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) var_4))))));
                            arr_72 [(signed char)1] [(signed char)1] [(signed char)1] [i_18] [i_19] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_5)) ? (arr_3 [i_6]) : (((/* implicit */unsigned long long int) arr_68 [i_6] [i_13 + 4] [i_17] [i_18] [i_19 - 1]))))));
                            var_30 -= ((/* implicit */int) (short)-9948);
                        }
                    } 
                } 
                arr_73 [i_6] [i_13 + 4] [i_17] [i_13 + 4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_54 [i_13 - 3] [i_6])) ? (var_5) : (((/* implicit */int) arr_57 [i_6] [i_6] [i_13 - 2]))));
                arr_74 [i_13] [i_13] [i_13] [i_6] = ((/* implicit */_Bool) (+(259570445340427428LL)));
            }
            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (signed char)-114))));
        }
    }
    for (signed char i_20 = 2; i_20 < 18; i_20 += 1) 
    {
        var_32 = ((/* implicit */unsigned int) -259570445340427429LL);
        /* LoopNest 2 */
        for (signed char i_21 = 3; i_21 < 16; i_21 += 3) 
        {
            for (long long int i_22 = 2; i_22 < 16; i_22 += 1) 
            {
                {
                    var_33 = ((/* implicit */short) ((819855948) > (((/* implicit */int) min((arr_11 [i_20 - 1]), (arr_11 [i_20 - 1]))))));
                    var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (signed char)111))));
                    arr_85 [i_20] [i_22] [i_22] = ((/* implicit */unsigned int) min((((/* implicit */int) (short)-13042)), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_78 [i_20] [(signed char)16] [i_20]))))) ? (((/* implicit */int) ((_Bool) arr_7 [i_20] [i_21]))) : (((/* implicit */int) (short)13041))))));
                }
            } 
        } 
        var_35 -= ((/* implicit */_Bool) arr_80 [i_20 + 1] [i_20 - 2]);
        arr_86 [i_20] = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) arr_77 [i_20 + 1] [i_20 + 1] [i_20 - 1])))));
    }
    var_36 = ((/* implicit */signed char) (unsigned short)6794);
}
