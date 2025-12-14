/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236287
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] = (-((~(((/* implicit */int) (unsigned short)63556)))));
        arr_3 [14U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)14259)) : (((/* implicit */int) arr_1 [i_0]))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (4294967287U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_7 [(signed char)8] [i_1] = ((/* implicit */int) var_7);
        var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_1]))));
        arr_8 [(unsigned char)12] = ((/* implicit */signed char) (~(((/* implicit */int) var_10))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) var_2);
                    arr_15 [i_3 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_4 = 1; i_4 < 21; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_6 = 1; i_6 < 20; i_6 += 1) 
                {
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(arr_19 [i_6 + 1] [i_4 + 1])))), (((((/* implicit */_Bool) arr_19 [i_6 + 2] [i_4 + 1])) ? (((/* implicit */long long int) arr_19 [i_6 + 2] [i_4 - 1])) : (-1124936166748018922LL))))))));
                    var_18 = ((/* implicit */_Bool) max((((/* implicit */int) max((var_1), (arr_24 [i_4] [i_5] [i_5])))), (((((/* implicit */int) (!(((/* implicit */_Bool) (short)14250))))) | (((/* implicit */int) var_1))))));
                    var_19 = ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) max((arr_16 [i_4 - 1]), (arr_22 [i_5] [i_5] [i_4]))))) - (1778820920U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_5]))))))));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (short)14233))));
                }
                /* LoopNest 3 */
                for (unsigned int i_7 = 4; i_7 < 20; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 3; i_9 < 20; i_9 += 1) 
                        {
                            {
                                var_21 &= ((/* implicit */int) arr_27 [i_9 - 2] [i_9 - 2]);
                                var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-14253))));
                            }
                        } 
                    } 
                } 
                arr_32 [i_4] [i_5] = ((/* implicit */short) ((((((((/* implicit */int) (unsigned short)59620)) ^ (((/* implicit */int) var_12)))) >> ((((-(((/* implicit */int) arr_6 [11])))) + (80))))) ^ (((/* implicit */int) var_10))));
            }
        } 
    } 
}
