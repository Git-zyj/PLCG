/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248665
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
    for (signed char i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (var_11)));
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) <= (((/* implicit */int) var_0)))) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_2 [i_0] [i_0 + 1])))) + (arr_0 [i_0 - 1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 4; i_2 < 12; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 13; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                arr_18 [i_5] [i_3] [i_3] [i_3] [i_2] [i_6] = ((/* implicit */unsigned char) ((((min((((/* implicit */unsigned long long int) arr_16 [i_5])), (var_11))) > (5422787097100918596ULL))) ? (((/* implicit */int) ((arr_6 [i_2 - 2]) <= ((+(arr_17 [i_2] [i_3] [i_4] [i_5 - 3] [i_4])))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((5422787097100918579ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-48))))))) == (5422787097100918580ULL))))));
                                var_16 = ((/* implicit */signed char) (((~(((/* implicit */int) var_8)))) | (((/* implicit */int) (unsigned char)222))));
                                arr_19 [i_2 + 2] [i_3] [i_3] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2]))) <= (((((/* implicit */_Bool) 5422787097100918580ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (13023956976608633022ULL)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) var_10);
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) (unsigned char)235))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 4; i_7 < 14; i_7 += 3) 
                    {
                        for (signed char i_8 = 2; i_8 < 13; i_8 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_6 [i_3 + 1]))))));
                                arr_25 [i_8] [i_8] [i_4 + 2] [i_8] [i_2 + 1] = 13023956976608632994ULL;
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (max((((((/* implicit */_Bool) var_7)) ? (5422787097100918565ULL) : (5422787097100918580ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_24 [3ULL] [i_3] [i_4] [i_7] [(unsigned char)0] [i_7]))))))) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)208))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) ^ (arr_24 [i_2] [i_3] [i_3] [i_7] [i_3] [i_4 + 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_26 [(unsigned char)14] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_20 [i_2 - 1] [i_2 - 2] [i_2 - 4] [i_2 - 4] [i_2])) + (((/* implicit */int) arr_20 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2] [i_2 + 2])))), (((/* implicit */int) max((var_2), (var_5))))));
        /* LoopNest 3 */
        for (unsigned char i_9 = 0; i_9 < 15; i_9 += 4) 
        {
            for (unsigned char i_10 = 0; i_10 < 15; i_10 += 4) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    {
                        var_21 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((unsigned long long int) var_10)) : (var_13))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                        /* LoopSeq 2 */
                        for (signed char i_12 = 1; i_12 < 14; i_12 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) + (((/* implicit */int) ((signed char) ((9489260337397335317ULL) >> (((((/* implicit */int) (unsigned char)251)) - (218)))))))));
                            arr_36 [i_9] [i_9] [i_12] [i_9] [i_12] = ((/* implicit */unsigned char) arr_10 [i_2 - 3] [i_9]);
                            var_23 = ((/* implicit */unsigned char) var_12);
                        }
                        for (signed char i_13 = 1; i_13 < 14; i_13 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) < (arr_22 [i_10])))), ((signed char)83)))) / (((/* implicit */int) arr_7 [7ULL]))));
                            arr_40 [i_2] [i_9] [i_2] [i_2] [i_13] [i_9] [i_9] = var_13;
                        }
                    }
                } 
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned char) min((var_25), (var_0)));
}
