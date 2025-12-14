/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47915
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
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) / (arr_2 [i_1])))), ((~(3039758947196410951ULL)))));
                var_14 ^= ((/* implicit */long long int) arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [(_Bool)1] [i_3] [i_2] [i_3] = ((/* implicit */_Bool) (~(arr_1 [(_Bool)1] [i_0])));
                            arr_13 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [4LL]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        for (short i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            {
                arr_18 [4] [i_5] = ((/* implicit */long long int) min((((/* implicit */int) (!(arr_5 [i_5] [i_4])))), ((+(-829320368)))));
                arr_19 [i_4] [(unsigned char)7] = ((/* implicit */_Bool) var_12);
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_1);
    var_16 = ((/* implicit */short) (-(829320368)));
}
