/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219692
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
    var_14 = var_12;
    var_15 = ((/* implicit */long long int) (signed char)41);
    var_16 &= ((/* implicit */signed char) (+(var_4)));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((((/* implicit */int) (signed char)-59)) * (((/* implicit */int) var_1)));
                            var_18 &= ((/* implicit */unsigned long long int) (-(arr_3 [i_0 + 1] [2])));
                            var_19 += ((/* implicit */unsigned short) (~(10353461789172375833ULL)));
                            var_20 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) % (var_8))) ^ (arr_2 [i_0 - 1] [i_0 - 1])));
                            /* LoopSeq 2 */
                            for (signed char i_4 = 2; i_4 < 16; i_4 += 1) 
                            {
                                var_21 |= ((/* implicit */int) var_6);
                                var_22 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
                            {
                                var_23 = ((/* implicit */signed char) (_Bool)1);
                                var_24 = ((/* implicit */signed char) var_2);
                                var_25 *= ((/* implicit */unsigned char) (~(((arr_15 [i_0 - 1] [(signed char)0] [2LL] [i_0 + 1] [i_5] [(short)2]) >> (((((/* implicit */int) (unsigned short)15025)) - (15000)))))));
                                var_26 = ((/* implicit */unsigned int) arr_14 [15LL] [i_1] [i_0] [(signed char)15]);
                            }
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    var_27 = ((/* implicit */signed char) arr_3 [i_0 - 1] [i_0]);
                    var_28 = ((/* implicit */unsigned long long int) ((arr_10 [11ULL] [i_1] [(unsigned short)15] [i_6] [(signed char)13] [i_0 - 1] [i_6]) ^ (arr_10 [12] [2] [i_1] [i_1] [i_1] [i_6] [i_6])));
                }
                /* LoopSeq 2 */
                for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 3; i_8 < 16; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */long long int) arr_12 [i_8 - 3] [i_9] [i_9] [i_9] [(unsigned short)5]);
                                var_30 = arr_26 [i_8 + 1] [i_8 - 1] [i_8 - 2] [i_8 - 1] [i_8 - 1];
                                arr_29 [i_0] [i_8 - 3] = ((/* implicit */unsigned short) var_12);
                                var_31 = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) arr_3 [8U] [i_0])) ^ (var_12)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        for (signed char i_11 = 1; i_11 < 14; i_11 += 4) 
                        {
                            {
                                arr_35 [(signed char)12] [i_0] [i_7] [i_7] [i_0] [i_0 + 1] = arr_17 [i_0 - 1];
                                arr_36 [i_0 - 1] [i_0 + 1] [i_0] [(signed char)14] [i_0 + 1] [i_0 + 1] [(unsigned char)16] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_8 [i_0]))))));
                                var_32 = (+(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) -908173065))))));
                            }
                        } 
                    } 
                    arr_37 [i_0 + 1] [i_0] [(signed char)0] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_1)))))) | (((arr_23 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_1] [i_1] [i_1] [i_0 + 1] [i_1])))))));
                    var_33 = ((/* implicit */long long int) arr_33 [i_0] [i_0]);
                    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (signed char)112))));
                }
                for (unsigned short i_12 = 0; i_12 < 17; i_12 += 1) 
                {
                    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) arr_31 [i_0 - 1] [i_0 - 1] [i_0 - 1] [(signed char)0]))));
                    var_36 = ((/* implicit */unsigned char) -1989440543);
                    var_37 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)100))));
                }
                var_38 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) ^ (2730611284498406356ULL)));
            }
        } 
    } 
}
