/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51262
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
    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max(((~(((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))), ((+(4564802611257907838LL)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned int i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                            {
                                arr_13 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (((~(max((arr_1 [i_4]), (((/* implicit */unsigned long long int) arr_5 [i_4] [i_1] [i_4])))))) >> ((((~(((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_4] [(_Bool)1] [i_4] [i_1] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])))))) + (30)))));
                                var_19 = ((/* implicit */signed char) ((((unsigned long long int) arr_7 [i_0] [i_0] [i_2] [i_3])) > (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (short)-31628)))) / (((/* implicit */int) arr_12 [i_0] [i_0] [i_3 - 2] [i_4] [i_4] [i_4] [i_4])))))));
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76))) - (arr_8 [i_3 - 3] [i_3 - 1] [i_3 - 2])))) || (((/* implicit */_Bool) ((int) 15978093700195446349ULL)))));
                            }
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */short) (-(max((arr_8 [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) ((_Bool) 2468650373514105266ULL)))))));
            }
        } 
    } 
    var_21 = max((((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))), (var_8));
    /* LoopSeq 2 */
    for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_22 -= ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) ((signed char) arr_20 [i_8] [(signed char)6]))), (((((/* implicit */_Bool) arr_25 [11U] [i_6] [i_6] [11U] [i_8] [i_8])) ? (arr_11 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
                        arr_27 [i_6] [i_6] [(_Bool)1] = min(((+(8336851867727899898ULL))), (max((8336851867727899898ULL), (((/* implicit */unsigned long long int) (signed char)-126)))));
                        var_23 += ((/* implicit */short) (~((-(((((/* implicit */_Bool) 2468650373514105266ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_4 [i_5] [i_5])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_9 = 1; i_9 < 12; i_9 += 3) 
        {
            for (signed char i_10 = 1; i_10 < 14; i_10 += 3) 
            {
                {
                    var_24 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)0))));
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 15; i_12 += 2) 
                        {
                            {
                                arr_38 [0ULL] [i_9] [i_12] = ((/* implicit */unsigned short) arr_18 [i_5] [i_9]);
                                var_25 = (~(((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (signed char)125)))))));
                                var_26 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(arr_32 [i_10 - 1] [i_9 + 2] [i_12]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_12 [(short)6] [i_5] [(unsigned short)15] [i_5] [i_5] [15ULL] [i_5])) ? (((/* implicit */int) arr_12 [i_5] [i_5] [(_Bool)1] [i_5] [(unsigned short)2] [(_Bool)1] [i_5])) : (((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) | (min(((+(((/* implicit */int) arr_15 [i_5])))), (((/* implicit */int) ((unsigned short) arr_24 [(unsigned short)10] [i_5] [i_5] [i_5]))))))))));
        var_28 = ((/* implicit */signed char) (-(((/* implicit */int) (short)(-32767 - 1)))));
        var_29 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((!((_Bool)1))))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (10109892205981651717ULL)))));
    }
    for (unsigned short i_13 = 0; i_13 < 19; i_13 += 3) 
    {
        arr_42 [i_13] = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_5)))));
        var_30 = ((/* implicit */short) var_6);
    }
}
