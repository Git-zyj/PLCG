/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20469
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-((+(arr_2 [i_0])))));
        var_14 |= ((/* implicit */int) ((unsigned int) ((unsigned int) (_Bool)0)));
    }
    for (unsigned short i_1 = 1; i_1 < 11; i_1 += 4) 
    {
        arr_9 [i_1] [i_1] &= arr_0 [i_1];
        arr_10 [i_1] [i_1] = ((unsigned char) (+(((/* implicit */int) var_6))));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) max(((_Bool)0), ((_Bool)1))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_14 [i_2])) : (arr_7 [i_2] [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2]))))) : ((-(((/* implicit */int) (_Bool)0))))));
                var_17 = ((/* implicit */long long int) ((short) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_3))))));
                var_18 *= ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((var_10) > (((/* implicit */long long int) ((/* implicit */int) var_5))))))))) == (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_11 [i_2] [i_2])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    for (unsigned int i_7 = 1; i_7 < 12; i_7 += 3) 
                    {
                        {
                            arr_27 [i_7] [i_7] = ((/* implicit */short) (~(((int) var_11))));
                            var_19 = var_8;
                            arr_28 [i_4] [i_4] [i_4] [3ULL] [i_7] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_23 [i_7 - 1] [i_7 - 1] [(unsigned char)0] [i_7 - 1]))))));
                            arr_29 [i_7] [i_6] [i_5] [i_7] = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (arr_25 [i_4] [i_5] [i_7] [i_7] [i_7 - 1])))));
                            arr_30 [i_5] [i_7] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_24 [i_4] [i_7] [1U] [(unsigned short)7] [i_6] [8U])))) * (((unsigned long long int) var_11)));
                        }
                    } 
                } 
                arr_31 [(unsigned short)4] [i_5] = ((/* implicit */unsigned short) max((min((arr_19 [i_5]), (arr_19 [i_5]))), (min((arr_19 [i_4]), (((/* implicit */unsigned int) var_12))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_4))));
}
