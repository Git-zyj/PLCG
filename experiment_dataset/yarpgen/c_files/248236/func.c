/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248236
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
    var_14 = ((/* implicit */signed char) min((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)17360)) : (((/* implicit */int) var_9))))), (max((((/* implicit */unsigned int) (short)17360)), (2619765221U))))), (((/* implicit */unsigned int) var_10))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) max(((~(arr_0 [8LL]))), (((/* implicit */int) (signed char)-47)))))));
        arr_2 [i_0] = ((/* implicit */signed char) (short)-17360);
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-17354)) / (((/* implicit */int) max((((/* implicit */short) var_0)), (max(((short)-17360), (((/* implicit */short) (signed char)-47)))))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) ((int) min((((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), ((-(var_13))))));
            arr_6 [(unsigned char)14] [(unsigned char)14] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0]))));
            var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)21)))))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_8 [i_0 + 2]))) % (((/* implicit */unsigned long long int) var_5))));
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_10))));
                            arr_18 [i_0] [i_0] [i_0] [i_3] [i_0] [i_3] [i_1] = ((/* implicit */signed char) (+((+(((((/* implicit */int) var_9)) - (((/* implicit */int) var_8))))))));
                            var_20 *= ((/* implicit */unsigned long long int) arr_5 [i_2]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            for (signed char i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                arr_23 [i_0] = ((/* implicit */unsigned long long int) var_9);
                var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */int) max(((short)-17346), (((/* implicit */short) var_8))))), (min(((-(((/* implicit */int) (short)-17361)))), (((/* implicit */int) var_1))))));
            }
            for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 1) 
            {
                var_22 += ((/* implicit */_Bool) var_7);
                var_23 = ((/* implicit */unsigned long long int) 2020606025822988813LL);
            }
            for (signed char i_7 = 2; i_7 < 20; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        {
                            arr_35 [i_0] [i_1] [i_7 + 1] [20] [i_9] = ((/* implicit */long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) -1195092151165308058LL))))), ((short)-17342)));
                            arr_36 [i_9] [i_8] [i_9] [i_1] [i_9] &= ((/* implicit */signed char) var_5);
                        }
                    } 
                } 
                arr_37 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_15 [i_0 - 1] [i_7 - 1] [i_7 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_15 [i_0 - 1] [i_1] [i_7 - 1] [i_7])) : (((/* implicit */int) arr_15 [i_0 - 1] [0] [i_7 - 1] [12ULL])))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_34 [i_0] [(unsigned char)14] [i_7 - 1] [i_7] [i_7 - 1] [(unsigned char)14] [i_7])) : (-1825722452)))));
            }
            /* vectorizable */
            for (unsigned short i_10 = 1; i_10 < 19; i_10 += 2) 
            {
                arr_41 [10] [i_0] [i_10] [i_10 + 1] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0))));
                var_24 = ((/* implicit */unsigned char) arr_30 [i_0] [i_0] [i_0] [i_0]);
                var_25 = ((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL))));
            }
        }
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 21; i_11 += 2) 
        {
            arr_46 [i_0] = ((/* implicit */unsigned long long int) var_6);
            arr_47 [i_0 + 2] [i_11] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_0 + 2] [i_0 + 2] [i_0 - 2] [i_0] [i_11] [i_0])) || (((/* implicit */_Bool) var_4))));
        }
    }
    /* vectorizable */
    for (signed char i_12 = 1; i_12 < 7; i_12 += 1) 
    {
        arr_52 [i_12 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) ? (arr_16 [11] [i_12] [11] [i_12] [i_12]) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) (short)17349)) : (((/* implicit */int) arr_15 [0] [i_12] [(signed char)1] [i_12]))));
        var_26 = ((/* implicit */_Bool) arr_7 [(unsigned short)11] [i_12] [i_12 + 2]);
        arr_53 [i_12] |= ((/* implicit */short) (+(((/* implicit */int) arr_26 [i_12 + 1] [8]))));
    }
    for (unsigned long long int i_13 = 1; i_13 < 15; i_13 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_14 = 2; i_14 < 15; i_14 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_15 = 1; i_15 < 13; i_15 += 2) 
            {
                arr_62 [12LL] [8LL] [i_15] [i_14] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_13))));
                var_27 = ((/* implicit */long long int) (-((-(((/* implicit */int) (short)2298))))));
                var_28 = ((((/* implicit */_Bool) (short)17349)) ? (arr_54 [i_13 + 1]) : (arr_54 [i_13 - 1]));
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 1; i_16 < 13; i_16 += 1) 
                {
                    for (unsigned short i_17 = 1; i_17 < 12; i_17 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */int) (+(arr_54 [i_13 + 1])));
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2298)) ? (((/* implicit */int) arr_1 [i_14])) : (((/* implicit */int) var_0))))) ? ((-(-1195092151165308058LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) arr_32 [i_13] [i_13] [i_13] [i_13]))))))))));
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_13 - 1] [i_13] [i_13 + 1] [(signed char)3] [i_13 + 1]))) : (var_4))))));
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_7)) <= (arr_42 [7LL] [i_15]))))) > (arr_8 [i_13 + 1]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 3; i_18 < 14; i_18 += 2) 
                {
                    for (int i_19 = 1; i_19 < 13; i_19 += 4) 
                    {
                        {
                            arr_73 [i_15] [10] [i_13] [i_15] [i_15 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_22 [i_13] [i_14 - 2] [i_13] [(_Bool)1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_18] [i_13] [(_Bool)1] [i_18] [i_19 - 1] [i_15])))))) : (1829143289U)));
                            var_33 = ((/* implicit */int) arr_10 [i_13 + 1] [i_13 - 1] [i_14 - 2]);
                            arr_74 [i_19] [i_19] [i_13] [i_13] [13] [i_13] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_13] [i_13 - 1]))));
                        }
                    } 
                } 
            }
            arr_75 [i_13] = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_0)), ((+(var_4)))));
        }
        /* vectorizable */
        for (unsigned long long int i_20 = 2; i_20 < 15; i_20 += 2) /* same iter space */
        {
            arr_78 [i_13] [i_20] [i_13] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_30 [i_13] [i_20] [i_13] [i_13]))))));
            /* LoopNest 2 */
            for (unsigned int i_21 = 1; i_21 < 14; i_21 += 2) 
            {
                for (unsigned long long int i_22 = 1; i_22 < 14; i_22 += 2) 
                {
                    {
                        var_34 = ((/* implicit */unsigned short) (short)17335);
                        arr_84 [i_13] [i_13] [i_22 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (arr_72 [(unsigned char)3] [i_22 - 1] [i_22 - 1] [i_22] [i_22 + 1] [i_22]) : (((/* implicit */unsigned int) var_7))));
                        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_83 [i_22 + 1] [i_21 - 1] [i_20 + 1]))) : (arr_8 [i_13 - 1])));
                        arr_85 [i_13] = ((/* implicit */long long int) (~(arr_10 [(unsigned char)0] [i_22 + 1] [i_13 - 1])));
                    }
                } 
            } 
            arr_86 [i_20 - 2] [i_13] [(short)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-19)) ? (arr_21 [i_13] [i_13] [8LL] [(signed char)5]) : (((/* implicit */long long int) var_3))));
            var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))))))));
            arr_87 [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)17361)))))));
        }
        var_37 += ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)126)), (min((arr_42 [i_13] [i_13]), (((/* implicit */long long int) var_11)))))))));
        arr_88 [i_13] = ((/* implicit */unsigned char) ((_Bool) (((!(((/* implicit */_Bool) arr_1 [i_13])))) ? (((/* implicit */int) ((signed char) var_10))) : (((/* implicit */int) (short)17360)))));
        var_38 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_42 [(signed char)20] [i_13 + 1])))), (var_4)));
    }
    var_39 = ((/* implicit */signed char) var_9);
}
