/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227591
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
    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_9)), ((+(max((var_0), (((/* implicit */unsigned long long int) var_2))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (((~(((unsigned int) var_16)))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_4)))))));
        var_21 = ((/* implicit */long long int) ((((var_9) + (2147483647))) << ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) ((var_9) - (((/* implicit */int) var_2)))))) + ((+(((/* implicit */int) ((_Bool) var_6)))))));
        arr_6 [(unsigned short)2] |= ((/* implicit */signed char) var_10);
        var_23 = ((/* implicit */unsigned char) var_12);
    }
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
    {
        var_24 = ((((/* implicit */unsigned long long int) (+(((var_7) / (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) / ((+((-(var_19))))));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        var_25 = var_6;
                        arr_18 [i_5] [i_2] [10U] [i_2] = ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (signed char)112)));
                        var_26 |= ((/* implicit */short) var_8);
                        var_27 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_12)), (var_3)));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 2; i_6 < 15; i_6 += 2) 
                    {
                        arr_23 [i_2] [i_3] [i_3] [i_2] = var_13;
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_9))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_12))));
                    }
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned short) ((unsigned char) var_10));
                        var_31 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) var_9)) + (var_7))) + (((var_16) - (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (var_15))))) > (var_17)));
                        arr_27 [(_Bool)1] [i_3] [(_Bool)1] [i_3] [i_3] [i_2] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_19)))));
                    }
                    for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        arr_30 [i_2] [i_3] [(signed char)7] [i_8] = ((/* implicit */unsigned int) ((signed char) 1586519624U));
                        var_33 |= ((/* implicit */short) max((((unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) * (((var_0) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
                        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) max((((long long int) ((((/* implicit */int) var_13)) + (((/* implicit */int) var_4))))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) ((signed char) 8574735831850257153ULL)))))))))));
                    }
                    var_35 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) >= (var_0)))), (((var_9) / (((/* implicit */int) var_18))))))) > (var_17)));
                    var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) var_3))));
                }
            } 
        } 
        arr_31 [0ULL] |= ((/* implicit */long long int) ((_Bool) var_1));
        arr_32 [i_2] = ((/* implicit */unsigned long long int) var_8);
    }
}
