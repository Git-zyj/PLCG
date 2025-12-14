/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212210
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
    var_18 = min((((/* implicit */unsigned long long int) (unsigned char)190)), ((~(var_13))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_19 |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))), (((unsigned long long int) arr_1 [i_0] [i_0]))));
        var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) min((var_6), (4294967295U)))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1))))) ? (min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (var_7))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))) > (524287U))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 524277U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [(short)8]), (((/* implicit */unsigned short) arr_4 [i_1] [i_1])))))) : (min((((/* implicit */unsigned int) arr_0 [i_1])), (0U)))))) : (((var_3) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294443032U)) ? (524263U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))))))))));
        var_23 = ((/* implicit */unsigned int) -9114127084612566783LL);
    }
    for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) 524272U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_6 [i_2]))), (min((arr_6 [i_2]), (((/* implicit */unsigned int) var_5)))))))));
        var_25 = ((/* implicit */unsigned char) (-((~(arr_6 [i_2])))));
        arr_8 [i_2] = ((/* implicit */unsigned long long int) (+(min((((((/* implicit */int) (short)32765)) / (((/* implicit */int) arr_2 [i_2] [i_2])))), ((+(((/* implicit */int) arr_4 [i_2] [i_2]))))))));
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) arr_6 [i_2]))));
    }
    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        arr_11 [i_3] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_1)) : (var_7))), (((/* implicit */long long int) max((arr_2 [i_3] [i_3]), (arr_2 [i_3] [i_3]))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) arr_1 [17U] [i_4]);
                    var_28 = ((/* implicit */unsigned char) max((min((var_3), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_2)))))))));
                    var_29 = ((/* implicit */signed char) max((((long long int) arr_3 [i_5])), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-15511)) ? ((~(4294443033U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)29))))))));
                }
            } 
        } 
    }
}
