/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193046
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 2; i_2 < 15; i_2 += 1) 
                {
                    var_17 = ((/* implicit */signed char) max(((~(140737454800896ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_2])))))));
                    var_18 = ((/* implicit */unsigned long long int) var_11);
                    var_19 = ((/* implicit */unsigned long long int) var_12);
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_8))));
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) arr_5 [(unsigned char)0] [i_1] [i_2] [i_3])), (arr_0 [7ULL])))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1310703853)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)152))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_6))))) : (((((/* implicit */_Bool) var_7)) ? (4217384634U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))));
                        var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) (unsigned char)100))))) ? (((var_5) * (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)250)) : (var_14))))) / ((+(((/* implicit */int) (unsigned char)20))))));
                    }
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */signed char) min((((short) ((var_14) / (var_5)))), (((/* implicit */short) (unsigned char)250))));
                    var_24 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_7 [i_0] [1ULL] [i_1] [i_4])))) ? (min((var_16), (((/* implicit */unsigned int) (unsigned char)255)))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-16)) & (((/* implicit */int) (_Bool)0)))))));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) ((int) (-(((((/* implicit */_Bool) (unsigned char)152)) ? (77582661U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? ((+(((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (unsigned short)255)))))) : (((/* implicit */int) ((short) ((((/* implicit */int) var_4)) * (0)))))));
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_27 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 77582675U)) ? (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)107))) : (arr_14 [i_4] [i_1] [(unsigned char)6] [(_Bool)1] [i_1])))) ? (((unsigned int) min((var_5), (var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)236)) ? ((-(arr_15 [(signed char)3] [i_1] [(signed char)3] [i_1] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) 0))))))));
                        }
                        for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [(signed char)15]))) : (var_6))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-27384)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) ((_Bool) (unsigned char)28)))))) : ((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_4] [i_1] [14ULL]))) / (var_7)))))));
                            var_30 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1310703865)) ? (((/* implicit */int) (_Bool)1)) : ((~(18))))) - ((~(((/* implicit */int) (unsigned char)104))))));
                            var_31 = ((/* implicit */_Bool) min((((unsigned int) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [4ULL]))))), (((/* implicit */unsigned int) ((unsigned char) (+(var_7)))))));
                        }
                        for (int i_8 = 0; i_8 < 17; i_8 += 1) 
                        {
                            var_32 = ((/* implicit */short) (-(((var_12) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_16)) : (arr_14 [i_1] [i_5] [i_4] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) var_11))))));
                            var_33 -= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 30720)) ? (((/* implicit */int) (unsigned short)65280)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))) : (77582661U))));
                        }
                        var_34 = ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)1)));
                    }
                    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)117)) ? (4217384609U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)158)))))) ? (((/* implicit */int) (unsigned char)79)) : ((-(((/* implicit */int) (unsigned char)152))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) /* same iter space */
                        {
                            var_36 = ((/* implicit */_Bool) min((((((/* implicit */int) var_9)) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (unsigned char)85)))))), (-1310703865)));
                            var_37 = ((/* implicit */unsigned char) var_6);
                        }
                        for (unsigned short i_11 = 0; i_11 < 17; i_11 += 1) /* same iter space */
                        {
                            var_38 = ((/* implicit */unsigned char) min((((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned char)104)))), (var_15)))), (((((/* implicit */int) (unsigned char)249)) << (((((int) (unsigned char)229)) - (215)))))));
                            var_39 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) (unsigned char)152)))));
                            var_40 = ((((/* implicit */_Bool) ((unsigned char) ((3989040596U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)103))))))) ? (((/* implicit */int) max((var_13), (var_9)))) : (((/* implicit */int) min(((unsigned char)152), (((/* implicit */unsigned char) (signed char)84))))));
                            var_41 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))) != (131071ULL)))) >= ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 17; i_12 += 1) /* same iter space */
                        {
                            var_42 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) ((var_0) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251)))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (var_8))))))));
                            var_43 = ((/* implicit */_Bool) min((((signed char) var_16)), (((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_15 [i_12] [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [(unsigned char)8])) && (((/* implicit */_Bool) arr_30 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [(_Bool)1])))))))));
                            var_44 = ((/* implicit */_Bool) ((((long long int) 1310703853)) | (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)249))))));
                            var_45 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_1)) > (((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) : (((((/* implicit */unsigned int) var_5)) / (var_2)))))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 17; i_13 += 1) /* same iter space */
                        {
                            var_46 = ((/* implicit */signed char) (-(((int) ((var_1) / (((/* implicit */int) var_3)))))));
                            var_47 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_14)) | (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)228)) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (-(var_14)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_2)))))));
                        }
                        var_48 ^= ((/* implicit */unsigned long long int) (((!(var_12))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_21 [i_4] [i_4] [i_4] [i_4]))) ? (((int) (unsigned char)228)) : (((((/* implicit */int) var_15)) * (((/* implicit */int) arr_1 [i_0]))))))) : (((arr_21 [i_9] [i_4] [5ULL] [i_0]) ? (((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned int) (~(var_14))))))));
                    }
                    var_49 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) max((arr_13 [i_0] [i_0] [i_1] [i_1] [i_4]), ((unsigned char)152)))) : (((/* implicit */int) (short)-30201))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((unsigned int) var_10))));
                    var_50 = ((/* implicit */unsigned int) max((var_50), (((((/* implicit */unsigned int) (+(var_8)))) + (((((unsigned int) (unsigned char)115)) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned char)91)))))))))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    var_51 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-81)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                    var_52 ^= ((/* implicit */signed char) min((max((((/* implicit */int) var_3)), ((~(var_1))))), (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned long long int) var_2)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)89)))))))));
                }
                var_53 = ((/* implicit */unsigned int) (+(((((((var_11) + (2147483647))) << (((((/* implicit */int) (unsigned char)186)) - (186))))) << (((((/* implicit */int) arr_34 [(signed char)3] [i_0] [i_0])) - (235)))))));
            }
        } 
    } 
    var_54 = ((/* implicit */signed char) min((var_54), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned char) var_1))), (((((/* implicit */_Bool) min(((short)-6000), (((/* implicit */short) var_13))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)31)) / (((/* implicit */int) (unsigned char)243))))))))))));
    var_55 = ((/* implicit */short) (~(((int) var_9))));
}
