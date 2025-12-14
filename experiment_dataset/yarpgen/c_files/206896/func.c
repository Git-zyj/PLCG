/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206896
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) var_5))))))));
        var_17 |= ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) (short)-30293)))));
    }
    var_18 = var_11;
    var_19 |= ((/* implicit */_Bool) (-((+(((/* implicit */int) var_3))))));
    var_20 = ((/* implicit */unsigned short) ((short) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (short)-24401))))))));
    /* LoopNest 2 */
    for (long long int i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_9 [i_1 - 1] [i_2]))));
                arr_10 [i_2] [i_1] = ((/* implicit */_Bool) ((unsigned char) var_10));
                arr_11 [i_1] [(unsigned short)12] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) 393055838U)) ? (((((/* implicit */_Bool) (unsigned short)62220)) ? (((/* implicit */int) (short)30304)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((_Bool) (_Bool)1)))))) >= (max((((/* implicit */long long int) arr_9 [i_1 + 2] [i_1 - 1])), (min((((/* implicit */long long int) arr_5 [i_2])), (arr_8 [(_Bool)1] [(_Bool)1])))))));
            }
        } 
    } 
}
