/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40172
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    arr_7 [i_2] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)0);
                    var_20 = ((/* implicit */short) var_19);
                    arr_8 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3510230620U)) ? (1484068807U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)2)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_13 [i_2] [(short)3] = ((/* implicit */unsigned int) arr_1 [i_0]);
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((((/* implicit */long long int) (+(var_17)))), (((((((/* implicit */long long int) ((/* implicit */int) arr_3 [19] [13ULL]))) ^ (arr_12 [i_4]))) / (((/* implicit */long long int) ((2810898476U) * (var_16)))))))))));
                            }
                        } 
                    } 
                    arr_14 [(unsigned char)20] [i_1] [i_2] [i_2] |= ((/* implicit */int) ((2810898475U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47373)))));
                }
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    arr_17 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((1484068797U) / (2810898498U))) > (((/* implicit */unsigned int) ((/* implicit */int) (((~(1484068797U))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1])))))))));
                    arr_18 [i_0] [i_0] [i_0] [i_5] = 2147483647;
                    var_22 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) & (((((/* implicit */int) (unsigned char)189)) / (((/* implicit */int) (unsigned char)1))))))), (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_5]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))))))) : (max((var_19), (((/* implicit */unsigned long long int) var_18))))))));
                }
                var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_19)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_17)) <= (var_15)))))));
                arr_19 [i_0] [i_0] [i_0] = var_2;
                var_24 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2810898489U)) && (((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) (signed char)-7))));
            }
        } 
    } 
    var_25 ^= ((/* implicit */unsigned short) var_17);
    var_26 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))) * (1484068797U)));
    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(var_15)))) && (((17054742137305408959ULL) != (((/* implicit */unsigned long long int) var_10)))))))) != (((((/* implicit */_Bool) ((2703381528U) + (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_5)))) : (var_12))))))));
}
