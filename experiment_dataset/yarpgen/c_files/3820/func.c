/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3820
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)123)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) -5723660285330572653LL)) : (var_1)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_13 = ((/* implicit */signed char) ((unsigned long long int) arr_2 [i_0] [i_0]));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) (~(var_8)));
        arr_7 [(signed char)0] [i_1] = ((/* implicit */long long int) (unsigned short)22505);
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (9011172212611388320ULL)))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    {
                        var_15 = ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */int) arr_13 [i_1] [i_4] [i_1 - 1] [i_4] [i_2])) : (((/* implicit */int) (signed char)48)));
                        var_16 = ((/* implicit */short) (-(((((/* implicit */int) var_6)) - (((/* implicit */int) var_2))))));
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)10563)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (signed char)87))))));
        var_19 *= ((/* implicit */signed char) ((var_8) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)247)) + (((/* implicit */int) (unsigned char)247)))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)10563)) ? (((/* implicit */int) (unsigned short)54985)) : (((/* implicit */int) var_2))));
        var_21 = ((/* implicit */unsigned long long int) arr_15 [i_5] [i_5]);
        arr_17 [i_5] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) (signed char)-48))))));
    }
    var_22 = ((/* implicit */short) max((((var_1) << (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-127)) || (((/* implicit */_Bool) var_8))))))))));
}
