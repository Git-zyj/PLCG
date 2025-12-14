/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206710
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            arr_4 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) ((var_12) == (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                arr_7 [i_0] [i_0] [i_2] = ((((/* implicit */int) arr_3 [i_0])) <= (var_4));
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (~(((/* implicit */int) (short)-8544)))))));
                var_16 = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) (short)-11890))));
            }
            for (unsigned short i_3 = 3; i_3 < 15; i_3 += 2) 
            {
                var_17 = ((/* implicit */int) (((-(15719393874854219853ULL))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) 32767U)) == (arr_0 [12] [i_1]))))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60856))) * (2483723910928780570ULL)))) ? (1212513904814717970LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (var_10) : (((/* implicit */int) var_0)))))));
                    arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(32771U)));
                    var_19 = ((/* implicit */int) ((arr_3 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-11890))) + (4042864528U)))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0] [i_1 - 2] [i_3] [i_5]))))) ? (1896302356U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)35243)) - (((/* implicit */int) (unsigned char)0)))))));
                    arr_15 [i_3 - 3] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)27079))));
                }
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    arr_18 [i_0] = ((/* implicit */unsigned short) (~(((arr_10 [i_6] [i_1] [i_3] [i_6]) | (4042864528U)))));
                    arr_19 [i_1] [i_1] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_3 + 2] [i_3 - 3] [i_3 - 2] [i_3 - 1])) | (((/* implicit */int) (unsigned char)151))));
                    var_21 = ((/* implicit */signed char) var_4);
                }
                arr_20 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_10 [i_0 + 1] [i_1 + 1] [i_3 + 3] [i_3 - 2])) ^ (var_14)));
                arr_21 [i_3] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (signed char)7)) & (((/* implicit */int) ((_Bool) arr_10 [(short)14] [i_1] [i_3 - 3] [i_3 - 1])))));
            }
        }
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                for (unsigned int i_9 = 1; i_9 < 15; i_9 += 4) 
                {
                    {
                        arr_30 [i_0] [i_0] [i_8] [i_0] [i_8] [7] = ((/* implicit */short) var_8);
                        var_22 = ((/* implicit */int) var_5);
                        var_23 = ((/* implicit */int) min((((((/* implicit */_Bool) ((arr_28 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) : (var_12)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_9 + 3] [i_8] [i_7] [i_0]))) : (481183570075343739ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_0] [i_0 - 1] [i_0] [i_0])) + (((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned long long int) ((((-1678839345) + (2147483647))) << (((171868487U) - (171868487U))))))));
                    }
                } 
            } 
        } 
        arr_31 [i_0] [i_0] = ((/* implicit */unsigned int) max(((unsigned char)7), ((unsigned char)231)));
    }
    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
    {
        arr_35 [i_10] = ((/* implicit */_Bool) var_8);
        var_24 = ((/* implicit */_Bool) min((max((1228242944), (((/* implicit */int) var_13)))), (min((max((((/* implicit */int) (unsigned short)3584)), (-1407247421))), (((/* implicit */int) (short)8583))))));
        /* LoopNest 3 */
        for (short i_11 = 2; i_11 < 17; i_11 += 2) 
        {
            for (unsigned int i_12 = 1; i_12 < 20; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        arr_43 [i_12] [i_11] [2LL] [i_11] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) var_7)) & (15963020162780771052ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (min((4294967295U), (((/* implicit */unsigned int) (unsigned short)61929)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)13081)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (unsigned char)3))))))))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_39 [i_13] [i_12] [i_11 + 3] [i_10]), (arr_36 [i_12 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)7)) > (((/* implicit */int) arr_36 [i_11])))))) : ((+(var_1)))));
                        /* LoopSeq 3 */
                        for (unsigned char i_14 = 0; i_14 < 21; i_14 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) min((((((/* implicit */int) arr_42 [i_14] [i_14] [i_11 + 2] [(unsigned short)13] [20])) >> (((((/* implicit */int) var_13)) - (224))))), (((((/* implicit */_Bool) arr_44 [i_10] [i_12 - 1] [i_12] [9U] [i_12] [i_12] [i_12 - 1])) ? (((/* implicit */int) arr_44 [19LL] [i_12] [i_12] [i_12] [i_12] [19LL] [i_12 + 1])) : (((/* implicit */int) (short)-11890)))))))));
                            arr_47 [i_10] [20] [i_12] [i_12] [i_12] [i_10] [i_13] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_46 [i_10] [i_12] [i_13])) - (var_4)))) ? (((((/* implicit */_Bool) 0LL)) ? (2483723910928780580ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52443))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) arr_39 [i_14] [i_14] [i_14] [i_14]))))))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65511))) / (var_1))))) ? (((((/* implicit */unsigned long long int) var_14)) | (var_1))) : ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (18446744073709551605ULL)))))));
                        }
                        for (unsigned char i_15 = 0; i_15 < 21; i_15 += 4) 
                        {
                            arr_50 [i_12] [i_12] [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)255)) | (var_10))) - (var_10)));
                            arr_51 [i_10] [i_11] [i_11] [i_11] [i_12] [(unsigned short)12] = ((/* implicit */unsigned short) (unsigned char)3);
                        }
                        for (int i_16 = 0; i_16 < 21; i_16 += 3) 
                        {
                            var_28 = ((/* implicit */short) min((((/* implicit */int) ((min((((/* implicit */unsigned int) (short)-15488)), (var_12))) > (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)3930), (((/* implicit */unsigned short) (_Bool)1))))))))), ((+(((/* implicit */int) (unsigned char)144))))));
                            var_29 = ((/* implicit */unsigned char) arr_48 [i_16]);
                            arr_55 [i_10] [i_11 + 3] [i_10] [i_12] [i_16] = ((/* implicit */unsigned short) max((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)75))) == (var_14)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)12952))))))), (min((var_10), (((/* implicit */int) arr_53 [i_11] [i_11 + 4] [i_11 + 3] [i_11] [i_11 - 1] [i_11 + 1]))))));
                        }
                        var_30 = ((/* implicit */_Bool) (unsigned char)32);
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) ^ (171868494U)));
                    }
                } 
            } 
        } 
        arr_56 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)13093)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)11909))))) : (((((((/* implicit */_Bool) arr_44 [i_10] [i_10] [(_Bool)1] [i_10] [i_10] [i_10] [i_10])) || (((/* implicit */_Bool) arr_38 [(signed char)14])))) ? (((unsigned int) arr_54 [i_10] [i_10] [i_10] [9LL] [i_10])) : (((/* implicit */unsigned int) var_7))))));
    }
    var_32 += ((/* implicit */short) (+(((((/* implicit */long long int) (+(var_7)))) * (((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (0LL)))))));
    var_33 = ((/* implicit */unsigned short) 8914796360186439711LL);
    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)13083))) ^ (min((((/* implicit */long long int) ((unsigned int) (_Bool)1))), (((var_14) / (-19LL)))))));
}
