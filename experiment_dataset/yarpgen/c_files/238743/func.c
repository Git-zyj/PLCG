/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238743
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (~(((var_15) - (((/* implicit */int) var_14)))))))));
    var_18 = ((/* implicit */int) min((var_18), (var_5)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [18] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)86)))) || (((/* implicit */_Bool) min((arr_6 [i_2] [i_1 + 2] [18U] [i_1]), (var_11)))))))));
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((max((((/* implicit */long long int) arr_6 [i_1] [i_1 + 2] [i_1] [i_0])), (-15LL))), (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_2] [i_1 - 1] [i_2] [i_0]))))))))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((+(var_9)))))) || (((/* implicit */_Bool) (~(arr_2 [i_0]))))));
        arr_11 [i_0] = ((/* implicit */long long int) (short)16383);
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        arr_15 [i_3] = ((unsigned short) (~(((/* implicit */int) (unsigned char)243))));
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 3) 
        {
            arr_18 [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_14 [i_4 + 2] [i_4 + 1]))));
            arr_19 [i_4] [(unsigned char)12] = ((/* implicit */short) (~((+(((/* implicit */int) arr_13 [i_4]))))));
            arr_20 [i_3] [i_3] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)59224)) ? ((+(var_12))) : (((var_12) / (((/* implicit */int) arr_13 [i_4]))))));
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_4 + 2] [i_4])) ? (((/* implicit */int) arr_12 [i_3] [i_3])) : ((~(((/* implicit */int) arr_17 [i_3] [i_4]))))));
        }
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            var_21 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_17 [i_3] [i_5]))) <= (((/* implicit */int) arr_14 [i_5] [i_3]))));
            var_22 = ((/* implicit */short) (unsigned char)207);
        }
        var_23 = ((/* implicit */_Bool) (short)-13080);
        arr_23 [i_3] = ((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) arr_17 [i_3] [i_3])))) * ((+(((/* implicit */int) arr_17 [i_3] [i_3]))))));
    }
}
