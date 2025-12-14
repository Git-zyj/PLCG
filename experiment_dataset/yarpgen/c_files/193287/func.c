/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193287
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned char i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_3 - 1] [i_0 - 2]), (((/* implicit */unsigned short) (unsigned char)246))))) ? (((/* implicit */int) max((((((/* implicit */_Bool) arr_11 [i_0 - 2] [i_1] [i_1] [i_3] [i_4 + 2])) || (((/* implicit */_Bool) -2793248970821955171LL)))), (((((/* implicit */_Bool) -2793248970821955171LL)) && (((/* implicit */_Bool) var_1))))))) : (((/* implicit */int) ((((/* implicit */_Bool) 4194303)) || (((/* implicit */_Bool) 15338581111546883441ULL)))))));
                                arr_12 [i_0] = ((/* implicit */long long int) (unsigned char)66);
                                var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) (unsigned char)37))));
                                var_12 = ((/* implicit */long long int) (~((~((~(var_6)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        {
                            arr_20 [i_0 + 1] [i_1] [i_5 + 1] [i_0] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(2793248970821955171LL))), ((~(16383LL)))))) ? (var_4) : (((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)218))) : (1010352955470839687LL)))));
                            var_13 = ((/* implicit */long long int) min(((+(min((((/* implicit */unsigned long long int) (unsigned short)7022)), (arr_13 [i_0 + 1] [i_1] [(unsigned char)12] [i_0]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)1)))))));
                            arr_21 [i_6] [i_0] [i_6] [i_5] [i_0] [i_0] = (-((-(((/* implicit */int) (unsigned char)240)))));
                            var_14 = ((min((((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)161))))), ((~(var_1))))) | (((((((/* implicit */unsigned long long int) arr_11 [(unsigned char)17] [i_1] [i_0] [i_6] [i_0 - 2])) - (15338581111546883441ULL))) - (((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 20; i_8 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) < (((/* implicit */unsigned long long int) var_8)))))) - (arr_5 [i_1] [i_1] [i_7] [i_8]))) * ((+(((unsigned long long int) (unsigned char)239))))));
                            arr_27 [i_0] [i_0] [i_7] [i_7] = ((/* implicit */unsigned char) arr_5 [i_0] [i_8] [i_7] [i_0]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        for (unsigned short i_11 = 1; i_11 < 19; i_11 += 4) 
                        {
                            {
                                arr_36 [i_0] [i_0] [i_1] [i_9] [i_10] [i_11] = ((/* implicit */long long int) var_0);
                                arr_37 [i_11] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0])), (var_4)))))))) : (((((((/* implicit */_Bool) 15338581111546883441ULL)) ? (0LL) : (1284490894895734012LL))) - (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)7022)) * (((/* implicit */int) var_2)))))))));
                                arr_38 [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_17 [i_0 - 2] [i_0 - 2] [i_0] [i_11 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_4))) << (((((/* implicit */int) arr_0 [i_11 + 1])) - (4219)))));
                                arr_39 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */int) (~(((long long int) min((-1823226582298413290LL), (var_8))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_12 = 0; i_12 < 25; i_12 += 1) 
    {
        for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 1) 
        {
            for (long long int i_14 = 0; i_14 < 25; i_14 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 2; i_15 < 21; i_15 += 2) 
                    {
                        for (int i_16 = 0; i_16 < 25; i_16 += 2) 
                        {
                            {
                                arr_50 [i_12] [i_13] [i_14] [i_15] [i_16] = (i_12 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -6270061395760667263LL))))) >> (((((arr_47 [i_12] [i_12] [i_12] [i_16]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) - (10054830301176404379ULL)))))) ? (((unsigned long long int) 5381868037271617373LL)) : (((/* implicit */unsigned long long int) ((int) arr_43 [i_12] [i_15 + 2] [i_15 + 2])))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -6270061395760667263LL))))) >> (((((((arr_47 [i_12] [i_12] [i_12] [i_16]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) - (10054830301176404379ULL))) - (8412994744992787077ULL)))))) ? (((unsigned long long int) 5381868037271617373LL)) : (((/* implicit */unsigned long long int) ((int) arr_43 [i_12] [i_15 + 2] [i_15 + 2]))))));
                                var_16 = ((/* implicit */int) ((unsigned long long int) (!(((((/* implicit */int) (unsigned char)12)) < (((/* implicit */int) var_2)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 4) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 25; i_18 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) min((-5904934549710431560LL), (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))))) ? (min((arr_41 [i_12]), (arr_41 [i_14]))) : (((/* implicit */unsigned long long int) min((((var_9) ^ (((/* implicit */long long int) arr_40 [i_12])))), (((/* implicit */long long int) min((var_0), (((/* implicit */unsigned short) (unsigned char)37))))))))));
                                arr_56 [i_12] [13ULL] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70))) > (var_6))) ? (arr_43 [i_18] [i_13] [i_12]) : (((/* implicit */unsigned long long int) -1233950063))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_19 = 0; i_19 < 25; i_19 += 1) 
                    {
                        for (long long int i_20 = 0; i_20 < 25; i_20 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (~(((long long int) -1609835851637401512LL))));
                                arr_63 [i_12] [i_13] [i_12] = ((min((((((/* implicit */_Bool) arr_59 [i_20] [i_19] [i_12] [i_12] [i_13] [i_12])) ? (14846641227769405018ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3473))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_61 [i_12])) ? (var_5) : (((/* implicit */int) arr_51 [i_12] [i_12] [2LL] [i_12] [i_12]))))))) >> (((((/* implicit */_Bool) arr_59 [i_20] [i_13] [i_14] [i_12] [i_14] [i_20])) ? (0LL) : (1609835851637401512LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
