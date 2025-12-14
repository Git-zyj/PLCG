/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247615
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
    var_10 -= ((/* implicit */signed char) var_1);
    var_11 *= ((/* implicit */signed char) var_8);
    var_12 = min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))), ((+(((/* implicit */int) var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_2] = ((/* implicit */unsigned short) ((min((((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) var_6)))), ((+(((/* implicit */int) (unsigned short)0)))))) <= (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                                var_13 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) var_6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) && (((/* implicit */_Bool) (unsigned short)1))))) : (((((/* implicit */int) arr_0 [i_2])) >> (((((/* implicit */int) arr_3 [i_2] [i_3] [i_4])) + (17))))))))));
                                arr_12 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-48382815)))) ? (((/* implicit */int) ((_Bool) arr_3 [i_2] [i_1] [i_0]))) : (((/* implicit */int) arr_7 [i_0] [i_3] [i_2] [i_3] [i_4] [i_2]))))) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)9)));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((max((arr_6 [i_0] [i_1]), (arr_6 [i_1] [i_0]))), (((var_3) & (arr_6 [i_1] [i_0])))));
            }
        } 
    } 
}
