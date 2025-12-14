/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201655
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)110)) ? (16121323801555966001ULL) : (((/* implicit */unsigned long long int) var_4))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_14 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)72)) > (((/* implicit */int) (short)-31756))))) < (((/* implicit */int) ((unsigned char) var_7)))));
                                var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (4253818047137145369ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0)))))));
                            }
                        } 
                    } 
                    arr_12 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */int) var_5))))) ? (((((/* implicit */int) var_11)) / (var_6))) : (((/* implicit */int) ((unsigned char) 11429063724684132212ULL)))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) (short)9363)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (162218476U))))));
                                var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2491070283066884884ULL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 2; i_8 < 14; i_8 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_6) + (2147483647))) >> (((((/* implicit */int) var_7)) - (78)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (4294967295U)));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) -8543961))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_10)))) ? (min((max((-6672028946463214728LL), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */unsigned int) -560545636)) : (var_4)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (var_4)))) ? (((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)23)) >= (((/* implicit */int) (unsigned short)54841)))))))))))));
}
