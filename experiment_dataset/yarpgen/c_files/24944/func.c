/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24944
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 |= ((/* implicit */short) max(((~((+(((/* implicit */int) (signed char)56)))))), (((/* implicit */int) ((signed char) max(((signed char)-59), ((signed char)65)))))));
        var_16 += ((/* implicit */long long int) ((_Bool) ((unsigned short) ((((/* implicit */int) (short)30931)) % (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */short) ((max(((!(((/* implicit */_Bool) arr_3 [i_1])))), ((!(((/* implicit */_Bool) (unsigned char)251)))))) && (((/* implicit */_Bool) ((unsigned char) max((1369703014U), (((/* implicit */unsigned int) (signed char)64))))))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) (-(min((((int) arr_2 [i_0])), ((-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))))));
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) | (max((((/* implicit */long long int) var_0)), (var_4))))), (((long long int) (~(((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4]))))))))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((short) min((((/* implicit */int) arr_3 [i_0])), (arr_14 [i_1] [i_1] [i_2] [i_2] [i_4] [i_1 - 1]))))) | (((/* implicit */int) (!(((/* implicit */_Bool) ((1404648834085255007LL) ^ (((/* implicit */long long int) var_3))))))))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-38)) || (((/* implicit */_Bool) var_6))))), (max((-1404648834085255003LL), (1404648834085255007LL)))))) || (((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned int) (unsigned char)251)), (124667443U))))))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max((min((max((((/* implicit */long long int) var_0)), (var_10))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_2)), (2925264268U)))))), (((((/* implicit */long long int) max((1369703027U), (((/* implicit */unsigned int) var_1))))) - (((var_4) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))));
    /* LoopSeq 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 4; i_7 < 12; i_7 += 1) 
            {
                {
                    var_22 |= ((/* implicit */long long int) max((((((((/* implicit */int) (signed char)37)) % (((/* implicit */int) var_12)))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))), ((!(((/* implicit */_Bool) max((var_2), (arr_3 [i_5 - 1]))))))));
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) min((max((max((-3785256147986468596LL), (((/* implicit */long long int) (short)-26742)))), (((/* implicit */long long int) ((int) arr_3 [i_6]))))), (((/* implicit */long long int) ((((/* implicit */int) max((arr_9 [i_5] [i_5] [i_6] [i_7] [i_7]), (((/* implicit */unsigned short) (signed char)58))))) == (((/* implicit */int) max((var_13), (((/* implicit */unsigned short) arr_19 [i_6])))))))))))));
                }
            } 
        } 
        var_24 |= ((/* implicit */int) max((((unsigned short) ((18013848753668096LL) > (((/* implicit */long long int) var_14))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) arr_1 [i_5 - 1]))))))));
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) ((unsigned short) arr_6 [i_8] [i_8] [i_8]))), ((~(1369703000U)))))));
        var_26 = ((/* implicit */unsigned short) ((unsigned long long int) max((min((4093532523U), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) max((arr_0 [i_8]), (var_0)))))));
        var_27 *= ((/* implicit */int) ((short) max(((+(var_6))), (((/* implicit */long long int) min((((/* implicit */int) var_12)), (var_3)))))));
    }
}
