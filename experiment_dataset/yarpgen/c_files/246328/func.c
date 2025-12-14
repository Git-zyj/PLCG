/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246328
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((short) (short)-2321)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), ((+(max((((/* implicit */unsigned long long int) arr_3 [(short)8] [i_1 - 1] [i_1 - 2])), (arr_2 [i_0] [i_1] [i_1 + 1])))))));
                            var_18 = ((/* implicit */unsigned int) var_0);
                            arr_10 [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_12)))) == (min((((/* implicit */unsigned long long int) (short)-2294)), (var_0))))) ? (((unsigned long long int) var_8)) : (min((((unsigned long long int) arr_8 [i_0])), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_3]))))));
                            var_19 = ((/* implicit */unsigned short) ((((unsigned int) (short)-29142)) << (((((/* implicit */int) max((((/* implicit */unsigned short) max(((short)2321), ((short)2321)))), (((unsigned short) (signed char)-1))))) - (65514)))));
                            var_20 += ((/* implicit */signed char) var_11);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_5])) ? ((~(((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 2] [(signed char)13])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 649050527U)) ? (((/* implicit */int) (unsigned short)26860)) : (((/* implicit */int) arr_17 [i_5] [(unsigned short)9] [i_5] [i_5]))))) ? (min((((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_1])), (arr_16 [(signed char)10] [i_4] [i_4] [10] [i_0] [i_0]))) : (((/* implicit */int) (_Bool)0))))));
                            arr_18 [i_0] [i_1 - 2] [i_1 + 1] [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_5])) ? (((/* implicit */int) max(((unsigned short)9429), ((unsigned short)11)))) : (((/* implicit */int) arr_6 [i_0] [i_1 - 2] [(short)9] [i_4] [i_5] [i_5]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
    /* LoopNest 3 */
    for (signed char i_6 = 3; i_6 < 10; i_6 += 2) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                {
                    var_23 = ((/* implicit */int) ((short) max((var_6), (((/* implicit */unsigned short) arr_19 [i_7])))));
                    var_24 = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_6] [i_7] [i_8])))))) + (arr_1 [i_8]))), (((/* implicit */unsigned int) (!((_Bool)1))))));
                    arr_27 [i_8] [i_8] [(short)9] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
    {
        for (short i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            {
                arr_34 [i_9] [i_9] [i_9] = ((/* implicit */_Bool) arr_26 [i_10]);
                arr_35 [i_9] = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_9] [i_9] [i_9])) | (((/* implicit */int) arr_6 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) var_12);
}
