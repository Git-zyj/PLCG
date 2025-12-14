/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209576
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
    var_15 = ((/* implicit */_Bool) ((signed char) (!((!(((/* implicit */_Bool) var_12)))))));
    var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_13))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) (+((-(((((/* implicit */_Bool) (short)-12499)) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (-654325400)))))));
                        arr_9 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_2] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) (short)27253))))) ? (((/* implicit */unsigned long long int) arr_0 [i_1])) : ((-(var_7))))), (((/* implicit */unsigned long long int) var_4))));
                        arr_10 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((var_4), (((/* implicit */unsigned short) arr_7 [i_1] [i_2] [i_3])))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0])))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_8))) ? ((~(0U))) : (9U)))) : (((((/* implicit */_Bool) ((unsigned short) arr_2 [i_2] [i_0]))) ? (min((9223372036854775807LL), (((/* implicit */long long int) -1892806955)))) : (arr_6 [i_0 - 1] [i_2])))));
                    }
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        var_18 = ((/* implicit */short) arr_4 [i_0] [i_0] [(short)4] [i_0 - 1]);
                        var_19 = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) -3367862878166436862LL)))));
                    }
                    var_20 = ((/* implicit */short) arr_3 [i_1 - 2]);
                    arr_13 [i_0] [(signed char)2] = ((/* implicit */signed char) ((long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_0)), (arr_7 [i_2] [i_1 - 1] [i_0 + 1])))), (((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) - (arr_12 [i_2] [i_2] [7] [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        for (long long int i_6 = 2; i_6 < 14; i_6 += 3) 
                        {
                            {
                                arr_18 [i_5] [i_1] [(signed char)0] [i_0] [(signed char)0] [i_1] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) var_13)), (arr_2 [i_1] [i_0])))))));
                                arr_19 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned int) ((unsigned char) (_Bool)1));
                                arr_20 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) max(((+(((/* implicit */int) var_12)))), (((/* implicit */int) min((arr_17 [6LL] [i_1] [i_1] [i_2] [i_5] [i_6] [i_6]), (((/* implicit */unsigned short) var_6))))))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) max((((short) arr_5 [i_0] [i_0])), (((/* implicit */short) ((((/* implicit */_Bool) (short)27256)) || ((!(((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0])))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) 68719472640ULL);
}
