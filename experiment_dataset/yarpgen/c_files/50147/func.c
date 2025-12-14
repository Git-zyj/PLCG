/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50147
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                for (unsigned char i_3 = 3; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_11 &= ((/* implicit */unsigned short) (((-2147483647 - 1)) != (((/* implicit */int) (_Bool)0))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            var_12 = ((/* implicit */unsigned short) arr_14 [i_0] [i_0] [(unsigned char)9] [i_0] [i_3]);
                            var_13 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_1 + 1])) == (((/* implicit */int) arr_3 [i_1] [i_1 + 1]))))) < (((/* implicit */int) ((((((/* implicit */int) arr_3 [i_0] [i_4])) ^ (((/* implicit */int) arr_0 [i_0] [i_1])))) < (((/* implicit */int) arr_3 [i_1 + 1] [i_2 - 1])))))));
                        }
                    }
                } 
            } 
        } 
        var_14 -= ((/* implicit */short) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned int i_5 = 2; i_5 < 12; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 3) 
            {
                {
                    arr_19 [i_6] [(unsigned short)4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_5 - 2] [i_5 - 2])) + (((/* implicit */int) arr_1 [i_5 - 1] [i_5 + 1]))))) == (min((((/* implicit */unsigned long long int) ((4120064262U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (arr_16 [i_6] [(unsigned char)8] [i_6 + 1])))));
                    arr_20 [i_0] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) + (511U)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                {
                    var_15 = ((/* implicit */short) ((((((/* implicit */int) arr_21 [i_0] [i_0])) - (((/* implicit */int) arr_1 [i_0] [i_7])))) != (((/* implicit */int) arr_9 [i_0]))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_8] [9U])) ? (((/* implicit */int) arr_1 [i_7] [i_7])) : (((/* implicit */int) arr_1 [i_0] [(short)10]))))) ? (((/* implicit */int) ((4179860831U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_23 [(short)12] [12] [i_8]))));
                    arr_27 [i_0] [i_0] [i_0] = arr_4 [i_0];
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) arr_4 [i_0]);
    }
    var_18 = ((/* implicit */short) var_7);
    var_19 = ((/* implicit */long long int) var_4);
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((var_7), (var_9))) + (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */long long int) var_4)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_7)) : (var_0)))));
}
