/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25891
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
    var_14 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (min((10482935141884992090ULL), (((/* implicit */unsigned long long int) arr_4 [5] [5])))) : (((/* implicit */unsigned long long int) ((long long int) var_6)))))) ? ((+(((/* implicit */int) arr_6 [i_1 - 1])))) : (((((/* implicit */int) arr_2 [(_Bool)1])) - (((/* implicit */int) arr_2 [i_0]))))));
                arr_9 [(short)2] [(_Bool)1] [i_0] |= ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) 376463879984260394ULL)) || (((/* implicit */_Bool) var_3))))), (((((/* implicit */int) arr_2 [i_1 + 1])) + (((/* implicit */int) arr_2 [i_1 + 1]))))));
                var_15 = ((/* implicit */int) min((((long long int) 7963808931824559526ULL)), (((/* implicit */long long int) arr_7 [i_1 - 1] [i_1 + 1]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min(((~(arr_11 [i_4] [i_2]))), (((((((/* implicit */int) arr_13 [i_2] [i_4])) + (2147483647))) >> (((((/* implicit */int) arr_13 [i_2] [i_4])) + (154))))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        arr_18 [i_5] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) ((long long int) (-(((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) var_7)))))));
                        arr_19 [i_3] [i_3] [i_4] [3LL] [(short)10] = ((/* implicit */unsigned char) (~(-1493316131)));
                        arr_20 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_7 [i_2] [i_2])) + (((/* implicit */int) arr_7 [i_3] [i_2])))), (((((/* implicit */_Bool) arr_7 [i_5] [i_5])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_15 [i_4] [i_4] [i_2]))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 25; i_6 += 1) 
    {
        for (int i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            {
                arr_28 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) arr_22 [i_6]);
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        {
                            var_17 = ((9194249724218335316ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54566))));
                            var_18 = ((/* implicit */int) ((arr_21 [i_7]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27038)))));
                            var_19 |= ((/* implicit */unsigned short) arr_24 [19ULL] [i_7] [i_8]);
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_26 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : ((~(arr_21 [i_6])))))));
                var_21 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_34 [i_7])) ? (((/* implicit */int) arr_34 [i_7])) : (((/* implicit */int) arr_33 [i_6] [i_6])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_6])))))));
            }
        } 
    } 
}
