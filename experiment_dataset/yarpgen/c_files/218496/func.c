/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218496
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
    var_18 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (unsigned short)3200))))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) var_10)) < (((((((/* implicit */_Bool) 6946385487415620682ULL)) ? (1048575LL) : (((/* implicit */long long int) var_15)))) | (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) | (((/* implicit */int) var_1)))))))));
                var_20 = ((/* implicit */unsigned char) ((unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (signed char)-35)) <= (((/* implicit */int) (_Bool)0))))), ((+(((/* implicit */int) (unsigned char)255)))))));
                var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            {
                var_22 ^= ((/* implicit */short) arr_1 [i_3]);
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) min((((1073741823U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96))))), (((/* implicit */unsigned int) ((var_8) <= (((/* implicit */int) arr_2 [4LL] [i_2])))))));
                                var_24 = ((/* implicit */unsigned short) max((min((min((16711741850986079060ULL), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned int) arr_12 [9LL] [i_2] [8U] [8LL] [i_4] [i_5] [i_6]))))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [(short)1] [i_6]))) <= (arr_5 [i_2] [(_Bool)1]))) ? (((772364803360273031ULL) % (((/* implicit */unsigned long long int) var_17)))) : (var_2)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        for (short i_9 = 4; i_9 < 10; i_9 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) var_13);
                                var_26 += ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)27685)) ? (((/* implicit */int) (unsigned short)56719)) : (((/* implicit */int) (short)-3270))))), (min((((/* implicit */unsigned long long int) arr_17 [i_2] [i_3] [i_7] [i_9 - 4])), (min((((/* implicit */unsigned long long int) arr_1 [i_2])), (1503157561992096901ULL)))))));
                                var_27 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((arr_11 [i_3] [i_9 - 1] [i_9 + 1] [i_9 - 1]), (((/* implicit */unsigned char) var_14))))), (max((17910371290218030406ULL), (8778379718934381873ULL)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_10 = 0; i_10 < 20; i_10 += 2) 
    {
        for (long long int i_11 = 0; i_11 < 20; i_11 += 2) 
        {
            {
                var_28 = max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_10] [13ULL])) ? (((/* implicit */int) arr_21 [i_10] [i_10])) : (((/* implicit */int) arr_21 [i_10] [i_11]))))), (((((/* implicit */_Bool) -2079571620)) ? (min((arr_23 [i_10] [i_10] [i_11]), (((/* implicit */long long int) -1)))) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [(unsigned char)19]))))));
                var_29 = ((/* implicit */signed char) ((((/* implicit */int) max((arr_22 [i_11]), (max((var_7), (arr_22 [i_10])))))) >= (((/* implicit */int) arr_24 [7U] [i_11]))));
                var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((unsigned char) var_12)))));
                /* LoopNest 3 */
                for (int i_12 = 0; i_12 < 20; i_12 += 3) 
                {
                    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        for (unsigned char i_14 = 1; i_14 < 17; i_14 += 1) 
                        {
                            {
                                var_31 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_14 - 1] [i_14 + 1] [i_14] [i_14 + 3])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_10] [i_12] [(short)2] [i_14])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))), (((arr_30 [i_14 + 2] [i_14 + 1] [i_14 + 3]) & (arr_30 [i_14 + 1] [i_14 + 3] [i_14 + 1])))));
                                var_32 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 1034275517U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-24255))) : (arr_23 [i_11] [i_12] [i_14 + 3]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 787162468)))))))) ? (((/* implicit */unsigned long long int) (~(var_10)))) : ((+(arr_29 [i_10] [i_13] [i_12] [i_13]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
