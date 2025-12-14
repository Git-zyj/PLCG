/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217375
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
    var_11 = (-(2742232203U));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0 + 2])))))));
        var_13 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) min(((short)-18182), (((/* implicit */short) ((8057540405660330449ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18181)))))))))));
    }
    for (int i_1 = 3; i_1 < 15; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)28046)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76))) : (((((((/* implicit */unsigned long long int) 1968494589)) % (var_0))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) min((((((arr_4 [i_1] [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) var_6))))) ^ (((/* implicit */long long int) ((((/* implicit */int) var_9)) & (arr_3 [13ULL])))))), (((/* implicit */long long int) max((arr_3 [14]), (((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                {
                    arr_15 [i_2] [i_2] [12ULL] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(arr_4 [i_1 + 1] [i_2 + 2])))) - ((+(((12914442458485376338ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (int i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */signed char) arr_16 [(_Bool)1] [i_2]);
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_16 [i_2] [i_2])) : (((/* implicit */int) arr_19 [i_2 - 1] [i_4] [i_4 - 1] [i_5] [14]))));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_0) : (12914442458485376323ULL)))) ? (arr_18 [i_1] [14] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) | (((/* implicit */int) var_10)))) | (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_5 [(signed char)3])))))));
                            var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) (short)-18182)) ^ (((/* implicit */int) (unsigned short)52567))))));
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            arr_24 [(unsigned short)16] [i_2] [i_3] [i_2] [13LL] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_8 [(unsigned char)16] [(_Bool)0] [i_2])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)121))))) : (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) 1624821623U))))));
                            arr_25 [i_1] [i_2] [(unsigned short)12] [i_4] [i_2] = ((/* implicit */unsigned char) ((short) arr_22 [i_1 - 2] [i_7] [i_7] [i_7] [i_7]));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_14 [(signed char)2] [i_2] [i_3] [i_4])) : (var_8))))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)18181))));
                            arr_28 [i_1] [i_2] [i_3] [i_4] [i_8] = ((/* implicit */_Bool) arr_20 [i_1 + 2] [i_2 + 3] [i_3] [i_8] [i_8]);
                        }
                        var_21 = ((/* implicit */int) (unsigned short)65530);
                        var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)57369)))))));
                    }
                    for (int i_9 = 1; i_9 < 17; i_9 += 3) 
                    {
                        var_23 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)25954)) ? (arr_4 [14] [(unsigned char)2]) : (((/* implicit */long long int) ((/* implicit */int) (short)-25961))))), (((/* implicit */long long int) (signed char)95))))) + (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (arr_10 [(unsigned char)2]))), (((/* implicit */unsigned long long int) arr_21 [i_3] [i_1]))))));
                        arr_33 [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) (-((-(14ULL)))));
                        var_24 = var_5;
                    }
                    arr_34 [i_2] [i_2] [15ULL] [i_3] = ((/* implicit */signed char) ((unsigned long long int) ((int) arr_27 [i_1] [18] [i_1] [i_1] [(unsigned short)16] [i_3] [i_3])));
                    arr_35 [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32742)) && (((/* implicit */_Bool) (unsigned short)7708)))))));
                }
            } 
        } 
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((arr_16 [(unsigned short)8] [4]) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) | (max((arr_22 [(signed char)12] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) min((min((arr_11 [i_1] [i_1]), (((/* implicit */int) arr_17 [11LL] [i_1] [i_1] [i_1] [(_Bool)1])))), (((/* implicit */int) ((((/* implicit */int) arr_17 [i_1] [i_1] [(signed char)16] [(unsigned short)11] [i_1])) < (1740185814))))))))))));
    }
    for (int i_10 = 3; i_10 < 15; i_10 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_26 [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) arr_20 [i_10] [8ULL] [i_10] [(unsigned short)9] [i_10])))) : (((/* implicit */int) ((unsigned short) arr_36 [i_10])))))) ? (max((17921419191603687494ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) (_Bool)1)) : (arr_11 [i_10] [(signed char)0])))))))))));
        var_27 = ((/* implicit */unsigned short) (signed char)(-127 - 1));
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) 
            {
                {
                    var_28 = ((/* implicit */long long int) (-(22473968U)));
                    var_29 = var_0;
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) arr_21 [i_10] [i_10]))));
    }
    var_31 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned short) (_Bool)1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (var_0))))) << (((((((((/* implicit */int) var_2)) & (((/* implicit */int) (short)-13345)))) ^ (((/* implicit */int) (unsigned short)37014)))) - (56167)))));
}
