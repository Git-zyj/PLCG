/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204990
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
    var_13 = ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 4; i_2 < 15; i_2 += 4) /* same iter space */
                {
                    arr_8 [i_1] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)33505)) ? (((/* implicit */unsigned long long int) 9223372036854775801LL)) : (16598046620756491940ULL))), (((/* implicit */unsigned long long int) (short)-9466))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_14 = (unsigned short)43382;
                                arr_14 [i_4] [i_4] [i_3] [i_2] [i_2 - 1] [i_4] [i_0] = ((/* implicit */unsigned char) arr_12 [i_0] [i_1] [i_2] [i_3] [i_0]);
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (~(((/* implicit */int) max((arr_1 [i_2] [i_2 - 4]), (arr_1 [i_0] [i_2 + 3])))))))));
                                arr_15 [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_10 [i_0] [(unsigned short)14] [i_2] [i_0])), ((unsigned short)36789)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_0] [i_2] [i_0] [i_3]))))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1])) ? (9608318219159283046ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_2 + 1] [i_3] [11ULL])))))));
                                var_16 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_13 [i_4 - 1] [(short)10] [i_4 - 1] [(unsigned char)14] [i_4] [i_4] [i_4])) & (((/* implicit */int) arr_5 [i_0] [i_2 + 3] [i_4 + 1] [i_4])))));
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) arr_7 [8ULL]);
                }
                for (unsigned int i_5 = 4; i_5 < 15; i_5 += 4) /* same iter space */
                {
                    arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_11 [i_0] [i_0] [i_5] [i_0] [i_0] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)22147)) : (((/* implicit */int) arr_2 [i_5 - 3] [i_5 - 3] [i_5 + 1])))))));
                    var_17 += ((/* implicit */unsigned short) max((min((-1LL), (((/* implicit */long long int) arr_2 [13LL] [i_5 - 4] [i_5])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [(unsigned short)2] [i_5 + 3] [i_5])))))));
                    var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_5 - 3]))))) ? (var_9) : (((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_5 + 3])))))))));
                    var_19 = ((/* implicit */signed char) var_8);
                    var_20 ^= ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)75))))) || (((/* implicit */_Bool) ((unsigned char) arr_10 [i_0] [i_1] [i_0] [i_5 - 2]))));
                }
                arr_22 [i_1] = ((/* implicit */long long int) max((((((/* implicit */int) (signed char)27)) <= (((/* implicit */int) (signed char)-64)))), (((((/* implicit */_Bool) (unsigned char)111)) || (((/* implicit */_Bool) ((unsigned int) 16598046620756491940ULL)))))));
                arr_23 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-31183))));
            }
        } 
    } 
}
