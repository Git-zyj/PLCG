/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219536
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */long long int) (+(var_16)))) + ((~(755610138077905015LL)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            arr_5 [0ULL] [i_1] &= ((/* implicit */unsigned char) arr_4 [(unsigned char)10] [i_1] [(unsigned char)10]);
            /* LoopSeq 2 */
            for (signed char i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                var_21 = (-(((((/* implicit */_Bool) var_11)) ? (arr_1 [i_0] [i_2 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [(unsigned short)2] [i_2]))))));
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_4 = 1; i_4 < 9; i_4 += 4) 
                    {
                        var_22 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_4 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_3 [2LL] [i_4 + 1] [i_2 + 3])) : (((/* implicit */int) arr_3 [i_3] [i_4 - 1] [i_2 + 2]))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)39580)) ? (((/* implicit */int) (unsigned short)39586)) : (((/* implicit */int) (unsigned short)25963))));
                    }
                    arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) min((min((var_13), (((/* implicit */int) arr_11 [i_0] [i_2 + 2] [i_2] [i_1] [i_0])))), (((/* implicit */int) arr_8 [6U] [6U] [i_1] [i_1]))));
                }
                arr_15 [i_2] [i_1] [i_0] = ((/* implicit */int) var_10);
                var_24 = ((/* implicit */int) min(((signed char)71), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)25962)) > (((/* implicit */int) (unsigned char)31)))))));
            }
            /* vectorizable */
            for (signed char i_5 = 2; i_5 < 11; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_6 = 1; i_6 < 9; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_7 = 1; i_7 < 10; i_7 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_7] [(unsigned short)6] [i_7 + 2] [(unsigned short)6] [i_6 + 2])))))));
                        var_26 = ((/* implicit */short) (_Bool)1);
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        var_27 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1] [i_5] [i_1] [i_1])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6] [i_6] [i_1] [i_5] [i_8] [i_6])))))));
                        var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_22 [i_5] [i_5 - 2] [i_5 - 1] [i_1]))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) arr_20 [i_5 + 1] [i_5] [i_9] [i_5 - 1] [i_5 - 1] [i_5 - 1]))));
                        var_30 &= ((/* implicit */unsigned char) var_6);
                        arr_30 [i_1] = ((((/* implicit */_Bool) 4611685949707911168ULL)) ? (((arr_1 [i_0] [i_9]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [5] [9] [i_5] [i_5] [i_1] [i_5] [9]))))) : (arr_26 [i_6 - 1] [i_1] [i_5 + 1] [i_6] [i_5 + 1]));
                        arr_31 [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_0] [(unsigned char)2] [i_0] [i_6 - 1] [i_1] [i_0] [i_5 + 1]))));
                        var_31 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_9] [i_1] [i_5 + 1] [i_1])) == (((/* implicit */int) (short)12))));
                    }
                    for (unsigned char i_10 = 1; i_10 < 11; i_10 += 1) 
                    {
                        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (-(4611685949707911162ULL))))));
                        var_33 = ((/* implicit */unsigned short) arr_24 [i_6] [i_6] [i_5 - 2] [(unsigned short)1] [i_10 + 1] [i_5 + 1] [i_1]);
                    }
                    for (unsigned char i_11 = 1; i_11 < 9; i_11 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned char) ((12738156409404130513ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_11 [i_5] [i_1] [i_0] [i_1] [i_5])) : (((/* implicit */int) (unsigned short)21432)))))));
                        var_35 &= arr_12 [(unsigned char)6] [(unsigned short)0];
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_3 [(unsigned short)2] [i_0] [i_0]))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)20800)) : (arr_9 [i_1] [i_5]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)21437)))))));
                    }
                }
                /* LoopSeq 3 */
                for (unsigned int i_12 = 1; i_12 < 10; i_12 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        var_37 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_16 [i_5] [i_5] [i_5] [i_5]))))) || (((/* implicit */_Bool) var_9))));
                        var_38 &= ((/* implicit */unsigned int) var_5);
                    }
                    var_39 = (~(((/* implicit */int) (unsigned short)39566)));
                }
                for (unsigned int i_14 = 0; i_14 < 12; i_14 += 3) 
                {
                    /* LoopSeq 3 */
                    for (int i_15 = 2; i_15 < 11; i_15 += 1) 
                    {
                        arr_49 [i_0] [i_1] [i_5] [i_14] [i_1] = ((/* implicit */unsigned short) var_15);
                        var_40 = ((/* implicit */_Bool) var_15);
                        arr_50 [(unsigned short)0] [i_1] [i_1] [i_1] [i_14] [i_1] [i_15] = ((/* implicit */signed char) var_13);
                        arr_51 [i_0] [i_0] [(unsigned char)10] [i_0] [(unsigned char)10] [i_0] &= ((/* implicit */signed char) (-(13835058124001640431ULL)));
                    }
                    for (short i_16 = 3; i_16 < 11; i_16 += 1) /* same iter space */
                    {
                        var_41 &= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_23 [i_1] [i_5] [i_14] [i_16])) ? (var_13) : (arr_22 [i_0] [i_0] [i_5 - 2] [8])))));
                        var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((arr_38 [(unsigned short)8]) ? (((/* implicit */unsigned long long int) (-(var_16)))) : (((arr_7 [(signed char)2] [0ULL] [i_5]) ? (((/* implicit */unsigned long long int) -898376762)) : (5708587664305421131ULL))))))));
                        arr_54 [i_16] [i_1] [(unsigned char)2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (+(16503342199500641216ULL)));
                        var_43 = ((/* implicit */int) ((((/* implicit */_Bool) -1043263514739368594LL)) ? (4611685949707911177ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25992)))));
                    }
                    for (short i_17 = 3; i_17 < 11; i_17 += 1) /* same iter space */
                    {
                        var_44 = ((/* implicit */unsigned int) ((unsigned long long int) (+(((/* implicit */int) var_9)))));
                        arr_59 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_1] [i_17] [i_1])) * (((/* implicit */int) arr_7 [i_1] [i_17] [i_17]))));
                        var_45 = ((/* implicit */int) ((((/* implicit */_Bool) 1147773259)) ? (((/* implicit */unsigned long long int) 1073709056U)) : (4611685949707911177ULL)));
                    }
                    arr_60 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_5] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5]))));
                    var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) ((-4896352987205068731LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44077))))))));
                }
                for (long long int i_18 = 1; i_18 < 10; i_18 += 3) 
                {
                    var_47 = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_5] [i_18]);
                    arr_64 [(unsigned short)9] [(unsigned short)9] [i_5] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)85))));
                }
                var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1839302996U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)135))));
                var_49 &= ((/* implicit */unsigned short) ((unsigned char) ((unsigned int) var_9)));
                arr_65 [i_1] [i_1] [(unsigned char)4] = ((/* implicit */signed char) 13835058124001640418ULL);
            }
        }
        var_50 = ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) var_19)))));
        var_51 = ((arr_7 [(unsigned short)8] [i_0] [6U]) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_39 [i_0] [8]))))) : (arr_56 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
    }
    for (unsigned long long int i_19 = 0; i_19 < 18; i_19 += 3) 
    {
        var_52 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)0))));
        var_53 = ((/* implicit */short) var_2);
    }
    var_54 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (min((((/* implicit */unsigned long long int) var_18)), (var_11))))));
    var_55 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_15)), ((unsigned short)21432)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))));
}
