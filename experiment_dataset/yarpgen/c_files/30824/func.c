/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30824
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
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) var_2);
                            var_13 = ((/* implicit */unsigned short) ((unsigned int) var_3));
                            arr_9 [i_0] [i_1] [i_2] [i_2] [18] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_0] [(unsigned short)7] [(unsigned short)4] [i_3])), (arr_7 [i_3] [(unsigned short)12] [i_2] [(signed char)11] [i_0]))))))), (var_1)));
                        }
                    } 
                } 
                arr_10 [i_1] = ((/* implicit */_Bool) (~((~((-(((/* implicit */int) arr_0 [10ULL]))))))));
                arr_11 [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((arr_5 [i_0] [21] [i_1]) * (124U)))))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_6 [20U] [15U] [i_1] [i_1])))) : (((/* implicit */int) (unsigned char)12))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 14; i_4 += 4) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_6 = 1; i_6 < 15; i_6 += 2) 
                {
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            {
                                arr_27 [i_4] [i_5] [i_6 + 3] [i_7] [i_8] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_4 + 1])) ? (max((((/* implicit */long long int) arr_15 [i_5] [i_6] [i_5])), (var_6))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)249))))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) arr_20 [i_5] [i_6]))))), (((2310946780U) + (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
                                arr_28 [i_5] [9LL] [(unsigned short)11] [i_4] [i_5 + 1] = ((/* implicit */unsigned short) (-(arr_16 [i_6 + 3] [i_8] [i_8])));
                                arr_29 [i_4] = ((/* implicit */signed char) var_0);
                                arr_30 [i_8] [i_4] [i_6] [i_5] [i_5] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (3044086845U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3914270198U)) || (((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)249)), (var_3))))))))));
                            }
                        } 
                    } 
                } 
                arr_31 [i_4] [i_4] [i_4] = ((/* implicit */signed char) (((+(3044086818U))) - (min((((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))), (var_4)))));
                var_14 = max((var_4), (((/* implicit */unsigned int) arr_25 [i_4] [8U] [(_Bool)1] [12U] [i_4])));
                arr_32 [i_4] [i_5 + 2] = ((/* implicit */long long int) (unsigned char)19);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (-(min((var_3), (((/* implicit */long long int) var_2))))));
}
