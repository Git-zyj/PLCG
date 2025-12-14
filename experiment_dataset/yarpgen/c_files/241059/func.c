/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241059
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) >> (7ULL)))) || (((/* implicit */_Bool) ((signed char) (unsigned short)32739)))));
        var_13 = ((/* implicit */long long int) var_12);
    }
    for (unsigned int i_1 = 2; i_1 < 13; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7544)))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_0))))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) (unsigned char)17)))))) + (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (arr_5 [i_1] [i_1 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((var_4) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) arr_4 [i_1]))))) < ((+(-7742536809206393522LL))))))))))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_4 [i_1])), ((((_Bool)0) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7541))) : (2504333855U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))));
    }
    for (unsigned int i_2 = 2; i_2 < 13; i_2 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [(unsigned short)15])))))));
        var_16 = ((/* implicit */int) var_5);
        var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */int) (short)-10035)) : (((/* implicit */int) (signed char)127))))))))));
    }
    /* LoopNest 3 */
    for (short i_3 = 3; i_3 < 20; i_3 += 2) 
    {
        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8285)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (16ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_2)))))))));
                    var_19 ^= ((/* implicit */short) var_9);
                }
            } 
        } 
    } 
}
