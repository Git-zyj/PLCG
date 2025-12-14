/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192835
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)146)), (var_12))))))) ? (4555632944834345705LL) : (((/* implicit */long long int) ((var_11) >> (((min((((/* implicit */long long int) var_10)), (-4555632944834345706LL))) + (4555632944834345737LL))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (min((((/* implicit */unsigned long long int) arr_1 [12ULL] [6])), (((min((var_2), (43988103598527580ULL))) & (((/* implicit */unsigned long long int) (~(var_4))))))))));
                /* LoopSeq 3 */
                for (int i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    arr_6 [i_0] [8LL] [i_2 - 2] |= ((/* implicit */unsigned short) -4555632944834345706LL);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min((((int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (signed char)-70))))), ((~(((/* implicit */int) min((arr_1 [(short)8] [(unsigned short)10]), (((/* implicit */signed char) var_9))))))))))));
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_5 [i_0] [i_0] [i_2] [i_0]), (((/* implicit */unsigned short) (signed char)81))))) ? (arr_2 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_5))) < (((var_9) ? (((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 2] [(unsigned char)5] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))))));
                        var_18 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)1))))) != (arr_2 [(_Bool)1] [(signed char)2] [(short)12])));
                        var_19 = ((/* implicit */unsigned long long int) var_0);
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) var_13))))) ? (((((/* implicit */_Bool) (signed char)-13)) ? (arr_2 [i_0] [i_1 - 1] [i_2]) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((long long int) 1751923685526117472ULL)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (2147483647) : (((/* implicit */int) (short)3706))))) <= (var_4)))) : (((/* implicit */int) arr_1 [i_1 - 2] [i_0]))));
                    }
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */int) var_9)) : (((((((/* implicit */int) (signed char)-73)) + (2147483647))) >> (((((/* implicit */int) var_5)) + (65)))))))) ? (((var_10) ? (((/* implicit */int) ((unsigned short) (unsigned char)148))) : (((/* implicit */int) arr_4 [i_1 + 3])))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-79)), ((unsigned short)29638)))) : (((/* implicit */int) (unsigned char)21))))));
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (unsigned short)31744))));
                    var_23 = ((/* implicit */short) ((unsigned int) min((((var_1) + (var_2))), (((/* implicit */unsigned long long int) (signed char)120)))));
                }
                for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_24 = ((/* implicit */long long int) ((var_9) || (((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1] [i_4] [i_5] [(short)11] [(unsigned short)8]))));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((min((arr_8 [i_1 + 3] [i_1 + 3] [i_1] [i_1 + 3] [i_1 + 3] [i_1]), (((/* implicit */int) (_Bool)1)))) - (((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1 + 1] [i_5] [i_0 - 2] [i_0] [i_5])) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) var_6)))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */signed char) (((+(((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) var_5))));
                        var_27 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_3 [i_0 + 1] [i_6]) : (arr_3 [i_0 - 1] [i_6])));
                        arr_18 [i_0] [i_1 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_6] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)108))))) : (((/* implicit */int) (signed char)-90))));
                        arr_19 [i_0 + 1] [9] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0 - 2] [i_1] [i_1 + 2] [i_1] [i_1 + 1] [i_1])) ? (3521858132U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned long long int) arr_17 [i_1 + 3] [i_1 - 1]);
                        arr_22 [i_0] = ((((/* implicit */_Bool) min((min((9223372036854775807LL), (((/* implicit */long long int) var_12)))), (max((3885231911539307240LL), (((/* implicit */long long int) arr_20 [i_4] [4ULL] [i_7] [i_4] [i_7]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_1));
                        var_29 &= ((/* implicit */signed char) var_7);
                        var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9033085446908252598LL)) ? (min((((/* implicit */unsigned long long int) var_7)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)3582))))))) ? (((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)60)) ? (arr_3 [(signed char)4] [i_0]) : (((/* implicit */int) arr_0 [(signed char)1]))))) : (-6511481258089959460LL))) : (((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) var_13)))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 2) /* same iter space */
                    {
                        var_31 = (-(min((min((((/* implicit */unsigned long long int) arr_16 [(signed char)10] [i_1 + 1] [i_4] [i_0])), (arr_15 [i_0] [i_1 - 2] [i_4] [i_8] [(signed char)0] [i_4]))), (((/* implicit */unsigned long long int) -9223372036854775793LL)))));
                        var_32 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32754))) - (18413974428435717935ULL)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3002565606U)) & (arr_2 [i_0] [i_1] [i_0 - 2])))))), (((_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_4] [i_8])) ? (var_8) : (((/* implicit */unsigned long long int) 2899908479U)))))));
                    }
                    arr_25 [(short)2] &= ((/* implicit */unsigned char) (signed char)11);
                }
                for (int i_9 = 1; i_9 < 12; i_9 += 3) 
                {
                    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) || (((/* implicit */_Bool) (+(min((arr_8 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0] [(signed char)0] [i_0]), (((/* implicit */int) (_Bool)1))))))))))));
                    var_34 = ((/* implicit */long long int) var_1);
                    arr_28 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((long long int) (-(((((/* implicit */_Bool) 7307156281061845903LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0]))) : (7307156281061845904LL))))));
                    var_35 += ((/* implicit */signed char) arr_10 [i_0] [(unsigned short)13] [i_9 + 1] [i_9 + 2]);
                }
                var_36 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0 + 1] [i_0] [i_1 + 1]))))), (((((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_1] [i_1 - 2])) / (((/* implicit */int) arr_12 [6LL] [i_0 - 2] [3U] [i_1 - 1]))))));
                var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) (unsigned short)65535))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (long long int i_12 = 2; i_12 < 11; i_12 += 1) 
            {
                {
                    var_38 |= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_31 [i_10] [i_10] [i_12])) ? (((/* implicit */int) arr_31 [i_10] [i_11] [i_12 - 2])) : (((/* implicit */int) arr_12 [0LL] [i_11] [i_12 - 2] [i_10])))));
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        for (short i_14 = 0; i_14 < 12; i_14 += 2) 
                        {
                            {
                                arr_42 [4U] [i_10] [i_12 - 2] [6] [i_12 - 2] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_11] [(short)10] [i_13] [i_14])) ? (((/* implicit */int) ((signed char) var_7))) : (((((/* implicit */_Bool) ((signed char) 2728368997632502940ULL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_10] [i_14] [10ULL]))))) : (-2147483645)))));
                                arr_43 [i_10] [2LL] [i_10] [i_10] [i_10] [i_10] &= ((/* implicit */short) (((-(13709479829268790708ULL))) + (max((((/* implicit */unsigned long long int) (short)12657)), (34358689792ULL)))));
                                var_39 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_9) ? ((-(((/* implicit */int) arr_27 [9ULL] [i_11] [i_12 - 1] [i_13])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 14199237358410659164ULL)))))))) ? (4737264244440760906ULL) : (((/* implicit */unsigned long long int) var_12))));
                            }
                        } 
                    } 
                    arr_44 [i_11] [i_11] [3LL] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_38 [i_10] [i_10] [i_10] [i_10])) - (((/* implicit */int) arr_31 [i_10] [i_10] [i_10]))))) ? (18446744073709551590ULL) : (((/* implicit */unsigned long long int) min((658343445098313058LL), (((/* implicit */long long int) (signed char)(-127 - 1)))))))) - (((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) var_0))))))));
                    arr_45 [i_10] [(_Bool)1] = ((/* implicit */signed char) var_12);
                    arr_46 [i_11] [i_11] [i_12] [0LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_5 [i_12 + 1] [i_12 - 1] [i_12 - 2] [i_10])))));
                }
            } 
        } 
    } 
}
