/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224118
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        var_11 = ((/* implicit */_Bool) -32);
        var_12 = ((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0]));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */signed char) ((3907731918U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1])))))), (arr_3 [i_0]))))));
                        var_14 ^= ((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_3 + 2] [i_2 + 1] [i_0]);
                    }
                    for (unsigned char i_4 = 3; i_4 < 11; i_4 += 1) 
                    {
                        arr_14 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))) - (arr_1 [i_0 - 1]))) + (((arr_0 [i_0 + 3]) - (arr_0 [i_0 - 3])))));
                        var_15 &= ((/* implicit */long long int) ((((arr_4 [i_4 - 3]) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_4]))) : (arr_1 [i_4])))))) >> ((((+(min((((/* implicit */unsigned int) -884163105)), (var_5))))) - (2210652115U)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 1; i_5 < 9; i_5 += 2) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) -1670665480)) ? (-22) : (((/* implicit */int) (_Bool)1))))));
                        var_16 = ((((/* implicit */int) arr_9 [i_0 + 2] [i_1] [i_2 - 1] [i_5])) % (((/* implicit */int) ((signed char) var_10))));
                        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_5]))));
                    }
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((max((max((arr_5 [i_1] [i_1]), (((/* implicit */long long int) 884163105)))), (((/* implicit */long long int) 3378321327U)))) * (((/* implicit */long long int) min((((/* implicit */int) ((7584571025836213029ULL) != (((/* implicit */unsigned long long int) 2187180152U))))), ((-(((/* implicit */int) (_Bool)1))))))))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_2])) == (((/* implicit */int) arr_15 [i_0])))))) * ((-(((17011636500364791253ULL) + (17011636500364791253ULL)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_6 = 2; i_6 < 10; i_6 += 4) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) var_6);
                    var_21 *= ((/* implicit */_Bool) ((((((/* implicit */int) arr_16 [i_7 - 1] [i_7] [i_7 - 1] [i_7])) + (((/* implicit */int) arr_16 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7])))) * (((((/* implicit */int) arr_16 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1])) + (((/* implicit */int) arr_16 [i_7 - 1] [i_7] [i_7 - 1] [i_7]))))));
                }
            } 
        } 
    }
    var_22 &= ((/* implicit */signed char) var_8);
}
