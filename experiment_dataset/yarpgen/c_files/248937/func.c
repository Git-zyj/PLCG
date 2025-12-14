/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248937
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
    var_10 = ((/* implicit */unsigned int) ((max((((/* implicit */int) ((((/* implicit */_Bool) -395953323)) && (((/* implicit */_Bool) -395953323))))), (min((((/* implicit */int) var_0)), (-395953323))))) << (((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)9972)), ((unsigned short)46078)))) ? (((unsigned int) var_4)) : (var_5))) - (4126307372U)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */long long int) ((arr_2 [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((int) -395953323)))));
                var_12 = ((/* implicit */unsigned long long int) -395953326);
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [i_2] [i_0] [i_0] [i_1] [i_0 - 2] = ((((-395953323) + (2147483647))) >> (((2147483647U) - (2147483640U))));
                                var_13 = ((/* implicit */unsigned int) var_2);
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) << (((-395953341) + (395953341)))))) ? (((/* implicit */unsigned int) (-(arr_9 [i_0] [i_0] [i_0])))) : (((arr_0 [i_2]) | (((/* implicit */unsigned int) 395953323))))))) ? (((((/* implicit */unsigned int) 395953322)) * (arr_13 [i_0] [i_1 + 1] [i_0]))) : ((-(((arr_10 [i_0] [i_0] [i_2] [i_3] [i_4]) / (((/* implicit */unsigned int) -395953323))))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */int) max((((unsigned int) (+(arr_8 [i_0] [i_0] [i_0] [i_1])))), (((/* implicit */unsigned int) ((int) arr_5 [i_0] [i_1 - 1] [i_1 - 1])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        for (unsigned char i_6 = 3; i_6 < 24; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 24; i_7 += 4) 
            {
                {
                    var_16 = min(((~(((-395953305) + (-395953322))))), (((int) var_4)));
                    arr_24 [i_5] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -395953341)) ? (var_1) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (395953361) : (1876503596))) / (((/* implicit */int) arr_18 [i_6 - 3] [i_6 + 1] [i_7 - 1])))))));
                }
            } 
        } 
    } 
}
