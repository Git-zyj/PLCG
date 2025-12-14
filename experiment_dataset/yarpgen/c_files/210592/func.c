/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210592
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [16LL] &= var_9;
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_14 [i_1] [(signed char)8] [i_4] [i_3] [i_4] [i_1] [18] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_0 [i_2] [i_1])) ? (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) arr_12 [i_0])) : (arr_9 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (short)-807)))))));
                                arr_15 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_1]))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                            {
                                arr_19 [i_1] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */_Bool) arr_2 [i_0]);
                                arr_20 [i_0] [i_3] [i_0] [i_0] [i_0] [(short)18] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_12 [i_0])))) ? (((/* implicit */int) ((signed char) arr_10 [i_5] [i_2] [i_0] [i_0]))) : (((((/* implicit */_Bool) (short)822)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [(unsigned char)7] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_16 [i_5] [i_3] [i_2] [i_2] [14U] [14U]))));
                            }
                            var_19 = ((/* implicit */_Bool) ((unsigned char) ((long long int) ((((/* implicit */_Bool) 1006632960LL)) || (((/* implicit */_Bool) (unsigned short)60376))))));
                            arr_21 [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_9 [i_3] [i_1] [i_1] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 &= ((/* implicit */int) var_6);
    /* LoopSeq 4 */
    for (signed char i_6 = 2; i_6 < 10; i_6 += 2) 
    {
        arr_24 [i_6 - 2] &= ((/* implicit */int) arr_3 [i_6] [(unsigned short)1]);
        var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_6 + 1] [8LL])) != (1242627580))))) - ((~(arr_17 [i_6] [i_6] [i_6 - 2])))));
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        arr_27 [i_7] = ((/* implicit */unsigned long long int) 1006632987LL);
        var_22 = ((/* implicit */unsigned long long int) var_15);
        var_23 = ((/* implicit */short) (_Bool)1);
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_9 = 0; i_9 < 12; i_9 += 1) 
        {
            arr_34 [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)806))) % (1318380915U)));
            arr_35 [i_8] [i_8] = ((/* implicit */signed char) (+(((/* implicit */int) (short)28502))));
            arr_36 [i_8] [i_9] = ((/* implicit */unsigned long long int) (short)-28503);
        }
        for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                for (signed char i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)829))));
                            arr_48 [i_11] [i_10] [i_10] [i_10] = ((arr_9 [8LL] [i_11] [i_11] [i_11]) >= (((/* implicit */long long int) ((((/* implicit */int) (signed char)57)) << (((((/* implicit */int) arr_4 [i_12] [9U] [i_10])) + (128)))))));
                            arr_49 [i_10] [i_11] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) arr_7 [i_8] [i_10] [i_8])) : ((-9223372036854775807LL - 1LL)))))));
                            arr_50 [i_13] [i_11] [i_11] [(unsigned short)5] = ((/* implicit */short) var_14);
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */int) var_11);
        }
        for (unsigned int i_14 = 3; i_14 < 11; i_14 += 4) 
        {
            var_26 = ((/* implicit */_Bool) arr_8 [(signed char)9] [i_14] [i_8] [i_14 + 1] [i_14]);
            arr_54 [i_14] = ((/* implicit */int) 1006632967LL);
            /* LoopSeq 2 */
            for (unsigned char i_15 = 2; i_15 < 11; i_15 += 4) /* same iter space */
            {
                arr_57 [i_8] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_14 - 2])) ? (arr_46 [i_14 - 2]) : (arr_46 [i_14 - 1])));
                var_27 = (+(((/* implicit */int) arr_44 [i_15 + 1] [i_15 + 1] [i_14 - 1])));
                var_28 = ((/* implicit */signed char) (+(((/* implicit */int) arr_30 [i_15 - 2] [i_14 + 1] [i_15]))));
                arr_58 [i_8] [i_14] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)25))));
                arr_59 [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [(signed char)5]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_15 - 1] [i_14 + 1] [i_14 + 1]))) : (((arr_56 [i_8] [(signed char)9] [i_14]) << (((arr_12 [i_15]) - (1687123930U)))))));
            }
            for (unsigned char i_16 = 2; i_16 < 11; i_16 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 12; i_17 += 4) 
                {
                    for (signed char i_18 = 1; i_18 < 9; i_18 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) arr_47 [i_8] [(unsigned char)9] [i_17] [i_17]))));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_8] [i_8] [(short)7] [i_8])) ^ (((/* implicit */int) arr_10 [i_8] [i_14 + 1] [i_16] [i_17]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_19 = 0; i_19 < 12; i_19 += 3) 
                {
                    for (signed char i_20 = 0; i_20 < 12; i_20 += 3) 
                    {
                        {
                            arr_74 [i_14] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(var_4))))) + (((((/* implicit */long long int) arr_7 [i_14] [i_19] [i_14])) % (arr_38 [(unsigned short)4] [(unsigned short)4])))));
                            arr_75 [i_8] [i_8] [(signed char)7] [i_14] [i_19] [i_19] [i_20] = ((/* implicit */_Bool) ((arr_42 [i_14 + 1] [i_14] [i_16] [i_16 - 2]) + (arr_42 [i_14 + 1] [(signed char)5] [i_14 + 1] [i_16 - 2])));
                            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)2)))))));
                        }
                    } 
                } 
            }
            arr_76 [i_8] [4] [i_14] = (+(((((/* implicit */_Bool) -1006632956LL)) ? (var_18) : (((/* implicit */unsigned int) var_1)))));
            var_32 = ((/* implicit */unsigned short) arr_71 [i_8] [i_8] [i_8]);
        }
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_8] [i_8] [i_8] [i_8])) && (((/* implicit */_Bool) arr_41 [i_8] [i_8] [i_8] [i_8]))));
        /* LoopNest 2 */
        for (long long int i_21 = 0; i_21 < 12; i_21 += 3) 
        {
            for (unsigned short i_22 = 0; i_22 < 12; i_22 += 2) 
            {
                {
                    arr_85 [i_8] [i_8] [i_21] [i_22] = ((/* implicit */long long int) ((arr_28 [i_8]) & (((/* implicit */int) arr_31 [i_8]))));
                    arr_86 [i_8] [i_21] [i_22] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)15366)) / (828736757)));
                }
            } 
        } 
    }
    for (unsigned int i_23 = 0; i_23 < 25; i_23 += 4) 
    {
        var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_88 [i_23] [i_23])) != (9852026019173638964ULL)))) / (((/* implicit */int) (short)7846))));
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 25; i_24 += 3) 
        {
            for (short i_25 = 2; i_25 < 24; i_25 += 2) 
            {
                {
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_88 [i_25 + 1] [i_25 - 1])))) ? ((+(((/* implicit */int) arr_87 [i_23] [i_25 + 1])))) : (((/* implicit */int) var_13))));
                    arr_96 [i_25] [i_24] = ((/* implicit */int) max((arr_95 [i_25] [i_25] [i_25 + 1] [i_23]), (((/* implicit */unsigned long long int) ((short) 9852026019173638964ULL)))));
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 25; i_26 += 1) 
                    {
                        for (unsigned int i_27 = 0; i_27 < 25; i_27 += 3) 
                        {
                            {
                                arr_105 [i_24] [i_27] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-81)) + (((/* implicit */int) (short)-28487))))) && (((/* implicit */_Bool) (unsigned short)15366))));
                                arr_106 [i_23] [i_23] [i_23] [i_27] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_89 [i_24] [i_24]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
