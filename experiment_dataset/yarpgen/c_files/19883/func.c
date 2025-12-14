/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19883
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) ((8388608) % (max((((((/* implicit */_Bool) 1441107604)) ? (var_1) : (-8388609))), ((((-2147483647 - 1)) | (0)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) 10194672343866383530ULL));
    }
    for (unsigned short i_1 = 2; i_1 < 9; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) (+(8252071729843168058ULL)));
        var_18 = ((/* implicit */short) min((((/* implicit */int) (signed char)36)), ((-2147483647 - 1))));
    }
    /* LoopNest 3 */
    for (short i_2 = 1; i_2 < 16; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            for (long long int i_4 = 4; i_4 < 14; i_4 += 4) 
            {
                {
                    arr_13 [i_2 - 1] [i_3] [i_4 - 3] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 8252071729843168085ULL)) ? (-1673178728) : (-8388620)))) ? (((((/* implicit */_Bool) arr_12 [i_2 - 1] [i_2] [i_3] [i_4 - 2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)31666)))) : (736905811))) | (((((/* implicit */_Bool) ((unsigned long long int) 8388620))) ? (((/* implicit */int) (unsigned char)14)) : (((((/* implicit */_Bool) (short)-10890)) ? (((/* implicit */int) (unsigned char)144)) : (5)))))));
                    var_19 = arr_1 [i_3] [i_4];
                }
            } 
        } 
    } 
    var_20 &= var_1;
    var_21 = ((/* implicit */long long int) min((534095268), (((/* implicit */int) (unsigned char)3))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 3) 
    {
        for (signed char i_6 = 1; i_6 < 16; i_6 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)198)) / (8388609))))));
                var_23 *= ((/* implicit */_Bool) (~(8388609)));
            }
        } 
    } 
}
