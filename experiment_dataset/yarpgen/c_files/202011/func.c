/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202011
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)0)))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) var_0)))))))))));
                    var_12 = ((/* implicit */_Bool) var_4);
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    arr_11 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_10 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                    var_13 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_3] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_3]))));
                    arr_12 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */long long int) ((unsigned long long int) ((var_9) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))));
                    arr_13 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                }
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) var_2);
                                var_15 = ((/* implicit */long long int) arr_9 [16]);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */int) arr_6 [i_4] [24U] [2LL]);
                }
                arr_20 [13U] [i_1] [i_0] = ((/* implicit */_Bool) ((min((max((arr_16 [(unsigned char)17] [(signed char)6]), (((/* implicit */unsigned int) arr_7 [i_0] [i_1])))), (((/* implicit */unsigned int) var_3)))) + (((/* implicit */unsigned int) ((int) (unsigned short)0)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) var_5);
        var_18 &= ((/* implicit */unsigned short) ((arr_5 [i_7] [i_7] [3]) ? (((/* implicit */int) ((_Bool) min((arr_16 [i_7] [i_7]), (((/* implicit */unsigned int) var_8)))))) : (min((((/* implicit */int) arr_3 [i_7] [i_7])), (arr_7 [i_7] [i_7])))));
        var_19 = ((/* implicit */_Bool) ((signed char) 11290180048813424373ULL));
        arr_24 [i_7] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (arr_21 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))));
        var_20 = ((/* implicit */unsigned long long int) var_9);
    }
}
