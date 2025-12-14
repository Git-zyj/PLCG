/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249027
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_13 &= ((/* implicit */int) (+(arr_1 [i_0 + 1] [i_0 + 1])));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((var_1) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_8 [7ULL] = ((/* implicit */unsigned char) var_6);
        var_14 = (~(((/* implicit */int) ((((/* implicit */unsigned long long int) 939524096LL)) != (4035225266123964416ULL)))));
        /* LoopNest 2 */
        for (long long int i_2 = 4; i_2 < 10; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                {
                    arr_14 [6ULL] [i_2 + 1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) (signed char)78)) : ((-(((/* implicit */int) (unsigned char)31))))));
                    arr_15 [(unsigned char)6] [i_2] [i_2] [i_3] = ((/* implicit */int) (~(max((((/* implicit */long long int) var_11)), (var_1)))));
                    var_15 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_12)))) ? (((/* implicit */unsigned long long int) ((var_9) << (((((((/* implicit */int) arr_10 [i_2] [i_1])) + (84))) - (2)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_6)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            arr_18 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_4])) : (((/* implicit */int) arr_3 [i_1] [9ULL]))))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_13 [i_1] [(unsigned char)0] [1ULL] [i_1])))) : (max((1152921504606846975LL), (((/* implicit */long long int) (short)17275))))))));
            var_16 = ((/* implicit */unsigned char) min((var_16), (arr_9 [i_4] [i_1] [i_1])));
            arr_19 [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) || ((!(((/* implicit */_Bool) max((var_10), (((/* implicit */short) var_7)))))))));
            arr_20 [i_1] [i_1] [i_4] = ((/* implicit */short) (((+((+(((/* implicit */int) (short)17275)))))) >= (((/* implicit */int) var_8))));
        }
        var_17 = ((/* implicit */long long int) arr_7 [i_1]);
    }
    for (int i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        var_18 = ((/* implicit */signed char) max((max((max((16376931872775152358ULL), (((/* implicit */unsigned long long int) arr_21 [i_5])))), (((16376931872775152358ULL) << (((((/* implicit */int) var_4)) + (20604))))))), (max((9129066546896655536ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11)))))))));
        arr_24 [i_5] &= ((/* implicit */unsigned char) (+((~(max((((/* implicit */unsigned long long int) 144112989052600320LL)), (4206750977962640271ULL)))))));
        var_19 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -2804211895082089894LL)) / (14239993095746911345ULL)));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)901)))))));
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned char)251))))))) >= (max((((/* implicit */unsigned long long int) max((-80048382), (((/* implicit */int) (unsigned char)147))))), ((~(4352452634087762369ULL)))))));
    var_22 = var_8;
}
