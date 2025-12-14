/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219668
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */_Bool) arr_3 [i_0] [i_1]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_19 ^= ((unsigned short) (unsigned short)63343);
                            arr_9 [i_0] = ((/* implicit */unsigned char) (-(((long long int) (signed char)-1))));
                        }
                    } 
                } 
                var_20 *= arr_0 [i_1];
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            {
                arr_17 [i_4] = ((/* implicit */unsigned char) (unsigned short)40676);
                var_21 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((arr_11 [i_4] [i_4]), (((/* implicit */int) var_7))))) ? (((-4745702098940351551LL) & (-1951786587387251288LL))) : (((/* implicit */long long int) 0U)))) ^ (((/* implicit */long long int) ((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                var_22 ^= ((/* implicit */unsigned int) max((var_3), (max((((/* implicit */long long int) (short)23780)), (-8787754830932491600LL)))));
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        {
                            arr_25 [i_4] [i_5] [i_6] [i_5] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_24 [i_6] [i_6] [i_5 + 1] [(_Bool)1])))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) var_14))))) + (((((/* implicit */_Bool) arr_16 [i_5 + 1])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)49)))))));
                            var_23 = ((((/* implicit */_Bool) -629483324)) ? ((((_Bool)1) ? (-629483324) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1)));
                        }
                    } 
                } 
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_5 + 1] [i_5])) ? (((/* implicit */long long int) -568771072)) : (arr_10 [i_5 + 1] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0))))) : (((((/* implicit */_Bool) 3069979196U)) ? (((/* implicit */unsigned int) 845446183)) : (0U)))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) var_1);
}
