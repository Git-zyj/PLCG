/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36423
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
    var_11 = ((/* implicit */short) (~(((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) min((((/* implicit */int) (signed char)2)), (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_10)))) >> (((((int) var_7)) + (5864)))))));
                var_13 = ((/* implicit */long long int) var_4);
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) min(((unsigned short)3), (((/* implicit */unsigned short) var_5)))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_2 = 2; i_2 < 9; i_2 += 2) 
    {
        var_14 = arr_1 [i_2 - 2];
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) min((arr_8 [i_2 - 1] [i_2]), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)17))))) > (18446744073709551603ULL)))))))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
        arr_10 [i_2] = ((/* implicit */short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))))), (min((arr_3 [i_2 - 1] [i_2 - 1]), (arr_5 [i_2 - 2])))));
        var_16 = ((/* implicit */int) (signed char)7);
    }
    for (long long int i_3 = 2; i_3 < 18; i_3 += 1) 
    {
        var_17 = ((/* implicit */int) min((var_17), (max(((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)6)) && (((/* implicit */_Bool) (unsigned short)65530))))))), (((/* implicit */int) var_10))))));
        var_18 = ((/* implicit */unsigned short) var_10);
        arr_14 [i_3] = ((/* implicit */_Bool) (~((+(arr_11 [i_3 + 1])))));
    }
    /* vectorizable */
    for (long long int i_4 = 3; i_4 < 21; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    {
                        arr_25 [16] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) arr_22 [i_5])) : (((/* implicit */int) (signed char)-46))))) || (((/* implicit */_Bool) (signed char)12))));
                        var_19 = arr_23 [i_4] [i_4] [i_4 + 1] [i_4 + 1];
                    }
                } 
            } 
        } 
        arr_26 [i_4] = ((/* implicit */unsigned char) (unsigned short)4);
        arr_27 [i_4 - 3] [i_4] = ((/* implicit */long long int) (!((_Bool)1)));
    }
    var_20 *= ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) ((long long int) (signed char)-3))))));
}
