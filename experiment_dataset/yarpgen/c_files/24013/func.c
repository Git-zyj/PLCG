/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24013
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    var_10 = min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) || ((!(((/* implicit */_Bool) var_1))))))), (min((min(((unsigned short)34855), ((unsigned short)15647))), (((/* implicit */unsigned short) (short)-5138)))));
                    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (max((arr_7 [i_1 + 2] [i_1 + 3] [i_1 + 2]), (((/* implicit */int) var_8)))) : ((~(((/* implicit */int) min((arr_5 [5LL] [i_2]), ((unsigned char)30)))))))))));
                    arr_9 [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) var_8);
                }
                for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / ((~(arr_0 [i_3])))));
                        arr_14 [i_1] [i_1 + 2] [i_3] [i_4] = ((/* implicit */long long int) max(((!(var_4))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_1] [i_1]), (var_7))))) == ((+(arr_1 [i_1 + 1] [i_1])))))));
                    }
                    var_13 = ((/* implicit */long long int) var_2);
                    /* LoopSeq 4 */
                    for (int i_5 = 3; i_5 < 19; i_5 += 3) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned char) var_5);
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_9))));
                    }
                    for (int i_6 = 3; i_6 < 19; i_6 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (~((~(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) || (((/* implicit */_Bool) var_1))))))))))));
                        var_17 += ((/* implicit */unsigned char) max((((/* implicit */int) arr_17 [i_0] [i_0] [i_3] [i_0] [i_6 - 2])), (((((/* implicit */_Bool) ((((((/* implicit */int) arr_12 [i_0] [i_6] [i_0])) + (2147483647))) << (((((/* implicit */int) var_7)) - (1268)))))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) ((short) arr_13 [i_0])))))));
                        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_10 [i_1 + 3] [i_6 - 3] [i_1 + 3] [i_1])) == (((/* implicit */int) arr_10 [i_1 + 3] [i_6 - 1] [i_6 - 3] [i_1])))) ? (max((arr_11 [i_6 + 1] [i_1 + 3] [i_1 + 2]), (((/* implicit */unsigned int) arr_10 [i_1 + 2] [i_6 - 1] [i_6 - 3] [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1]))))))));
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 65536U)) % (arr_0 [i_1]))))))) <= (((/* implicit */int) ((short) ((arr_3 [i_1] [i_1 + 1] [i_3]) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) (unsigned char)252);
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_17 [i_8] [i_1] [i_3] [i_1] [i_0]), (((/* implicit */unsigned short) var_0)))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) var_5))))));
                            var_22 ^= ((/* implicit */signed char) (~(((/* implicit */int) max((arr_2 [i_1 - 1]), (((/* implicit */unsigned char) var_2)))))));
                        }
                        for (unsigned int i_9 = 3; i_9 < 19; i_9 += 1) 
                        {
                            var_23 |= ((/* implicit */unsigned short) max((((/* implicit */int) min((arr_17 [i_7 + 1] [i_9 + 1] [i_3] [i_0] [i_9]), (arr_17 [i_7 + 1] [i_9 - 3] [i_3] [i_0] [i_1])))), (((((/* implicit */_Bool) arr_17 [i_7 - 1] [i_9 + 1] [i_3] [i_3] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_17 [i_7 + 1] [i_9 - 2] [i_3] [i_0] [i_9]))))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1] [i_7 - 1] [i_1])) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 2] [i_7 - 1] [i_1])) : (((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1] [i_7 - 2] [i_1]))))) || (((((/* implicit */_Bool) arr_6 [i_1 + 3] [i_1 - 1] [i_7 - 1] [i_1])) && (((/* implicit */_Bool) arr_6 [i_1] [i_1 + 2] [i_7 - 2] [i_1]))))));
                            arr_25 [i_1] [i_1] [i_7] [i_7 - 2] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((unsigned short) var_9))) && (((var_0) || (((/* implicit */_Bool) 2718689522U))))))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_8))))))));
                            var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2779443315U)) ? (arr_11 [i_0] [i_1 - 1] [i_7]) : (((/* implicit */unsigned int) ((var_3) - (var_6))))))) || (((((((/* implicit */int) (unsigned char)246)) | (((/* implicit */int) var_2)))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (var_8)))))));
                            var_27 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) < (arr_15 [i_0] [i_1] [i_3] [i_7 + 1] [i_3] [i_10]))))))));
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)4)) && (((/* implicit */_Bool) 4294901747U))));
                        }
                        var_29 = ((/* implicit */unsigned short) max((((unsigned long long int) var_8)), (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_0))))) ? (max((18446744073709551610ULL), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_1 + 3] [i_3] [i_7 - 1] [i_7])))) : (((/* implicit */unsigned long long int) (~(2722252843707448478LL))))))));
                        var_30 = ((/* implicit */long long int) (-(((((/* implicit */int) var_5)) / (((/* implicit */int) arr_17 [i_7 - 1] [i_1 + 1] [i_1] [i_1] [i_3]))))));
                    }
                    for (unsigned long long int i_11 = 4; i_11 < 19; i_11 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 1; i_12 < 18; i_12 += 4) 
                        {
                            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) arr_13 [i_11]))));
                            var_32 = ((/* implicit */short) (-(var_3)));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
                        {
                            var_33 &= ((/* implicit */short) max((((/* implicit */int) var_8)), ((-(((/* implicit */int) arr_35 [i_0] [i_0] [i_11 - 1] [i_1 + 3]))))));
                            var_34 &= ((arr_0 [i_1 - 1]) == (arr_1 [i_0] [i_0]));
                            var_35 = ((/* implicit */unsigned short) max((var_6), ((+(((/* implicit */int) arr_18 [i_1] [i_3] [i_1] [i_13]))))));
                        }
                        for (unsigned char i_14 = 0; i_14 < 20; i_14 += 1) /* same iter space */
                        {
                            var_36 &= ((/* implicit */unsigned short) ((((max((((/* implicit */long long int) var_4)), (4100105967846068512LL))) != (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)2), (var_1))))) : (min((max((((/* implicit */unsigned int) (_Bool)1)), (1515523981U))), (((/* implicit */unsigned int) -2068435068))))));
                            var_37 = (+(max(((-(((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)158))) <= (7508885186299385049LL)))))));
                            var_38 = ((/* implicit */unsigned short) min((((unsigned long long int) arr_35 [i_11 - 1] [i_1] [i_11 + 1] [i_1 + 1])), (((/* implicit */unsigned long long int) arr_35 [i_11 - 2] [i_1] [i_3] [i_1 - 1]))));
                        }
                        for (unsigned char i_15 = 0; i_15 < 20; i_15 += 1) /* same iter space */
                        {
                            var_39 = ((/* implicit */int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)96))))))) ? (((/* implicit */unsigned int) max((((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_5)))), (((/* implicit */int) var_9))))) : (max((((/* implicit */unsigned int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (3994143083U)))));
                            var_40 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) arr_35 [i_0] [i_1] [i_3] [i_11]))))) ? (((/* implicit */int) arr_22 [i_0] [i_11 + 1] [9LL] [i_11] [(signed char)4] [i_3] [i_3])) : (((/* implicit */int) max(((short)24372), (((/* implicit */short) var_2)))))))), (min(((~(arr_24 [i_0] [i_0] [i_3] [i_0] [i_0] [i_3] [i_3]))), (((/* implicit */unsigned int) arr_17 [i_0] [i_1 + 2] [i_3] [i_1] [i_15]))))));
                        }
                        var_41 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))) >= (((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [i_11] [(unsigned char)12] [i_11] [i_0]))))), ((+(((var_8) ? (((/* implicit */int) arr_12 [i_0] [i_1] [(unsigned short)11])) : (((/* implicit */int) var_5))))))));
                    }
                }
                var_42 = ((/* implicit */unsigned short) ((short) var_4));
                arr_42 [i_1] = ((/* implicit */short) max((((/* implicit */long long int) (~((~(((/* implicit */int) var_2))))))), (arr_8 [i_1 + 1] [i_1] [i_1 + 3])));
                var_43 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_1 + 3]))));
                var_44 = max((((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (arr_0 [i_1 + 2]) : (arr_0 [i_1 + 3]))), (arr_0 [i_1 - 1]));
            }
        } 
    } 
    var_45 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) var_1))))));
    var_46 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_7))))));
    var_47 = ((/* implicit */long long int) (+((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))))));
}
