/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249918
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
    for (signed char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 += ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)233)) >> (((((/* implicit */int) var_6)) - (26608)))));
                var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned char)22), (min((var_3), (arr_2 [i_0])))))) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_1] [i_1]))))))))));
                var_15 ^= ((/* implicit */signed char) ((long long int) var_4));
                var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) arr_2 [i_0 + 2])))), (((/* implicit */int) var_5))));
            }
        } 
    } 
    var_17 = var_4;
    var_18 = (unsigned char)205;
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) var_11);
                arr_11 [i_2] [i_2] = ((/* implicit */signed char) var_0);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        for (long long int i_5 = 2; i_5 < 12; i_5 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_8 [i_5 - 2] [i_5 - 1]), (var_5))))));
                arr_18 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (arr_3 [i_5] [i_4] [i_5])))) ? (((/* implicit */int) arr_3 [i_4] [i_4] [i_4])) : (((/* implicit */int) (unsigned char)23))));
            }
        } 
    } 
}
