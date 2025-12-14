/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2177
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (long long int i_4 = 4; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (max((((/* implicit */long long int) min((-1113094446), (((/* implicit */int) var_11))))), (arr_11 [i_1 - 1] [i_3 + 1] [i_3 + 1] [i_0] [i_3])))));
                                arr_14 [i_2] [i_2] = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) var_9)), (arr_4 [i_0] [i_1 + 1] [i_2])))));
                                arr_15 [i_2] [15] [i_2] [15] [i_2] [15] = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (short)21884))) ^ (((/* implicit */int) (unsigned short)16256))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) ((_Bool) (unsigned short)16256)))))) ? (((/* implicit */int) max(((unsigned short)60880), (((/* implicit */unsigned short) (unsigned char)116))))) : (((/* implicit */int) ((unsigned char) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                var_15 = ((/* implicit */unsigned short) (unsigned char)121);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_14);
    /* LoopNest 3 */
    for (signed char i_5 = 1; i_5 < 10; i_5 += 2) 
    {
        for (unsigned short i_6 = 1; i_6 < 7; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                {
                    arr_28 [i_5] = var_10;
                    arr_29 [i_5] [i_6 + 1] [i_6 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_2)))), (((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_2))))))) || (((/* implicit */_Bool) ((var_12) / (((/* implicit */int) var_1)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_8 = 1; i_8 < 9; i_8 += 1) 
    {
        for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            {
                arr_35 [i_8] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned short)49279), (((/* implicit */unsigned short) (unsigned char)255))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) max((arr_31 [i_8] [i_9]), (((/* implicit */long long int) var_10))))) < (max((var_5), (((/* implicit */unsigned long long int) arr_8 [i_9]))))))) : (((/* implicit */int) var_11))));
                arr_36 [i_8 + 2] = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_32 [i_8 + 2]))), (((unsigned long long int) var_4)))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))) ? (min((var_5), (var_8))) : (((/* implicit */unsigned long long int) min((-6116653319837173508LL), (((/* implicit */long long int) (unsigned short)49289)))))))));
                arr_37 [i_8] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((var_10), (((/* implicit */int) (unsigned short)58638))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)15766)))) : (((/* implicit */int) var_3)))) / ((((!(((/* implicit */_Bool) (unsigned short)49280)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_8] [i_9]))))) : (((/* implicit */int) (signed char)9))))));
            }
        } 
    } 
}
