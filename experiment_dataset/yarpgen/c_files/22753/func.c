/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22753
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
    var_12 = ((/* implicit */signed char) var_1);
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max(((signed char)107), (((/* implicit */signed char) (_Bool)1))))) << (((var_2) - (2130213592U)))))) - (var_4)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_14 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((short)-15772), (((/* implicit */short) (signed char)102)))))))), (((4294967281U) >> (((((/* implicit */int) arr_2 [i_0] [9ULL])) + (10596))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */int) max(((short)-12468), ((short)15771)))) ^ (((/* implicit */int) ((signed char) var_9)))));
                        var_15 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) max(((short)-15771), (((/* implicit */short) arr_9 [i_0] [i_0] [i_0] [i_0]))))) + (2147483647))) << (((unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)9874)))))));
                        arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (arr_3 [i_0] [i_1] [i_2]))));
                    }
                } 
            } 
        } 
        var_16 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-1)) ? (min((var_5), (((/* implicit */unsigned long long int) (signed char)17)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_7 [i_0] [i_0])), (2725618072U)))))) >> (((((/* implicit */int) arr_2 [i_0] [i_0])) + (10594)))));
        arr_13 [(signed char)6] &= ((/* implicit */unsigned short) min((var_4), (((/* implicit */unsigned long long int) var_1))));
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-117)) + (2147483647))) << (((((/* implicit */int) (unsigned short)65525)) - (65525)))));
    }
    for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        var_17 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) var_7)), (3801037057U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_4])) ^ (((/* implicit */int) (signed char)40)))))))) | (16774639734649278421ULL)));
        var_18 ^= (((+(1407055897U))) - (min((arr_17 [1U] [i_4]), (arr_17 [i_4] [i_4]))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_5 = 3; i_5 < 12; i_5 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65517))));
        arr_20 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_16 [i_5 - 3]))) << (((/* implicit */int) (!(((/* implicit */_Bool) 18211796760591873438ULL)))))));
    }
    for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 1) 
    {
        var_20 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6]))) - (((((/* implicit */_Bool) max(((short)-15774), (((/* implicit */short) (signed char)-126))))) ? (9511554358286219617ULL) : (((/* implicit */unsigned long long int) (~(var_9))))))));
        var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_7)))), (((/* implicit */int) max(((unsigned short)37389), ((unsigned short)7165))))))) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) ((unsigned char) var_8)))));
        arr_24 [i_6] [i_6 - 2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_21 [i_6 - 3])) ? (((/* implicit */int) arr_21 [i_6 - 3])) : (((/* implicit */int) arr_21 [i_6 + 3])))) * (((/* implicit */int) min((var_8), ((signed char)-32))))));
        arr_25 [i_6] = ((/* implicit */unsigned short) var_8);
    }
}
