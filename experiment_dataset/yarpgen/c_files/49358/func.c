/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49358
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
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_0)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_9 [9LL] [9LL] [9LL] [i_1] [i_1] [16ULL])) ? (((/* implicit */unsigned long long int) var_7)) : (var_8)))))));
                        arr_11 [(signed char)10] [(signed char)10] [i_2] = ((/* implicit */_Bool) max((min((((arr_0 [i_0]) >> (((var_2) - (13119738312493774233ULL))))), (((/* implicit */unsigned long long int) ((var_2) > (var_0)))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_7) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))))));
                    }
                } 
            } 
        } 
        var_17 &= ((/* implicit */unsigned int) arr_6 [i_0]);
    }
    for (int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        arr_14 [i_4] [i_4] |= ((/* implicit */_Bool) ((short) (-(((arr_2 [i_4] [i_4]) << (((((/* implicit */int) var_11)) - (50101))))))));
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_5 [i_4] [(unsigned short)10] [4LL]), (arr_5 [i_4] [(unsigned short)13] [i_4]))))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        arr_18 [(short)6] [(short)6] = ((/* implicit */long long int) (-((+(var_12)))));
        var_19 = ((/* implicit */short) var_12);
        /* LoopSeq 1 */
        for (short i_6 = 2; i_6 < 15; i_6 += 4) 
        {
            /* LoopSeq 3 */
            for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                arr_26 [(_Bool)0] [i_6] [i_6] = (((!(arr_23 [i_5] [i_5] [i_5] [(unsigned char)7]))) && (((_Bool) arr_13 [i_5] [7ULL])));
                var_20 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_5 [i_5] [11ULL] [15LL]))))));
            }
            for (unsigned int i_8 = 1; i_8 < 13; i_8 += 1) 
            {
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_30 [i_6] [i_6] [7ULL] [i_6]))));
                var_22 -= ((/* implicit */signed char) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [(unsigned short)1] [(unsigned short)1] [(unsigned short)1]))) != (arr_15 [i_6]))));
                var_23 += ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [10U] [i_8] [i_8 - 1] [i_6] [(signed char)11] [i_6 - 2])) <= (var_1)));
            }
            for (unsigned long long int i_9 = 2; i_9 < 12; i_9 += 4) 
            {
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_9] [i_9] [i_9 + 3] [i_6 + 1]))) != (arr_24 [i_9 + 2] [i_6 - 2]))))));
                arr_33 [i_6] [(unsigned short)15] [3U] = ((/* implicit */unsigned long long int) ((arr_19 [i_6 - 1] [i_9 + 3]) ? (((/* implicit */int) ((_Bool) var_12))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_22 [i_5] [i_6] [9U])) : (((/* implicit */int) arr_4 [i_5] [i_5]))))));
                var_25 += ((((/* implicit */unsigned long long int) (-(arr_17 [i_5] [1U])))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_9]))) & (arr_0 [3LL]))));
            }
            var_26 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_6])) ^ (((/* implicit */int) arr_16 [i_6])))))));
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                arr_36 [i_5] = ((/* implicit */short) (~(arr_2 [i_6 + 1] [(unsigned short)0])));
                var_27 = ((/* implicit */_Bool) (~(arr_9 [3U] [3U] [3U] [i_6 + 1] [3U] [3U])));
            }
        }
    }
    var_28 = min((((/* implicit */unsigned long long int) (+(((((((/* implicit */int) var_13)) + (2147483647))) << (((((/* implicit */int) var_4)) - (77)))))))), (((unsigned long long int) ((unsigned int) var_6))));
    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_10))))) >> (((var_15) - (2377935609U)))))) || ((!(((/* implicit */_Bool) max((((/* implicit */int) var_11)), (var_12))))))));
}
