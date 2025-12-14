/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48317
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
    var_11 = ((/* implicit */short) var_5);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */short) min((((/* implicit */unsigned int) ((-2066883984) >= (((/* implicit */int) (short)30315))))), ((+(((((/* implicit */_Bool) -1401913645)) ? (((/* implicit */unsigned int) -1702372193)) : (4294967295U)))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_5 [i_0]);
                    var_13 = ((/* implicit */unsigned char) (~((-(12582912)))));
                    var_14 |= ((/* implicit */unsigned short) -1455178374);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)27))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) (_Bool)1))))) || (((((/* implicit */int) (unsigned char)21)) > (((/* implicit */int) var_10))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)1792)) || (var_0))))));
                                arr_15 [i_3] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) ((_Bool) arr_13 [i_4] [i_3] [i_2] [i_3] [(_Bool)1]));
                                arr_16 [i_4] [i_4] [i_4] [i_3] [i_4] [i_4] [i_4] = (((!((!(var_6))))) ? (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_3]))))), (max((((/* implicit */unsigned long long int) arr_0 [(short)8] [(short)8])), (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
