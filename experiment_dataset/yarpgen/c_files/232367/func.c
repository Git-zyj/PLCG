/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232367
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) (short)-12751))))) ? (var_2) : (max((((/* implicit */unsigned int) 145828387)), (var_2)))))) ? (((/* implicit */unsigned int) var_1)) : (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_3)) : (var_2))) * (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) var_8)))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (~(var_6)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            {
                arr_12 [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-121)) : ((+(arr_8 [i_3])))));
                var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) max((min((((/* implicit */int) (short)25203)), (arr_4 [i_2] [i_3] [i_3]))), (var_7))))));
                var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) (-(var_1)))))));
                arr_13 [i_2] [i_3] = ((/* implicit */signed char) (+(1205716262)));
                arr_14 [i_2] [i_3] [i_3] = ((/* implicit */int) (unsigned char)119);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        arr_17 [i_4] [i_4] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((1205716263) >> (((/* implicit */int) (_Bool)1))))) ? (var_3) : ((~(((/* implicit */int) (unsigned char)13))))))));
        var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)74))));
    }
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 1) 
        {
            var_14 = ((/* implicit */short) (-(var_7)));
            arr_23 [i_5] = ((/* implicit */unsigned char) (-((-(var_7)))));
            arr_24 [i_5] [i_5] [i_5] = ((/* implicit */long long int) arr_15 [i_5]);
        }
        arr_25 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) max((var_3), (((/* implicit */int) (unsigned char)124)))))) ? (((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5]))) : (var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)16))))))));
        arr_26 [i_5] [i_5] = ((/* implicit */int) var_9);
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                for (short i_9 = 4; i_9 < 21; i_9 += 3) 
                {
                    {
                        arr_34 [i_5] [(_Bool)1] [i_5] = ((/* implicit */_Bool) var_2);
                        /* LoopSeq 3 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_38 [i_5] [i_5] [i_8] [i_9] [i_10] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))));
                            arr_39 [19] [i_7] [i_7] [i_5] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_15 [i_9 - 3])), (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_5] [i_5] [i_8] [i_9] [i_9 - 1] [i_10] [i_10]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */int) (short)-1))))) ? (min((var_5), (((/* implicit */unsigned long long int) arr_22 [i_5] [i_7])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 1179931292)) : (1929830339481671778ULL)))))));
                            var_15 *= ((/* implicit */short) ((arr_31 [i_9 - 2] [i_9 - 3] [2U] [i_9 - 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54439))) : ((-(var_9)))));
                        }
                        for (unsigned long long int i_11 = 2; i_11 < 18; i_11 += 3) 
                        {
                            arr_43 [i_7] [i_8] [i_9] [i_5] = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_7] [i_5] [i_9] [i_9 + 1] [i_9] [i_9 - 1] [i_9 - 3]))))));
                            arr_44 [i_5] = ((/* implicit */signed char) arr_21 [i_5] [i_5] [i_5]);
                            arr_45 [i_5] [i_7] [i_7] [i_9 - 4] [i_11] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_9 + 1] [i_9] [(unsigned short)1] [i_9 - 2] [i_9])))))), (max((((((/* implicit */_Bool) arr_35 [i_5] [i_7] [i_8] [i_9] [i_11 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_8]))) : (var_5))), (((/* implicit */unsigned long long int) ((long long int) (signed char)-98)))))));
                        }
                        for (int i_12 = 0; i_12 < 22; i_12 += 1) 
                        {
                            arr_48 [i_5] [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_37 [i_5] [i_5] [i_7] [i_8] [i_9] [i_9 - 2] [i_12])) ? (arr_27 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_6)))))));
                            arr_49 [i_5] [i_5] = ((/* implicit */long long int) arr_37 [i_9 - 1] [i_5] [i_9 - 4] [i_12] [7] [i_12] [i_12]);
                            var_16 = ((/* implicit */unsigned long long int) arr_33 [i_5] [i_7] [i_8] [i_9] [i_12] [i_5]);
                        }
                        arr_50 [i_5] [i_7] [i_7] [i_8] [i_5] = ((/* implicit */unsigned short) (unsigned char)13);
                        var_17 = ((/* implicit */unsigned int) ((signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), (arr_41 [i_5] [i_7] [i_8] [i_9] [i_8] [i_9 - 3] [i_9]))));
                        arr_51 [i_5] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */int) arr_15 [i_5])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_5] [i_9 - 4])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_21 [i_8] [i_7] [i_5])) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5]))) : (var_5))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_13 = 0; i_13 < 22; i_13 += 1) /* same iter space */
    {
        arr_54 [i_13] = ((/* implicit */int) (-(min((arr_28 [i_13] [i_13]), (var_9)))));
        arr_55 [i_13] [i_13] = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) arr_15 [i_13])), (arr_27 [i_13]))), (((/* implicit */unsigned int) ((int) arr_22 [i_13] [i_13])))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_47 [(_Bool)1] [i_13] [i_13] [i_13])) || ((!(var_0)))))) * (min((((/* implicit */int) arr_18 [i_13])), (((var_8) & (((/* implicit */int) arr_15 [i_13]))))))));
        var_19 = ((/* implicit */unsigned int) ((unsigned long long int) (~(((/* implicit */int) ((signed char) (short)0))))));
    }
}
