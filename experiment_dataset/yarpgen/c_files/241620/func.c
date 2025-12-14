/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241620
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_4 [(_Bool)1] [i_0] = ((/* implicit */int) (-(min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (arr_2 [i_0] [i_0]))), (arr_2 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (signed char i_3 = 4; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_7))));
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_3 - 4] [i_3 - 1] [i_3]))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    arr_15 [i_0] [i_0] [i_4] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_4]))) : (max((((/* implicit */unsigned long long int) arr_11 [i_0])), (var_10))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 2; i_5 < 16; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 2; i_6 < 16; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned int) var_6);
                            arr_22 [i_0] [i_1] [i_4] [i_5] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (short)31744)) > (((((/* implicit */_Bool) (short)-31729)) ? (-317321720) : (((/* implicit */int) (signed char)-8)))))) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) arr_9 [i_0] [i_4] [i_5 + 2] [i_6]))));
                        }
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (+(var_9))))));
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_13))));
                            var_20 = ((/* implicit */int) ((unsigned short) var_4));
                        }
                        var_21 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_1] [i_0] [i_5 + 1] [i_0]))) * (((((/* implicit */unsigned int) arr_6 [i_4] [i_4] [i_0])) + (arr_12 [i_0] [i_1] [i_4] [i_5 - 1]))))) >> (((min((min((((/* implicit */long long int) var_11)), (arr_16 [i_0] [i_1] [i_5 + 1]))), (((/* implicit */long long int) arr_19 [i_0] [i_5 + 2] [i_4] [i_1] [i_0])))) + (5232672968944128615LL)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 1; i_8 < 15; i_8 += 4) 
                    {
                        arr_28 [i_0] [(short)2] [i_4] [i_8 + 3] [i_8] [i_0] = ((/* implicit */unsigned int) (+(arr_2 [(unsigned short)1] [i_1])));
                        arr_29 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(arr_11 [i_0])));
                    }
                }
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    for (signed char i_10 = 3; i_10 < 15; i_10 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) min((((/* implicit */short) ((signed char) arr_5 [i_10 + 1] [i_10 - 2] [i_10 + 3]))), (var_14)));
                            var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) ? (arr_17 [i_0]) : (((/* implicit */unsigned long long int) ((long long int) 13ULL))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_24 = ((/* implicit */long long int) arr_23 [i_11] [i_11] [i_11] [i_11] [4U] [i_11] [i_11]);
        var_25 -= ((/* implicit */long long int) (-(min((arr_23 [i_11] [i_11] [i_11] [i_11] [(unsigned short)6] [i_11] [i_11]), (arr_23 [i_11] [i_11] [i_11] [i_11] [12] [i_11] [i_11])))));
    }
}
