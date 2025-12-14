/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249801
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
    var_15 = ((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 13105132531116970217ULL))))), (var_13)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_0))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)11)) <= (1185174852)));
                    arr_9 [i_2] [(unsigned char)8] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (13564259863306131653ULL)))) || (((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) 18446744073709551605ULL)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (-2147483647 - 1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (min((var_10), (((/* implicit */unsigned short) (unsigned char)227))))))))));
                    arr_10 [i_1] [2] [i_2] [1U] = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))), (min((-1185174852), (((/* implicit */int) (short)(-32767 - 1)))))));
                    var_17 = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_2 [i_0])))), (max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((var_5), (arr_3 [i_1] [i_2]))))))));
                }
            } 
        } 
    } 
}
