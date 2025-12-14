/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206652
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
    var_15 = ((/* implicit */int) -3740856773341619826LL);
    var_16 = ((/* implicit */short) 3740856773341619798LL);
    var_17 = ((/* implicit */int) var_1);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) min(((short)1580), ((short)-6457)));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        arr_9 [i_0 + 3] [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((short) arr_8 [i_0 - 2] [i_2 + 1] [i_3] [i_3]));
                        var_19 ^= ((((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62))) : (arr_7 [i_0 + 1] [i_2 - 1] [i_2]))) << (((/* implicit */int) ((arr_7 [i_0 - 1] [i_2 - 1] [i_2 - 1]) > (((/* implicit */unsigned int) ((/* implicit */int) (short)1580)))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) var_3);
                        /* LoopSeq 3 */
                        for (long long int i_5 = 1; i_5 < 7; i_5 += 3) 
                        {
                            arr_15 [i_0] [i_1] [i_2] = ((/* implicit */short) arr_5 [i_0] [(signed char)4] [i_2 - 1]);
                            arr_16 [i_5] [i_4] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((11621710573996240078ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64)))));
                        }
                        for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) -351485802189688314LL);
                            var_22 ^= ((/* implicit */signed char) var_12);
                        }
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            var_23 -= ((/* implicit */long long int) ((max((((((/* implicit */_Bool) arr_1 [i_4 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1580))) : (arr_12 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2]))), (((/* implicit */unsigned long long int) (+(arr_23 [(unsigned short)4] [i_1] [i_2] [i_7])))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0 + 2])) ? (((/* implicit */int) max(((short)-1581), ((short)-28994)))) : (((/* implicit */int) arr_0 [i_1])))))));
                            arr_25 [i_1] [i_2 + 1] [i_1] [i_2] = ((/* implicit */_Bool) arr_19 [i_7] [i_2] [(unsigned short)8]);
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (short)1571))));
                            arr_26 [(short)2] [i_1] [i_2 + 1] [i_7] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) var_11)))));
                        }
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */short) var_6);
}
