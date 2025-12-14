/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202265
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
    var_13 = ((signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) / (((/* implicit */int) (signed char)-90))))) / ((-(var_6)))));
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (signed char)-90))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        var_16 = ((/* implicit */int) ((unsigned char) var_6));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) ((_Bool) ((unsigned short) (signed char)100))));
            arr_5 [i_0] [i_1] [i_1] = ((short) (((+(((/* implicit */int) var_4)))) / ((-(((/* implicit */int) (short)-15473))))));
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 1; i_4 < 17; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) var_8)) | (((((/* implicit */int) var_7)) * (((/* implicit */int) arr_15 [i_1] [i_2] [i_3] [i_4 - 1])))))))));
                        arr_16 [i_2] [i_2] &= ((/* implicit */long long int) var_8);
                    }
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */signed char) var_6);
                        var_19 = ((/* implicit */unsigned char) (short)(-32767 - 1));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)23895)) != (((/* implicit */int) (unsigned short)41641))))) != ((-(((/* implicit */int) (signed char)-41))))));
                        arr_19 [i_5] [i_0] [i_2] [i_1] [i_0] &= ((/* implicit */signed char) var_0);
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_9))));
                    }
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (((~(9107898389515207682LL))) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_1)))))))));
                }
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) < (((/* implicit */int) (signed char)89)))))) == (var_9))))) % (((((unsigned long long int) var_1)) ^ (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)29687))) & (var_1))))))));
                        var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-27)) && (((/* implicit */_Bool) (signed char)-41)))) || (((/* implicit */_Bool) 2507202289U))));
                    }
                    arr_27 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((int) var_3));
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (-2147483647 - 1)))) / (((/* implicit */int) var_7))))) / (min((1787765007U), (((2507202270U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6958)))))))));
                }
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 245354639)) ? (((/* implicit */int) (short)32740)) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)23895))))));
                    var_27 = ((/* implicit */unsigned short) (+(((((/* implicit */int) (signed char)41)) / (((/* implicit */int) arr_28 [i_1] [i_2]))))));
                }
                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71))) >= (var_9)))) ^ (((/* implicit */int) (_Bool)1))))) && ((((+(var_9))) < (((/* implicit */unsigned int) ((/* implicit */int) ((short) 2507202289U)))))))))));
                var_29 &= ((/* implicit */unsigned short) (signed char)44);
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) (~(((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                            var_31 = ((((/* implicit */int) ((signed char) 1864060413U))) >= (((/* implicit */int) ((signed char) arr_11 [i_0] [i_2] [i_10]))));
                            var_32 &= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)48536)) / (((((((/* implicit */int) (signed char)-84)) + (2147483647))) << (((245354639) - (245354639)))))));
                            var_33 = ((short) (~((-(2862230621U)))));
                        }
                    } 
                } 
            }
            for (unsigned short i_11 = 0; i_11 < 20; i_11 += 4) 
            {
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])) / (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0]))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */short) var_4);
                            var_36 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_44 [i_0] [i_1] [i_0] [i_1] [i_0])))));
                        }
                    } 
                } 
                var_37 = ((/* implicit */int) ((((_Bool) (short)32756)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)39))))) : ((+((+(0LL)))))));
            }
            for (unsigned short i_14 = 0; i_14 < 20; i_14 += 4) 
            {
                arr_48 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((376449259634747115LL) < (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))) >> (((((((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_0] [i_14] [i_14] [i_14] [i_0] [i_14])) / (((/* implicit */int) (unsigned short)62675))))) ? (max((arr_21 [i_0] [i_1] [i_14]), (((/* implicit */long long int) arr_36 [i_14] [i_14])))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)2861)) | (((/* implicit */int) (short)-7315))))))) + (5269LL)))));
                arr_49 [i_0] [i_0] &= ((/* implicit */long long int) min((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)17000)) < (((/* implicit */int) (unsigned short)2860))))), (var_12)));
            }
        }
    }
    var_38 = ((/* implicit */_Bool) var_6);
}
