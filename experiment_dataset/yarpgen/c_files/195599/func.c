/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195599
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
    var_18 = (unsigned short)51512;
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51530))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (var_6)))))) ? ((~(var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((11064799303061522650ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))), ((unsigned short)51530)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) arr_2 [i_0]);
                arr_6 [i_0] [15U] = ((/* implicit */unsigned char) 18446744073709551608ULL);
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 14; i_2 += 1) 
                {
                    arr_11 [i_1] [i_2 - 1] = min((((/* implicit */unsigned long long int) (unsigned char)133)), (((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14027))) : (7381944770648028960ULL))));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [(unsigned short)7] [i_0]))) / (7381944770648028966ULL))), (min((11064799303061522620ULL), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_2]))))))) ? ((+(var_16))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((unsigned short)51512), (((/* implicit */unsigned short) var_13))))))))));
                    arr_13 [(signed char)4] [i_1] [8LL] [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (~(var_10)))) ? (((((/* implicit */_Bool) 12250291277341522835ULL)) ? (11064799303061522658ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19337))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_2 - 1] [i_2] [(unsigned char)2]))))));
                }
                arr_14 [i_1] = min((((/* implicit */unsigned long long int) ((short) 11064799303061522633ULL))), (min((((/* implicit */unsigned long long int) (unsigned short)21967)), (7381944770648029002ULL))));
                arr_15 [i_0] [(signed char)1] = ((/* implicit */long long int) max((((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 11064799303061522658ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [2U] [i_1])))))))), (((unsigned short) (-(((/* implicit */int) var_0)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                arr_23 [i_3] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) min((11064799303061522678ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_4 + 1] [i_4 + 1])) ? (((/* implicit */int) (short)-14674)) : (((/* implicit */int) arr_0 [i_4 + 1] [(short)6])))))));
                arr_24 [i_3] [i_4 + 1] [i_4] [i_5] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_14) % (min((((/* implicit */unsigned int) var_12)), (533135115U)))))), ((~((~(17096868367021927368ULL)))))));
            }
            /* LoopSeq 3 */
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_7 = 3; i_7 < 11; i_7 += 4) 
                {
                    arr_31 [i_3] [i_3] [i_4] [i_3] = 533135115U;
                    var_21 = ((/* implicit */unsigned long long int) (short)-5999);
                }
                for (long long int i_8 = 2; i_8 < 11; i_8 += 1) 
                {
                    arr_34 [i_3] [i_3] [i_4] [i_6] [(short)8] [(signed char)12] |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_20 [(unsigned char)6])), (arr_17 [i_3])))) ? ((-(((/* implicit */int) (short)14674)))) : (((/* implicit */int) arr_21 [i_3] [i_4 + 1]))))), ((+(min((0ULL), (((/* implicit */unsigned long long int) (short)-16095))))))));
                    arr_35 [i_4] [i_4] [i_6] [i_8 + 2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (short)-6014)) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) arr_33 [i_4] [i_4 + 1] [i_4] [i_6])))), ((-(((/* implicit */int) arr_33 [i_4] [i_4 + 1] [i_4] [i_4 + 1]))))));
                }
                arr_36 [i_3] [i_4] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)(-127 - 1)), ((signed char)127))))) != (((unsigned long long int) 6166514470138494253ULL)))));
                arr_37 [i_4] = (signed char)3;
            }
            for (unsigned int i_9 = 1; i_9 < 12; i_9 += 1) 
            {
                var_22 *= ((/* implicit */long long int) min((((((/* implicit */int) arr_9 [i_3] [i_3] [i_9 + 1] [i_9 + 1])) | (((/* implicit */int) arr_7 [i_3] [i_3] [(signed char)10])))), (((/* implicit */int) ((short) min((((/* implicit */unsigned short) (_Bool)1)), (arr_1 [i_4] [i_4])))))));
                arr_40 [i_4] = ((/* implicit */unsigned short) (+(min((arr_38 [i_4 + 1] [i_4 + 1] [i_4]), (((/* implicit */unsigned long long int) (unsigned short)4))))));
                arr_41 [8LL] [i_3] [8LL] |= ((/* implicit */long long int) (((!(((_Bool) var_13)))) ? (((/* implicit */int) min((arr_29 [i_9 - 1] [i_9 + 1] [10LL] [i_9 + 1]), (arr_29 [i_9 - 1] [i_9 - 1] [0ULL] [i_9 - 1])))) : (((/* implicit */int) arr_39 [(signed char)6] [i_4] [i_9 - 1]))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_45 [i_3] [i_4] [i_4] [(short)8] = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_33 [i_3] [i_4 + 1] [i_4] [i_3])) : (((/* implicit */int) arr_19 [i_3] [(_Bool)1] [(_Bool)1])))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_27 [i_3] [i_4] [0] [i_4])), ((unsigned short)11866)))))), (((/* implicit */int) (short)8190))));
                arr_46 [i_3] [i_4] [12ULL] = (!(((/* implicit */_Bool) (+(arr_43 [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1])))));
                var_23 = ((/* implicit */short) ((unsigned short) ((((unsigned int) (short)-9556)) & (((((/* implicit */_Bool) arr_16 [i_3] [i_3])) ? (3997104721U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_4] [i_4] [i_4]))))))));
            }
            var_24 -= ((/* implicit */unsigned int) (-(min((((unsigned long long int) arr_26 [(signed char)10] [i_3] [i_3])), (((/* implicit */unsigned long long int) max(((unsigned char)154), (((/* implicit */unsigned char) (signed char)121)))))))));
        }
        arr_47 [i_3] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_20 [10ULL])), ((~(((/* implicit */int) (_Bool)1))))));
    }
    for (long long int i_11 = 0; i_11 < 24; i_11 += 1) 
    {
        /* LoopNest 3 */
        for (short i_12 = 0; i_12 < 24; i_12 += 3) 
        {
            for (short i_13 = 0; i_13 < 24; i_13 += 3) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_25 -= ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_53 [(short)20] [i_14] [i_14]), (arr_53 [(signed char)22] [i_12] [(signed char)22]))))));
                        var_26 = ((/* implicit */short) ((signed char) min((arr_51 [i_14] [i_12] [i_13]), (((/* implicit */unsigned short) arr_49 [i_13])))));
                    }
                } 
            } 
        } 
        arr_58 [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_55 [i_11] [i_11] [i_11] [21U]), (((/* implicit */unsigned short) arr_49 [i_11]))))) <= (((/* implicit */int) max((arr_55 [(short)3] [(signed char)14] [i_11] [i_11]), (arr_55 [(short)8] [i_11] [i_11] [i_11]))))));
        var_27 = ((/* implicit */signed char) min((max((arr_54 [7LL] [i_11] [(signed char)19]), (arr_54 [i_11] [i_11] [i_11]))), (((arr_54 [i_11] [i_11] [i_11]) >> (((((/* implicit */int) (unsigned short)12683)) - (12642)))))));
    }
}
