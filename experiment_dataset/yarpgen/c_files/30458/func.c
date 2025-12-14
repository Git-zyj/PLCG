/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30458
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_12 ^= ((/* implicit */int) arr_1 [i_0 + 1]);
        var_13 *= var_2;
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            arr_15 [i_0 + 1] [i_2] [(unsigned char)8] [i_3] [i_3] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_1 + 4] [i_3 + 1]))) * (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_13 [i_0] [i_0 + 3] [i_3] [i_1 + 4] [(signed char)6] [i_4 - 2])) : (((/* implicit */int) ((_Bool) var_0)))))) : (((unsigned int) var_5))));
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned char)94), (((/* implicit */unsigned char) (signed char)-15))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_1))) ? (arr_5 [i_0] [i_1 + 2] [i_3 + 1]) : (((/* implicit */int) ((unsigned short) var_10)))))) : (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
                            arr_16 [6U] [i_3] [5ULL] [i_3] [i_3] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1])))) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)31730)))))))));
                            arr_17 [i_3] [i_1] [(short)0] [i_3] [i_4] = ((/* implicit */unsigned short) var_11);
                            arr_18 [i_3] = ((/* implicit */unsigned short) max((-1523657139), (((/* implicit */int) (signed char)118))));
                        }
                        for (int i_5 = 3; i_5 < 18; i_5 += 3) /* same iter space */
                        {
                            var_15 = ((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
                            var_16 = ((/* implicit */unsigned short) arr_2 [i_2]);
                        }
                        for (int i_6 = 3; i_6 < 18; i_6 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) var_4)))))) ? (((/* implicit */long long int) ((((/* implicit */int) max((var_4), (((/* implicit */short) var_7))))) * (((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (var_9))))))) : (((((/* implicit */_Bool) (unsigned short)2260)) ? (-9007703084044149425LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)183)))))));
                            arr_23 [i_3] [i_1 + 1] [i_1] [(signed char)15] [i_1 + 4] [i_1 - 1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-14669))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_5)), (var_8)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), (var_11)))) : (var_2)))));
                        }
                        arr_24 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) var_7)))));
                        var_18 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3 + 1] [i_1 + 3] [i_2] [i_3] [(signed char)11] [i_0 + 1])))))) : ((-(((unsigned long long int) var_8)))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) ((long long int) ((int) (_Bool)1)));
    }
    for (int i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_12 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) - (18513))))) : ((-(524287)))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 2; i_8 < 13; i_8 += 1) 
        {
            for (long long int i_9 = 3; i_9 < 16; i_9 += 3) 
            {
                {
                    arr_31 [i_7] [(short)6] [8ULL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((var_3) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_7))))));
                    arr_32 [i_7] [(signed char)7] [i_8] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) var_7)))));
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        arr_36 [i_7] = ((/* implicit */short) arr_0 [17] [i_9 - 1]);
                        arr_37 [i_7] [i_7] [i_9] [i_10] = ((/* implicit */signed char) ((unsigned long long int) ((_Bool) -524288)));
                        var_21 = var_10;
                    }
                    arr_38 [i_7] [i_8] [i_7] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) ((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [6ULL] [i_7] [i_9] [i_8 - 1] [i_7] [i_8] [(unsigned short)12])))))) > (((/* implicit */int) max((((/* implicit */short) arr_20 [i_9] [i_7] [i_9] [i_8] [i_8] [i_7] [i_7])), (var_1)))))));
                    var_22 = ((/* implicit */signed char) ((unsigned int) ((unsigned long long int) ((int) var_1))));
                }
            } 
        } 
        var_23 = ((/* implicit */short) max((var_23), (var_1)));
    }
    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min((var_0), (var_0)))) : (((/* implicit */int) var_9)))))));
}
