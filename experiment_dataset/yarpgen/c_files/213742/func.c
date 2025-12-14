/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213742
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
    var_11 ^= ((/* implicit */long long int) var_3);
    var_12 = var_9;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_2)))), ((-(arr_3 [i_0]))))), (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_2 [i_1 + 1] [i_1 + 1]))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */int) min((var_14), (max((((/* implicit */int) var_2)), (arr_4 [i_2] [i_1 - 1] [i_0])))));
                            /* LoopSeq 3 */
                            for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                            {
                                var_15 = ((/* implicit */unsigned long long int) arr_2 [i_2] [i_3]);
                                var_16 = ((/* implicit */signed char) arr_4 [i_1] [i_1] [i_1]);
                            }
                            for (short i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                            {
                                var_17 = ((((/* implicit */int) min((var_10), (arr_7 [i_3] [i_0])))) / ((+((-(arr_9 [i_0]))))));
                                var_18 |= ((/* implicit */int) ((signed char) var_4));
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (((-(arr_9 [i_0]))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))))));
                            }
                            /* vectorizable */
                            for (short i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
                            {
                                var_20 = (-(((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 1] [0] [i_1])));
                                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_6]))));
                            }
                            /* LoopSeq 1 */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_22 = ((/* implicit */long long int) var_10);
                                var_23 = ((/* implicit */_Bool) min(((signed char)101), ((signed char)117)));
                            }
                            /* LoopSeq 2 */
                            for (signed char i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
                            {
                                var_24 = ((/* implicit */signed char) ((int) max((((((/* implicit */_Bool) -7943932093736028117LL)) ? (((/* implicit */long long int) 1081535258)) : (-7943932093736028109LL))), (((long long int) (signed char)-114)))));
                                var_25 -= ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 + 1]))));
                                var_26 *= ((/* implicit */unsigned int) var_0);
                                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_4 [3] [i_3] [i_2])))) : (((long long int) var_8))));
                            }
                            /* vectorizable */
                            for (signed char i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
                            {
                                var_28 = arr_21 [i_1 + 1] [i_1 - 1];
                                var_29 = ((long long int) ((((/* implicit */_Bool) var_7)) ? (arr_19 [i_9] [i_1] [i_2] [i_1] [(unsigned short)13] [i_1]) : (arr_19 [i_9] [i_9] [i_3] [i_2] [8ULL] [i_0])));
                            }
                            var_30 = ((/* implicit */unsigned long long int) var_2);
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned short) var_3);
                var_32 = arr_3 [i_0];
            }
        } 
    } 
}
