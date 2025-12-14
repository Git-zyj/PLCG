/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199570
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */short) (~(((/* implicit */int) min((arr_2 [i_2 - 2] [i_2 - 2] [i_2 + 1]), ((unsigned short)29154))))));
                                var_14 &= ((/* implicit */unsigned short) min((min((arr_11 [(unsigned short)4] [i_1] [i_1] [i_2] [i_3] [i_4]), (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) var_10))))))), (((/* implicit */unsigned long long int) var_10))));
                                arr_15 [(unsigned char)16] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)49336))))) - (1208224400U)));
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_9), (((/* implicit */int) arr_4 [12] [i_2 + 1] [i_0]))))) ? (11108312963577355725ULL) : (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (signed char)-14)))), (var_10)))))))));
                                var_16 = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) var_0)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 3; i_5 < 21; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                arr_22 [i_6] [i_6] [i_6] [i_5 + 1] [i_2] [14ULL] [i_0] = min((min((var_5), (((/* implicit */unsigned long long int) arr_14 [i_2 - 2] [(unsigned char)16] [i_5 - 2] [i_6] [i_6])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_6] [i_1] [i_0]))) * (arr_16 [i_2 + 1] [i_2 - 3] [i_5 - 2] [i_5 - 3]))));
                                var_17 = ((/* implicit */signed char) arr_16 [i_1] [i_2 + 1] [i_5 - 1] [i_6]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)16380)), (1208224400U)))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
}
