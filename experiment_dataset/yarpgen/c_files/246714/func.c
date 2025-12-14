/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246714
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
    var_17 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) != (var_3)))), (((((13245499600469020624ULL) < (var_2))) ? (var_11) : (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) <= (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) arr_2 [i_0])))))));
        var_18 = ((/* implicit */_Bool) ((max((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_11))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_9)))))) >> (((max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))))) - (13191114794764683872ULL)))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_19 ^= ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0])))))) * (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_13)))))));
            var_20 = ((/* implicit */signed char) (+(((((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) -1105948620)))) >> (((var_3) - (2045486892540700962LL)))))));
            var_21 = ((/* implicit */short) min((arr_0 [i_0]), (((/* implicit */int) var_0))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                arr_14 [i_0] [i_0] = (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (var_13))));
                var_22 += ((/* implicit */unsigned char) var_11);
            }
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                var_23 = ((/* implicit */unsigned char) arr_9 [i_0] [i_2]);
                arr_17 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */short) (~(arr_1 [i_0] [i_2])));
                arr_18 [i_0] [i_2] [i_4] [i_0] = ((/* implicit */unsigned short) var_2);
            }
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) * (var_4)))));
                        var_25 = ((/* implicit */unsigned short) (+(arr_1 [(_Bool)1] [i_5 + 1])));
                    }
                } 
            } 
            var_26 = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(unsigned short)9]))))));
        }
        var_27 = ((/* implicit */unsigned int) (+(max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) -3351437315821148016LL)) : (arr_1 [i_0] [(short)6]))), (((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1)))))));
    }
    var_28 = ((/* implicit */unsigned short) min(((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0)))))), (((/* implicit */int) var_0))));
}
