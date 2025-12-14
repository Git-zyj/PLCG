/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238111
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_1 - 1] [i_1 + 1] [i_1] = ((/* implicit */short) var_1);
                    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)38))))) & (((((((/* implicit */long long int) ((/* implicit */int) (short)19582))) > (4100059428134377852LL))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) (short)19571))))) : (arr_6 [i_0] [(unsigned char)2] [12] [i_2]))))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */short) ((unsigned long long int) (short)-19571));
                        arr_11 [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_1] [7LL])), (max((arr_5 [(signed char)16] [i_2] [16]), (((/* implicit */long long int) arr_10 [i_0] [(unsigned short)12] [i_2] [i_3]))))))) ? (((/* implicit */unsigned int) min(((+(((/* implicit */int) (short)-19562)))), (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (short)-19591)))))))) : (((unsigned int) (-(var_2))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
                    {
                        var_13 = ((/* implicit */int) var_8);
                        arr_16 [i_4] [i_4] [i_1] [10U] = (short)19561;
                        var_14 = ((/* implicit */short) var_8);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] [i_2] [11] [i_1] = ((/* implicit */unsigned int) arr_3 [i_0] [i_5]);
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) 7U)) / (arr_9 [1] [i_0] [1] [i_1] [i_1] [i_5]))))) ? ((-((-(((/* implicit */int) var_6)))))) : (((/* implicit */int) var_6))));
                        arr_20 [i_1] [i_5] [i_5] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) arr_9 [i_0] [i_1 - 1] [i_2] [i_1] [i_2] [i_2]);
                    }
                }
            } 
        } 
    } 
    var_16 -= ((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) 808963402))));
}
