/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233285
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_18 += ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) var_5);
    }
    /* LoopSeq 1 */
    for (int i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_19 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_2] [4]))));
            var_20 += ((/* implicit */unsigned char) ((((/* implicit */int) ((899161840U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8)))))) << (((((((/* implicit */int) arr_1 [i_1 - 1])) ^ (((/* implicit */int) (unsigned char)248)))) - (28030)))));
        }
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (unsigned int i_4 = 3; i_4 < 8; i_4 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 3; i_5 < 8; i_5 += 2) 
                    {
                        var_21 += ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) << (((arr_5 [i_5 - 2] [i_3]) - (1703834556)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_13 [i_4] [i_4] [i_4] [i_4])))));
                        arr_18 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_11 [i_1] [i_1])) ? (arr_4 [i_5 + 2]) : (((/* implicit */int) arr_0 [i_1 - 1])))) <= (((/* implicit */int) arr_11 [i_1] [i_1]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_13 [i_1] [i_3] [i_4] [i_6]))));
                        arr_21 [i_1 - 1] [i_3] [i_4] [i_6] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_1] [i_1 - 1] [i_4 + 2])) ? (((/* implicit */int) arr_17 [i_1] [i_1 - 1] [i_4 - 3] [i_6])) : (((/* implicit */int) arr_0 [i_3]))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        arr_25 [i_1] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_3])) && (((/* implicit */_Bool) arr_11 [i_1] [i_3])))));
                        arr_26 [i_1] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((arr_23 [i_4 - 3] [i_3]) == (arr_23 [i_1 - 2] [i_4 + 2])))) > (((int) arr_23 [i_3] [i_4 - 3]))));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_29 [i_1] [i_1] [i_4] [i_8] = ((/* implicit */unsigned long long int) ((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4 - 2] [i_1 - 1] [i_1] [i_1 + 1])))));
                        var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_15 [i_4 - 1] [i_4 + 2] [i_1 + 1] [i_1 + 1]))));
                        var_24 += (+(((/* implicit */int) (unsigned char)8)));
                    }
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) arr_11 [(unsigned short)0] [i_3])))), ((!(((/* implicit */_Bool) min((arr_10 [i_1] [i_3]), (((/* implicit */unsigned short) arr_0 [i_1]))))))))))));
                }
            } 
        } 
        arr_30 [i_1] = ((/* implicit */long long int) max((((_Bool) arr_20 [i_1] [i_1] [i_1 - 2] [i_1] [i_1])), (((((/* implicit */int) arr_13 [i_1 - 1] [i_1] [i_1] [i_1 - 2])) >= (((((((/* implicit */int) arr_13 [i_1] [i_1] [i_1 + 1] [i_1])) + (2147483647))) >> (((/* implicit */int) var_11))))))));
    }
    var_26 += (~((-((~(((/* implicit */int) (unsigned char)248)))))));
    var_27 = ((/* implicit */_Bool) var_17);
}
