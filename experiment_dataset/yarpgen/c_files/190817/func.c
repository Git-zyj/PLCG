/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190817
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
    var_12 = ((/* implicit */unsigned short) var_9);
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (var_0)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))) % (((((/* implicit */_Bool) var_5)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_14 = ((/* implicit */long long int) arr_1 [10ULL]);
        var_15 = (signed char)127;
    }
    for (signed char i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_3 [i_1])))) ? (((arr_3 [i_1]) & (arr_3 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-127), ((signed char)(-127 - 1))))))));
            /* LoopNest 2 */
            for (short i_3 = 1; i_3 < 23; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    {
                        var_16 |= ((/* implicit */long long int) (-(((/* implicit */int) (signed char)118))));
                        arr_14 [i_4] [i_1] [i_1] [4ULL] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_9 [i_1] [i_2] [i_3])), ((~(((/* implicit */int) (signed char)127))))));
                        var_17 *= ((/* implicit */_Bool) min((((((((/* implicit */int) (signed char)127)) > (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-118)))), ((~(((/* implicit */int) (signed char)(-127 - 1)))))));
                        arr_15 [(unsigned char)23] [i_3] [i_3] [i_1] [(short)13] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)43121)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-127))));
                    }
                } 
            } 
        }
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) min(((signed char)127), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) var_6)))))))))))));
        var_19 &= 2688217965U;
    }
    var_20 = ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (unsigned short i_5 = 1; i_5 < 22; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 1; i_7 < 21; i_7 += 2) 
                {
                    for (int i_8 = 3; i_8 < 21; i_8 += 1) 
                    {
                        {
                            arr_25 [i_5] [(signed char)3] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) min((arr_18 [i_7]), (((/* implicit */long long int) (_Bool)0))));
                            arr_26 [i_5] [i_7 + 3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_2 [i_5] [i_5]) & (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [i_8 - 1] [i_8 - 1] [i_7 + 2] [i_5 - 1])))))) ? (((/* implicit */int) var_11)) : ((((~(((/* implicit */int) var_8)))) | (((/* implicit */int) min((arr_4 [i_5]), (((/* implicit */unsigned short) arr_8 [i_5] [i_5] [i_7 + 1] [i_8])))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(var_0)))), (((((/* implicit */unsigned long long int) arr_11 [i_5] [i_5 - 1] [i_6] [i_6] [i_5])) ^ (((5367077411662668768ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_6])))))))));
                arr_27 [i_5] [i_5] = ((/* implicit */int) (+(((min((var_5), (((/* implicit */unsigned long long int) -2147483639)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127)))))));
            }
        } 
    } 
}
