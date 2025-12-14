/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234765
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
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_10 = min((var_9), ((~(var_9))));
        var_11 ^= ((/* implicit */unsigned short) (~((+(4944244795684674045LL)))));
    }
    for (int i_1 = 3; i_1 < 16; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_2 = 4; i_2 < 16; i_2 += 3) 
        {
            arr_7 [3U] [i_2] [i_2] = ((/* implicit */int) ((arr_6 [i_2] [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 534773760U)) <= (var_0)))))));
            var_12 = max((var_4), (((/* implicit */unsigned int) var_3)));
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                var_13 = ((/* implicit */long long int) ((unsigned int) var_3));
                var_14 *= ((/* implicit */unsigned int) var_8);
                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_0))))));
            }
            /* vectorizable */
            for (int i_4 = 1; i_4 < 18; i_4 += 1) 
            {
                arr_13 [i_2] = ((unsigned long long int) -3028402444681347703LL);
                /* LoopSeq 1 */
                for (unsigned int i_5 = 4; i_5 < 18; i_5 += 4) 
                {
                    arr_16 [i_5] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((-7273983934903403720LL) / (((/* implicit */long long int) 534773760U))));
                    var_16 = (~(arr_15 [i_2 - 4] [i_2 - 4] [i_2 - 4] [(unsigned short)1]));
                    arr_17 [i_4] [i_1] [i_4] [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) (+(var_8)));
                }
                var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
            }
            for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                arr_21 [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_8 [i_2 - 2] [i_2]) : (((/* implicit */long long int) var_4))))), (8812362248461460988ULL)));
                var_18 = ((/* implicit */unsigned short) (+(534773760U)));
                arr_22 [i_1] [i_2] [i_2] [i_6] = ((/* implicit */short) var_0);
            }
            var_19 = ((/* implicit */int) var_4);
        }
        for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((((/* implicit */unsigned int) 262140)) & (3760193541U))), (((/* implicit */unsigned int) var_5))))), ((-(arr_2 [i_1])))));
            var_21 = ((/* implicit */unsigned short) var_0);
        }
        for (int i_8 = 4; i_8 < 17; i_8 += 4) 
        {
            arr_31 [i_1] = ((/* implicit */int) arr_19 [i_8] [i_8 - 4]);
            arr_32 [i_1 + 2] = ((/* implicit */long long int) arr_27 [i_1 + 3]);
            /* LoopSeq 1 */
            for (unsigned int i_9 = 3; i_9 < 15; i_9 += 4) 
            {
                var_22 += ((/* implicit */short) (-(((unsigned long long int) (+(arr_6 [i_8] [i_9 - 1]))))));
                var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_8)))) ? (((((/* implicit */int) (unsigned short)63185)) & (-268435456))) : (((/* implicit */int) ((unsigned short) var_5)))));
                arr_35 [i_9] [i_1] = (+(((((/* implicit */_Bool) arr_24 [i_8 - 1] [i_1 + 1])) ? (-281474976710656LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
                arr_36 [i_1] [i_8] [i_8] [i_9] = 3760193536U;
                /* LoopNest 2 */
                for (long long int i_10 = 1; i_10 < 18; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 1) 
                    {
                        {
                            arr_44 [i_1] [i_1] [i_9] [i_10] [i_11] = ((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) 4286578688U))));
                            var_24 = (((+(min((4286578703U), (50331648U))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_5))));
                            var_25 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((1830357691641430307ULL), (((/* implicit */unsigned long long int) arr_19 [i_8] [i_10 + 1]))))) ? (max((144106391982833664ULL), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((int) arr_25 [i_1] [i_1] [i_9 + 1]))))), (((/* implicit */unsigned long long int) -281474976710656LL))));
                            arr_45 [i_10] [i_10 - 1] [i_10] [i_10] [(short)17] [i_10] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(3171315092020490712ULL))))));
                        }
                    } 
                } 
            }
            var_26 = ((/* implicit */unsigned long long int) max((arr_26 [i_1 + 1] [i_8 - 2] [i_8]), (arr_26 [i_1 - 3] [i_8 - 1] [i_1 - 3])));
        }
        arr_46 [i_1] |= (~(((((((/* implicit */_Bool) -281474976710656LL)) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) -191502646)) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12803))) / (var_8))))));
        arr_47 [8U] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 3760193536U)) ? (((/* implicit */unsigned long long int) arr_12 [i_1 + 1] [i_1 - 3])) : (6425827964669769915ULL))) + (((((/* implicit */unsigned long long int) 281474976710656LL)) | (9998020321462470038ULL)))));
    }
    var_27 = ((/* implicit */unsigned long long int) var_1);
}
