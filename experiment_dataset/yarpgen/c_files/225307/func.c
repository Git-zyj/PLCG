/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225307
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */int) (+(max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 1401442422)), (-5625768112236527706LL)))), (((unsigned long long int) var_6))))));
                            var_14 = ((/* implicit */unsigned int) ((_Bool) (~(var_7))));
                            arr_10 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) var_5));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 13; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) ((var_12) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 5625768112236527722LL)))))))));
                            var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (_Bool)1)), (min((13130172017932606266ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                            arr_16 [i_0] [i_1] [i_4] [i_5] = ((/* implicit */int) (-(((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((long long int) 7795449325655670632ULL)) : (var_9)))));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_4 + 1] [i_0] [i_1] [i_1])) ? (1401442437) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) 17946678767494193886ULL)) ? (10288879980897331409ULL) : (((/* implicit */unsigned long long int) 2221275768U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 22; i_6 += 2) 
    {
        for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 4; i_9 < 21; i_9 += 4) 
                    {
                        for (short i_10 = 2; i_10 < 21; i_10 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_10 - 2] [i_8] [i_6 + 1] [i_6] [i_6 - 1] [i_6])) ? (arr_24 [i_10 + 3] [i_8] [i_6 + 2] [i_6] [i_6 - 1] [i_6 - 1]) : (arr_24 [i_10 + 3] [i_6 + 2] [i_6 + 2] [i_6] [14] [i_6 + 2])))), (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_23 [i_6] [18LL] [13ULL] [i_6]))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)27933)))))))));
                                var_19 = max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((signed char) (short)-27934))), (max((var_9), (((/* implicit */long long int) (short)27933))))))), ((+(4586634752399613161ULL))));
                                arr_30 [i_10] [i_7] [i_6] [i_9] [i_10] [i_9] = ((/* implicit */int) max((min((arr_21 [i_6]), (var_4))), (((((var_3) == (((/* implicit */unsigned int) var_1)))) || (((/* implicit */_Bool) (short)31968))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_11 = 4; i_11 < 23; i_11 += 4) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            {
                                arr_36 [i_12] [(unsigned char)13] [i_6] [i_12] = ((/* implicit */short) (-(((/* implicit */int) min(((short)-27934), (((/* implicit */short) (_Bool)1)))))));
                                var_20 -= ((/* implicit */short) -2007504349);
                                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) var_8)), (((short) var_12)))))));
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_6] [i_6] [i_6] [i_6] [22ULL])) ? ((+(((/* implicit */int) (_Bool)1)))) : (((1022846442) & (((/* implicit */int) var_11))))))) & (((long long int) var_0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 25; i_13 += 1) 
    {
        for (short i_14 = 4; i_14 < 24; i_14 += 2) 
        {
            for (long long int i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 2) 
                    {
                        for (short i_17 = 0; i_17 < 25; i_17 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)1813)) ? (((/* implicit */int) (_Bool)1)) : (-2007504356)));
                                arr_48 [i_17] [i_17] [i_14 - 3] [i_14 - 3] [i_15] [i_14 - 3] [i_13] = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) arr_47 [i_14 - 3] [i_14] [i_14] [i_14 - 1] [i_15])), (arr_42 [i_14 - 3] [i_14] [4]))), (((/* implicit */unsigned long long int) (+(arr_47 [i_14 - 2] [i_14 - 2] [i_14] [i_14 + 1] [i_14]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_18 = 1; i_18 < 23; i_18 += 4) 
                    {
                        for (unsigned long long int i_19 = 4; i_19 < 23; i_19 += 4) 
                        {
                            {
                                arr_54 [(_Bool)1] [i_15] [i_19 - 3] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) (_Bool)1)), (511ULL))), (((/* implicit */unsigned long long int) ((_Bool) var_4)))));
                                arr_55 [i_19] [i_18] [i_13] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((signed char) var_3))), (var_8)));
                                var_24 = ((/* implicit */short) (-(min((arr_44 [i_18 - 1] [i_18 - 1] [i_18] [i_18]), (var_10)))));
                                var_25 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)1))))));
                                var_26 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((17561675831982972973ULL) - (17561675831982972965ULL)))))) ^ (max((((/* implicit */unsigned long long int) arr_38 [12U] [i_19])), (var_2))))), (((/* implicit */unsigned long long int) 10U))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
