/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225510
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 3; i_2 < 19; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_18 &= ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_17))))), ((~(arr_6 [i_1] [i_1])))))), (((((/* implicit */_Bool) ((signed char) (signed char)27))) ? (min((var_0), (((/* implicit */unsigned long long int) (signed char)-15)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                                var_19 = ((/* implicit */unsigned char) arr_10 [(short)0] [i_4 - 2] [i_3 + 1] [i_4 - 2]);
                            }
                        } 
                    } 
                    var_20 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_2])) ? (arr_11 [i_0] [(unsigned short)16] [i_0] [i_1] [16LL] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (((-3289884630552412664LL) & (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (arr_3 [i_0] [i_1] [i_1]))))));
                    arr_14 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */int) ((signed char) max((-2044070889), (((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [(signed char)11] [i_2] [i_2 - 2] [i_2])), ((unsigned short)18936)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (long long int i_6 = 1; i_6 < 19; i_6 += 2) 
                        {
                            {
                                arr_20 [i_2] [i_1] [i_2] [i_5] [i_6 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_14))) || (((/* implicit */_Bool) max(((+(((/* implicit */int) arr_13 [i_2])))), (((/* implicit */int) arr_5 [i_0] [i_0] [i_2 + 1] [i_2])))))));
                                var_21 = ((/* implicit */int) arr_19 [i_0] [i_0] [i_2] [(unsigned short)5] [i_6] [i_1] [10LL]);
                            }
                        } 
                    } 
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_7 = 1; i_7 < 19; i_7 += 2) /* same iter space */
                {
                    arr_24 [i_7] [i_1] [i_7 - 1] [i_7] = ((/* implicit */unsigned char) (signed char)-27);
                    arr_25 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19273)) ? (((/* implicit */int) arr_15 [i_7] [i_0] [i_0] [(short)16] [i_0])) : (((/* implicit */int) arr_5 [i_7] [i_1] [i_0] [i_7]))))) ? (((/* implicit */unsigned long long int) arr_17 [i_0] [i_7 + 1] [(unsigned char)16] [i_7 + 1] [i_7 + 1])) : (3723254055631668323ULL)));
                }
                /* vectorizable */
                for (unsigned char i_8 = 1; i_8 < 19; i_8 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        var_22 ^= ((/* implicit */unsigned short) (unsigned char)233);
                        arr_30 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (arr_9 [i_0] [(unsigned char)12] [(unsigned char)18] [(unsigned char)12]) : (((/* implicit */unsigned long long int) var_16))));
                    }
                    for (short i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        arr_35 [i_0] [i_0] [i_10] [i_8 - 1] [(unsigned char)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8 - 1])) || (((/* implicit */_Bool) arr_10 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 + 1]))));
                        var_23 = ((/* implicit */long long int) var_4);
                    }
                    var_24 = ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) (unsigned short)40309)))));
                    var_25 *= ((/* implicit */unsigned short) (((_Bool)0) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-27526))) % (-6575988542168781878LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_1] [i_1] [i_1] [i_1]))))));
                    arr_36 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)18])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))));
                    arr_37 [i_0] [i_0] [i_8 - 1] = ((/* implicit */unsigned char) var_17);
                }
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) max((var_26), (6575988542168781877LL)));
    var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_1)))))) ? ((~((~(var_3))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_13))))))))));
}
