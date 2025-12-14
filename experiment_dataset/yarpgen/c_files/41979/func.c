/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41979
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_18 ^= ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))) - (((((/* implicit */_Bool) arr_2 [(short)10] [i_0])) ? (var_0) : (var_4))));
        arr_3 [i_0] = ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (short)7070)) : (((/* implicit */int) (short)6592)));
        arr_4 [i_0 + 1] = ((/* implicit */int) (-(arr_1 [i_0 + 1])));
        var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [(unsigned short)0] [i_0])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_1]));
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) (+(var_4)));
            var_21 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 15572320382953408676ULL)))) ? (((((/* implicit */int) var_15)) | (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_2 [i_0] [i_0 + 1]))));
            var_22 = ((/* implicit */unsigned long long int) arr_5 [i_0 - 1]);
        }
    }
    for (unsigned short i_2 = 4; i_2 < 20; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_3 = 4; i_3 < 21; i_3 += 3) 
        {
            for (short i_4 = 1; i_4 < 21; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */int) (short)-7053)) : (((/* implicit */int) (unsigned char)255))))), ((+(var_16)))))));
                        var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_15))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_25 = max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_2] [i_6]))))) ? ((-(((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) arr_18 [i_2] [i_2 - 1] [i_8])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_2] [i_2 - 1] [i_2]))))));
                        arr_27 [i_8] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min(((-(4294967295U))), (max((((/* implicit */unsigned int) var_3)), (937241190U)))))), ((-(max((var_1), (arr_26 [4] [i_6] [i_2 + 2])))))));
                        arr_28 [i_8] [i_6] [i_6] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2 - 1] [i_2 - 1])) ? (arr_19 [i_2 - 1] [i_2 - 1]) : (arr_19 [i_2 - 1] [i_6])))) ? (((/* implicit */unsigned long long int) var_13)) : (((((/* implicit */unsigned long long int) arr_19 [i_2 - 1] [i_2 - 1])) & (var_17)))));
                        arr_29 [17ULL] [i_6] [i_6] [i_8] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                        var_26 = var_13;
                    }
                    for (int i_9 = 4; i_9 < 21; i_9 += 1) 
                    {
                        arr_32 [i_2 - 4] [i_6] [i_9] [i_9] = ((/* implicit */signed char) arr_30 [i_9]);
                        var_27 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_16 [(short)12] [(short)11] [17] [i_6] [17] [i_2 + 1])) ? (((/* implicit */unsigned long long int) arr_14 [i_9 - 3] [i_7] [i_6] [11LL])) : (var_1))))), (arr_21 [i_2] [i_2])));
                        arr_33 [i_9] = ((/* implicit */unsigned int) 11755177990896966770ULL);
                        var_28 = ((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2])) ? (((((/* implicit */_Bool) arr_24 [(unsigned short)6] [i_7] [9LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_16 [i_9] [19U] [3ULL] [i_6] [i_2] [i_2]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))))))));
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-11750)) * (((((/* implicit */int) arr_20 [(unsigned char)18])) ^ (((/* implicit */int) (unsigned short)16899))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0)))) ? (((((/* implicit */_Bool) var_14)) ? (arr_21 [i_7] [i_9]) : (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) (~(arr_23 [(unsigned char)3] [(short)12])))))))));
                    }
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-29590)) / (((/* implicit */int) (unsigned short)55789))))) ? (((((/* implicit */_Bool) arr_25 [i_2 - 4] [i_2 - 4] [i_2 - 4] [i_2 - 4] [i_2 - 4])) ? (arr_25 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2 + 2]) : (arr_25 [i_2 + 2] [i_2 - 4] [i_2 - 2] [i_2 - 4] [i_2 - 2]))) : ((-(arr_25 [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 - 4] [i_2 + 1])))));
                }
            } 
        } 
        arr_34 [i_2 - 4] = (~((-((((_Bool)1) ? (((/* implicit */int) arr_11 [i_2] [i_2] [i_2])) : (((/* implicit */int) var_7)))))));
    }
    for (short i_10 = 0; i_10 < 10; i_10 += 2) 
    {
        var_31 = ((/* implicit */unsigned char) var_8);
        var_32 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_21 [i_10] [i_10])) ? (1041401468505468305LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2367281073055864529ULL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)29589))))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_10]))) <= (min((var_1), (((/* implicit */unsigned long long int) var_4)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 1; i_11 < 17; i_11 += 3) 
    {
        var_33 -= ((((/* implicit */_Bool) var_9)) ? (arr_26 [i_11 + 1] [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [(unsigned char)14] [8] [i_11 + 1] [i_11]))));
        var_34 = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
        arr_42 [i_11] = ((/* implicit */short) (-(((15028423112651920861ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_11] [i_11 + 3] [i_11])))))));
    }
    var_35 = ((/* implicit */int) var_3);
    var_36 = ((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) < (var_0)))), (var_6))))));
    var_37 = ((/* implicit */unsigned char) var_11);
}
