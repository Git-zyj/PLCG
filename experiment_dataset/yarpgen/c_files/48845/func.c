/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48845
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
    var_15 = ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (1904171907) : (2147483647)))) || (((/* implicit */_Bool) var_8))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) (+(min((((int) var_13)), (((((((/* implicit */int) (short)-20239)) + (2147483647))) << (((arr_1 [i_0]) - (3280271363U)))))))));
        var_17 = var_13;
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_18 = ((/* implicit */int) ((max((((/* implicit */unsigned int) -1238591751)), (max((((/* implicit */unsigned int) 1238591774)), (arr_3 [i_0] [i_1] [i_0]))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (98118559U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))))))));
            arr_4 [6] [i_1] = (+(1904171911));
            var_19 = ((/* implicit */unsigned int) max((var_19), (((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) var_0)), (arr_1 [i_0]))), (((/* implicit */unsigned int) var_0))))) ? (max((max((((/* implicit */unsigned int) -1729173182)), (arr_3 [i_0] [i_0] [(short)11]))), (((/* implicit */unsigned int) min((-1178107073), (((/* implicit */int) (unsigned char)56))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((max((var_5), (((/* implicit */unsigned int) arr_0 [i_0] [i_1])))) != (((/* implicit */unsigned int) ((int) arr_2 [i_0] [i_0] [i_0])))))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            arr_8 [i_0] [i_2] [i_2] = (((!(((/* implicit */_Bool) ((short) (unsigned char)153))))) ? (min((((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)222))))), (((/* implicit */unsigned int) ((var_14) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)163), ((unsigned char)137))))));
            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)25))))) ? (((/* implicit */int) min((var_7), (((/* implicit */short) var_9))))) : (max((arr_5 [i_0] [i_2]), (arr_0 [i_0] [i_0]))))))));
        }
        var_21 ^= ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_2 [2] [i_0] [i_0]))))))), ((~(arr_3 [i_0] [i_0] [i_0])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            /* LoopSeq 3 */
            for (int i_4 = 2; i_4 < 17; i_4 += 4) 
            {
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [(short)9] [i_3] [i_3] [i_3])) ? (((/* implicit */int) (short)-27671)) : ((+(var_4)))));
                var_23 = ((/* implicit */int) (-(arr_3 [i_4 - 2] [i_4 - 2] [i_4 + 1])));
            }
            for (unsigned int i_5 = 1; i_5 < 17; i_5 += 4) 
            {
                var_24 = ((/* implicit */int) min((var_24), ((-((+(((/* implicit */int) (unsigned char)34))))))));
                arr_17 [i_0] [i_3] [i_0] [i_5 - 1] = ((/* implicit */int) (~(arr_11 [i_5 + 2])));
                arr_18 [i_0] [i_3] [9] [(unsigned char)6] = ((/* implicit */short) ((int) (unsigned char)255));
            }
            for (short i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_3] [i_3] [(short)4])) && (((/* implicit */_Bool) var_8))));
                var_26 = ((/* implicit */unsigned char) ((((int) 24380504)) * (((/* implicit */int) ((var_12) == (var_6))))));
                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)12)))))));
            }
            arr_22 [i_0] [i_0] [(unsigned char)12] = ((/* implicit */int) ((467867671U) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)48))))))));
        }
    }
    for (int i_7 = 4; i_7 < 17; i_7 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
        {
            var_28 += ((/* implicit */short) 1904171926);
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                arr_31 [i_7] = ((/* implicit */short) (-((~(-742601141)))));
                var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_7] [i_9])) ? (((/* implicit */int) var_9)) : (-1263092311)))) ? (((int) -742601171)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)5403)) : (var_0))));
            }
            var_30 = ((/* implicit */int) min((var_30), ((-(((/* implicit */int) (short)2695))))));
            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (unsigned char)211)) : (-1904171892))))))));
            arr_32 [i_7] [i_8] [i_8] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_6 [i_7 - 3] [i_7 - 1]))));
        }
        for (unsigned int i_10 = 0; i_10 < 18; i_10 += 1) /* same iter space */
        {
            arr_35 [i_7] [(unsigned char)10] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_15 [i_7] [(short)0])), (((int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_13 [i_7] [i_10])) : (var_3))))));
            var_32 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (((/* implicit */short) ((((/* implicit */_Bool) 328264318U)) || (((/* implicit */_Bool) 661967009))))))))) ^ (arr_11 [9])));
        }
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 18; i_11 += 1) /* same iter space */
        {
            var_33 = (-(((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) (unsigned char)90)) : (arr_34 [i_11]))));
            /* LoopSeq 1 */
            for (short i_12 = 0; i_12 < 18; i_12 += 3) 
            {
                var_34 -= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_10 [i_7 - 3] [i_7 + 1] [i_7 - 3]))));
                var_35 = ((/* implicit */int) min((var_35), (((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_11] [15U])) & (((/* implicit */int) arr_20 [i_12] [11] [(short)7] [(unsigned char)14]))))) ? (((((arr_9 [i_11]) + (2147483647))) >> (((((/* implicit */int) arr_38 [i_11] [(unsigned char)6])) + (32367))))) : (var_12)))));
                var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (1904171918) : (1460250856))))));
                /* LoopSeq 2 */
                for (unsigned char i_13 = 1; i_13 < 17; i_13 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 1; i_14 < 16; i_14 += 1) 
                    {
                        var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [13U] [i_11] [i_7] [i_11]))));
                        var_38 |= ((/* implicit */unsigned int) arr_27 [16U]);
                        var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((int) (unsigned char)67)))));
                    }
                    var_40 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) (unsigned char)68))))));
                    var_41 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_6 [i_11] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_1 [5])))));
                    var_42 = ((((/* implicit */int) ((unsigned char) var_0))) ^ (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */int) var_13)))));
                    var_43 = (-(((/* implicit */int) ((short) (unsigned char)231))));
                }
                for (unsigned int i_15 = 1; i_15 < 16; i_15 += 4) 
                {
                    var_44 = ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_7 - 2] [i_7 - 1] [i_15 + 2] [i_15 - 1] [i_15 + 1] [i_15 - 1])) ? (((/* implicit */unsigned int) arr_44 [i_7 - 3] [i_7 + 1] [i_15 + 1] [i_15 - 1] [i_15 + 1] [i_15 + 1])) : (arr_28 [i_7] [i_7] [i_7])));
                    var_45 = (((-(var_6))) / (-1864007089));
                    var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_7 - 3])) ? ((+(((/* implicit */int) (unsigned char)75)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_7] [i_11] [i_15])))))));
                }
            }
            var_47 = ((/* implicit */short) (~(3060639479U)));
        }
        var_48 = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) var_10)) * (((((/* implicit */int) (unsigned char)95)) / (((/* implicit */int) (unsigned char)174)))))));
        arr_47 [i_7] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-21559)), (4294967272U))))))), (((((/* implicit */int) var_10)) | (arr_2 [i_7] [i_7] [i_7 - 3])))));
        var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) arr_25 [4U] [i_7]))));
        arr_48 [i_7] [i_7] = ((/* implicit */short) ((unsigned char) ((int) ((((/* implicit */_Bool) 13U)) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) (unsigned char)0))))));
    }
}
