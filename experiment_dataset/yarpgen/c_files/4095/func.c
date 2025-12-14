/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4095
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
    var_14 += ((/* implicit */int) ((((((/* implicit */int) var_5)) + (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))) < (((/* implicit */int) var_10))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_15 = max((((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_12)))))))), (max((((/* implicit */long long int) (short)17407)), (-4708554072572394541LL))));
        var_16 *= ((/* implicit */_Bool) var_7);
        arr_2 [i_0] [2] = ((/* implicit */long long int) ((short) (((!(var_1))) && (((/* implicit */_Bool) ((unsigned short) var_4))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_17 -= ((/* implicit */unsigned char) ((((var_1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)))) / (((/* implicit */int) var_9))));
        arr_6 [16ULL] [13LL] = ((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))) >= ((+(((/* implicit */int) var_12)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
        var_18 -= ((unsigned long long int) ((((/* implicit */int) var_5)) << (((((/* implicit */int) var_11)) + (28773)))));
        arr_10 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : ((~(((/* implicit */int) var_11))))));
    }
    /* LoopSeq 1 */
    for (long long int i_3 = 1; i_3 < 9; i_3 += 2) 
    {
        var_19 -= ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_0)))) : (((/* implicit */int) var_10)))) ^ (max((((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_13)))));
        var_20 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (var_6)))))));
    }
    var_21 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        for (unsigned short i_5 = 1; i_5 < 10; i_5 += 1) 
        {
            {
                arr_20 [i_4] [4LL] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)0))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)14)) | (((/* implicit */int) (unsigned short)0))));
            }
        } 
    } 
}
