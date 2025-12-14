/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213540
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (-((-(((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [(unsigned char)0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)124)) >> (((((/* implicit */int) (short)-15962)) + (15962)))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_5 [i_1] [8] [11]))));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_1]))));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((/* implicit */long long int) arr_2 [16U])) : (arr_6 [12U] [(short)2]))))));
                }
            } 
        } 
        arr_9 [i_0 - 2] = ((/* implicit */long long int) (-(var_0)));
        var_15 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) var_2))) <= (3093131826208841122LL))) ? (arr_6 [i_0 - 3] [12U]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((unsigned char) arr_3 [i_0 + 1])))));
    }
    /* vectorizable */
    for (short i_3 = 4; i_3 < 16; i_3 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) && ((_Bool)1)));
        var_18 = ((/* implicit */short) (~(((/* implicit */int) (short)-15962))));
    }
    for (int i_4 = 3; i_4 < 13; i_4 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) ((arr_2 [(unsigned short)4]) << ((((-(((/* implicit */int) var_3)))) - (18564)))));
        var_20 += ((/* implicit */_Bool) (~(max((arr_1 [i_4] [i_4 - 1]), (((/* implicit */unsigned int) (-2147483647 - 1)))))));
        arr_14 [i_4] [i_4 - 1] = ((/* implicit */short) ((unsigned char) (_Bool)1));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(unsigned char)16])) ? (((/* implicit */unsigned int) arr_11 [3U])) : (((unsigned int) max((((/* implicit */unsigned int) 67100672)), (arr_1 [i_4 + 1] [i_4]))))));
    }
    var_22 = (~(2147483647));
}
