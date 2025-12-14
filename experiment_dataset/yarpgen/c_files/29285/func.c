/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29285
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        arr_10 [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_4 [i_3] [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_3))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != ((~(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) var_3))));
                        var_17 = ((/* implicit */short) (~(((/* implicit */int) (short)8945))));
                    }
                    var_18 ^= ((/* implicit */long long int) arr_8 [i_1]);
                    /* LoopSeq 4 */
                    for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned int) (unsigned short)47298);
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_1] [i_2] [i_4])) <= (arr_9 [i_1]))))));
                        var_21 ^= ((/* implicit */unsigned int) ((((arr_0 [i_4] [i_0]) < (arr_0 [i_2] [i_1]))) ? (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) / (arr_0 [i_0] [i_4]))) <= ((-(arr_4 [i_0] [i_0] [i_0] [i_0])))))) : (arr_3 [11])));
                    }
                    for (unsigned long long int i_5 = 3; i_5 < 12; i_5 += 4) 
                    {
                        var_22 -= ((/* implicit */unsigned long long int) var_15);
                        arr_15 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = arr_13 [i_0] [i_2] [i_0] [i_0] [i_0];
                    }
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        arr_20 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) 4058581403U);
                        var_23 -= ((/* implicit */unsigned int) (+(13377713624270978118ULL)));
                    }
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            arr_28 [i_2] [i_1] [i_1] [i_2] [i_7] [i_8] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))) : ((~(var_15)))))), (min((((/* implicit */unsigned long long int) -844864072)), (17457767847374588546ULL)))));
                            arr_29 [i_0] [i_0] [(unsigned char)11] [i_2] [i_0] = ((/* implicit */unsigned int) (signed char)-38);
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (arr_8 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_7] [i_2] [i_1] [i_1]))))))));
                            arr_32 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_2] [i_7] [i_9])) ? (((/* implicit */long long int) arr_27 [i_0] [9U] [i_2] [i_2] [i_7] [i_2])) : (var_9))));
                            var_25 = ((/* implicit */unsigned int) (-((+(arr_4 [i_0] [i_1] [i_2] [i_7])))));
                            arr_33 [i_2] [i_1] [i_2] [i_7] = ((/* implicit */unsigned short) -351540493);
                        }
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            var_26 += ((/* implicit */signed char) (-((-(((/* implicit */int) var_13))))));
                            var_27 = ((/* implicit */_Bool) var_7);
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 3) /* same iter space */
                        {
                            var_28 *= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_34 [i_1] [i_0]))));
                            arr_39 [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */short) max((arr_7 [i_1]), (((/* implicit */unsigned short) ((short) arr_2 [i_1] [i_11])))));
                            var_29 = ((/* implicit */unsigned int) -8700877271803822952LL);
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 3) /* same iter space */
                        {
                            var_30 = ((/* implicit */signed char) ((unsigned short) ((short) (+(((/* implicit */int) var_7))))));
                            var_31 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((int) 236385892U)))));
                            var_32 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1])) - (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-119)))))));
                            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (unsigned char)159))));
                        }
                        var_34 *= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | ((+(var_1)))));
                    }
                    arr_42 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((signed char) var_11));
                }
            } 
        } 
        arr_43 [i_0] [4U] = ((((/* implicit */_Bool) arr_37 [4ULL] [i_0] [i_0] [i_0])) ? (((((arr_19 [i_0] [i_0] [i_0] [i_0]) <= (((/* implicit */unsigned long long int) var_15)))) ? (((unsigned int) 2190844500581883094ULL)) : (arr_11 [i_0] [10U] [i_0] [10U] [i_0]))) : (((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((unsigned int) arr_13 [i_0] [0ULL] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) 1151922279)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0]))) : (236385906U))))));
    }
    var_35 = ((((/* implicit */_Bool) ((var_15) & (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) 4258436436U)) : (var_11)))))) ? (((((/* implicit */unsigned long long int) var_0)) / (((unsigned long long int) 707054986)))) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))))), (max((((/* implicit */unsigned long long int) (signed char)86)), (13377713624270978101ULL))))));
    var_36 = ((/* implicit */unsigned int) var_2);
    var_37 = ((/* implicit */unsigned int) max((var_9), (((/* implicit */long long int) var_12))));
    var_38 = ((/* implicit */int) var_6);
}
