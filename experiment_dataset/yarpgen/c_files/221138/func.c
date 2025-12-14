/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221138
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
    var_12 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)32)), ((short)-5))))) > (((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (var_7)))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)6)) | (((/* implicit */int) (unsigned char)0)))))))));
    var_13 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)35065)) ? (1293122117) : (((/* implicit */int) (unsigned char)253))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) arr_5 [(signed char)15]);
                    var_14 ^= ((/* implicit */unsigned char) max((arr_3 [10LL] [i_1] [i_2]), (arr_1 [i_0])));
                    arr_8 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_2 - 1]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_3 - 1])) ? (((/* implicit */int) arr_4 [i_5])) : (((/* implicit */int) arr_4 [i_3 - 1]))))), (arr_5 [i_3])));
                    var_16 = ((/* implicit */unsigned short) (~(arr_13 [i_3] [i_4] [i_3])));
                }
            } 
        } 
    } 
}
