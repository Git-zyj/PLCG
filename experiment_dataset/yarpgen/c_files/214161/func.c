/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214161
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
    var_11 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) arr_0 [i_2]);
                                var_13 &= ((/* implicit */unsigned short) ((int) (~(arr_13 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] [i_4]))));
                                arr_14 [i_0] [i_2] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) arr_8 [i_4] [i_1] [i_4] [i_3]);
                                var_14 = ((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_2] [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (arr_17 [i_5] [i_0]))));
                            var_16 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_16 [i_0] [i_0])))), (((/* implicit */int) arr_3 [i_1] [i_1]))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                            {
                                arr_23 [i_0] [i_1] [i_0] [i_6] [i_0] [i_7] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11364594923823930955ULL)) ? (538778932) : (((/* implicit */int) (signed char)91))))) : ((+(arr_17 [i_6] [i_7])))));
                                arr_24 [i_7] [i_7] [i_7] [2LL] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_5] [i_7]);
                            }
                            for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
                            {
                                arr_28 [(signed char)11] [i_5] [i_1] = ((/* implicit */short) max((min((((/* implicit */long long int) arr_7 [i_1] [i_0])), (arr_11 [i_1] [i_5] [i_1] [i_5]))), (((/* implicit */long long int) min(((unsigned short)52627), (((/* implicit */unsigned short) (unsigned char)13)))))));
                                arr_29 [i_0] [i_0] [11ULL] [i_0] [i_0] = ((/* implicit */signed char) ((long long int) (short)-1507));
                            }
                            for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                            {
                                var_17 ^= ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_0] [11U] [i_9])) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_16 [i_1] [i_5])) : (((/* implicit */int) ((((/* implicit */_Bool) 876305353996150339ULL)) && (((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_5] [i_6])))))));
                                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((unsigned int) ((int) (short)32759))))));
                            }
                            for (int i_10 = 0; i_10 < 12; i_10 += 1) 
                            {
                                arr_37 [i_0] [i_0] [i_1] [i_1] [i_5] [i_6] [i_10] = ((/* implicit */unsigned long long int) (!((((_Bool)1) && (((/* implicit */_Bool) (signed char)57))))));
                                arr_38 [i_0] [i_1] [i_5] [i_6] [i_5] [i_10] [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_6])))))));
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (arr_9 [i_0] [i_0] [i_0] [i_10])));
                            }
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_11 = 4; i_11 < 9; i_11 += 4) 
                {
                    arr_41 [i_1] [i_11] = ((/* implicit */unsigned char) arr_36 [i_0] [i_1] [i_1] [i_11] [i_11] [i_1]);
                    var_20 = ((/* implicit */unsigned char) (_Bool)1);
                }
                /* LoopNest 2 */
                for (unsigned char i_12 = 2; i_12 < 8; i_12 += 4) 
                {
                    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        {
                            arr_47 [i_0] [i_0] [i_12 - 2] [i_13] [i_12 - 2] = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0] [i_13]);
                            var_21 &= ((/* implicit */unsigned long long int) arr_16 [i_1] [i_12]);
                            var_22 ^= ((/* implicit */unsigned char) ((short) (_Bool)1));
                        }
                    } 
                } 
            }
        } 
    } 
}
