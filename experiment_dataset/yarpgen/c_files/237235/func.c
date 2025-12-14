/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237235
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) % ((+(((((/* implicit */int) var_6)) & (((/* implicit */int) (unsigned char)246))))))));
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_17)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (max((((/* implicit */unsigned long long int) var_13)), (7ULL)))))) ? (((min((((/* implicit */unsigned long long int) var_18)), (var_0))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)14))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_16)) <= (((/* implicit */int) (signed char)0)))))));
    var_21 = ((((/* implicit */int) var_16)) < (((/* implicit */int) var_2)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned long long int) var_16);
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0 + 2] [i_1] [1] [i_3] [i_3 + 3] [i_1] = ((/* implicit */unsigned short) max((min((var_14), (((/* implicit */short) var_13)))), (((/* implicit */short) ((((var_17) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))))) != (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 2; i_4 < 10; i_4 += 1) 
                            {
                                arr_15 [(unsigned char)8] [i_3 + 3] [(unsigned char)6] [(unsigned char)6] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))) : (-2758088847322380784LL))), (((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) arr_6 [i_0] [(unsigned short)0] [(unsigned short)0] [i_0 - 1]))))))))));
                                arr_16 [i_0] [i_0] [i_0 - 2] [6] [i_0 + 1] [i_0] [i_0] = ((/* implicit */signed char) (+((-((-(((/* implicit */int) (unsigned char)226))))))));
                                arr_17 [0] [i_1] [i_1] = (unsigned char)254;
                                arr_18 [i_0] [i_1] [i_2 - 1] [i_1] [i_4] [(unsigned char)5] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((unsigned short) (unsigned short)8822))) : (((/* implicit */int) (unsigned char)15)))), (max((((((/* implicit */int) (unsigned char)91)) / (((/* implicit */int) (unsigned short)8822)))), (((/* implicit */int) min((((/* implicit */unsigned char) var_10)), ((unsigned char)1))))))));
                                arr_19 [i_0 - 2] [i_1] = ((unsigned long long int) ((signed char) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */unsigned long long int) -1992986664)) : (15307588187494177216ULL))));
                            }
                            arr_20 [i_0 + 1] [(unsigned char)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_14)))) | (16069451465870929165ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1173)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59398)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)15))))) : (((arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] [1LL]) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)74)), ((unsigned short)8432)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_28 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((min((var_17), (((/* implicit */long long int) arr_24 [8] [8] [i_6])))) > (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)1173)) : (max((-817501344), (((/* implicit */int) (unsigned char)246)))))))));
                            /* LoopSeq 2 */
                            for (short i_7 = 0; i_7 < 11; i_7 += 4) 
                            {
                                arr_31 [i_0] [6] [i_1] [i_5] [i_6] [i_7] = ((/* implicit */long long int) var_15);
                                arr_32 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [4ULL] = ((/* implicit */long long int) ((unsigned char) (~((~(-854504550))))));
                                arr_33 [i_7] [i_7] [i_6] [i_5] [i_1] [i_0] = var_6;
                                arr_34 [i_0 + 1] [i_0] [i_0 + 2] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)19);
                                arr_35 [i_0] [i_1] [i_5] [i_6] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [7ULL] [i_1] [i_5] [i_0 + 2])) ? (((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_5] [i_0 + 2]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)24809)))))));
                            }
                            for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                            {
                                arr_38 [i_0] [i_1] [i_0] [i_1] [i_8] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_27 [i_8] [i_6] [i_5] [(unsigned char)7] [i_0])) : (((/* implicit */int) (unsigned char)134))))))));
                                arr_39 [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)252)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) (unsigned short)8413))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) * (var_5)))));
                                arr_40 [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) arr_13 [i_8] [i_6] [7U] [i_0 + 2] [i_0] [i_0 + 2]);
                                arr_41 [i_0] [(signed char)1] [i_0] [i_5] [i_8] [(unsigned short)0] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-40))))) ? (((/* implicit */unsigned long long int) var_18)) : (((((/* implicit */_Bool) var_3)) ? (arr_5 [8LL] [(short)10] [i_6]) : (((/* implicit */unsigned long long int) var_12))))))) ? (((/* implicit */int) ((signed char) (unsigned char)246))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)246))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_16))))));
                            }
                            arr_42 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */short) (unsigned char)0);
                            arr_43 [i_0] [i_0] [i_0] [i_0 + 2] = ((/* implicit */unsigned char) (+((+(var_9)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
