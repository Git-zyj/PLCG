/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222219
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
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned char) max((min((arr_1 [i_0 - 2]), (arr_1 [i_0 - 2]))), (min((arr_1 [i_0 - 2]), (arr_1 [i_0 - 1])))));
        arr_3 [i_0] = ((/* implicit */short) ((arr_0 [i_0]) >= (((((1656474305) <= (((/* implicit */int) (short)15809)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15793))) : (((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0]) : (var_8)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned int) (short)-15793);
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1])))))))))));
        arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (arr_7 [i_1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) * (arr_7 [i_1]))) : ((+(arr_7 [i_1])))));
    }
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) min((arr_11 [i_2]), (arr_11 [i_2]))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            for (unsigned char i_4 = 1; i_4 < 17; i_4 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_10 [i_4 + 3] [i_4 + 2])))), (((/* implicit */int) arr_10 [i_4 + 1] [i_4 + 1])))))));
                    var_12 = ((/* implicit */signed char) (unsigned char)255);
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned short)19400), (((/* implicit */unsigned short) (unsigned char)220))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)32010))))) / (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_11 [i_4])) * (((/* implicit */int) arr_18 [i_3]))))))))))));
                    /* LoopSeq 4 */
                    for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        arr_22 [i_2] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_4 + 3] [i_3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_2]))))) ? (((/* implicit */int) arr_20 [i_4 + 3] [i_4 - 1] [i_4 + 2])) : (((/* implicit */int) arr_10 [i_4 - 1] [i_4 + 3])))))));
                        var_14 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_2] [i_3] [i_4] [i_4]))))) <= (((/* implicit */int) arr_20 [i_3] [i_4 - 1] [i_4]))));
                        arr_23 [i_2] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_16 [i_2] [i_4] [i_2])))) | (((/* implicit */int) ((((/* implicit */int) ((signed char) var_6))) >= (((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [i_5])))))));
                        arr_24 [i_2] [i_4] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4992554766745321375ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)99)))))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (short)252))));
                        var_16 = min((arr_17 [i_2] [i_6] [i_4] [i_6]), (arr_19 [i_2] [i_2] [i_4 + 3] [i_4 - 1] [i_6] [i_6]));
                    }
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
                    {
                        arr_29 [i_2] [i_4] [i_4] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)37998))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_4 + 1] [i_4] [i_4 + 3]))))) : (4294967295U)));
                        arr_30 [i_2] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_18 [i_4]);
                        /* LoopSeq 1 */
                        for (short i_8 = 1; i_8 < 19; i_8 += 1) 
                        {
                            arr_33 [i_4] [i_4] [i_4] [(unsigned char)10] [i_8] [i_4] [i_7] = ((/* implicit */long long int) (unsigned short)3125);
                            var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2] [8] [i_4 + 1] [8]))) <= (((((/* implicit */_Bool) arr_31 [i_4 + 1] [i_8 + 1] [i_8] [i_8] [i_8 + 1])) ? ((~(arr_31 [i_2] [i_3] [i_3] [i_7] [i_8 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_7])))))));
                            var_18 &= ((/* implicit */unsigned char) (short)-11473);
                            arr_34 [i_4] [(unsigned char)3] [i_4] [i_3] [i_4] = ((/* implicit */short) arr_15 [i_8] [i_4]);
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_31 [i_7] [i_3] [i_4 - 1] [i_7] [i_8 - 1])))) ? (((/* implicit */int) ((arr_31 [i_8] [i_3] [i_4 + 2] [i_8] [i_8 + 1]) == (arr_31 [i_3] [i_3] [i_4 + 1] [i_2] [i_8 - 1])))) : (((/* implicit */int) ((arr_31 [i_2] [i_3] [i_4 - 1] [i_3] [i_8 + 1]) != (((/* implicit */unsigned int) -2074561204)))))));
                        }
                        arr_35 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (signed char)50);
                        arr_36 [i_2] [i_7] [i_4] [i_4] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_31 [i_2] [i_4 + 3] [i_4 + 3] [i_7] [i_3])) ? (((/* implicit */unsigned long long int) arr_31 [i_2] [i_4 + 3] [i_4 + 2] [i_3] [i_3])) : (arr_27 [i_4 + 3] [i_4 + 3] [i_4 - 1] [i_4 - 1] [i_4 - 1])))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
                    {
                        var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_2] [i_4 + 1] [i_4 + 3])) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (unsigned short)27538)))) : (((/* implicit */int) max((arr_14 [i_2] [i_3]), (((/* implicit */unsigned char) (signed char)114))))))) : (((int) arr_21 [i_2] [i_3] [i_2] [i_2]))));
                        arr_41 [i_2] [i_4] [i_3] [i_3] [i_4] [i_9] = ((/* implicit */long long int) (_Bool)1);
                    }
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_5))));
        var_22 = ((/* implicit */long long int) arr_17 [i_2] [i_2] [i_2] [i_2]);
    }
    var_23 = ((/* implicit */signed char) 36028797018963967ULL);
    var_24 = ((/* implicit */unsigned char) min((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -671287871)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) & ((-(2397203012U))))))));
    var_25 = ((/* implicit */short) var_0);
}
