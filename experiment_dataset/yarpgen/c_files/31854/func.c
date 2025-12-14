/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31854
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
    var_11 = max((((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) var_1)))), ((+(((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_12 &= ((/* implicit */unsigned short) ((int) max((arr_2 [i_0]), (arr_2 [i_0]))));
        var_13 += ((/* implicit */int) ((long long int) ((((/* implicit */int) (unsigned short)4842)) | (-181989261))));
        var_14 *= ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((_Bool) 480682113))), (arr_0 [i_0] [i_0])))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0] [(unsigned short)6])) ? (1847245067) : (((/* implicit */int) arr_1 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [(unsigned short)5] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((int) (unsigned char)51))) ? (((/* implicit */int) min((arr_0 [0] [i_0]), (((/* implicit */unsigned short) arr_2 [i_0]))))) : (((int) arr_1 [8ULL] [10LL])))), (((/* implicit */int) min((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [10ULL]))), (((/* implicit */unsigned short) arr_2 [i_0]))))))))));
    }
    for (int i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(_Bool)1])) ? (arr_3 [i_1]) : (arr_3 [i_1])))) ? (arr_3 [i_1 - 1]) : (arr_5 [i_1])))) ? (max((min((arr_3 [i_1]), (-1847245090))), (arr_4 [i_1 - 1]))) : (min((max((arr_5 [i_1]), (arr_5 [i_1]))), (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [(unsigned short)13]) : (arr_4 [i_1])))))));
        arr_6 [20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_1 - 1]))) ? (min((arr_5 [i_1 + 1]), (arr_5 [i_1 - 1]))) : ((+(((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (arr_5 [i_1])))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 3; i_2 < 19; i_2 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_3 = 2; i_3 < 18; i_3 += 4) 
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_2])), (min((((/* implicit */unsigned long long int) arr_8 [i_1 + 2] [i_1])), (arr_10 [9])))))) ? (arr_10 [i_2]) : ((~((+(arr_10 [i_1])))))));
                arr_15 [1] [i_2 + 2] [11] &= max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_11 [i_3 + 1] [i_2 - 3] [i_2 - 2] [i_1 + 1])) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)29)), ((unsigned short)6))))))), ((~(max((arr_12 [i_1] [i_2] [i_3 + 4]), (((/* implicit */unsigned long long int) arr_9 [i_1])))))));
            }
            for (int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                arr_18 [20U] = ((/* implicit */unsigned short) arr_9 [i_1]);
                arr_19 [i_4] [i_2] [19] = ((/* implicit */int) arr_16 [i_1 - 1]);
            }
            for (int i_5 = 1; i_5 < 18; i_5 += 4) 
            {
                var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_21 [i_2 - 3] [i_5 + 1] [6ULL] [i_1 - 1])))) ? (min((((/* implicit */unsigned long long int) arr_11 [i_1] [(unsigned char)8] [i_1 + 1] [i_1 + 2])), (arr_16 [i_5 + 1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5])) ? (arr_10 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(unsigned char)5] [i_2])))))) ? (min((arr_12 [i_1] [i_2] [i_5]), (arr_17 [i_2]))) : (arr_17 [9])))));
                var_19 = 1847245067;
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_28 [i_1] [i_1] [i_2] [i_5] [i_6] [i_5] [i_7] = ((/* implicit */unsigned char) min((((unsigned long long int) ((long long int) arr_13 [i_7]))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_25 [i_1] [i_2])), (((((/* implicit */int) arr_11 [i_2 - 3] [i_5] [i_6] [i_7])) / (arr_27 [i_1] [i_6] [i_7]))))))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) min((arr_14 [i_1] [3U] [i_5] [i_6 + 2]), (((/* implicit */unsigned long long int) arr_4 [i_1])))))) ? (((/* implicit */unsigned long long int) min((arr_27 [i_5 - 1] [i_2 + 1] [i_1 - 1]), (((/* implicit */int) (unsigned short)65535))))) : (min((arr_12 [i_6] [i_5] [(unsigned char)3]), (((/* implicit */unsigned long long int) ((_Bool) arr_5 [i_1])))))));
                        }
                    } 
                } 
                var_21 |= ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_5 [i_2 - 2])))) ? (((((/* implicit */_Bool) min((-1230991299), (arr_4 [i_1])))) ? (min((arr_17 [i_5]), (((/* implicit */unsigned long long int) arr_24 [i_1] [i_2 - 2] [i_5])))) : (((/* implicit */unsigned long long int) ((arr_3 [i_1 - 1]) & (((/* implicit */int) arr_22 [i_1] [4] [i_2 - 3] [i_5]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_22 [i_2] [8U] [i_5] [i_1]), ((!(arr_8 [i_2] [i_2 - 3])))))))));
            }
            for (int i_8 = 2; i_8 < 18; i_8 += 3) 
            {
                var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((min((((/* implicit */int) arr_29 [i_1] [i_2] [i_8 + 3] [i_8])), (arr_30 [i_8] [i_8] [i_2] [20LL]))), (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_25 [i_8] [i_8]))))))) * (((((/* implicit */_Bool) min((arr_29 [i_8] [4] [i_2] [i_1 - 1]), (arr_29 [i_8 - 1] [i_8] [i_8 + 4] [i_8])))) ? (arr_12 [i_1 + 1] [i_2] [i_8 + 1]) : (((unsigned long long int) 0LL))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_10 = 3; i_10 < 21; i_10 += 3) 
                    {
                        arr_36 [i_1] [i_10] [i_1] = ((/* implicit */int) (+(arr_34 [i_1] [i_10 + 1] [i_2 + 1] [i_1 + 2] [i_8 - 1])));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_25 [19ULL] [(_Bool)1])) ? (arr_31 [i_1] [i_2] [i_8] [i_1] [i_2] [6U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [12ULL] [18LL] [i_8] [i_9]))))))))));
                    }
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_2] [i_2 - 1])) ? (((/* implicit */unsigned int) arr_4 [i_1 + 2])) : (arr_32 [i_1 + 2] [i_2] [i_2 - 3] [i_8 - 2]))))));
                    var_25 = ((/* implicit */signed char) (~(arr_10 [i_2 - 2])));
                    arr_37 [i_1] [i_2] [i_8] [i_8] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_9])) ? (arr_5 [i_2]) : (arr_5 [i_1 - 1])));
                }
                var_26 -= ((/* implicit */long long int) ((unsigned short) max((arr_11 [i_1] [i_1] [15] [(_Bool)0]), (max((arr_29 [i_1] [i_1] [i_2] [i_8 - 2]), (((/* implicit */unsigned char) arr_22 [i_1] [(signed char)16] [i_2 + 3] [i_8])))))));
            }
            arr_38 [i_2] [i_1] = ((/* implicit */_Bool) max((max((arr_10 [i_1 + 2]), (((/* implicit */unsigned long long int) 480682119)))), (max((max((((/* implicit */unsigned long long int) arr_26 [12ULL] [i_2] [i_2] [5] [i_1] [i_1] [(signed char)18])), (arr_31 [i_1] [i_1] [i_1] [i_2] [i_2] [i_2]))), (((/* implicit */unsigned long long int) arr_25 [i_1 - 1] [i_1 - 1]))))));
        }
        arr_39 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((arr_8 [i_1 + 2] [i_1]) ? (7701172666980066070LL) : (((/* implicit */long long int) arr_34 [i_1] [i_1 + 2] [i_1] [i_1 - 1] [i_1]))))))) ? (((/* implicit */unsigned long long int) 1003345954)) : (((arr_14 [i_1] [i_1] [i_1] [i_1]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [(signed char)10] [i_1] [(signed char)14] [i_1])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)33275)))))))));
    }
    for (signed char i_11 = 0; i_11 < 24; i_11 += 3) 
    {
        var_27 = ((/* implicit */unsigned int) max((arr_43 [i_11]), (((((/* implicit */_Bool) arr_42 [i_11])) ? (((/* implicit */int) arr_40 [i_11] [i_11])) : ((-(arr_43 [i_11])))))));
        arr_44 [i_11] = ((/* implicit */long long int) arr_43 [i_11]);
        arr_45 [i_11] = ((/* implicit */_Bool) arr_42 [i_11]);
        arr_46 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((480682115) * (((/* implicit */int) arr_40 [i_11] [i_11])))))) ? (((/* implicit */int) ((unsigned short) ((signed char) arr_40 [i_11] [i_11])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_11])) ? (arr_43 [i_11]) : (((/* implicit */int) arr_40 [i_11] [i_11]))))))))));
        var_28 = max((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_40 [i_11] [i_11])))), (min((arr_43 [i_11]), (((/* implicit */int) (unsigned char)203))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [i_11] [i_11])) - (1003345924)))), (max((arr_41 [i_11] [23ULL]), (((/* implicit */unsigned long long int) -808752229)))))));
    }
    /* vectorizable */
    for (int i_12 = 2; i_12 < 20; i_12 += 3) 
    {
        arr_51 [i_12] [i_12] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_43 [i_12])) ? (arr_41 [(unsigned char)8] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_12]))))));
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [(_Bool)1] [i_12]))) : (9223372036854775797LL)))) ? ((~(13834690208150616350ULL))) : (((arr_40 [18] [i_12]) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (12687260874466794611ULL)))));
    }
}
