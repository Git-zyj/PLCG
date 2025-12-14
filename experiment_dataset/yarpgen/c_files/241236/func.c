/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241236
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
    var_10 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 1235410430)) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-1)) : (var_6))))), (((int) ((((/* implicit */_Bool) (unsigned short)43436)) ? (((/* implicit */int) (unsigned short)0)) : (0))))));
    var_11 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_0)) ? (((int) var_8)) : (((/* implicit */int) ((unsigned short) 0)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1 - 2] = (~(20));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_3 [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */long long int) -774516642)) / (-2403269600744578660LL)))))) ? ((+(((((/* implicit */int) var_3)) / (226481377))))) : (((/* implicit */int) min((var_3), (((/* implicit */unsigned char) arr_13 [i_1 + 1] [i_1 - 2])))))));
                                arr_16 [i_0] [i_1] [16] [i_3] [i_0] = ((/* implicit */short) min((((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) ((((/* implicit */int) (short)-6545)) == (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) (signed char)9)))))))));
                                arr_17 [(signed char)16] [i_1] [(signed char)16] [i_3] [i_4] = ((/* implicit */unsigned short) var_1);
                                arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_0)) & (((/* implicit */int) arr_5 [i_2])))))), (-1)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_12 = var_6;
}
