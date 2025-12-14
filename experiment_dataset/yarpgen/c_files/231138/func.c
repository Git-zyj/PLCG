/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231138
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_3] = ((/* implicit */long long int) arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 3]);
                            arr_10 [14] [i_1] [i_1] [i_3] = ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [17ULL] [i_3] [(_Bool)1]);
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) 522815793)) > (((((/* implicit */_Bool) arr_7 [i_1 - 4] [i_0] [(unsigned short)10] [i_1 + 3])) ? (arr_7 [i_1 - 4] [i_1] [(_Bool)1] [i_1 - 3]) : (arr_7 [i_1 - 3] [i_0] [i_1] [i_1 + 1]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_19);
    var_22 = ((/* implicit */int) max((var_22), ((+(((/* implicit */int) var_16))))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_23 [i_4] [i_4] [i_5] [(unsigned short)10] [i_4] [i_4] = ((/* implicit */unsigned char) arr_3 [i_4] [i_4] [i_4]);
                            arr_24 [i_4] [i_5] [i_5] [i_4] = ((/* implicit */_Bool) max((max((1515167136), (((/* implicit */int) (unsigned char)41)))), (522815793)));
                            var_23 = ((/* implicit */unsigned long long int) var_7);
                            var_24 = ((/* implicit */short) (!(((arr_1 [i_5]) != (arr_1 [i_5])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_8 = 1; i_8 < 10; i_8 += 4) 
                {
                    for (short i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 2) 
                        {
                            {
                                var_25 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7566089277973327004LL)) ? (-522815794) : (522815802)));
                                arr_34 [(_Bool)1] [i_5] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_2 [i_4] [i_4] [i_4]))));
                            }
                        } 
                    } 
                } 
                arr_35 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-522815777)))) && (((/* implicit */_Bool) (unsigned char)30))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_11 = 1; i_11 < 17; i_11 += 4) 
    {
        for (int i_12 = 0; i_12 < 18; i_12 += 3) 
        {
            for (unsigned char i_13 = 2; i_13 < 17; i_13 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) min((arr_39 [i_12]), (((/* implicit */short) (signed char)127)))))))), (((((/* implicit */_Bool) -522815794)) ? (min((((/* implicit */unsigned int) -522815794)), (arr_0 [i_12]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_11] [(short)2] [i_11 + 1] [i_11] [i_12] [i_11 - 1])))))));
                    arr_43 [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((long long int) arr_6 [i_11] [i_12] [i_13]));
                    var_27 = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((unsigned int) 1857706297U))) | (min((((/* implicit */long long int) arr_6 [i_11] [i_12] [4LL])), (arr_37 [i_11]))))), (((/* implicit */long long int) arr_2 [i_11] [18U] [i_13]))));
                }
            } 
        } 
    } 
}
