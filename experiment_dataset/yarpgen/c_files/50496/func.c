/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50496
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
    /* LoopSeq 4 */
    for (int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        var_19 = ((((/* implicit */_Bool) -352932009)) ? (4923732391397367211LL) : (((/* implicit */long long int) ((((/* implicit */int) ((var_2) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)6])))))) ^ (min((131071), (1195164913)))))));
        var_20 = ((int) var_6);
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 10; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_6 [i_3] [i_3]) % (((/* implicit */int) var_1))))) ? (arr_6 [i_3] [i_3]) : ((+(arr_6 [i_3] [i_3]))))))));
                    var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_1 [i_2])) / (((/* implicit */int) arr_1 [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 1; i_5 < 8; i_5 += 3) 
                        {
                            {
                                var_23 += ((/* implicit */unsigned char) var_6);
                                var_24 -= ((/* implicit */unsigned char) max((-3032755350995923859LL), (((/* implicit */long long int) 1605343424))));
                                var_25 = (-(arr_0 [i_1] [i_3]));
                                arr_14 [i_1] [i_2] [i_2] [i_3] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(var_6)))), (((2097151LL) * (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (((/* implicit */long long int) 131071)) : (var_10)));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_15 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((long long int) var_11))) ? (((var_8) | (arr_4 [i_1] [i_1]))) : (((((/* implicit */_Bool) var_8)) ? (131071) : (var_5))))) % (((/* implicit */int) var_4))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_7 = 1; i_7 < 22; i_7 += 4) 
        {
            for (long long int i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                for (int i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    {
                        arr_28 [i_7] [i_7] [i_7] [21] [i_8] [i_9] = ((/* implicit */int) arr_24 [i_6] [10LL] [i_8] [i_9]);
                        arr_29 [i_6] [3] [i_7] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_6] [i_7] [i_6] [i_7 - 1])) - (((/* implicit */int) arr_21 [i_6] [i_7] [i_8]))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) var_17))));
    }
    for (unsigned char i_10 = 3; i_10 < 14; i_10 += 2) 
    {
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) arr_3 [i_10]))));
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) var_2))));
    }
    var_29 = ((/* implicit */long long int) var_4);
    var_30 = var_17;
}
