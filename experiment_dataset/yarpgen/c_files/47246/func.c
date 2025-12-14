/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47246
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
    for (signed char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 7285558666777406687LL))))), (max((((/* implicit */unsigned long long int) var_5)), (var_9)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7285558666777406717LL)) ? (((/* implicit */long long int) var_8)) : (7285558666777406718LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1])) ^ (((/* implicit */int) arr_2 [i_3]))))) : (((7285558666777406726LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23343))))))) : (((/* implicit */long long int) var_8))));
                                var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((-(18446744073709551611ULL)))))) ? (min((((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)31744)))), (((/* implicit */int) var_7)))) : ((+(((/* implicit */int) ((short) var_5)))))));
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2 + 2] [(signed char)3] [i_4])) % (((/* implicit */int) arr_13 [i_0] [(short)2] [i_0] [i_0] [i_0]))))) / (max((var_13), (((/* implicit */unsigned long long int) (short)-32746))))));
                            }
                            var_20 = ((/* implicit */short) max((((/* implicit */int) max((arr_8 [i_0 + 1]), (arr_8 [i_0 + 1])))), (((((((/* implicit */int) arr_1 [i_2 + 1])) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0 - 1] [i_2] [i_1] [(short)3] [i_0 - 1])) == (((/* implicit */int) var_7)))))))));
                            var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) var_2)))));
                        }
                    } 
                } 
                var_22 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 266429496)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_15)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)45))) % (7285558666777406684LL))) : (((/* implicit */long long int) (-((+(((/* implicit */int) var_7)))))))));
    var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)54))));
    /* LoopNest 2 */
    for (short i_5 = 2; i_5 < 17; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            {
                var_25 ^= ((/* implicit */short) ((unsigned char) 2628060882U));
                /* LoopNest 3 */
                for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        for (signed char i_9 = 1; i_9 < 17; i_9 += 3) 
                        {
                            {
                                var_26 &= ((/* implicit */unsigned int) var_13);
                                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) arr_23 [i_5] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]))))))));
                                var_28 ^= ((/* implicit */short) min((min((((/* implicit */unsigned long long int) var_11)), (max((arr_17 [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) arr_15 [i_5 + 1] [i_5 + 1])))))), (((/* implicit */unsigned long long int) ((arr_18 [i_5]) & (var_14))))));
                            }
                        } 
                    } 
                } 
                var_29 -= ((/* implicit */unsigned int) arr_23 [i_5 - 1] [i_5 - 2] [i_5 - 2] [(short)17] [i_5 + 1]);
            }
        } 
    } 
}
