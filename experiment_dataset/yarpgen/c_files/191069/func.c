/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191069
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    var_16 ^= ((/* implicit */unsigned short) max((((var_7) < (((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 2] [i_2 + 1])))), (((arr_2 [i_2 + 3] [i_2 + 2] [i_2 - 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_1]))))))));
                    var_17 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1] [i_1])) + (((/* implicit */int) arr_6 [i_0] [13LL] [i_0]))))))) && ((_Bool)0)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (short i_4 = 2; i_4 < 11; i_4 += 4) 
            {
                {
                    arr_13 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_3])) ? (531403817127301591LL) : (((/* implicit */long long int) var_3)))))) : (((/* implicit */int) ((((/* implicit */int) arr_5 [13] [i_4 + 4] [i_4 + 3] [i_4 + 4])) != (((/* implicit */int) arr_5 [i_0] [i_4 - 2] [i_0] [i_4 - 2])))))));
                    var_18 += ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_9 [i_0] [i_4 + 2] [i_4 + 4])))), (((/* implicit */int) arr_9 [i_4 + 4] [(unsigned short)11] [i_4 - 1]))));
                    arr_14 [i_3] = arr_12 [i_0] [i_0] [i_0] [i_0];
                }
            } 
        } 
    }
    var_19 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) -849345348560791772LL))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        for (short i_6 = 1; i_6 < 22; i_6 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6 - 1] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) (unsigned short)33433)) : (((/* implicit */int) max((var_13), (((/* implicit */short) arr_20 [i_5])))))))) && (((/* implicit */_Bool) -427818911))));
                arr_21 [i_5] [i_5] [i_6 - 1] = ((/* implicit */unsigned char) 1096506770U);
                arr_22 [i_5] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_20 [i_6])) : (var_7)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_14)))) * (((/* implicit */int) arr_19 [i_5] [(unsigned short)20] [i_6 + 2]))));
                var_21 -= ((/* implicit */short) (unsigned short)53404);
                arr_23 [i_5] [i_6 - 1] [i_6] = (unsigned short)12140;
            }
        } 
    } 
}
