/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52229
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
    var_10 = ((/* implicit */signed char) var_1);
    var_11 = ((/* implicit */unsigned int) ((((((/* implicit */int) max((var_8), ((short)-18628)))) / (((/* implicit */int) var_2)))) * (((/* implicit */int) var_3))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) & (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (arr_0 [i_0] [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (arr_2 [i_0]))))))));
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) min((arr_2 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_7))))))))));
    }
    for (long long int i_1 = 1; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_0))));
        var_15 += ((/* implicit */short) ((unsigned int) var_1));
        var_16 = ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (signed char i_3 = 3; i_3 < 9; i_3 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) min((arr_5 [i_1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) var_7))))))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_6 [i_1 + 1] [i_3 + 1]))))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) - (arr_4 [i_1] [i_1])))));
                }
            } 
        } 
    }
    for (long long int i_4 = 1; i_4 < 10; i_4 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_1))));
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            var_20 = ((/* implicit */signed char) (+(((/* implicit */int) ((arr_10 [i_4 + 2]) < (arr_10 [i_4 - 1]))))));
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    {
                        var_21 = min((((((/* implicit */int) var_9)) / (((/* implicit */int) arr_13 [i_4 + 1] [i_4 + 2] [i_4 + 2])))), (((/* implicit */int) min((min((((/* implicit */unsigned short) var_8)), (var_7))), (var_7)))));
                        arr_20 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 2] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_4 + 1] [i_4 + 2] [i_4 + 1])) && (((/* implicit */_Bool) var_3))))), (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_12 [i_4] [i_5] [i_7])) : (((/* implicit */int) var_1)))) * ((~(((/* implicit */int) (unsigned char)27))))))));
                    }
                } 
            } 
        }
        var_22 |= ((/* implicit */short) ((((((/* implicit */int) max((arr_14 [(signed char)9]), (((/* implicit */short) var_1))))) >> (((arr_8 [i_4] [i_4 - 1] [i_4]) - (2673788171U))))) & (((/* implicit */int) var_3))));
    }
    for (long long int i_8 = 1; i_8 < 10; i_8 += 2) /* same iter space */
    {
        arr_25 [i_8] &= ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) arr_15 [i_8 + 1] [i_8 + 2])) > (var_6)))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) arr_23 [i_8 + 2] [i_8 + 2]))));
        arr_26 [4LL] = ((/* implicit */unsigned char) min((max((arr_15 [i_8 - 1] [i_8 - 1]), (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)21183))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0)))))));
        var_24 = ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned long long int) var_0)), (max((var_6), (((/* implicit */unsigned long long int) var_9))))))))));
    }
    var_26 = var_9;
}
