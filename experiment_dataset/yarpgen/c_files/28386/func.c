/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28386
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
    for (signed char i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_15 = (+(((/* implicit */int) ((-2147483646) < (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-64)))))))));
                                arr_15 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) var_14);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (unsigned char i_6 = 1; i_6 < 13; i_6 += 3) 
                    {
                        {
                            var_16 += ((/* implicit */unsigned char) 36028797018963967LL);
                            arr_22 [i_6 + 1] [i_5] [i_1] [i_0] = var_3;
                            arr_23 [i_0] [i_0] [i_1] [i_0] [i_5] [(unsigned short)9] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) -3922187290512700755LL)), (arr_12 [i_0 + 3] [i_0 - 4] [i_1] [(unsigned char)6] [i_6 + 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)220)) < (((/* implicit */int) arr_19 [i_6 - 1] [i_6 + 2] [(unsigned char)8] [i_6 + 2] [i_6] [i_6 - 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 1; i_7 < 22; i_7 += 2) 
    {
        for (unsigned char i_8 = 1; i_8 < 22; i_8 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_9 = 2; i_9 < 21; i_9 += 1) 
                {
                    for (int i_10 = 4; i_10 < 22; i_10 += 2) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max(((unsigned char)48), (((/* implicit */unsigned char) (_Bool)1))))), (min((((/* implicit */unsigned int) arr_32 [20LL] [i_8])), ((+(var_14)))))));
                                arr_37 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */long long int) -18)) < (((((/* implicit */_Bool) arr_25 [i_7 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7 + 2]))) : (-1573895094999634153LL)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (long long int i_14 = 0; i_14 < 24; i_14 += 4) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) var_13)) ? (18446744073709551585ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) ^ (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_9)) ? (957317935) : (((/* implicit */int) var_1))))))));
                                arr_47 [i_7] [(_Bool)1] [i_13] [i_13] [i_13] [i_13] [i_14] = ((/* implicit */unsigned char) var_13);
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) max(((-(((((/* implicit */_Bool) (unsigned char)12)) ? (1830017556U) : (((/* implicit */unsigned int) 921172115)))))), (((/* implicit */unsigned int) ((unsigned char) var_4))))))));
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_38 [i_7 - 1]) % (arr_38 [i_7 + 1])))) ? (min((1083095933974859823LL), (((/* implicit */long long int) (unsigned char)152)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((957317935) >> (((4194303LL) - (4194279LL)))))) ? (((/* implicit */int) arr_45 [i_7 + 2] [i_8] [i_8] [i_12] [i_13] [i_14] [i_14])) : (var_0)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 1) 
                {
                    for (unsigned char i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        for (short i_17 = 0; i_17 < 24; i_17 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) ((((max((1588822981U), (((/* implicit */unsigned int) (unsigned char)196)))) >> (((arr_34 [i_7]) * (((/* implicit */int) arr_32 [i_7] [i_17])))))) < (((/* implicit */unsigned int) ((/* implicit */int) max((arr_33 [i_8 + 1] [i_8] [i_7 + 1] [i_16] [i_8 + 1]), (((/* implicit */short) arr_36 [i_8 + 2] [12LL] [i_15]))))))));
                                var_22 = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) arr_46 [(_Bool)1] [i_8 + 1] [i_8 + 1] [i_16] [i_17] [(_Bool)1])) < (((/* implicit */int) (unsigned char)177)))));
                                arr_56 [i_15] [i_15] [(unsigned short)9] [(_Bool)1] [i_15] = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_16] [i_7 + 1])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
