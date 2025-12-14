/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52569
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
    var_17 = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (-621622709114189122LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45009))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        var_18 = max(((~(((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)6811))) - (621622709114189122LL)))) ? (((((/* implicit */_Bool) var_13)) ? (arr_1 [i_0] [i_3]) : (1332746917))) : (((((/* implicit */int) (signed char)-117)) ^ (((/* implicit */int) var_2))))))));
                        arr_12 [i_0 - 4] [i_0 - 4] [i_1 + 1] [i_0 - 4] [i_2] [i_3] = ((long long int) ((((/* implicit */int) (short)6684)) | (((/* implicit */int) (signed char)33))));
                        var_19 = ((/* implicit */signed char) ((unsigned short) ((621622709114189124LL) < (((/* implicit */long long int) ((/* implicit */int) (short)1159))))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
                    {
                        var_20 ^= ((/* implicit */signed char) var_16);
                        var_21 = ((/* implicit */long long int) (-(((/* implicit */int) (short)3584))));
                    }
                    for (short i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned short) 6276469478013080367LL);
                        /* LoopSeq 1 */
                        for (int i_6 = 3; i_6 < 18; i_6 += 4) 
                        {
                            var_23 ^= ((/* implicit */short) (-(min((min((var_9), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) (signed char)-63))))));
                            var_24 += ((/* implicit */unsigned int) var_11);
                            arr_23 [i_0] [3U] [i_1] [i_2 + 1] [i_0] [i_6] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_2] [i_0 + 1]))) : (-4822085276540194352LL))))));
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (signed char)-95))));
                            arr_24 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (short)6694)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (short)3584)))) : (((/* implicit */int) var_2))));
                        }
                    }
                    var_26 = ((/* implicit */long long int) ((min((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_2] [i_2]))))), (((((/* implicit */int) var_16)) / (((/* implicit */int) (unsigned short)49708)))))) == ((-(((/* implicit */int) arr_19 [i_2] [i_2] [i_1 + 1] [i_1] [i_2] [18LL]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
    {
        for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    var_27 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_13 [i_7] [i_8] [i_8] [i_9])), (1099511619584LL)))) || (((/* implicit */_Bool) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) (short)-6799))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 3; i_10 < 17; i_10 += 2) 
                    {
                        var_28 ^= ((/* implicit */unsigned int) ((((long long int) max((arr_7 [i_9] [i_9] [15LL]), (arr_4 [i_7] [11LL] [i_9])))) - (((long long int) var_3))));
                        var_29 ^= min((((/* implicit */long long int) var_7)), (((((/* implicit */long long int) ((/* implicit */int) (short)6811))) - (arr_25 [i_8] [i_10 + 1]))));
                    }
                    var_30 = ((/* implicit */long long int) var_1);
                }
                var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_33 [i_7] [i_7] [i_8]) + (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_11 = 0; i_11 < 20; i_11 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_12 = 2; i_12 < 19; i_12 += 3) 
        {
            for (long long int i_13 = 0; i_13 < 20; i_13 += 2) 
            {
                for (int i_14 = 1; i_14 < 19; i_14 += 1) 
                {
                    {
                        var_32 = ((((/* implicit */_Bool) max((((long long int) -1279523207)), (((/* implicit */long long int) arr_36 [i_12] [i_12] [i_12] [i_12 - 1] [16LL] [i_11]))))) ? (((long long int) var_16)) : (((((/* implicit */_Bool) (~(var_15)))) ? (((long long int) (short)3584)) : (var_9))));
                        var_33 *= ((/* implicit */unsigned int) (-((((-(((/* implicit */int) (unsigned short)49703)))) * (((/* implicit */int) (!(((/* implicit */_Bool) -2326848018294748446LL)))))))));
                        arr_51 [i_11] [i_11] [i_13] = ((/* implicit */unsigned int) (+(var_11)));
                    }
                } 
            } 
        } 
        var_34 = var_0;
        var_35 = ((/* implicit */signed char) ((((3737841898440532006LL) ^ (-2213956646352062548LL))) | (((/* implicit */long long int) max((arr_11 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]), (((/* implicit */unsigned int) -1028531281)))))));
    }
}
