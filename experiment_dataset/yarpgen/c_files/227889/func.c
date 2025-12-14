/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227889
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (-(1743711594669246254LL))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) var_3);
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_13 = ((/* implicit */unsigned char) max((var_13), ((unsigned char)208)));
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned char) var_10);
                    arr_9 [(unsigned short)1] [i_0] [i_2] [i_2] = ((/* implicit */short) var_5);
                    arr_10 [i_0] [19U] [i_0] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) var_7)), (arr_7 [i_0]))), (((/* implicit */unsigned int) arr_3 [i_0] [i_1]))));
                }
                arr_11 [i_0] [(unsigned char)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)10330))));
            }
        } 
    } 
}
