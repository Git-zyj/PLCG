/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198148
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
    var_10 |= ((/* implicit */unsigned int) var_5);
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)38)) <= (((/* implicit */int) (unsigned char)38))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)72))) : (arr_3 [i_1] [i_0] [i_1]))))));
                var_12 &= ((/* implicit */signed char) var_4);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_13 = ((/* implicit */signed char) (-(((((/* implicit */int) var_0)) % (var_2)))));
                    var_14 = ((/* implicit */int) (unsigned short)45331);
                }
                for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    var_15 = ((/* implicit */short) (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) 1257982061)) && (((/* implicit */_Bool) var_4))))), ((~(arr_10 [i_0] [(short)3] [i_3])))))));
                    arr_12 [i_1] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) (signed char)-61)) * (((/* implicit */int) (signed char)90))))), (arr_10 [i_0] [i_0] [i_3])));
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (-((+(980868728U))))))));
                }
                arr_13 [i_1] [i_1] = ((/* implicit */unsigned int) arr_3 [i_1] [i_1] [i_1]);
            }
        } 
    } 
}
