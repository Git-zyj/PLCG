/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233892
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_10 = ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_7 [i_3] [i_0] [i_0]))))));
                            var_11 -= ((unsigned char) (unsigned short)51525);
                            arr_9 [i_0] [i_1] [17U] [i_3] [(signed char)4] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)(-127 - 1)))));
                            var_12 = ((/* implicit */unsigned int) (unsigned short)51525);
                            arr_10 [19] [19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_0 [i_3]), (var_3)))) ? (((/* implicit */int) ((1397517423) >= ((+(((/* implicit */int) var_9))))))) : (((/* implicit */int) ((_Bool) var_8)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    for (unsigned char i_5 = 4; i_5 < 23; i_5 += 2) 
                    {
                        {
                            var_13 ^= ((/* implicit */short) (+(((arr_17 [(short)19] [2] [i_5 - 2] [(signed char)24]) & (arr_17 [12LL] [8ULL] [i_5 + 1] [16U])))));
                            arr_18 [(_Bool)1] [i_1] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_13 [i_0] [3] [3] [i_5 + 2])) ? (((((/* implicit */unsigned long long int) arr_0 [i_4])) / (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)63)) == (((/* implicit */int) arr_4 [(_Bool)1] [i_0])))))))) >= (((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */unsigned long long int) -2246616754629205304LL)) : (16793941565839617666ULL)))));
                            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_0] [i_0] [(signed char)20] [i_5 - 2] [(signed char)20]))))) ? (((int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (signed char)30))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((unsigned int) (unsigned short)0)))) ? (((/* implicit */unsigned long long int) var_3)) : (var_7)));
    var_16 = ((int) var_0);
    var_17 *= ((/* implicit */unsigned short) (((~(var_2))) & (((/* implicit */unsigned long long int) var_4))));
}
