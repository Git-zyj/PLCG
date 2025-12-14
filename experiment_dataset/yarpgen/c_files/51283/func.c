/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51283
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_0))))))) ? ((-((-(((/* implicit */int) var_9)))))) : (((/* implicit */int) (((+(((/* implicit */int) var_6)))) < (((/* implicit */int) min((var_7), (var_7)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_18 = ((max((((/* implicit */int) (short)18238)), ((-(((/* implicit */int) (signed char)32)))))) + (((((/* implicit */int) min((((/* implicit */signed char) var_15)), (var_9)))) * ((-(((/* implicit */int) var_7)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-18215)) ? (-736594378) : (((/* implicit */int) (_Bool)1)))) % (((int) max((var_12), (((/* implicit */signed char) (_Bool)1)))))));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_0 [(signed char)13]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) <= (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_6 [9] [i_0])))) >= ((+(((/* implicit */int) ((unsigned char) var_10)))))));
                    arr_11 [i_0] = var_9;
                }
            } 
        } 
        arr_12 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) : (((((/* implicit */int) arr_10 [0ULL] [i_0] [i_0])) & (((/* implicit */int) var_2))))))) ? (((/* implicit */int) var_0)) : (((((((/* implicit */int) var_7)) & (((/* implicit */int) var_8)))) << (((((arr_7 [i_0]) | (((/* implicit */int) var_15)))) - (1389875651))))));
    }
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) min((((var_11) - (arr_13 [i_3]))), ((-((-(var_3)))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 24; i_4 += 3) 
        {
            for (int i_5 = 4; i_5 < 24; i_5 += 2) 
            {
                {
                    var_21 = ((/* implicit */int) var_13);
                    var_22 |= ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(arr_20 [i_5] [i_4 - 1] [i_4 + 1] [i_5 - 1])))), (((6471692994122106931ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_23 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_14 [i_3])) / (((/* implicit */int) arr_21 [i_3] [i_4 - 1])))), (arr_18 [i_3] [i_4])));
                }
            } 
        } 
        arr_23 [6] &= ((unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)18238))))) < (((14765276853806889801ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
    }
    for (int i_6 = 1; i_6 < 14; i_6 += 2) 
    {
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_4))));
        var_25 = ((/* implicit */unsigned long long int) max((var_25), ((+(min((((/* implicit */unsigned long long int) (unsigned char)196)), (11975051079587444660ULL)))))));
    }
    var_26 = ((/* implicit */_Bool) var_14);
}
