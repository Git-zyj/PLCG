/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22838
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
    var_12 = min(((unsigned short)40567), ((unsigned short)40567));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */long long int) (~(var_10)))), (((long long int) (short)2047)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (2189859138U)))) ? (((/* implicit */unsigned int) (~(var_5)))) : (((((/* implicit */_Bool) 2105108158U)) ? (4044273496U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))))));
                    var_14 = (-(((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [(unsigned short)4] [i_1])))));
                    var_15 |= ((/* implicit */unsigned short) ((unsigned int) (unsigned short)40570));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) (short)-819);
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (short)-1171))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_10 [i_4 + 2] [i_3 + 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0])), ((unsigned short)47313)))) : ((+(((/* implicit */int) arr_10 [i_4 + 3] [i_3 - 2] [i_0 - 1] [(_Bool)1] [i_0 - 1] [i_0]))))));
                                var_18 *= ((/* implicit */short) ((_Bool) var_11));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = (!(((/* implicit */_Bool) (-((+(var_7)))))));
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) == (var_0))))))))));
}
