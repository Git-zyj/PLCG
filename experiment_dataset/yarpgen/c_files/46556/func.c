/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46556
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */int) ((signed char) ((max((((/* implicit */long long int) var_3)), (var_9))) & (((/* implicit */long long int) var_15)))));
                var_19 = ((/* implicit */_Bool) max((min(((~(-7554564658713617278LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (731687297U)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 3049031191U)))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) & (((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1] [i_1 - 1])) ? (min((686095516U), (((/* implicit */unsigned int) arr_0 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65522)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_13 [(unsigned char)2] [i_1] [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(min((var_3), (((/* implicit */int) var_0))))))) ? (var_1) : ((~(((var_16) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) : (var_1)))))));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_16 [i_0] [19U] [i_2] [i_3] [i_4] = 1344193831;
                                arr_17 [i_0] [i_0] [i_0] [2U] [i_0] = ((/* implicit */unsigned short) min((arr_6 [6ULL] [i_0] [i_1]), (((/* implicit */unsigned char) arr_12 [i_0] [i_1]))));
                                var_20 = var_18;
                            }
                            arr_18 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (~(4294967295U)));
                            var_21 = ((/* implicit */unsigned long long int) ((7554564658713617277LL) % (((/* implicit */long long int) arr_9 [i_0] [3LL] [13LL] [i_3 + 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) var_16)))) ? (max((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) -1977078136)) ? (3472942866U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
    var_23 = ((/* implicit */long long int) var_14);
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -7554564658713617288LL)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (+(31744U)))))))))));
}
