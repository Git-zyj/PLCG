/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231372
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
    var_13 = ((/* implicit */int) (unsigned char)145);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (~(((arr_2 [i_0]) >> (((/* implicit */int) var_5))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
                    {
                        var_14 &= ((/* implicit */unsigned int) min((2147483647), (((/* implicit */int) min((arr_4 [i_0] [16] [i_3]), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) 33538048)) >= (var_0)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            arr_15 [i_0] [i_1] [i_0] [i_0] [i_3] [i_4] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) + (3211062400U)))));
                            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (!(((/* implicit */_Bool) 70368744177662LL)))))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) var_11))))) >= ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0]))) : (var_7)))));
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [14] [i_0] [i_1] [i_4] [14] [i_4] [i_4])) ? (((/* implicit */int) arr_8 [i_3] [i_4] [i_4] [i_0])) : (((/* implicit */int) arr_11 [i_4] [i_3] [i_2] [i_4] [i_1] [i_1] [10U])))))));
                        }
                        var_18 = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) min((var_1), (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_0] [0]))))), (((70368744177659LL) << (((1083904892U) - (1083904879U))))))), (((/* implicit */long long int) ((arr_0 [i_3] [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_0] = ((/* implicit */int) ((arr_14 [i_5] [i_0] [i_2] [i_2] [i_0] [i_0]) + (((/* implicit */unsigned long long int) arr_12 [i_0] [i_2] [i_5]))));
                        var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_5])))))) || (((/* implicit */_Bool) (unsigned char)2))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_6 = 1; i_6 < 17; i_6 += 4) 
    {
        var_20 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)238))));
        var_21 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_6 + 1])) ? (((/* implicit */int) arr_3 [i_6 + 1])) : ((~(-1783057454)))));
    }
    /* LoopNest 2 */
    for (unsigned int i_7 = 1; i_7 < 17; i_7 += 3) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    var_22 &= (!(((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))) > (3211062400U))) ? (arr_10 [8LL]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_7] [(signed char)1] [i_9])) ? (((/* implicit */int) arr_22 [i_7])) : (((/* implicit */int) (unsigned char)197)))))))));
                    var_23 = ((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)240)))) % (((/* implicit */int) ((min((arr_19 [i_8]), (((/* implicit */long long int) -611701681)))) >= (min((((/* implicit */long long int) (unsigned char)31)), (-70368744177662LL))))))));
                    var_24 = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_11 [i_7 - 1] [(signed char)13] [i_7 - 1] [i_8] [(unsigned char)14] [i_9] [i_7 - 1])) & (((/* implicit */int) arr_11 [i_7 + 1] [i_7 + 1] [i_7] [i_8] [i_9] [i_9] [i_7 + 1]))))));
                }
                var_25 = ((/* implicit */int) var_2);
                var_26 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_21 [i_8])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)134))))));
                arr_30 [i_7] [i_8] [i_8] = ((/* implicit */unsigned int) ((arr_14 [2] [i_8] [i_7] [i_7 + 1] [i_8] [i_7]) % (((/* implicit */unsigned long long int) arr_12 [i_8] [i_7 + 1] [i_7 + 1]))));
            }
        } 
    } 
    var_27 = max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) var_3)))));
}
