/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242187
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
    for (unsigned int i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */int) var_4);
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_14 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_5 [i_2]) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)6730)) % (((/* implicit */int) (unsigned short)6730)))))));
                                var_16 = ((unsigned long long int) 1132788787);
                                var_17 = (i_1 % 2 == 0) ? (((1592628973U) << (((((/* implicit */int) arr_4 [i_1] [12LL] [i_1])) - (9361))))) : (((1592628973U) << (((((((/* implicit */int) arr_4 [i_1] [12LL] [i_1])) - (9361))) - (50120)))));
                            }
                        } 
                    } 
                    arr_13 [i_2] [(unsigned short)12] [i_0] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_0 - 1] [i_2])) ? (arr_1 [i_0 - 1]) : (((/* implicit */long long int) arr_7 [i_2] [i_2] [i_0]))))) ^ (((max((1924407561924530030ULL), (((/* implicit */unsigned long long int) var_1)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 - 3] [i_0] [i_0])))))));
                    var_18 = (~(((/* implicit */int) (unsigned short)32217)));
                }
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    var_19 ^= ((/* implicit */signed char) var_5);
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) 3385028620U))));
                    var_21 ^= ((/* implicit */unsigned char) (unsigned short)58806);
                    arr_16 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_5] [i_1] [i_1] [i_0 + 1])) ? (((/* implicit */int) arr_10 [i_0 - 4] [(short)13] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 3]))) == (((((/* implicit */_Bool) arr_2 [i_0] [i_5])) ? (((/* implicit */long long int) 1132788787)) : (var_12))))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        {
                            arr_24 [i_0] [i_1] [i_6] [(unsigned char)10] = ((/* implicit */unsigned short) (~(((((/* implicit */int) (unsigned short)32198)) & (arr_6 [i_1] [i_1] [i_7])))));
                            var_22 = ((/* implicit */unsigned short) arr_15 [i_1] [i_1] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) (((+(3179137601U))) == (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    var_24 = ((/* implicit */unsigned char) ((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
    /* LoopNest 3 */
    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) 
    {
        for (short i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                {
                    arr_34 [i_8] [i_8] = ((/* implicit */short) arr_31 [i_8] [(short)9] [i_10]);
                    var_25 = ((/* implicit */short) max((max((-1132788788), (((/* implicit */int) arr_30 [i_8] [i_8])))), (((/* implicit */int) (signed char)-43))));
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((arr_31 [i_10] [i_9] [i_8]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8]))))))));
                }
            } 
        } 
    } 
}
