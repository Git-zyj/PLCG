/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222897
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
    var_13 = var_3;
    var_14 = ((/* implicit */unsigned char) (((-(((/* implicit */int) ((-2147483647) >= (var_1)))))) >> (((((((/* implicit */_Bool) var_5)) ? (min((var_8), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) (+(((/* implicit */int) var_3))))))) + (2903037596746518503LL)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_9)) / (min((var_8), (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))))));
        arr_3 [18LL] [i_0] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (max((arr_0 [(_Bool)1]), (arr_0 [i_0]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(var_7)))))));
        arr_4 [i_0] = ((/* implicit */long long int) min((1008U), (((/* implicit */unsigned int) (_Bool)1))));
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 18; i_1 += 2) /* same iter space */
        {
            arr_8 [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]);
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */int) (+(((((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_1] [i_1]))))) + (min((((/* implicit */long long int) var_5)), (var_8)))))));
        }
        for (signed char i_2 = 2; i_2 < 18; i_2 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_3 = 1; i_3 < 18; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        {
                            arr_19 [i_3] = ((/* implicit */short) arr_14 [i_0] [i_0] [i_0] [i_0]);
                            arr_20 [i_0] [i_2 - 1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)9] [(signed char)9]))) % (min((-4777843152222793809LL), (((/* implicit */long long int) (unsigned short)31744))))));
                        }
                    } 
                } 
            } 
            arr_21 [i_0] = min(((~(arr_13 [8]))), (((/* implicit */unsigned int) ((((/* implicit */int) ((var_9) != (((/* implicit */int) (signed char)2))))) & (((/* implicit */int) min((arr_12 [(signed char)17] [i_2 + 2] [(_Bool)0]), (arr_12 [i_0] [i_0] [i_2 + 2]))))))));
        }
    }
    for (short i_6 = 4; i_6 < 19; i_6 += 4) 
    {
        arr_26 [(unsigned char)10] [i_6 - 3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(10148437475684646024ULL)))) ? ((-9223372036854775807LL - 1LL)) : (3235445414881172351LL))) - (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_10))))))))));
        arr_27 [i_6 - 2] [i_6 - 3] = ((/* implicit */unsigned int) (+((-(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_24 [4] [(unsigned char)10]))))))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) <= (((((((/* implicit */_Bool) arr_22 [i_6 - 2])) || (((/* implicit */_Bool) var_9)))) ? (arr_22 [i_6]) : (((/* implicit */unsigned int) ((var_12) / (((/* implicit */int) var_6))))))))))));
        arr_28 [i_6] [(unsigned char)9] = ((/* implicit */signed char) ((var_11) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) >= (26ULL)))) : (((/* implicit */int) ((((/* implicit */int) (short)31765)) < (((/* implicit */int) arr_24 [i_6 - 2] [i_6 - 2]))))))))));
    }
}
