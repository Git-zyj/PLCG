/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237100
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
    for (unsigned short i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned int) min((((var_9) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) arr_0 [i_0]))));
        var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((short)-32761), ((short)-32761)))) && (((((/* implicit */_Bool) (unsigned short)3748)) && (((/* implicit */_Bool) (unsigned char)254))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 24; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0 - 3] [i_2] = ((((/* implicit */_Bool) (short)-32749)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32736))) : (7124394635428987845LL));
                                arr_14 [i_0] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [8LL] [i_3] [i_4]);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) var_7);
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) max((arr_0 [i_0 - 2]), (var_14)))), (min((((/* implicit */unsigned short) arr_0 [i_0])), (var_13)))))) << (((((((int) var_0)) / ((-(((/* implicit */int) var_1)))))) - (22445769)))));
        arr_15 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((arr_7 [(signed char)23] [i_0] [(signed char)23] [i_0 - 2]) | (arr_7 [i_0 - 1] [i_0] [i_0] [i_0 - 1]))) : (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))), (((unsigned int) (_Bool)0))))));
    }
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_17))));
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            {
                arr_22 [i_5] [i_6] [i_6] = ((/* implicit */_Bool) (unsigned short)65535);
                arr_23 [i_6] [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                arr_24 [(unsigned short)6] [(unsigned short)10] |= ((/* implicit */unsigned short) ((((/* implicit */int) var_17)) <= (max((((((/* implicit */_Bool) (unsigned short)65522)) ? (((/* implicit */int) arr_18 [i_5])) : (((/* implicit */int) arr_18 [i_5])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_17)) : (var_18)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */int) var_11)) != (((/* implicit */int) (signed char)23))))), (var_4)))) ? (((((/* implicit */int) var_13)) + (((int) (unsigned char)148)))) : (((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_13))))))));
}
