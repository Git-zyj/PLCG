/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238133
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_7 [(unsigned char)0] [(unsigned char)0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? ((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_10))) / (((/* implicit */long long int) ((/* implicit */int) max((arr_5 [(signed char)2] [(signed char)2]), (arr_5 [(short)0] [(short)0]))))))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1)))))));
                var_18 = ((/* implicit */unsigned long long int) arr_0 [i_0 + 1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            {
                arr_15 [0] [i_2] = ((/* implicit */short) ((((int) (short)-18378)) < (((/* implicit */int) (unsigned char)56))));
                var_19 = min((((/* implicit */unsigned char) var_11)), (var_7));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 18; i_4 += 2) 
    {
        for (int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                {
                    var_20 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1435719317U)) ? (2363707538U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)88)))))) ? (((/* implicit */int) arr_22 [i_4 + 3] [i_5] [i_4 + 3] [(unsigned short)15])) : (((/* implicit */int) (!(((/* implicit */_Bool) 2755024383U))))))))));
                    var_21 = ((/* implicit */unsigned char) min((0ULL), (((/* implicit */unsigned long long int) (short)7275))));
                    var_22 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((long long int) arr_20 [i_4 - 1] [i_4] [i_4 + 2] [i_4 - 1]))), (min((15652786064741186195ULL), (((/* implicit */unsigned long long int) arr_20 [i_4 + 1] [i_4] [i_4 + 2] [i_4 + 3]))))));
                    var_23 *= ((/* implicit */unsigned long long int) ((short) var_9));
                }
            } 
        } 
    } 
}
