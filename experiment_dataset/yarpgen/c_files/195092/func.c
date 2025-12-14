/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195092
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 759551121237526721LL)))))));
    var_16 &= ((/* implicit */unsigned int) var_9);
    var_17 = var_12;
    var_18 ^= ((/* implicit */long long int) var_11);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) arr_0 [i_0]);
        var_20 = ((/* implicit */long long int) var_12);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_7))));
                var_22 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (var_12)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((var_2) + (4294967277U))) : (var_3)))) : (((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)0), ((unsigned short)20123))))) % (arr_1 [i_0] [i_1]))));
            }
            var_23 = (-(min((((/* implicit */long long int) (~(arr_2 [i_0] [i_0] [i_0])))), (-6331981134987789687LL))));
        }
    }
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        arr_8 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (6331981134987789709LL) : (var_7))), (max((6331981134987789687LL), (((/* implicit */long long int) arr_6 [i_3])))))))));
        var_24 += ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)16202))));
    }
    for (unsigned int i_4 = 1; i_4 < 9; i_4 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) min((((-1391142671992186679LL) + (min((((/* implicit */long long int) 2113561140U)), (-6331981134987789709LL))))), (((/* implicit */long long int) var_2))));
        arr_12 [i_4] [i_4] = ((/* implicit */long long int) arr_10 [i_4]);
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    {
                        var_26 = (-((~(arr_1 [i_6] [i_6]))));
                        /* LoopSeq 2 */
                        for (long long int i_8 = 1; i_8 < 8; i_8 += 4) 
                        {
                            arr_22 [i_4] [i_8] = ((/* implicit */unsigned short) (-(arr_4 [i_8])));
                            arr_23 [i_4] [i_4] [i_4] [(unsigned short)2] = (i_4 % 2 == zero) ? (((((562949953421311LL) >> (((arr_21 [(unsigned short)7] [(unsigned short)7] [i_6] [i_5] [i_8 + 2] [i_4]) - (332943177U))))) - (((/* implicit */long long int) ((/* implicit */int) ((arr_19 [i_4] [i_4] [i_6] [i_8] [i_8 - 1] [i_4]) <= (arr_19 [9U] [i_7] [i_6] [i_5] [i_8 - 1] [i_4]))))))) : (((((562949953421311LL) >> (((((arr_21 [(unsigned short)7] [(unsigned short)7] [i_6] [i_5] [i_8 + 2] [i_4]) - (332943177U))) - (1699391082U))))) - (((/* implicit */long long int) ((/* implicit */int) ((arr_19 [i_4] [i_4] [i_6] [i_8] [i_8 - 1] [i_4]) <= (arr_19 [9U] [i_7] [i_6] [i_5] [i_8 - 1] [i_4])))))));
                            arr_24 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((long long int) (unsigned short)49336));
                            arr_25 [i_4] [i_4] [i_6] [i_4] [i_8 - 1] = ((/* implicit */unsigned int) var_1);
                        }
                        for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            var_27 ^= ((/* implicit */long long int) (+(((arr_20 [i_7]) - (3148349974U)))));
                            var_28 = ((/* implicit */long long int) arr_21 [i_4] [9LL] [i_6] [i_5] [i_4] [i_4]);
                        }
                    }
                } 
            } 
        } 
    }
    for (long long int i_10 = 4; i_10 < 21; i_10 += 4) 
    {
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) var_14))));
        arr_32 [i_10] = ((/* implicit */unsigned short) max((max((arr_3 [i_10 - 1]), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16223))) >= (2113561140U)))))))));
        arr_33 [i_10] = ((min((((/* implicit */long long int) arr_5 [i_10 - 1] [i_10 + 1] [i_10] [i_10 + 1])), (arr_3 [i_10 - 2]))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_10 + 1])) ? (var_10) : (var_4)))));
    }
}
