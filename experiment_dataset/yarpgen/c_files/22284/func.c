/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22284
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
    var_20 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_2 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2])))))));
        arr_5 [i_0 + 2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (var_17) : (((/* implicit */long long int) ((((/* implicit */_Bool) 467593793U)) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) (unsigned char)240)))))))), (13422212604193539108ULL)));
        arr_6 [i_0 + 2] [i_0 - 1] = ((/* implicit */_Bool) (-((-(var_12)))));
        var_21 = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) >> (((((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((~(((/* implicit */int) var_18)))) : (((/* implicit */int) arr_1 [i_0 + 2])))) - (26980)))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)60)) % ((+(((/* implicit */int) (short)60))))));
    }
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1])) ? (arr_2 [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
        var_24 = ((/* implicit */unsigned long long int) var_19);
        var_25 = ((/* implicit */int) var_15);
    }
    for (unsigned int i_2 = 1; i_2 < 21; i_2 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) (short)4865)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)50)))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)104)))) ? ((-(((/* implicit */int) arr_15 [i_4] [i_2 - 1] [i_4])))) : (((/* implicit */int) min((arr_15 [i_2] [i_2 + 2] [i_4]), (arr_15 [i_2] [i_2 - 1] [i_2]))))));
                                arr_24 [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((2188640451642966390ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_16)) % (arr_16 [i_2] [i_2] [i_2] [i_2 + 2]))))));
                                arr_25 [i_2] = ((/* implicit */unsigned char) var_12);
                                arr_26 [i_5] [i_5] [i_2] = ((/* implicit */unsigned long long int) arr_14 [i_2] [i_2] [i_2]);
                            }
                        } 
                    } 
                    arr_27 [i_2] [i_2] [i_2] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (2139982033722053705ULL) : (0ULL)))) ? ((+(((/* implicit */int) arr_19 [i_2] [i_3])))) : (((((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_4])) ? (arr_13 [i_4] [i_3] [i_2 - 1]) : (((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), (arr_15 [i_2] [i_2] [i_4])))) ? (min((4773775387665387607ULL), (((/* implicit */unsigned long long int) (short)3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4])))))));
                    var_28 += ((/* implicit */unsigned char) arr_22 [i_2 + 2] [i_2]);
                }
            } 
        } 
        arr_28 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)42)) >> (((3180896845U) - (3180896830U)))));
        arr_29 [15U] [i_2] = ((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)43))))));
        var_29 = arr_3 [i_2] [i_2 + 2];
    }
}
