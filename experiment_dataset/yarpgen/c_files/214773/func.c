/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214773
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_3] [(_Bool)1] = ((/* implicit */unsigned long long int) var_0);
                        arr_11 [i_1] [i_3] [i_3] = ((/* implicit */_Bool) var_1);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            arr_15 [i_3] [i_3] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) var_10);
                            arr_16 [i_0] [(unsigned char)7] [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((_Bool) (unsigned char)69)) && (((/* implicit */_Bool) ((unsigned char) (unsigned char)218)))));
                            var_16 += ((/* implicit */_Bool) ((((/* implicit */int) (short)-10260)) | (((int) var_3))));
                            var_17 += ((unsigned char) (unsigned char)37);
                        }
                        arr_17 [i_0] [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 18220946842160737387ULL)))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        var_18 = ((unsigned long long int) arr_12 [i_5] [i_0] [(signed char)4] [(signed char)4] [i_2] [i_2]);
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) (unsigned char)4)))));
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)243)))))));
                            var_20 = arr_3 [i_2] [i_5] [i_5];
                        }
                        for (int i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_5] [i_0] [i_1] [i_2] [i_5] [i_7] = ((/* implicit */unsigned long long int) ((unsigned short) arr_4 [i_0] [i_2] [i_7]));
                            var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) || ((!(((/* implicit */_Bool) var_3))))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_7])) ? (((/* implicit */int) arr_5 [i_2] [i_5] [i_7])) : (var_5)))) ? (((/* implicit */int) ((16649668159650697749ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [6] [i_2] [8])))))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_5])) < (((/* implicit */int) (unsigned char)247))))))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_8] [i_5])) ? ((+(arr_3 [(short)2] [i_5] [(signed char)1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_1] [i_8] [i_8] [i_5])))))));
                            arr_29 [i_5] = ((/* implicit */unsigned long long int) (+((((_Bool)1) ? (((/* implicit */int) (short)-10964)) : (((/* implicit */int) (_Bool)1))))));
                            arr_30 [i_0] [i_1] [i_2] [i_5] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)72)))));
                            var_24 = ((/* implicit */_Bool) (unsigned char)154);
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            var_25 ^= ((/* implicit */unsigned long long int) ((signed char) ((var_14) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)183))))));
                            var_26 += ((/* implicit */unsigned int) ((unsigned char) var_5));
                            var_27 ^= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_4 [i_0] [(unsigned char)3] [i_9])))));
                            arr_34 [i_0] [i_5] [i_2] [(short)2] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)244))))) > (((/* implicit */int) arr_33 [i_9] [i_0] [i_1] [i_5]))));
                            arr_35 [i_9] [i_2] [i_1] [i_2] [i_2] [i_1] |= ((/* implicit */int) (unsigned char)93);
                        }
                    }
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) arr_8 [i_0] [i_0]))));
                    var_29 *= ((/* implicit */unsigned short) (unsigned char)13);
                    arr_36 [i_0] [i_1] [i_1] = ((/* implicit */long long int) arr_20 [i_0] [i_2] [i_2] [i_2] [i_0] [i_0]);
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [(_Bool)1] [(short)14]))) : (2571449492U)))))));
        arr_37 [(_Bool)1] = ((short) (~(var_1)));
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_11 = 0; i_11 < 18; i_11 += 1) 
        {
            var_31 &= ((/* implicit */short) arr_39 [i_10]);
            arr_42 [14U] [6LL] [i_11] |= ((/* implicit */unsigned char) var_15);
            arr_43 [(_Bool)1] [i_11] [i_10] &= ((/* implicit */short) (~(((long long int) (_Bool)1))));
            arr_44 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_10] [i_10])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_10] [i_10]))))) : (((/* implicit */int) ((_Bool) (unsigned char)64)))));
        }
        arr_45 [i_10] = ((/* implicit */unsigned long long int) (~(469762048)));
    }
    /* LoopNest 2 */
    for (short i_12 = 0; i_12 < 22; i_12 += 2) 
    {
        for (signed char i_13 = 1; i_13 < 20; i_13 += 4) 
        {
            {
                var_32 = ((/* implicit */long long int) (((-(((/* implicit */int) ((((/* implicit */int) (unsigned char)200)) != (((/* implicit */int) arr_49 [i_12] [i_12]))))))) / (((((/* implicit */_Bool) 8646911284551352320ULL)) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) (unsigned char)56))))));
                var_33 = ((/* implicit */signed char) (~((((-(((/* implicit */int) (signed char)-28)))) / (((/* implicit */int) arr_46 [i_12] [i_13]))))));
                var_34 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_47 [i_12]))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-115))))))) : ((-(((/* implicit */int) ((unsigned char) arr_48 [i_12] [i_13] [i_12])))))));
                var_35 = ((unsigned long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_47 [i_13]))))), (((unsigned long long int) (unsigned char)192))));
                var_36 += ((/* implicit */unsigned short) ((int) (+((~(((/* implicit */int) var_3)))))));
            }
        } 
    } 
}
