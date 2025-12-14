/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205095
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
    var_13 = ((/* implicit */int) ((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_1 - 1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)211)) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167)))));
                arr_7 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1]))));
                arr_8 [i_0] [i_1 - 2] = ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (var_8))))))), ((signed char)-1)));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (unsigned char)12);
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 17; i_3 += 2) 
        {
            {
                arr_14 [i_2] [i_2] [4U] = ((/* implicit */unsigned int) (unsigned char)211);
                arr_15 [i_2] [(unsigned char)12] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2]))) : (((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-5)), ((short)31)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_11) && ((_Bool)1))))) : (5138436136124553402LL)))));
            }
        } 
    } 
}
