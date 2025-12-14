/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235584
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
    var_19 = ((/* implicit */_Bool) 17470446935613025574ULL);
    var_20 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = (signed char)-70;
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((int) max((-1314853192), (((/* implicit */int) (short)8185)))));
        arr_5 [i_0] = ((/* implicit */unsigned int) (-(((int) (unsigned short)16353))));
        var_21 = ((/* implicit */_Bool) var_18);
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_22 = ((/* implicit */short) var_4);
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned short)16353), (var_18)))) ? (((((/* implicit */int) (unsigned short)16332)) % (((/* implicit */int) (unsigned short)16353)))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-8053))))));
        arr_10 [(unsigned short)2] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(3236208057525862886ULL))))));
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned short) var_9);
        arr_15 [i_2] = ((/* implicit */unsigned short) min((3744898660521472683LL), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)16353)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16320)))))))));
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (((!(((/* implicit */_Bool) var_10)))) ? ((~(((/* implicit */int) min((var_12), (var_5)))))) : (((/* implicit */int) var_18)))))));
        var_24 = 3449713767381965414ULL;
        arr_16 [i_2] = ((/* implicit */signed char) max((max((15210536016183688729ULL), (((/* implicit */unsigned long long int) (signed char)56)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)58)))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        arr_20 [i_3] [i_3] = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)1008));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2534857937U)) ? (2434412909U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
        arr_21 [i_3] [(short)3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? ((~(((/* implicit */int) (short)30720)))) : (((/* implicit */int) (unsigned char)36))));
    }
    var_26 = ((/* implicit */unsigned long long int) max((23), (((/* implicit */int) var_5))));
}
