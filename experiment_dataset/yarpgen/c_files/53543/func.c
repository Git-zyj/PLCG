/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53543
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_15))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) | (arr_2 [i_0] [i_0])));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) arr_1 [i_0] [i_2]));
                        var_20 = (-(arr_8 [i_0] [i_1] [i_2]));
                        var_21 |= ((/* implicit */short) (!(((/* implicit */_Bool) 1158890942U))));
                        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(-548045355283870184LL))))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned int) 2002949726);
}
