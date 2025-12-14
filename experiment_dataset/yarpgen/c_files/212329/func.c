/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212329
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
    for (long long int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [16U])) ? (((((/* implicit */unsigned long long int) var_11)) ^ (arr_0 [4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 3])))));
        arr_2 [(unsigned char)4] &= ((/* implicit */unsigned long long int) ((arr_0 [(unsigned short)12]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 2])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_10 [i_3] [i_3] [i_0] [i_3] = ((/* implicit */short) 8388544);
                        arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_0 - 2])) <= (-2138467326)));
                        arr_12 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_0] [i_2])) > (var_7))))));
                        arr_13 [(unsigned char)0] [i_0 + 1] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */short) arr_9 [i_2] [i_2] [i_1] [6]);
                        var_21 = ((/* implicit */signed char) ((3550270762081591445LL) != (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */signed char) var_6);
    var_23 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) var_5)) ? (8055280012887814553ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? ((+(var_19))) : (((/* implicit */int) var_13))));
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_7))));
}
