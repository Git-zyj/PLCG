/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241921
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
    var_20 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (-(18446744073709551607ULL)))) ? (((/* implicit */long long int) ((unsigned int) var_5))) : (max((2660027450256754264LL), (((/* implicit */long long int) var_3)))))), (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_10))) && ((!((!(((/* implicit */_Bool) -1034434271))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_1]))))), ((+(arr_2 [i_0])))));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    var_23 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)1)))))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_9);
                    var_24 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) / ((+(var_19))))), (((/* implicit */unsigned long long int) ((int) (_Bool)0)))));
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_11)) & (((/* implicit */int) var_1)))), (((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */unsigned long long int) ((unsigned char) arr_4 [i_2] [i_1]))), (((((/* implicit */_Bool) var_7)) ? (arr_5 [i_0] [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    arr_9 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2] [i_2] [(short)0] [i_2 + 1])) + (min(((-(1034434271))), ((+(((/* implicit */int) var_12))))))));
                }
                var_26 ^= ((/* implicit */unsigned long long int) -29);
                arr_10 [i_1] [i_1] = ((/* implicit */int) ((unsigned short) ((short) ((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
