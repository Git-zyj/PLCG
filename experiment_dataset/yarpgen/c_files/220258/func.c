/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220258
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
    var_10 = ((/* implicit */long long int) var_4);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_2 - 2]))))) || (((/* implicit */_Bool) ((6807066801275291763LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                        var_12 *= ((/* implicit */_Bool) ((short) (((!(((/* implicit */_Bool) 1078681731U)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0] [i_1] [i_1 - 1]))))) : (((((/* implicit */_Bool) 3989419708U)) ? (((/* implicit */long long int) 3216285583U)) : (-1276245736901753126LL))))));
                        arr_12 [i_0] [(short)11] [i_0] [19LL] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(3216285595U))))))), (((((/* implicit */unsigned long long int) ((((arr_9 [14] [14] [i_2] [i_1] [i_0] [i_1]) + (9223372036854775807LL))) >> (((3216285565U) - (3216285558U)))))) % (((((/* implicit */unsigned long long int) var_9)) | (arr_10 [i_0] [i_2] [i_3])))))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3216285595U)) ? (-3946789892950873803LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)153)))));
    }
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) max((((/* implicit */long long int) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))))), (((long long int) (~(3216285595U)))))))));
}
