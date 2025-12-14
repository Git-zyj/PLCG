/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4699
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))));
        arr_2 [i_0] &= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((int) arr_0 [i_0]))), (arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */long long int) var_10);
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((1279186765665656319ULL) <= (((17167557308043895315ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0]))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) ((((_Bool) (unsigned char)92)) || (((/* implicit */_Bool) var_16))));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((min((((arr_5 [i_1]) ^ (1279186765665656301ULL))), (arr_5 [i_1]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_11)))))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                {
                    arr_15 [i_3] [i_3] = ((/* implicit */signed char) (-(var_15)));
                    arr_16 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) ((short) arr_14 [i_4] [i_3] [i_2]));
                    var_21 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 10052140823428699796ULL))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_22 &= ((/* implicit */short) 400374774);
                        arr_19 [i_5] [i_3] [i_4] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_18 [i_5] [i_3] [i_5])) && ((_Bool)1)))));
                        arr_20 [i_5] [i_4] [i_4] [i_3] [i_3] [i_5] = ((/* implicit */unsigned short) ((((var_9) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_2]))))) : (var_6)));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_5 - 1] [i_5] [i_5 - 1] [i_2])) ? (((/* implicit */int) ((_Bool) var_6))) : (arr_18 [i_4] [i_4] [i_4]))))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_14)))) : (((((/* implicit */_Bool) var_15)) ? (var_17) : (var_0)))));
                    }
                }
            } 
        } 
        var_25 ^= ((/* implicit */unsigned char) arr_11 [i_2] [i_2]);
        arr_21 [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
    }
    var_26 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_15) <= (((/* implicit */long long int) (~(-1376899810)))))))) % (min((var_13), (var_13)))));
}
