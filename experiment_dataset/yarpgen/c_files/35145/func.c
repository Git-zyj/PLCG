/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35145
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (unsigned short)24206))) ? (min((192685223U), (((/* implicit */unsigned int) (unsigned short)24226)))) : (((/* implicit */unsigned int) min((arr_1 [i_0]), (((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL)))))))));
        arr_2 [9ULL] |= ((/* implicit */_Bool) arr_0 [(unsigned char)11]);
        var_19 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */int) (unsigned char)73))))) == (((unsigned int) (_Bool)1))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_20 *= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(10693192737876246241ULL)))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59215))) : ((-9223372036854775807LL - 1LL)))) : (min((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)256)))))), (((/* implicit */long long int) 2010493726))));
        var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) (+(min((-9223372036854775807LL), (((/* implicit */long long int) 4294967291U))))))) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_1])), ((unsigned short)42480))))))));
    }
    for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3 - 1])) || (((/* implicit */_Bool) (unsigned short)24242))))), ((+(((/* implicit */int) (_Bool)0)))))))));
                    }
                } 
            } 
        } 
        var_24 = (_Bool)1;
    }
    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) max((((((/* implicit */int) ((_Bool) var_0))) - ((((_Bool)1) ? (((/* implicit */int) (unsigned short)41295)) : (((/* implicit */int) (unsigned short)31)))))), (((/* implicit */int) (unsigned char)156)))))));
    var_26 = ((/* implicit */unsigned long long int) var_8);
}
