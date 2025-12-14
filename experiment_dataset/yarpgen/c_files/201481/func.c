/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201481
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
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) (short)-10333)) ? (((/* implicit */long long int) var_3)) : (var_6))), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) var_8))));
        var_12 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_1 [i_0 - 2] [i_0])), (max((((/* implicit */int) var_4)), (((-1525352255) - (((/* implicit */int) var_4))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_2] [i_2 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) var_9)) : (var_5))) << (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 2] [i_2])))) - (65482))))))));
                        arr_12 [i_0] [i_2] [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) (+(min(((+(((/* implicit */int) var_7)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_11))))))));
                        var_13 &= ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_0 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned char)126)) ? (1749618793) : (((/* implicit */int) var_10))))))) : (-2358450640463537460LL));
                        arr_13 [i_0] [i_1] [i_1] [i_3] [i_1] [i_0] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((4294967284U) % (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (max((((/* implicit */unsigned long long int) var_11)), (var_1))) : (((/* implicit */unsigned long long int) (~(var_3)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_1] [i_0 + 1] [i_1] [i_0 + 1])))));
                    }
                    arr_14 [i_0 - 1] [i_1] [i_2] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2815)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((int) var_11)) : (((/* implicit */int) (unsigned short)5217))))));
                    var_14 = ((/* implicit */int) (signed char)8);
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */int) (+(((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0 - 2]))) + (var_9)))));
    }
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) / (((((/* implicit */_Bool) var_8)) ? (-4658228483894082693LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-114))))))))));
    var_16 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : ((~(max((((/* implicit */int) var_10)), (var_8))))));
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
}
