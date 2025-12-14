/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3696
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
    var_14 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)164)) / (((/* implicit */int) (unsigned char)92))))) : (var_1))));
    var_15 = ((/* implicit */unsigned short) (-(var_3)));
    var_16 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) ((unsigned short) (signed char)0))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)255)))))))) ^ (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (var_11)))) ? ((((_Bool)1) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49404))))));
    var_17 = ((/* implicit */long long int) var_5);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) (-(var_6)));
        var_19 -= ((/* implicit */unsigned short) arr_2 [i_0 + 1] [i_0 + 1]);
        var_20 = ((/* implicit */unsigned long long int) var_0);
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) arr_1 [i_1]);
        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (((unsigned long long int) (unsigned short)27763)) : (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) var_13)))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1667426310U)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)91)) || (((/* implicit */_Bool) arr_0 [i_1] [i_1]))))) : ((-(((/* implicit */int) arr_1 [i_1])))))))));
        var_23 |= ((/* implicit */int) var_0);
    }
    for (signed char i_2 = 2; i_2 < 22; i_2 += 1) 
    {
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((arr_5 [i_2] [i_2 - 1]) % (((/* implicit */int) arr_1 [i_2]))))))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) % (arr_5 [i_2] [i_2 - 1])))) : (10040623733149567615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16132)))));
        var_25 = ((/* implicit */int) arr_2 [i_2 - 1] [i_2 + 1]);
    }
    for (int i_3 = 1; i_3 < 19; i_3 += 4) 
    {
        var_26 = ((/* implicit */unsigned short) (-((+(min((((/* implicit */unsigned long long int) var_9)), (17053691400189790783ULL)))))));
        var_27 -= ((/* implicit */int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-8654))) / ((+(arr_8 [i_3] [10ULL])))))));
    }
}
