/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51487
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
    for (long long int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) var_4)) % (var_0))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((((-9223372036854775798LL) - (-9223372036854775794LL))) + (35LL))) - (31LL))))))));
                    var_12 = ((/* implicit */short) ((((unsigned long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_3))))) >> (((((((long long int) var_2)) >> (((((unsigned long long int) 2864183325U)) - (2864183321ULL))))) - (904LL)))));
                    arr_7 [i_0] [(signed char)9] = ((/* implicit */short) ((var_4) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) var_11);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 9; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) min((((/* implicit */int) min((var_6), (((/* implicit */signed char) ((_Bool) var_0)))))), (((int) ((((/* implicit */_Bool) var_2)) ? (var_0) : (var_0))))));
                                arr_20 [i_4] [(unsigned short)4] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (unsigned short)6283)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (2864183330U))) == (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_6)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_2))) ^ (((/* implicit */int) var_3))))) : (((unsigned int) var_7))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 1; i_8 < 6; i_8 += 4) 
                        {
                            var_15 = ((/* implicit */signed char) ((_Bool) var_6));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) ((unsigned short) (short)30361))) ? (((/* implicit */int) min((var_10), (var_8)))) : (((/* implicit */int) var_2))))));
                        }
                        var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_9))))) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))));
                        var_18 = ((/* implicit */signed char) ((_Bool) ((var_0) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
                    }
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_8))))) ^ (((unsigned int) max((((/* implicit */short) var_8)), (var_2))))));
                                var_20 *= ((/* implicit */signed char) ((((((/* implicit */int) var_8)) >= (((/* implicit */int) var_9)))) ? (((/* implicit */int) ((signed char) var_0))) : (((/* implicit */int) ((signed char) ((_Bool) -8453102831215567733LL))))));
                                var_21 -= ((/* implicit */_Bool) min((((((unsigned long long int) var_5)) | (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (var_4)))))), (((/* implicit */unsigned long long int) var_7))));
                                var_22 = ((/* implicit */unsigned short) ((short) ((var_0) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) max((var_23), (min((2864183305U), (((/* implicit */unsigned int) (short)-7955))))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 4) 
    {
        for (int i_12 = 0; i_12 < 25; i_12 += 4) 
        {
            for (long long int i_13 = 0; i_13 < 25; i_13 += 4) 
            {
                {
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */int) min((var_3), (var_1)))) & (((/* implicit */int) ((unsigned short) var_10)))));
                    var_25 = ((/* implicit */unsigned short) min((((/* implicit */int) max((var_2), (var_5)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))));
                    arr_40 [i_11] [i_13] [i_13] [i_12] = ((/* implicit */long long int) ((((((/* implicit */int) ((short) var_6))) % (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)))))) % (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))));
                    var_26 = ((/* implicit */short) ((((/* implicit */long long int) ((int) var_8))) & (((((long long int) var_10)) | (((/* implicit */long long int) ((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 1; i_14 < 21; i_14 += 4) 
                    {
                        for (signed char i_15 = 0; i_15 < 25; i_15 += 4) 
                        {
                            {
                                arr_47 [i_11] [5U] [i_11] = ((/* implicit */unsigned long long int) ((signed char) ((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (var_8))))))));
                                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_2), (var_2)))) ? (((/* implicit */int) ((((int) var_8)) <= (((/* implicit */int) var_2))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_10)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
