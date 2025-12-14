/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198004
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
    var_17 = var_15;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_14 [i_0] [i_1] [i_2] [i_3] [i_2] [i_2]))) % (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_4]))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) - (((/* implicit */int) arr_0 [i_2])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) -1733965592040739670LL))))))))) < (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (arr_7 [i_4] [i_3] [i_2])))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max(((unsigned char)0), (((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            {
                arr_21 [i_5] = arr_20 [i_5] [i_5] [i_5];
                arr_22 [i_6] [i_5] [i_5] = (unsigned char)255;
            }
        } 
    } 
}
