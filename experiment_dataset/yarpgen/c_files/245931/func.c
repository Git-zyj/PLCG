/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245931
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
    var_15 += ((/* implicit */int) ((var_6) < (((/* implicit */unsigned long long int) var_7))));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) -2417584605554643913LL)) ? (-9223372036854775797LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47456)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
                            {
                                var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((arr_9 [i_3 - 1] [i_1 - 2]), (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1]))))), (((unsigned int) arr_6 [i_0 - 1] [i_0 - 1]))));
                                arr_12 [i_0 - 1] [i_1 - 1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (min((arr_7 [i_1 + 1]), (arr_7 [i_1 + 1]))) : (((/* implicit */int) ((unsigned short) arr_7 [i_1 + 1])))));
                            }
                            /* vectorizable */
                            for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_3] [i_5] = ((/* implicit */unsigned short) ((signed char) (unsigned short)12901));
                                arr_16 [i_0] [i_1] [i_1] [i_3] [2LL] [i_5] |= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)12901)))));
                            }
                            for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
                            {
                                var_18 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */long long int) var_12))))) ? (((/* implicit */int) ((unsigned short) var_0))) : (((((/* implicit */int) arr_19 [i_0] [i_6] [i_2] [i_3] [i_6] [i_6] [i_2])) << (((arr_13 [i_6] [i_3] [i_0] [i_1] [i_0]) - (726975092U))))))));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((-(var_8)))))) ? (((((_Bool) arr_14 [i_3] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0] [i_6]) > (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6] [i_1] [i_2] [i_3] [i_6]))))))) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [(unsigned char)10])))));
                                var_20 *= ((/* implicit */_Bool) ((long long int) ((int) (_Bool)1)));
                                arr_20 [i_6] [i_6] [i_0] [i_6] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_11)) : (arr_11 [i_3 + 1] [i_6] [i_2] [(unsigned short)13] [i_3])))));
                            }
                            var_21 = ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */long long int) arr_17 [i_3 + 1])), (var_9))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_7 = 4; i_7 < 12; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 4; i_9 < 13; i_9 += 1) 
                        {
                            {
                                arr_28 [i_8] = var_5;
                                var_22 = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) arr_19 [i_1 + 2] [i_8] [i_7 + 2] [i_7] [i_7] [i_8] [i_9 - 4])))));
                                var_23 = ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_8] [i_7])) ? (((/* implicit */unsigned long long int) (~(1534935967U)))) : (((((/* implicit */_Bool) 2760031320U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29954))) : (7307913495638267264ULL))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) (-(arr_11 [i_1 + 2] [i_1] [i_1 + 1] [12U] [12U])));
            }
        } 
    } 
}
