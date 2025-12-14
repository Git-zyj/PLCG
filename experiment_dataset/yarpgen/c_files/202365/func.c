/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202365
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
    var_17 &= ((/* implicit */unsigned short) max((var_5), (((/* implicit */long long int) (+(((/* implicit */int) var_12)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_18 ^= ((((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0])) - (57320))))) > (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_8)))) || (((/* implicit */_Bool) arr_0 [(_Bool)1]))));
                    var_19 *= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_0]))));
                    var_20 = var_14;
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_0 [i_0])))))));
    }
    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) arr_9 [i_3]))))));
        var_22 = ((/* implicit */short) ((max((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_0 [i_3])))), (((/* implicit */int) arr_4 [i_3] [20U])))) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_3] [i_3])) * (((/* implicit */int) arr_9 [i_3]))))) <= ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_3))))))));
    }
}
