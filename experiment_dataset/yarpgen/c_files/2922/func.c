/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2922
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) max((min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_3 [i_0] [i_0 + 2] [i_0])))))), (((/* implicit */int) max((((/* implicit */unsigned char) var_12)), ((unsigned char)188))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 7; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) var_3);
                                arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3 - 1] [i_4 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_8 [i_0 - 1] [i_3])))) ? (((((/* implicit */_Bool) var_15)) ? (arr_8 [i_0 - 1] [i_3]) : (var_8))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)23427)))))));
                                var_21 = ((/* implicit */signed char) min((var_21), (var_9)));
                                arr_12 [2ULL] [2ULL] [i_3] [i_3 + 2] [i_3] = ((/* implicit */long long int) var_3);
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 4) 
                        {
                            {
                                arr_22 [i_0] [i_1] [i_1] [i_6] [i_1] [i_1] = ((/* implicit */_Bool) var_18);
                                arr_23 [i_0] [i_1] [i_5] [i_5] [i_7] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_0 + 2] [i_6] [i_0 + 2])), (var_7)))) && (((/* implicit */_Bool) var_11))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_22 = min((((((/* implicit */_Bool) 440879813)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)150))) : (-7878058914455850034LL))), (((/* implicit */long long int) max((-314369634), (314369643)))));
                        arr_26 [i_1] [i_0] [i_1] [i_8] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_19 [i_0]))));
                        var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -314369633)) && (((/* implicit */_Bool) arr_8 [i_5] [i_8])))) && (((/* implicit */_Bool) max((((/* implicit */signed char) var_17)), (var_11))))));
                        var_24 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)23406)) ? (917578047) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_3))))))));
                    }
                    for (int i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) var_13);
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_19 [i_0 - 2])))), (((var_5) ? (((/* implicit */int) arr_19 [i_0 - 1])) : (((/* implicit */int) arr_19 [i_0 + 2])))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) -314369643)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_9 [i_0] [i_0] [i_5] [i_0] [i_0 + 1] [i_0])));
                        var_28 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) arr_25 [i_0] [2LL] [2LL] [i_10] [i_0])))));
                    }
                    var_29 |= ((/* implicit */short) max((314369634), (-314369666)));
                }
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) var_7))));
}
