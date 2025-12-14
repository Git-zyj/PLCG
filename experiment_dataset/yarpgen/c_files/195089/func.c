/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195089
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 2; i_2 < 10; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) arr_1 [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) max((var_14), (-6LL)));
                                var_15 = ((/* implicit */short) ((((((/* implicit */int) var_6)) / ((+(arr_12 [i_0] [i_3] [i_2] [i_3] [i_2]))))) != ((+((~(((/* implicit */int) arr_2 [i_0]))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) var_9);
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((long long int) ((arr_1 [i_0 + 1]) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                                var_18 = ((/* implicit */unsigned short) min((min((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) -2LL)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_6)))))), (((/* implicit */int) arr_8 [i_2] [5LL]))));
                            }
                        } 
                    } 
                    var_19 *= ((/* implicit */unsigned char) (+(((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)47)))) + ((-(arr_9 [(unsigned char)4] [(unsigned short)2])))))));
                }
                var_20 = ((/* implicit */int) var_11);
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_9 [i_0] [(short)10]))));
                var_22 = ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) max((arr_2 [(unsigned short)9]), (((/* implicit */unsigned short) (unsigned char)208)))))))) > (var_10)));
                /* LoopNest 3 */
                for (unsigned char i_7 = 1; i_7 < 9; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 1; i_9 < 11; i_9 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 6)) ? (arr_21 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))));
                                var_24 |= ((/* implicit */unsigned char) var_8);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((((-1096949391) + (2147483647))) << (((((((/* implicit */int) (short)-14811)) + (14840))) - (29))));
}
