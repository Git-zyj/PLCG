/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212786
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) >= (((/* implicit */int) ((unsigned char) (short)11602))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_18 [i_4] [i_0] [i_0] [i_2 + 2] [i_0] [i_0] [i_0] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5)))) & (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (18446744073709551615ULL)))));
                                var_12 = ((/* implicit */int) min((var_12), (((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)227))) - (arr_2 [i_1] [i_1]))))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)40)) / (((/* implicit */int) (signed char)(-127 - 1)))))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                arr_26 [i_1] [i_1] = ((/* implicit */short) min(((+(((/* implicit */int) (unsigned char)29)))), (((/* implicit */int) (((~(((/* implicit */int) (unsigned char)227)))) <= (((/* implicit */int) (short)-16969)))))));
                                arr_27 [i_1] [i_1] = ((/* implicit */short) (~((~(((/* implicit */int) max((arr_20 [i_0] [(_Bool)1] [i_2] [(_Bool)1] [(_Bool)1] [(short)0]), (((/* implicit */signed char) arr_1 [i_6])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 14; i_7 += 2) 
                    {
                        for (short i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((int) (short)16990)) | (((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) arr_3 [i_1]))))))) % (min((((((/* implicit */_Bool) (unsigned char)29)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)16968)) ? (((/* implicit */int) arr_14 [i_0] [i_1])) : (((/* implicit */int) var_1)))))))));
                                arr_32 [i_1] [i_7] [i_2] [(signed char)15] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-16962)) ? (-332760662) : (((/* implicit */int) (unsigned char)29))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 1; i_9 < 15; i_9 += 2) 
    {
        for (unsigned char i_10 = 1; i_10 < 16; i_10 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 2; i_11 < 15; i_11 += 1) 
                {
                    for (unsigned short i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (short)16975)) && (((/* implicit */_Bool) (~(-479045422))))))) - (((/* implicit */int) arr_1 [i_12]))));
                            var_15 = ((/* implicit */long long int) var_4);
                            var_16 |= ((/* implicit */_Bool) max((max((-14), (((((/* implicit */_Bool) (short)25863)) ? (((/* implicit */int) arr_41 [i_9] [i_9] [i_9] [i_11] [i_12] [i_12])) : (((/* implicit */int) var_11)))))), (((/* implicit */int) min(((unsigned char)163), (((/* implicit */unsigned char) arr_8 [i_10] [i_10] [(short)2] [i_12])))))));
                        }
                    } 
                } 
                arr_44 [i_10] = ((/* implicit */int) (short)25863);
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (short)-25848);
}
