/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230668
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) 0);
                    var_15 = ((/* implicit */int) min(((-(2156688700143011127ULL))), (((((/* implicit */_Bool) -1)) ? (arr_2 [i_0]) : (var_6)))));
                    arr_6 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */int) min((((((/* implicit */_Bool) 0)) && (((-1) < (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_10))))) < (min((9561568836377392818ULL), (((/* implicit */unsigned long long int) 0LL))))))));
                    var_16 ^= ((/* implicit */unsigned long long int) var_12);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_23 [i_3] [17ULL] [17ULL] [i_3] [(unsigned short)13] [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) (((((_Bool)1) || (((/* implicit */_Bool) var_2)))) ? (0) : (((/* implicit */int) var_1)))))));
                                var_18 = ((/* implicit */unsigned int) var_2);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        for (signed char i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            {
                                arr_32 [i_10] [i_9] [i_9] [i_8] [(short)4] [i_3] [i_3] = ((/* implicit */short) ((unsigned long long int) arr_9 [i_3] [i_3] [i_3]));
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_22 [i_3]))));
                            }
                        } 
                    } 
                    var_20 ^= ((/* implicit */unsigned short) 536870911);
                }
                var_21 = ((/* implicit */_Bool) (unsigned short)10456);
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) arr_13 [i_4] [i_3] [i_3]))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_11 = 0; i_11 < 22; i_11 += 3) 
    {
        var_23 = ((/* implicit */unsigned long long int) (!(var_1)));
        arr_35 [i_11] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_11] [i_11] [i_11] [i_11]))));
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)36843)))))));
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) (unsigned char)0))));
    }
    for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 4) 
    {
        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 0)))));
        var_27 = ((/* implicit */long long int) min((((/* implicit */int) var_11)), (min(((-(0))), (((/* implicit */int) (unsigned char)48))))));
        var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_1))));
    }
}
