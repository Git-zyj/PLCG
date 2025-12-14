/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196810
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1 - 1] [i_2] = ((/* implicit */unsigned char) arr_1 [i_1 + 1]);
                    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) max((var_16), (((/* implicit */short) (_Bool)1))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        var_21 = arr_9 [i_3];
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 22; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    var_22 += ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) var_18)) : (arr_4 [i_3] [i_3])))), (((((/* implicit */_Bool) arr_13 [10LL])) ? (((/* implicit */long long int) arr_1 [20])) : (var_2))))), (((/* implicit */long long int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_15)) >= (var_19)))), (min(((unsigned char)191), (arr_7 [i_3] [i_4] [i_3]))))))));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_4))));
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((var_1) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_1)))))))))))));
                    var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */int) ((signed char) arr_5 [i_3] [i_4 + 1]))) : (((((/* implicit */int) (unsigned short)30972)) | (((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((var_19), (((/* implicit */unsigned long long int) var_0))))))) : (min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_4] [i_4])) : (((/* implicit */int) var_16))))), (var_7)))));
                }
            } 
        } 
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */int) var_13))))))))))));
        arr_17 [i_3] [i_3] = ((/* implicit */long long int) 5461167204107914285ULL);
    }
}
