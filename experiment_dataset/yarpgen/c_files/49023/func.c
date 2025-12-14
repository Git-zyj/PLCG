/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49023
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
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */long long int) (short)32767);
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        arr_11 [i_1] [i_0] [i_0] [i_0] |= max((((/* implicit */long long int) ((signed char) (unsigned short)0))), (((((long long int) arr_5 [i_1])) - (((/* implicit */long long int) (+(arr_2 [i_0])))))));
                        arr_12 [i_0] [i_0] [(unsigned char)16] [i_0] [i_1] = ((/* implicit */signed char) min((min((arr_1 [i_0]), (((/* implicit */int) (unsigned short)65535)))), (((arr_1 [i_0]) % (arr_1 [i_0])))));
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)209)))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        var_17 = (unsigned char)209;
                        arr_16 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) (~(((int) arr_14 [i_0] [i_0] [i_4] [i_4] [i_4] [i_4]))));
                    }
                    var_18 += ((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_1] [i_2])) & (((unsigned long long int) var_8)));
                    arr_17 [i_0] [i_1] = ((/* implicit */long long int) arr_10 [i_0] [i_1] [i_0] [i_0]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (int i_6 = 3; i_6 < 11; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                {
                    arr_27 [i_6] = ((/* implicit */int) ((((/* implicit */int) ((short) arr_8 [i_6 - 3] [i_6 + 1] [i_6 - 1] [i_6 - 3]))) != (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) (unsigned char)240))))));
                    var_19 += ((short) (~(var_13)));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 1; i_8 < 9; i_8 += 3) 
                    {
                        for (int i_9 = 2; i_9 < 11; i_9 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_2 [i_9 - 1])) < (min((arr_25 [i_6] [i_5] [i_5] [i_6]), (((/* implicit */long long int) var_3)))))))) | (min((((/* implicit */long long int) var_12)), (((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (var_7)))))));
                                arr_33 [i_5] [i_5] [i_7] [i_6] [i_9 - 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */int) (short)480)) * (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) arr_22 [i_6] [i_7] [i_8])))))));
                                var_21 = ((/* implicit */int) var_4);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = var_8;
}
