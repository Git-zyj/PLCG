/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48477
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) 2147483641))));
                                var_21 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) (unsigned short)65529))))));
                                var_22 -= ((/* implicit */int) var_18);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) var_7);
                }
            } 
        } 
        arr_14 [8ULL] [8ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_1)) < (arr_2 [i_0] [i_0]))) ? (min((((/* implicit */long long int) var_12)), (var_16))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)10232)) && (((/* implicit */_Bool) 0ULL))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_3)))))));
    }
    /* LoopSeq 1 */
    for (int i_5 = 3; i_5 < 17; i_5 += 2) 
    {
        var_24 = ((/* implicit */unsigned char) var_19);
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 2) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_10 [i_5] [(short)13] [i_5] [11] [i_6] [i_7 - 2]))))), ((-(((/* implicit */int) min(((unsigned short)10252), (((/* implicit */unsigned short) var_18)))))))));
                    var_26 |= ((/* implicit */unsigned short) max((arr_7 [i_5 - 2] [i_6 - 1] [i_6]), (((/* implicit */unsigned long long int) arr_19 [i_7]))));
                }
            } 
        } 
    }
    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((short) var_1)))));
}
