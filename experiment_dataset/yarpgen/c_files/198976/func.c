/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198976
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
    for (unsigned int i_0 = 1; i_0 < 6; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_16 ^= ((/* implicit */unsigned char) ((((max((var_0), (((/* implicit */unsigned long long int) arr_0 [i_1])))) * (((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))) * (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)81)), (((arr_3 [i_0]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (signed char)29)))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 7; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0 + 1] [i_0 - 1] [i_1] [i_2] [i_2] [i_3 + 3] = 29360128;
                            var_17 &= max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)19)) ? (1613887305U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)69)))))), (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_2 - 1] [i_2 - 1])) ? (arr_4 [i_0 + 4] [i_3 + 1] [i_2 - 1]) : (((/* implicit */long long int) (~(((/* implicit */int) var_8))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_4 = 1; i_4 < 21; i_4 += 2) 
    {
        for (short i_5 = 2; i_5 < 21; i_5 += 1) 
        {
            for (signed char i_6 = 2; i_6 < 19; i_6 += 2) 
            {
                {
                    var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned char) arr_12 [i_6])), ((unsigned char)246))))))) ? (((((/* implicit */int) arr_15 [i_6] [i_6])) - (((/* implicit */int) arr_15 [i_6] [i_6])))) : (((/* implicit */int) ((max((((/* implicit */unsigned int) (signed char)-19)), (2681079972U))) == (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                    var_19 = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_3)) ^ (-1))));
                    var_20 -= ((/* implicit */long long int) var_12);
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            {
                                var_21 = max((2681079966U), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)115)) || (((/* implicit */_Bool) -6374202691603021947LL)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                                arr_25 [14ULL] [i_5] [4] [i_5] [14ULL] [i_8] = ((/* implicit */signed char) arr_24 [i_4 + 1] [(unsigned short)5] [i_4] [i_5] [i_5 + 1]);
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min((2681079990U), (1613887310U))))));
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (~(10791952439559858192ULL))))));
                                var_24 += ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4 - 1]))) * (var_1))), (((/* implicit */long long int) ((arr_12 [i_4 - 1]) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) (short)-1035)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = var_10;
}
