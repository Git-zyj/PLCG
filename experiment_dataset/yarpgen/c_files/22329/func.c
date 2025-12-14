/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22329
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
    var_10 &= ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 4; i_2 < 9; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)34))));
                                var_12 = (+((~(((/* implicit */int) var_6)))));
                                var_13 += ((/* implicit */unsigned int) (short)-32747);
                            }
                        } 
                    } 
                } 
                var_14 = arr_8 [i_0] [i_0] [i_1];
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [i_5])) ? (1707128689) : (((/* implicit */int) var_8))))) ? ((~(var_5))) : (((((/* implicit */_Bool) (unsigned char)145)) ? (-1162054187420637302LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32739)))))));
        /* LoopNest 3 */
        for (signed char i_6 = 4; i_6 < 16; i_6 += 3) 
        {
            for (int i_7 = 3; i_7 < 19; i_7 += 4) 
            {
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    {
                        arr_21 [i_5] [i_6] [i_6] [i_7] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (24576U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)32746)))))));
                        var_16 = ((/* implicit */long long int) ((unsigned int) arr_20 [i_7 - 2] [i_7 - 2] [i_7 - 2]));
                    }
                } 
            } 
        } 
    }
}
