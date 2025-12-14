/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50728
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
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) var_3))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = 2083574610U;
        var_12 *= (~(8896832360346423150ULL));
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0])))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        arr_5 [i_1] = (-(((unsigned int) (+(9223372036854775796LL)))));
        var_14 = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned char) (~(arr_3 [i_1]))))), (((((/* implicit */_Bool) max((arr_4 [i_1]), (((/* implicit */int) var_10))))) ? (arr_4 [i_1]) : (((/* implicit */int) (unsigned short)14298))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) var_10);
        var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)157))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 2) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned long long int) var_2);
        /* LoopNest 3 */
        for (unsigned short i_3 = 2; i_3 < 19; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_2 + 1]))));
                        var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_9))));
                        var_18 = ((/* implicit */unsigned long long int) ((long long int) (+(var_4))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 2) /* same iter space */
    {
        arr_24 [i_6 - 1] = ((/* implicit */unsigned long long int) ((min((arr_0 [0U]), (((/* implicit */unsigned long long int) var_3)))) == (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (var_4))))));
        arr_25 [i_6 + 1] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_4 [i_6])) ? (min((((/* implicit */int) (signed char)-107)), (var_2))) : (((/* implicit */int) var_1)))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_6))));
    }
    var_20 = ((/* implicit */unsigned long long int) var_7);
    var_21 = ((/* implicit */unsigned short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (10335883841082441241ULL))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)120))))))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))));
}
