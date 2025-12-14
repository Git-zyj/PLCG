/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28203
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
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 ^= ((/* implicit */unsigned short) ((short) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)3072))) == (var_0)))));
                var_21 *= ((/* implicit */unsigned char) arr_3 [i_1]);
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) arr_3 [i_0]))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        {
                            var_23 ^= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35258)) ? (((/* implicit */int) arr_6 [i_1] [2U] [i_3])) : (((/* implicit */int) (_Bool)1))))) ? (min((arr_5 [i_0] [1]), (((/* implicit */unsigned long long int) (short)-18033)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
                            var_24 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_3 + 2] [i_2] [i_1] [i_0])) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)8436)) : (((/* implicit */int) var_13)))))) >> (((((/* implicit */int) ((unsigned char) arr_9 [i_3] [i_3] [(short)4] [i_3 - 1]))) - (217)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 1; i_4 < 14; i_4 += 2) 
    {
        for (short i_5 = 2; i_5 < 13; i_5 += 1) 
        {
            {
                arr_16 [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)101))));
                var_25 = ((/* implicit */short) var_11);
                arr_17 [i_5] [(signed char)3] [i_4 + 1] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-13))) : (5428112796524975272LL)));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -8969459766979219036LL))));
    var_27 = var_6;
    var_28 = ((/* implicit */signed char) ((long long int) var_0));
}
