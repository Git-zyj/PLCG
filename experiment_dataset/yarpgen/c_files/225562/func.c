/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225562
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)127))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_15 = ((/* implicit */signed char) arr_4 [i_0] [i_1] [(unsigned short)6]);
            /* LoopNest 3 */
            for (unsigned short i_2 = 4; i_2 < 11; i_2 += 4) 
            {
                for (signed char i_3 = 2; i_3 < 11; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_3] [i_4] [i_4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (signed char)127))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2 - 4] [i_0 + 1])) ? (arr_5 [i_2 - 4] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12817)))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_5 = 3; i_5 < 11; i_5 += 4) 
        {
            var_18 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_5] [(unsigned short)7] [i_0 - 1] [i_5 - 3] [i_5 - 1])) ? (((/* implicit */int) var_5)) : (0))))));
            var_19 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_11 [i_5 - 1] [i_0] [i_0] [i_0]))));
            var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_7)) ^ (((((/* implicit */_Bool) -1161900271682788654LL)) ? (var_1) : (((/* implicit */int) (signed char)(-127 - 1)))))));
            arr_19 [(unsigned short)7] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1]))) : (234609636495111945LL)))));
            var_21 += ((/* implicit */unsigned long long int) arr_18 [i_0]);
        }
    }
    for (signed char i_6 = 1; i_6 < 16; i_6 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-1161900271682788648LL)))));
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (unsigned short)59808))));
    }
    var_24 += ((/* implicit */unsigned short) var_6);
    var_25 = ((/* implicit */_Bool) var_8);
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
    {
        for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            for (int i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                {
                    arr_32 [i_7] [i_8] [(unsigned short)9] [i_7] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_7])))))));
                    var_26 ^= ((/* implicit */signed char) (_Bool)1);
                }
            } 
        } 
    } 
}
