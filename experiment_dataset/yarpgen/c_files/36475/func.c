/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36475
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
    var_10 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_6)) : (var_7)))), (max((((/* implicit */long long int) 1278131692)), (9223372036854775807LL)))))), (var_4)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned int) ((signed char) -5195262699253738169LL));
        var_12 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) arr_1 [i_0]))))) || (((/* implicit */_Bool) min((arr_2 [i_0]), (arr_2 [i_0 - 1]))))))), (max((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_0 [i_0 + 1])))));
        arr_4 [i_0 - 1] [5U] = ((/* implicit */unsigned long long int) (!((!((!(((/* implicit */_Bool) arr_0 [i_0]))))))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0]), (arr_2 [i_0])))) ? (((/* implicit */unsigned int) ((arr_1 [i_0]) << (((((((/* implicit */int) (short)-20534)) + (20550))) - (14)))))) : (arr_2 [i_0])))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)0)), (arr_1 [i_0 - 1])))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (1886672582) : (((/* implicit */int) (unsigned char)150))))), (max((arr_2 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0]))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (short i_3 = 4; i_3 < 8; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    {
                        var_14 |= ((/* implicit */_Bool) 144115188075855871ULL);
                        arr_16 [i_1] [4LL] [i_1] [i_4] = ((/* implicit */long long int) arr_12 [i_3 - 1]);
                        arr_17 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -1990918406)) >= (((unsigned long long int) (-(((/* implicit */int) var_1)))))));
                    }
                } 
            } 
        } 
        arr_18 [i_1] = ((/* implicit */signed char) arr_7 [(signed char)2]);
        arr_19 [i_1] [i_1] = ((/* implicit */unsigned int) arr_14 [i_1] [i_1] [8U] [i_1] [i_1]);
    }
    var_15 = var_0;
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((var_6), ((+(max((arr_22 [(signed char)5]), (((/* implicit */int) (short)20531)))))))))));
        var_17 = arr_21 [i_5] [i_5];
    }
    for (int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_7))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (max((((((/* implicit */_Bool) arr_21 [i_6] [6U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)13))) : (var_5))), (arr_23 [i_6])))));
        var_20 = ((/* implicit */short) min((((/* implicit */long long int) max((arr_23 [i_6]), (arr_23 [i_6])))), (((long long int) var_3))));
        arr_25 [i_6] = ((/* implicit */unsigned long long int) (short)-20534);
    }
}
