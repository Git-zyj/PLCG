/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204905
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) (signed char)23)) <= (((/* implicit */int) var_12))))), (max((-1205070404), (((/* implicit */int) (signed char)-76))))))), (((((/* implicit */_Bool) (+(9028405316685915828ULL)))) ? (max((var_2), (((/* implicit */unsigned long long int) var_17)))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_14)), (-1205070426))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) -1205070404);
        var_18 -= ((/* implicit */short) ((((/* implicit */int) var_5)) / (1205070408)));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            {
                arr_8 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max((1205070393), (((/* implicit */int) arr_7 [i_1]))))))) ? (((4095LL) * (((/* implicit */long long int) max((((/* implicit */int) arr_6 [i_2])), (var_4)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57915))))))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) var_3))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        for (signed char i_5 = 1; i_5 < 12; i_5 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) var_16);
                                var_21 = ((/* implicit */unsigned int) ((_Bool) 4115LL));
                                arr_17 [i_2] [i_1] [i_5] = ((/* implicit */unsigned int) ((var_16) && (((/* implicit */_Bool) var_6))));
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_3);
                    arr_19 [i_1] [(unsigned short)0] [i_3] = ((/* implicit */_Bool) var_7);
                }
                for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        for (short i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((int) var_6));
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((min((8151541174124034606ULL), (((/* implicit */unsigned long long int) (unsigned char)237)))) > (((/* implicit */unsigned long long int) (~(var_15))))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        for (int i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            {
                                arr_35 [i_1] [i_2] [i_6] = ((/* implicit */unsigned int) (unsigned short)57931);
                                var_24 += ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) 0)), ((+(7209117948471983923ULL)))))));
                                arr_36 [i_1] [i_1] [i_2] [i_6] [i_9] [i_10] [12LL] &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)7592)), (11237626125237567693ULL)));
                                arr_37 [i_1] [i_9] [i_6] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2122221198462634277LL)) ? (-7536977600240086693LL) : (((/* implicit */long long int) ((/* implicit */int) (short)2048))))))));
                            }
                        } 
                    } 
                }
                arr_38 [i_1] [11ULL] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [(short)4])) != (((/* implicit */int) (unsigned char)100))))), (((short) var_12)))))) : (var_7)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 12; i_11 += 3) 
    {
        for (unsigned short i_12 = 3; i_12 < 12; i_12 += 3) 
        {
            {
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_42 [i_11 + 1] [i_12 - 3]))))) < (((((/* implicit */_Bool) min((-1205070411), (((/* implicit */int) (unsigned short)57924))))) ? ((~(970316012082985973ULL))) : (((/* implicit */unsigned long long int) -4090LL))))));
                var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
            }
        } 
    } 
    var_27 = (~(((((/* implicit */_Bool) ((unsigned char) var_16))) ? (((/* implicit */long long int) max((var_0), (var_1)))) : (-5080286614468281382LL))));
}
