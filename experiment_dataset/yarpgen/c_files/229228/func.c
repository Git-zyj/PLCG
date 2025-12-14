/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229228
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) var_1);
                arr_6 [i_0] [i_0] [i_0] = ((((/* implicit */int) (short)-32752)) * (2));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) 4294705152U);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
        var_14 = ((/* implicit */unsigned char) arr_4 [i_2] [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        var_15 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((((((/* implicit */_Bool) (unsigned short)22)) ? (((/* implicit */int) max(((short)24576), (((/* implicit */short) (unsigned char)12))))) : (arr_4 [i_3] [i_3] [(signed char)12]))), (1))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            arr_18 [i_4] [i_4] = ((((((/* implicit */_Bool) arr_17 [i_4] [i_5])) ? (-2147483641) : (((/* implicit */int) (unsigned short)59540)))) | (((/* implicit */int) (_Bool)1)));
            var_17 = ((/* implicit */long long int) arr_4 [i_4] [i_4] [i_4]);
        }
        var_18 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) (short)3968))))));
        arr_19 [i_4] [i_4] = ((/* implicit */signed char) arr_5 [i_4] [i_4] [i_4]);
    }
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        for (unsigned int i_7 = 1; i_7 < 24; i_7 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_21 [i_7]), (((/* implicit */long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) 8998403161718784LL)) ? (((/* implicit */unsigned int) -2147483645)) : (2U))) : (((/* implicit */unsigned int) arr_22 [i_6] [i_6] [i_7]))))) <= (arr_20 [i_7 + 1])));
                var_20 = arr_22 [i_6] [(unsigned char)14] [i_7 + 1];
            }
        } 
    } 
}
