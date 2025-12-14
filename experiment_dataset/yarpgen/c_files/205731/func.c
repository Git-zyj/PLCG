/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205731
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)43)) + (((/* implicit */int) max((((/* implicit */short) (unsigned char)245)), (var_10))))))) ? ((((((_Bool)1) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_0 [i_0] [i_0])))) >> ((((-(((/* implicit */int) var_13)))) + (253))))) : (min((((int) arr_0 [i_0] [i_0])), (((/* implicit */int) arr_1 [i_0]))))));
        arr_3 [(short)19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_13)), ((+(((/* implicit */int) var_17))))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) max((max((var_6), (var_0))), (((/* implicit */unsigned char) arr_1 [i_0])))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        arr_6 [i_1 + 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned char) (_Bool)1))))) ? (((arr_4 [i_1 + 1] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-115))))) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) << (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 3] [i_1 - 1]))) : (((((/* implicit */_Bool) (short)31997)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1 - 1]))) : (arr_4 [i_1] [i_1 - 1]))));
        arr_7 [9LL] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) var_16)))), ((!(((/* implicit */_Bool) (short)17495))))))) : (((/* implicit */int) arr_1 [i_1 + 2]))));
        var_19 = ((/* implicit */short) max((((/* implicit */long long int) (~(((/* implicit */int) var_2))))), (arr_4 [i_1] [i_1])));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    {
                        var_20 += ((/* implicit */signed char) ((long long int) max((var_11), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)5509))))))));
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max((((int) (signed char)-2)), (((((((/* implicit */int) arr_1 [i_1 + 3])) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_1 - 1])) + (133))))))))));
                        var_22 = ((/* implicit */unsigned char) min((((/* implicit */long long int) 0)), (8359490237161620382LL)));
                    }
                } 
            } 
        } 
        arr_16 [i_1] [i_1] = ((/* implicit */unsigned int) (+((+(arr_14 [i_1 - 1] [i_1 + 1])))));
    }
    for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12157)) ? (arr_18 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_14)), ((unsigned char)103))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_11)))))))));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 13; i_6 += 1) 
        {
            for (long long int i_7 = 3; i_7 < 12; i_7 += 3) 
            {
                {
                    arr_25 [i_5] [i_7] = ((/* implicit */signed char) ((min((((/* implicit */int) ((signed char) arr_10 [i_5]))), (((((/* implicit */int) var_12)) << (((arr_4 [i_5] [i_6]) - (3865819055785544700LL))))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) || (((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5])))))));
                    arr_26 [i_5] [i_7] = ((/* implicit */signed char) (((+(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_18)))))) << (((((/* implicit */int) arr_9 [i_5] [i_6 - 1])) - (112)))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_12 [i_5] [i_5] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)62)))) : (((((/* implicit */_Bool) 240055944U)) ? (1876010992962710044LL) : (3640257153623657377LL)))));
        /* LoopSeq 3 */
        for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            arr_29 [i_5] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_8] [i_5])) || (((/* implicit */_Bool) arr_10 [i_5])))))) * (max((((/* implicit */long long int) var_0)), (arr_14 [i_5] [i_8])))));
            var_25 = ((/* implicit */signed char) (~(((((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) var_18)))) + (2147483647))) << (((((arr_10 [i_8]) + (306463104))) - (18)))))));
        }
        for (signed char i_9 = 3; i_9 < 12; i_9 += 1) 
        {
            arr_32 [i_5] [i_9] [i_9 + 1] = ((/* implicit */short) arr_19 [14]);
            arr_33 [i_5] [i_9 - 1] = ((/* implicit */signed char) (~(-679218984)));
        }
        for (signed char i_10 = 2; i_10 < 12; i_10 += 1) 
        {
            var_26 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_6)) - (((/* implicit */int) var_15)))) / ((+(((/* implicit */int) var_0))))));
            arr_36 [i_10] [i_10] = ((/* implicit */signed char) arr_13 [(short)16] [i_10] [i_5] [i_5]);
            arr_37 [i_5] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_5 [i_10 + 2] [i_10 + 1]), (((/* implicit */unsigned short) var_10))))) ? (((((/* implicit */int) arr_20 [i_5] [i_10 + 2])) & (((/* implicit */int) (signed char)-88)))) : (((/* implicit */int) ((signed char) arr_20 [(unsigned char)3] [i_10 + 1])))));
        }
        var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)120)) : ((((-(((/* implicit */int) (signed char)-44)))) >> (((((/* implicit */int) arr_9 [i_5] [i_5])) - (117)))))));
    }
    var_28 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-1)) < (((/* implicit */int) (short)-16616))))), (var_4))), (((/* implicit */unsigned long long int) (signed char)-113))));
    var_29 *= ((/* implicit */unsigned char) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) < (var_11))) ? ((((_Bool)1) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) 0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) (((+(2147483647))) <= (((/* implicit */int) min(((short)-1), (((/* implicit */short) (_Bool)1))))))))));
}
