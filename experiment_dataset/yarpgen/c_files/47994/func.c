/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47994
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
    var_15 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                    arr_9 [i_0] [i_1] = ((/* implicit */long long int) var_7);
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_2 - 1])) ? (((unsigned int) arr_1 [i_1 - 2] [i_2 - 1])) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) arr_4 [i_2] [i_2] [i_2 - 1]);
                                var_19 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) * (((((((/* implicit */int) var_12)) == (1863484455))) ? (((15332601289536806202ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2]))))))))));
                                arr_14 [i_4] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (+(((long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                                var_20 += ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (var_7))))))), (((((((/* implicit */_Bool) 1347751048)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) var_8)))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        for (long long int i_6 = 1; i_6 < 22; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (+(arr_22 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6] [i_6 - 1])))) ? (var_4) : (((/* implicit */unsigned int) var_6)))))));
                        arr_23 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) < (arr_15 [i_5]))))))) ? (((/* implicit */int) ((_Bool) (-(arr_22 [i_8] [i_7] [i_6] [i_5] [i_5]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))));
                    }
                    var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((arr_22 [i_5] [i_6] [i_7] [i_6] [i_5]) >= (arr_22 [i_5] [i_5] [i_5] [i_7] [i_6])))), (max((arr_22 [i_5] [i_6] [i_7] [i_6 - 1] [i_5]), (arr_22 [i_5] [i_6 - 1] [i_6] [i_5] [i_7])))));
                    var_23 = ((/* implicit */short) 9223372036854775782LL);
                    arr_24 [i_5] = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((var_11), (arr_17 [i_5])))) ? (min((4294967295U), (2931024395U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_21 [i_5] [i_6] [i_5] [i_5])), (var_9))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_18 [i_5]), (((/* implicit */unsigned char) arr_20 [i_5] [i_6] [i_7]))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_9 = 1; i_9 < 14; i_9 += 2) 
    {
        for (int i_10 = 4; i_10 < 13; i_10 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_37 [i_9] [i_10] [i_11] [i_12] [i_9] = ((/* implicit */long long int) arr_21 [i_9] [i_10] [i_11] [i_12]);
                        var_24 = ((/* implicit */int) (short)21023);
                    }
                    arr_38 [i_9] = ((/* implicit */int) (_Bool)1);
                    arr_39 [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (var_2)));
                }
                arr_40 [i_9] = ((/* implicit */unsigned long long int) max((((arr_30 [i_9]) ? (((/* implicit */long long int) var_4)) : (max((5566167868680042449LL), (((/* implicit */long long int) var_6)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31334)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_3 [i_9] [i_9])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)31334)) : (((/* implicit */int) var_14))))))))));
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) var_10))));
                arr_41 [i_9] [i_10] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)35)) <= (((/* implicit */int) arr_20 [i_9] [i_10] [i_10 + 3]))))) * (((/* implicit */int) arr_7 [i_9 - 1] [i_10] [i_10 - 1]))));
                var_26 = (!(((/* implicit */_Bool) 547700376)));
            }
        } 
    } 
}
