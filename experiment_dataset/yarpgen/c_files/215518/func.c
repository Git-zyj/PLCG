/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215518
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
    var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (min((((/* implicit */long long int) var_3)), (0LL))) : (((/* implicit */long long int) ((/* implicit */int) ((var_4) >= (var_0))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        var_13 = ((/* implicit */int) (short)-22849);
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0])))) % (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) -5789701213688418335LL)) : (arr_0 [i_0])))));
        var_14 = ((/* implicit */unsigned short) ((long long int) arr_0 [i_0]));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */short) ((unsigned short) -5789701213688418335LL));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            for (unsigned short i_3 = 1; i_3 < 19; i_3 += 4) 
            {
                for (unsigned char i_4 = 2; i_4 < 19; i_4 += 3) 
                {
                    {
                        arr_16 [i_1] [i_2] [i_3] [i_3 + 3] [i_3 + 3] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_3 + 4]))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_2]))) == (var_4))))) / (arr_5 [i_2])));
                        arr_17 [i_1] [i_1] [i_2] [i_3] [i_4 - 2] = ((/* implicit */short) ((arr_15 [i_4 + 3] [i_4 + 4] [i_3 - 1] [i_1]) * (arr_15 [i_4 + 1] [i_3] [i_3 - 1] [i_2])));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */signed char) (~(arr_0 [i_1])));
        arr_18 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (short)27510)) <= (((/* implicit */int) ((_Bool) arr_10 [i_1] [i_1] [i_1])))));
        arr_19 [i_1] [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned char)62)) ? (arr_15 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
    }
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_5))));
}
