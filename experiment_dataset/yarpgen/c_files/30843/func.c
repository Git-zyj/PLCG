/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30843
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
    var_11 = ((/* implicit */long long int) (+(var_8)));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            var_12 = ((/* implicit */_Bool) -6797738447808742329LL);
            arr_9 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) var_2)))) || (((/* implicit */_Bool) arr_5 [i_1 - 3] [i_0]))));
        }
        arr_10 [i_0] = ((/* implicit */int) ((_Bool) ((arr_5 [i_0 + 2] [i_0]) << (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 1])))));
    }
    for (short i_2 = 2; i_2 < 13; i_2 += 3) /* same iter space */
    {
        arr_13 [i_2] [9ULL] = ((/* implicit */unsigned short) (-((-(((((/* implicit */int) arr_0 [i_2])) / (((/* implicit */int) var_1))))))));
        var_13 = var_3;
        var_14 = (+(((/* implicit */int) ((((/* implicit */int) min((var_6), (((/* implicit */unsigned short) arr_2 [i_2] [i_2]))))) > (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_4)))))))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    {
                        arr_20 [(unsigned char)7] [i_5] [i_4] [i_4] [i_3] [i_2] = max((((/* implicit */int) ((_Bool) var_10))), (min((((/* implicit */int) var_6)), (var_10))));
                        arr_21 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) var_8);
                    }
                } 
            } 
        } 
    }
}
