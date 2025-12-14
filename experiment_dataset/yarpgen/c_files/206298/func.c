/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206298
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_8 [i_1 - 3] [i_1] [3LL] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_1])))))) ? (((arr_5 [2LL] [2LL] [i_1 + 2]) ^ (-6407991061264970986LL))) : (arr_8 [i_1 - 3] [i_1 + 1] [i_1 + 2] [i_1 + 2])))) ? (((long long int) arr_0 [i_1 + 2])) : (((/* implicit */long long int) ((/* implicit */int) ((((long long int) var_13)) >= (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_6)), ((unsigned short)39760)))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) arr_13 [i_0] [i_1] [i_0] [i_3]);
                                arr_17 [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1 - 2] [i_1 - 2])))))));
                                arr_18 [i_0] [9LL] [i_0] [i_0] [i_0] [i_1] [i_0] = ((max((((((/* implicit */_Bool) 1812305474994787965LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21078))) : (-1LL))), (((/* implicit */long long int) ((unsigned short) arr_15 [i_0] [i_0] [i_0] [(unsigned short)9]))))) < (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] [i_0] [i_0]))));
                                var_20 -= ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) var_16);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_6);
    var_23 = ((/* implicit */unsigned short) var_14);
    var_24 = ((/* implicit */unsigned short) max((var_7), (var_15)));
}
