/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43597
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
    var_17 = ((/* implicit */int) (-((+(((var_6) ? (var_4) : (var_15)))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_18 *= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_15))))));
        var_19 ^= ((/* implicit */int) min((((/* implicit */unsigned int) var_12)), ((-(4294967290U)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_6))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
                    arr_10 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) var_6);
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_1))))));
        arr_11 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_13) : (var_15))))));
    }
    for (int i_4 = 2; i_4 < 14; i_4 += 4) 
    {
        arr_14 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37314))) : (var_15)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_4)))))) : (((((/* implicit */_Bool) (-(4294967285U)))) ? ((~(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (~(var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_11) << (((var_1) - (1263226130)))))))))) : ((+((-(1159138703U))))))))));
        arr_15 [i_4] [i_4] = ((/* implicit */_Bool) (-((((!(((/* implicit */_Bool) (unsigned short)19312)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (max((((/* implicit */unsigned int) var_3)), (var_5)))))));
    }
}
