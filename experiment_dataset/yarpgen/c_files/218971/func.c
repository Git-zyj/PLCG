/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218971
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 |= ((/* implicit */long long int) (unsigned short)54483);
                            arr_13 [i_0] [i_1] [i_2 - 1] [i_3] [i_2] [i_0] |= ((/* implicit */unsigned int) (-(((((/* implicit */int) min((arr_0 [i_3] [i_1]), (((/* implicit */unsigned short) arr_11 [i_3] [i_2] [i_1] [i_0]))))) / ((-(var_0)))))));
                            arr_14 [i_2] [i_1] [i_2] [(short)21] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)51820))))) || (((/* implicit */_Bool) ((var_8) / (((/* implicit */int) (unsigned short)51820))))))))));
                        }
                    } 
                } 
                var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) 3450750649U)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [10ULL] [i_1])) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0])))) : (min((((/* implicit */int) var_13)), (var_8)))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned short)51820))))))) : (-802910706)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            {
                arr_22 [i_4] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_21 [i_4] [(signed char)13]))))));
                arr_23 [i_4] = ((/* implicit */int) (_Bool)1);
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    for (int i_7 = 1; i_7 < 13; i_7 += 1) 
                    {
                        {
                            arr_28 [i_5] [i_4] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) arr_6 [i_7 + 1] [i_7]);
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) arr_19 [i_6] [(unsigned short)8] [i_6]))));
                            arr_29 [i_4] [i_4] [i_6] [i_7] [i_7 + 1] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
                        }
                    } 
                } 
                arr_30 [i_4] [i_4] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)1)) % (470441485))), (max((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_4] [i_4])) && ((_Bool)0)))), (min((var_11), (-1441781886)))))));
                arr_31 [i_5] [i_4] [i_4] = ((/* implicit */_Bool) (-(var_12)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) 
    {
        for (int i_9 = 0; i_9 < 14; i_9 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        for (signed char i_12 = 0; i_12 < 14; i_12 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) arr_18 [i_12] [i_9]);
                                var_18 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((arr_38 [i_8] [i_9] [i_8]) % (((/* implicit */int) arr_11 [4] [i_10] [i_9] [i_8]))))) ? (((/* implicit */int) ((arr_17 [0U]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)89)))))) : (((/* implicit */int) var_1))))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((unsigned short) (-(var_11)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_13 = 0; i_13 < 14; i_13 += 4) 
                {
                    for (int i_14 = 1; i_14 < 13; i_14 += 4) 
                    {
                        for (unsigned short i_15 = 4; i_15 < 13; i_15 += 1) 
                        {
                            {
                                arr_52 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_14 + 1]))) / (max((((/* implicit */long long int) arr_32 [i_8] [i_9])), (arr_33 [i_9])))))) ? (-1301869050) : (((/* implicit */int) (signed char)99))));
                                var_20 = 1967338627U;
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (_Bool)1))));
                                arr_53 [(unsigned char)12] [i_14] [i_15 - 3] = (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_4)) : (arr_38 [i_15 + 1] [i_13] [i_8]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_16 = 0; i_16 < 14; i_16 += 1) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (long long int i_18 = 2; i_18 < 12; i_18 += 1) 
                        {
                            {
                                arr_63 [i_8] [i_9] [(unsigned char)6] [i_16] [i_17] [i_18] = ((/* implicit */short) ((max((max((var_0), (((/* implicit */int) var_7)))), (((/* implicit */int) arr_57 [i_18 + 2] [i_18 - 1] [i_18])))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_18 + 2] [i_18] [i_18 + 1] [i_18 + 1] [i_18])) && ((!((_Bool)0))))))));
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_5))));
                                var_23 = ((/* implicit */short) ((unsigned char) arr_20 [i_18 - 1] [i_9]));
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (3072932810U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_18 - 1] [i_16] [i_16] [i_9] [i_9] [i_16])))))) ? (var_0) : ((-(((/* implicit */int) var_1))))));
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) var_8))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
