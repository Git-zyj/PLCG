/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191380
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
    var_18 = ((/* implicit */long long int) min((var_18), (var_5)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) > (min((max((-3505331386298592831LL), (((/* implicit */long long int) arr_1 [3LL] [i_0])))), (((/* implicit */long long int) max(((unsigned char)163), (((/* implicit */unsigned char) arr_1 [i_0] [i_0])))))))));
        var_19 = ((/* implicit */unsigned char) min(((((!(((/* implicit */_Bool) (short)14440)))) ? (((/* implicit */unsigned long long int) (+(var_11)))) : (((unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */_Bool) 3505331386298592832LL)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : ((~(arr_0 [i_0] [i_0]))))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        for (short i_2 = 4; i_2 < 18; i_2 += 2) 
        {
            {
                var_20 |= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */long long int) arr_7 [i_2 + 4] [i_2 - 2] [i_2 + 3])) - (((var_16) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))) : (-3505331386298592831LL))))));
                /* LoopNest 3 */
                for (unsigned int i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((arr_9 [i_2 - 4] [i_3 + 1]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 - 1]))))) ? (min((((((/* implicit */_Bool) (short)32755)) ? (((/* implicit */int) arr_3 [(short)8])) : (arr_7 [i_1] [i_3] [(unsigned short)8]))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)664))))))) : (((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */int) ((_Bool) arr_10 [2ULL] [i_2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5] [i_4] [i_3 + 1] [i_3] [(signed char)4] [i_2 + 1] [16LL]))))))))))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_8 [(short)14])), (((arr_6 [i_1] [16ULL]) << (((((/* implicit */int) arr_4 [i_5])) - (20189)))))))) ? (((/* implicit */unsigned long long int) arr_7 [i_1] [i_3 - 1] [i_2 - 3])) : (((((/* implicit */unsigned long long int) 3505331386298592832LL)) & (((((/* implicit */_Bool) arr_8 [i_1])) ? (2ULL) : (((/* implicit */unsigned long long int) var_11))))))));
                                var_23 = ((/* implicit */short) var_14);
                                arr_16 [i_1] [i_4] = ((/* implicit */unsigned int) var_16);
                            }
                        } 
                    } 
                } 
                arr_17 [i_1] = ((/* implicit */_Bool) max(((+(((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_2] [i_1] [i_2]))) : (-3505331386298592829LL))))), (((/* implicit */long long int) var_14))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */long long int) max((((unsigned int) var_2)), (((/* implicit */unsigned int) (short)8523)))))));
}
