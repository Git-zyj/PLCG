/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42894
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && ((_Bool)1))))))) & (((((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (0LL))) - (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)63)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_13 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)0);
                        arr_14 [i_0] [i_1] [i_0] [i_0] = var_2;
                        var_11 = ((((/* implicit */_Bool) 5485744587303939427LL)) && ((!(((/* implicit */_Bool) var_4)))));
                    }
                } 
            } 
        } 
        var_12 *= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-8626884938852953130LL)))) || (((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) var_2))));
    }
}
