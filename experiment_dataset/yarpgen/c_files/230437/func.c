/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230437
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
    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) var_2)) : (var_4))))));
    var_13 = ((/* implicit */unsigned short) 6884463162833736993LL);
    var_14 = ((/* implicit */_Bool) var_2);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(-6884463162833736985LL)));
                        arr_11 [i_0] [i_1] [i_0] = ((/* implicit */int) 268435328U);
                        arr_12 [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 3806607094U)) <= (1107081376206253116ULL)))) >= ((-(((/* implicit */int) (signed char)45))))));
                        var_15 = ((/* implicit */unsigned int) var_1);
                    }
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        var_16 = ((/* implicit */short) ((long long int) ((short) arr_4 [i_1])));
                        arr_15 [i_0] [i_1] [i_2] [i_4] [i_4] [i_0] = ((/* implicit */long long int) 17339662697503298497ULL);
                        arr_16 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned int) var_5))), ((+(var_7)))));
                        arr_17 [i_0] [i_1] [i_2] [i_4] = arr_14 [i_0] [i_1] [i_2] [i_4];
                        arr_18 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned short) min((arr_5 [i_2]), (arr_5 [i_0]))));
                    }
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned short) (((+(arr_3 [i_0] [i_5]))) >= (1107081376206253116ULL)));
                        var_18 &= ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) (~(arr_7 [i_1] [i_5] [i_5] [i_5] [i_1] [i_0])))))));
                    }
                    var_19 ^= ((/* implicit */unsigned char) arr_8 [i_0] [i_1] [(short)14] [(unsigned short)12] [8U]);
                    var_20 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) min((((/* implicit */long long int) arr_21 [i_0])), (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -6884463162833736999LL)))))) : (var_7)))));
                    var_21 += ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)65516)) : (arr_7 [i_0] [6] [(signed char)10] [i_1] [i_0] [i_2]))))))), (max((min((arr_21 [i_0]), (var_2))), (((/* implicit */unsigned int) arr_19 [(signed char)12]))))));
                    var_22 ^= ((/* implicit */unsigned char) -828348139);
                }
            } 
        } 
    } 
}
