/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22568
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
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_2)) : (min((((/* implicit */int) var_10)), (((((/* implicit */int) var_2)) >> (((var_0) - (15627600753779689664ULL))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) ((int) var_2))) ? (((((/* implicit */unsigned long long int) arr_1 [i_0])) ^ (2393378208295952965ULL))) : (((/* implicit */unsigned long long int) (~(arr_2 [i_0])))))) >> (((((/* implicit */int) (unsigned char)96)) - (35)))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_1 [i_3]);
                        var_17 += ((/* implicit */_Bool) (~(max((arr_5 [i_1] [i_2] [i_3]), (arr_5 [i_0] [i_0] [i_3])))));
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_7))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                {
                    arr_15 [i_4] [i_4] = ((/* implicit */int) arr_13 [8]);
                    arr_16 [i_0] [i_4] [i_5] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)99))) : (15298354484944865807ULL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0])) ? (arr_7 [i_0] [i_4] [i_5] [i_0]) : (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */long long int) ((int) arr_5 [i_4] [i_5] [i_6]))) : (var_7)))) < (((((/* implicit */_Bool) -7225214684993450199LL)) ? (((/* implicit */unsigned long long int) var_13)) : ((~(arr_7 [i_0] [i_0] [i_5] [i_7])))))));
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((long long int) ((unsigned char) min((((/* implicit */unsigned short) (short)0)), (var_9))))))));
                                var_21 = ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)84)) <= (((/* implicit */int) (unsigned char)172)))))) : ((-(var_7)))));
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) min((((/* implicit */long long int) min((arr_19 [i_6 + 2] [i_6 + 1] [i_6] [i_6] [i_6 + 1] [i_6 + 2]), (((/* implicit */int) (unsigned char)150))))), (6067404899406461635LL))))));
                            }
                        } 
                    } 
                    var_23 += ((/* implicit */int) arr_3 [i_0]);
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_0))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))) ? (((int) var_2)) : (((/* implicit */int) max((var_11), (var_12))))))) | (((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */long long int) min((var_1), (var_1))))))));
    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) var_2))));
    var_27 = ((/* implicit */int) var_11);
}
