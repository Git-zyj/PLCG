/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26259
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
    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) + (max((((/* implicit */unsigned int) var_0)), (var_5))))))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (var_3)))) ? (((/* implicit */int) var_1)) : (var_4)));
    var_17 -= ((/* implicit */unsigned int) var_12);
    var_18 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (var_4)))))) > (((((/* implicit */unsigned int) (~(1985000402)))) | (max((var_5), (((/* implicit */unsigned int) var_8))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0 - 2]), (((/* implicit */unsigned char) ((arr_4 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((-1985000424) + (2147483647))) >> (((arr_10 [i_1] [i_1] [i_1] [i_2] [(unsigned short)6]) - (6494206920190385696LL))))))))) : (((/* implicit */int) var_2))));
                                var_20 = ((/* implicit */int) arr_8 [i_4 + 2]);
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_4 [(unsigned char)12]))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */long long int) arr_14 [(unsigned short)17] [i_1] [(unsigned short)17]);
            }
        } 
    } 
}
