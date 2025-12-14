/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241265
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
    var_13 += ((/* implicit */_Bool) min(((unsigned char)139), (((/* implicit */unsigned char) ((((/* implicit */int) min((var_12), (((/* implicit */unsigned char) var_6))))) < (((var_0) % ((-2147483647 - 1)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (short)-24440)) == (((/* implicit */int) min(((unsigned short)60996), (((/* implicit */unsigned short) arr_1 [(unsigned char)7] [(short)10])))))))) <= (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_7))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_2)), ((unsigned char)117)))) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)104)))) : (((int) (unsigned char)104)))), (((/* implicit */int) var_12))));
                                var_15 *= ((/* implicit */_Bool) (+((-(((var_5) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [(unsigned char)7]))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [(unsigned char)0])), (arr_10 [i_4] [6] [i_2] [i_1] [(_Bool)1] [3])))) & (((((/* implicit */int) arr_10 [i_4] [i_3] [i_2] [i_0] [i_1] [i_0])) / (((/* implicit */int) (short)-869)))))) - (min((((((/* implicit */int) var_4)) / (((/* implicit */int) arr_12 [i_3] [i_1] [i_2] [(unsigned char)9] [i_0])))), (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_3])) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) arr_11 [i_0] [(unsigned short)0] [(unsigned char)7] [i_3] [i_4]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
