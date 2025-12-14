/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33621
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
    var_11 = ((/* implicit */short) var_1);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_12 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) arr_11 [i_1] [i_2] [i_1] [i_1])))));
                                var_13 += ((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_3])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
                                var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) 3401777568U)), (-20LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) : (max((((/* implicit */unsigned long long int) (signed char)0)), (var_5))))) + ((+(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_3] [i_0])) ? (((/* implicit */unsigned long long int) var_2)) : (var_8)))))));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)45355)) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_17 [i_0] [i_1] [i_2] [(unsigned short)8] = ((/* implicit */int) ((unsigned long long int) var_4));
                            var_16 |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [14LL] [i_6]))));
                        }
                        arr_18 [16U] [i_0] = max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_15 [i_0] [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), (((max((((/* implicit */long long int) 893189728U)), (var_9))) / ((~(8578253463096504912LL))))));
                        arr_19 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) var_0);
                        var_17 = ((/* implicit */_Bool) ((signed char) max((arr_14 [i_0] [i_1] [i_2] [i_2]), ((-(18446744073709551615ULL))))));
                    }
                    for (unsigned char i_7 = 3; i_7 < 18; i_7 += 4) 
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((var_4) && (((/* implicit */_Bool) 2ULL)))), (((3401777568U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))))))));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_8 [i_0] [i_1] [i_0] [i_1]), (arr_8 [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) arr_8 [i_7] [i_7] [i_2] [i_1])) : (((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1])) * (((/* implicit */int) var_4)))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 3; i_9 < 17; i_9 += 1) 
                        {
                            {
                                arr_27 [i_0] = (~(max((((/* implicit */unsigned int) (signed char)-4)), (3057170736U))));
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+((+(3401777568U))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) var_0);
}
