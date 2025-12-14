/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209179
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
    var_12 = ((/* implicit */signed char) var_11);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) ^ (((/* implicit */int) (short)-5710))));
        arr_2 [i_0] [(unsigned char)13] = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((((_Bool)1) ? (1943960068U) : (1319819432U)))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_5 [i_1] [3U] [i_1] = ((/* implicit */unsigned int) arr_1 [(signed char)10]);
            arr_6 [i_1] [(unsigned short)5] = ((/* implicit */_Bool) arr_4 [(short)16] [9ULL] [i_1]);
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                arr_11 [i_1] [i_1] [i_1] [i_0] = (signed char)-1;
                var_14 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [0U]))) > (((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))))));
            }
        }
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                {
                    arr_17 [(unsigned short)9] [i_3] [10U] = ((/* implicit */unsigned long long int) max((((signed char) ((((/* implicit */_Bool) (unsigned char)61)) ? (arr_10 [i_3] [i_3] [i_0] [i_3]) : (2975147883U)))), (((/* implicit */signed char) (_Bool)1))));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((unsigned long long int) arr_13 [i_4] [i_4] [i_4])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_5 = 2; i_5 < 21; i_5 += 4) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (short)30974)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-122)))))))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_19 [i_5]))));
        arr_20 [i_5] [(_Bool)1] = ((((/* implicit */_Bool) 16ULL)) ? (2812228523U) : (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-24951)) + (2147483647))) << (((((((/* implicit */int) var_1)) + (144))) - (31)))))));
        arr_21 [(unsigned char)6] = ((/* implicit */long long int) var_9);
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 21; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) arr_25 [i_5] [i_5] [i_7] [i_6]);
                    arr_28 [(_Bool)1] [i_6] [13U] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (unsigned short)0))) <= (((/* implicit */int) arr_25 [i_5] [i_5] [i_6 + 1] [i_6]))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) (unsigned short)6041)) ? (var_4) : (var_11)))))) ? (((((/* implicit */_Bool) max((241850553745646596ULL), (((/* implicit */unsigned long long int) 2443535840U))))) ? (((((/* implicit */_Bool) (unsigned char)138)) ? (var_7) : (288230341791973376ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)65535)))))) : (var_8)));
    var_20 = ((/* implicit */signed char) ((long long int) 1161227244585846186LL));
}
