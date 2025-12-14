/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230130
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
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_19 = ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) arr_10 [i_0 - 1] [i_2 + 2] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_5 [i_2] [i_3 + 1]))));
                            var_20 -= arr_3 [i_1] [i_1];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 1; i_5 < 13; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) (!(((((/* implicit */unsigned long long int) arr_11 [i_0] [i_4])) <= (var_2)))));
                            arr_15 [i_1] [i_4] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((max((((int) arr_3 [i_5] [i_1])), ((~(arr_11 [i_1] [i_1]))))) < (((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (var_18) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)185)) < (((/* implicit */int) var_15)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        for (int i_7 = 4; i_7 < 12; i_7 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 3337271471U)) ? (((/* implicit */int) (short)-5001)) : (((/* implicit */int) (short)0)))))), (((unsigned long long int) (+(((/* implicit */int) arr_16 [i_6])))))));
                                var_23 = ((/* implicit */int) max((var_23), (min((((/* implicit */int) arr_21 [i_6] [i_10])), ((-(((/* implicit */int) (short)0))))))));
                                var_24 = ((((/* implicit */_Bool) arr_23 [i_10] [i_7] [i_7] [i_6])) ? ((~(((/* implicit */int) arr_23 [i_8 + 1] [i_7] [i_7] [i_7])))) : (((/* implicit */int) max((arr_23 [i_9] [i_7] [i_7] [i_6]), (arr_23 [i_9] [i_7] [i_7] [i_7 + 3])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_11 = 3; i_11 < 14; i_11 += 1) 
                {
                    for (signed char i_12 = 0; i_12 < 15; i_12 += 1) 
                    {
                        for (short i_13 = 2; i_13 < 13; i_13 += 4) 
                        {
                            {
                                var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) arr_16 [i_6])), (var_16))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_12] [i_13] [i_13] [i_6])))))) ? (((((1122983433920574040ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6] [i_6]))))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_10)), (arr_17 [i_12] [i_7])))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-14291)))))));
                                var_26 = ((/* implicit */_Bool) ((short) arr_32 [i_13] [i_11 - 1] [i_7] [i_7] [i_11] [i_11 - 3]));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
