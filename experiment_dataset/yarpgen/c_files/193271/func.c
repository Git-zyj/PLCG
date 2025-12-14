/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193271
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
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_5))));
    var_15 = max((var_0), (((((/* implicit */int) (signed char)118)) | (((var_13) / (((/* implicit */int) var_4)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_16 = ((/* implicit */int) var_1);
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned short)26598), (((/* implicit */unsigned short) (unsigned char)120))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) 2110870725)) && (((/* implicit */_Bool) arr_0 [i_0] [(signed char)9]))))), (var_6)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_18 &= ((/* implicit */unsigned char) max((((((var_12) <= (((/* implicit */int) arr_5 [i_1])))) ? (((((/* implicit */_Bool) (unsigned short)33584)) ? (var_13) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */int) (unsigned short)31965)))))), (((/* implicit */int) var_7))));
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 2110870730)) ? (((/* implicit */int) (unsigned short)14741)) : (((/* implicit */int) (unsigned short)14455)))) / (((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */int) var_4)))))) << (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */int) arr_5 [(unsigned char)9]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_11) : (var_2)))))))));
                        var_20 += ((/* implicit */unsigned short) (signed char)-87);
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_8)) * (((/* implicit */int) (unsigned short)30869)))))) || (((/* implicit */_Bool) arr_10 [i_1]))));
                        /* LoopSeq 3 */
                        for (signed char i_5 = 1; i_5 < 22; i_5 += 4) 
                        {
                            var_22 = var_13;
                            arr_20 [i_4] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_14 [(signed char)8] [i_2] [(signed char)8] [i_1]) : (-1843253462))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_16 [i_1])) : (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1]))) : ((~(arr_18 [i_1] [i_1] [(unsigned short)15])))))));
                            var_23 = min((var_2), ((((+(((/* implicit */int) (unsigned short)33584)))) & (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_8 [i_2])))))));
                            var_24 = ((-2110870701) | (max((((/* implicit */int) (unsigned char)158)), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) (unsigned short)0)))))));
                            var_25 += ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_7 [i_5 - 1])) ? (var_13) : (((/* implicit */int) arr_10 [i_1]))))));
                        }
                        for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            arr_23 [i_3] [i_4] [i_3] [i_4] [(unsigned short)21] [i_4] [i_2] = ((int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_1))));
                            arr_24 [i_1] [i_4] = ((/* implicit */int) ((max((var_3), (((/* implicit */long long int) arr_21 [i_4])))) / (((/* implicit */long long int) ((arr_21 [i_4]) / (arr_21 [i_4]))))));
                            arr_25 [i_6] [i_6] [i_6] [i_6] |= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_11 [i_2 + 3] [i_2 + 2]))))) ^ (((((/* implicit */_Bool) arr_11 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))));
                            var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(var_12)))) ? (((((/* implicit */_Bool) arr_14 [6] [i_2 + 2] [i_3] [(unsigned short)22])) ? (((/* implicit */int) arr_8 [i_1])) : (var_13))) : (var_0))) % (((/* implicit */int) var_7))));
                            var_27 = (+(((((/* implicit */_Bool) arr_16 [i_2 + 3])) ? (((/* implicit */int) var_10)) : (var_2))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            var_28 = ((/* implicit */int) min((var_28), (((((/* implicit */int) var_8)) * (((((/* implicit */_Bool) (unsigned short)33601)) ? (((/* implicit */int) (unsigned short)31965)) : (((/* implicit */int) (unsigned short)31950))))))));
                            arr_30 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_12 [i_7])) ? (((/* implicit */int) (unsigned short)14472)) : (var_2))), (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_8)))))))) ? ((~(arr_21 [i_4]))) : ((+(((/* implicit */int) (signed char)-59))))));
                            arr_31 [i_3] [i_3] [(unsigned short)19] [i_4] [i_4] = ((/* implicit */_Bool) max(((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (arr_7 [i_1]))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_16 [i_1])), ((unsigned short)20930)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_4)) ? (arr_29 [i_1] [i_2] [i_4] [i_3] [i_4] [i_7] [i_2]) : (var_11)))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            var_29 ^= ((/* implicit */signed char) max((((/* implicit */int) ((signed char) arr_32 [i_8] [(_Bool)1] [i_3] [i_8] [i_8]))), ((~(arr_32 [i_8] [i_8] [i_3] [i_8] [4LL])))));
                            arr_34 [i_1] [8] [i_4] = ((/* implicit */signed char) max((((/* implicit */int) arr_33 [(_Bool)1] [i_1] [i_1])), ((~((+(((/* implicit */int) var_10))))))));
                            var_30 = ((/* implicit */int) (((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)37022)) && (((/* implicit */_Bool) (signed char)-52))))))) < (((/* implicit */int) (unsigned short)33596))));
                            arr_35 [i_8] [i_4] [i_3] [i_4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) (unsigned short)28534)) : (var_12)))) ? (((((((/* implicit */int) var_8)) > (((/* implicit */int) arr_19 [i_1] [i_2] [i_3] [i_4])))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (var_11))) : (min((((/* implicit */int) var_7)), (var_2))))) : ((-(((/* implicit */int) arr_17 [i_2 + 4] [i_2 + 2]))))));
                            var_31 = ((/* implicit */int) var_5);
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_9 = 1; i_9 < 22; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    for (unsigned char i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        {
                            arr_44 [i_9] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-104)) & (var_12)))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) == (arr_13 [i_11])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)14434)) <= (((/* implicit */int) arr_28 [i_1] [i_1] [(unsigned char)8] [i_1] [i_9])))))))) && (((/* implicit */_Bool) min(((unsigned short)50209), ((unsigned short)50142))))));
                            arr_45 [i_1] [i_2] [i_2] [i_9] [i_11] [i_11] = ((/* implicit */signed char) arr_5 [i_1]);
                        }
                    } 
                } 
                arr_46 [i_9] [i_2] [i_2] = ((/* implicit */signed char) var_12);
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    for (int i_13 = 0; i_13 < 23; i_13 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) var_12);
                            arr_51 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((var_12) + (2147483647))) << (((((/* implicit */int) var_10)) - (63237))))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) var_9)))))))) || (((var_12) != (arr_42 [i_9 - 1] [i_9] [i_9] [i_9 + 1])))));
                            arr_52 [i_1] [i_1] [(unsigned short)12] [20LL] [i_9] = ((((/* implicit */_Bool) ((((var_0) ^ (((/* implicit */int) (unsigned short)14459)))) ^ (((/* implicit */int) var_5))))) ? (((((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (arr_15 [i_1] [21] [i_12] [10])))) + (((((/* implicit */_Bool) arr_15 [i_1] [i_9] [i_12] [i_13])) ? (arr_43 [0] [i_2] [i_2] [i_2] [(unsigned short)3]) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_0))))));
                        }
                    } 
                } 
            }
        }
    }
    for (signed char i_14 = 1; i_14 < 22; i_14 += 2) 
    {
        arr_55 [i_14] |= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (signed char)-59)) && (((/* implicit */_Bool) -505374737)))) && (((/* implicit */_Bool) (unsigned short)47364)))) ? (127) : (148760887)));
        /* LoopSeq 1 */
        for (int i_15 = 0; i_15 < 24; i_15 += 2) 
        {
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 24; i_16 += 4) 
            {
                for (int i_17 = 3; i_17 < 23; i_17 += 4) 
                {
                    for (int i_18 = 2; i_18 < 22; i_18 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */int) var_7);
                            var_34 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_61 [i_14] [i_14])) % (((/* implicit */int) (unsigned short)50775))))) ? (((((/* implicit */long long int) arr_53 [i_14])) % (var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_6))))))))) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_59 [i_18] [8] [i_16] [i_15])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))) < ((~(var_13)))))));
                        }
                    } 
                } 
            } 
            arr_66 [i_15] [i_14] [(unsigned short)20] = ((/* implicit */long long int) var_7);
            arr_67 [i_15] [i_14] |= ((/* implicit */unsigned short) (((((+(((/* implicit */int) var_9)))) / (((/* implicit */int) var_7)))) > (((/* implicit */int) var_7))));
            var_35 = ((/* implicit */unsigned short) var_12);
        }
        var_36 *= ((/* implicit */signed char) max(((+(((/* implicit */int) (unsigned short)1478)))), (((/* implicit */int) ((((arr_53 [i_14 + 1]) ^ (arr_54 [i_14 + 2]))) <= (((/* implicit */int) ((var_13) <= (var_12)))))))));
        var_37 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) arr_61 [i_14 + 2] [i_14 + 2])) | (((/* implicit */int) arr_65 [i_14] [i_14] [i_14] [i_14] [i_14 - 1] [i_14])))) : (((/* implicit */int) var_4)))) ^ (((((/* implicit */int) (!(((/* implicit */_Bool) -1262488122))))) ^ (81491474)))));
        var_38 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_14] [i_14 - 1]))))) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_57 [i_14]))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_63 [i_14])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned short) var_4)))))));
    }
}
