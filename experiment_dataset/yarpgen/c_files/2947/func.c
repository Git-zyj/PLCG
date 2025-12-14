/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2947
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
    var_10 = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) (signed char)-1)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)176)));
                var_12 = ((/* implicit */unsigned long long int) var_9);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_16 [i_2] [i_1] [i_2] [i_3] [i_4] [(signed char)9] = ((/* implicit */signed char) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [9LL]);
                                var_13 = ((/* implicit */short) arr_3 [i_4]);
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */signed char) (+(((/* implicit */int) ((-1205343953) != (((/* implicit */int) arr_0 [i_0] [i_0])))))));
                arr_17 [i_1] [i_0] = ((/* implicit */unsigned char) (!((_Bool)1)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        var_15 = ((/* implicit */signed char) var_0);
        var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) max((arr_19 [i_5] [i_5]), (arr_20 [i_5]))))));
        var_17 = ((/* implicit */short) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((((/* implicit */int) arr_21 [i_5])) + (22))) - (21)))));
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    {
                        var_18 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)43421)) : (((/* implicit */int) (unsigned char)0))));
                        arr_29 [i_6] [(signed char)0] [(signed char)13] [i_6] = ((/* implicit */short) max(((_Bool)1), ((_Bool)1)));
                        var_19 = max((((/* implicit */int) var_7)), (((((/* implicit */int) min(((_Bool)1), (arr_27 [i_5] [i_6] [i_7] [i_5])))) - (((/* implicit */int) var_6)))));
                        var_20 = ((((((/* implicit */_Bool) arr_24 [i_5] [i_7] [(unsigned char)9])) ? (((/* implicit */int) arr_28 [i_6] [i_6])) : (arr_24 [(signed char)4] [i_6] [i_7]))) - (((/* implicit */int) ((((/* implicit */int) arr_20 [i_5])) > (((/* implicit */int) var_2))))));
                        arr_30 [i_5] [i_6] [i_7] [i_6] = ((/* implicit */signed char) (!((_Bool)1)));
                    }
                } 
            } 
            var_21 = ((/* implicit */int) (_Bool)1);
            var_22 = ((/* implicit */long long int) max((((unsigned short) (-(((/* implicit */int) (unsigned char)15))))), (((/* implicit */unsigned short) arr_25 [i_5] [i_6] [i_6]))));
        }
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (signed char i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                {
                    var_23 = ((/* implicit */_Bool) max((((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)24)) * (((/* implicit */int) arr_28 [i_9] [i_9])))) < (((/* implicit */int) var_5))))), (arr_34 [i_5] [i_9] [i_9] [i_10])));
                    var_24 = ((/* implicit */signed char) max(((unsigned char)231), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)24)) != (((/* implicit */int) var_5)))))));
                }
            } 
        } 
    }
}
