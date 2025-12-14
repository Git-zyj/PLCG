/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228762
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 3) /* same iter space */
                    {
                        arr_11 [i_3] [i_0] [i_3] [6ULL] [i_3] = ((/* implicit */int) max(((~(var_6))), (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_2))))))));
                        var_10 &= var_3;
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 14; i_4 += 3) /* same iter space */
                    {
                        arr_16 [i_0] [i_0] [(unsigned char)16] [i_4] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_9)) <= (var_8)));
                        arr_17 [i_0] [i_1 - 1] [(signed char)1] [i_0] [i_1 - 1] [i_2] = ((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) var_3))))));
                        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (!(((/* implicit */_Bool) var_8)))))));
                        var_12 *= ((/* implicit */unsigned int) var_9);
                    }
                    for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 3) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) min((min((var_1), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))))))));
                        arr_22 [i_0] [i_0] = ((/* implicit */unsigned int) var_1);
                    }
                    for (unsigned long long int i_6 = 3; i_6 < 17; i_6 += 3) /* same iter space */
                    {
                        arr_26 [i_0] [i_1 - 1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) var_0);
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            arr_29 [i_0] [i_1] [(unsigned char)13] [i_0] = ((/* implicit */unsigned long long int) (-(max((var_6), (var_0)))));
                            arr_30 [i_0] [i_6] [i_0] [(_Bool)1] [i_0] = ((/* implicit */long long int) max((((min((19ULL), (((/* implicit */unsigned long long int) -6149237956425731864LL)))) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((int) var_7))), (((unsigned int) var_8)))))));
                            var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))), (((((/* implicit */int) var_4)) >> (((var_0) - (1968814790U)))))))), ((-(var_0)))));
                            arr_31 [i_0] [i_0] [i_0] [16ULL] [i_0] = ((/* implicit */unsigned long long int) max((6149237956425731863LL), (((/* implicit */long long int) (short)511))));
                        }
                    }
                    arr_32 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((max((var_1), (var_8))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (3U))))));
                    var_15 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_2)) ? ((-(var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            {
                                arr_39 [i_0] [i_0] [i_0] [i_8] [(unsigned char)2] = ((/* implicit */int) min((max((var_1), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((short) var_1)))));
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) min((min((max((var_8), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */short) var_3))))))), (((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_6)))) : (((unsigned long long int) var_0)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) ((_Bool) 125829120)))))) ? ((-(var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (((/* implicit */short) var_5)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_8))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (var_6)))) ? (((/* implicit */long long int) min((var_6), (var_6)))) : (var_9)))))))));
}
