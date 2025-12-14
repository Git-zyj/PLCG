/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236381
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
    var_15 ^= max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_4)))))))), (((((/* implicit */int) min((((/* implicit */unsigned char) var_14)), (var_3)))) << ((((~(((/* implicit */int) var_8)))) + (29))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) arr_1 [i_2]);
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_1])) - (((/* implicit */int) arr_6 [i_0] [i_1])))))));
                    arr_7 [i_0] [i_1] [1LL] [i_0] = (_Bool)1;
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) (unsigned short)55109);
    var_19 = ((/* implicit */long long int) ((min((((/* implicit */int) (short)-22644)), (min((var_11), (((/* implicit */int) var_0)))))) % ((~(((/* implicit */int) (short)22661))))));
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_11 [i_3] [i_4])), (var_13))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (1342565648) : (arr_8 [i_3] [i_4]))))))), (max((((/* implicit */unsigned long long int) max(((short)22643), (((/* implicit */short) var_8))))), (arr_9 [i_3])))));
                var_21 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min(((short)-22629), (((/* implicit */short) (unsigned char)182))))), (arr_10 [i_4] [i_3])));
            }
        } 
    } 
}
