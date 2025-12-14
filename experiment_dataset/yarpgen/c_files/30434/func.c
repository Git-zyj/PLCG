/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30434
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
    var_15 = var_3;
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_3))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)13)) ? (var_14) : (((/* implicit */unsigned long long int) var_10)))))));
            var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))));
            var_18 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)26128)) << ((((+(arr_4 [i_0 - 1] [i_1 + 2]))) - (3517362261U)))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 12; i_3 += 4) 
                {
                    for (unsigned short i_4 = 4; i_4 < 14; i_4 += 3) 
                    {
                        {
                            var_19 |= ((/* implicit */long long int) ((((/* implicit */int) var_9)) << (((((211109254U) << (((/* implicit */int) arr_0 [i_2])))) - (422218503U)))));
                            var_20 = ((/* implicit */long long int) var_3);
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (long long int i_5 = 3; i_5 < 14; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            var_21 = ((/* implicit */long long int) var_7);
            var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) 4083858061U)) <= (3967627415789203823LL))))));
            var_23 = ((/* implicit */long long int) ((((var_0) <= (-8734055243913721995LL))) ? (((((/* implicit */_Bool) var_1)) ? (arr_17 [i_5] [(_Bool)1]) : (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [3LL] [3LL] [i_5] [i_5 - 3] [i_5 + 1])))));
            var_24 = ((unsigned int) (+(var_11)));
        }
        var_25 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned long long int) (+(arr_20 [i_5] [i_5])))) : (((var_3) ? (14768513301006661676ULL) : (((/* implicit */unsigned long long int) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5 - 3]))))));
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((14768513301006661676ULL) / (((/* implicit */unsigned long long int) -3967627415789203824LL))))) ? (var_4) : (4083858079U)));
        var_27 = ((/* implicit */unsigned int) var_8);
    }
}
