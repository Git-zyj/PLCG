/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22377
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
    var_10 -= ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */_Bool) 92464079U);
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_2 [i_0] [i_1]);
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) var_9);
            }
        } 
    } 
    var_12 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (var_3) : (((/* implicit */long long int) (~(((/* implicit */int) var_1))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                {
                    arr_14 [i_2] [(signed char)3] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_13 [i_2])) & (((/* implicit */int) (signed char)44)))) != (((/* implicit */int) var_4))));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_17 [i_2] [i_2] [17ULL] [i_2] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */signed char) var_4)), (arr_11 [i_5]))))))) ? (((/* implicit */long long int) arr_10 [i_5] [6])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_1))))) : (-1980142193556533581LL)))));
                        arr_18 [i_2] [i_5] [i_2] [11LL] = ((/* implicit */unsigned char) arr_15 [i_5] [i_3] [i_2] [i_5]);
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_23 [i_2] [i_3] [(signed char)17] = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)11293)) : (((/* implicit */int) var_7))))))) ? ((+(((((/* implicit */_Bool) arr_10 [7ULL] [(_Bool)1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)6)))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)11294)) || (((/* implicit */_Bool) 3208072156U))))));
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4] [i_3])))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (var_6)))))) <= (((/* implicit */int) max((((/* implicit */short) arr_11 [i_3])), (var_1))))));
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((long long int) var_5)))));
                        var_15 = ((/* implicit */unsigned char) var_5);
                    }
                }
            } 
        } 
    } 
}
