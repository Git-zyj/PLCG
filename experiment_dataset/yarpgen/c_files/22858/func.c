/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22858
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    var_10 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_9))))) ? (((/* implicit */int) max(((_Bool)0), (arr_10 [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))))) ? (((min((arr_9 [i_0] [10] [i_0]), (((/* implicit */unsigned long long int) 1441096681)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)21441)) ? (((/* implicit */int) (unsigned short)12487)) : (((/* implicit */int) (signed char)-4))))))) : (((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */signed char) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)15179)) ^ (((/* implicit */int) var_7))))) : (arr_2 [i_0] [i_2]))));
                    arr_11 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_0] [i_2 + 1])) ? (((/* implicit */int) min(((unsigned short)23315), (((/* implicit */unsigned short) var_9))))) : (((/* implicit */int) (short)28920))))) | ((~(-1774013610031511598LL)))));
                    arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_8 [i_0]))))));
                }
            } 
        } 
    } 
    var_11 = ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) 1883579791)) : (1100739232U))) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))));
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (+((((!(((/* implicit */_Bool) (short)-6239)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_1))))))));
    var_13 = ((((((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_8))))) % (((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */unsigned int) var_9)), (var_1))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) (short)10227))))))));
}
