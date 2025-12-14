/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244196
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? ((+(7864320))) : ((~(((/* implicit */int) arr_2 [i_0]))))));
                var_13 = ((/* implicit */unsigned long long int) (unsigned short)254);
                arr_6 [i_1] [(signed char)6] [i_1] = ((/* implicit */signed char) 20ULL);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_4 [i_2] [i_2] [i_2]))))));
        arr_11 [i_2] |= ((/* implicit */int) arr_2 [i_2]);
        /* LoopNest 3 */
        for (signed char i_3 = 3; i_3 < 10; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    {
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((((/* implicit */_Bool) (~(4266609270540357609LL)))) ? (((/* implicit */unsigned long long int) 4266609270540357601LL)) : (var_5))) : (min((((/* implicit */unsigned long long int) -1856184321)), (7069524343923606368ULL)))));
                        arr_20 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (unsigned char)12);
                        arr_21 [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((-2147483647 - 1)))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 4; i_6 < 9; i_6 += 2) 
                        {
                            arr_25 [i_6] [i_5] [i_3] = ((/* implicit */unsigned long long int) arr_10 [i_3]);
                            var_16 = 12639830888134206318ULL;
                        }
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) (unsigned short)25436);
                            var_18 = ((/* implicit */unsigned short) (~((-(-4266609270540357616LL)))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [6ULL])) ? ((-(-4510169638591150739LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12)))));
                        }
                        arr_29 [i_5] = var_5;
                    }
                } 
            } 
        } 
        arr_30 [9LL] = var_7;
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_8 = 1; i_8 < 15; i_8 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            var_20 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)0))));
            arr_35 [i_9] &= ((/* implicit */signed char) (-((-(((/* implicit */int) (unsigned char)225))))));
        }
        var_21 ^= ((/* implicit */unsigned short) 8866844798650886421ULL);
        var_22 = arr_32 [i_8 + 1];
    }
}
