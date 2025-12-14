/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210035
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */_Bool) max(((~(((unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) 8289167233778508279LL))));
                    arr_8 [i_0] [i_1] [(signed char)0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_12)), (max(((short)-15382), (((/* implicit */short) arr_4 [i_0])))))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21294))) : (max((((/* implicit */unsigned long long int) var_12)), (var_5)))))));
                    var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_2] [i_1] [i_0])), (max((2144479631U), ((~(var_8)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
                        {
                            var_15 = ((/* implicit */signed char) var_0);
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (-(arr_1 [i_0]))))));
                            arr_13 [i_0] [i_1] [i_1] [i_3] [i_4] [i_3] [(short)1] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */long long int) (_Bool)1))))) ? (arr_12 [i_4] [i_3] [i_2] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_3 + 2] [i_1] [i_1] [i_1] [i_0]))))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((var_1), ((_Bool)0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(short)14])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5])) : (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned long long int) var_2)), (2251799679467520ULL)))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_3])) ? (max((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_0] [i_0] [i_5])))) : (((/* implicit */unsigned long long int) var_3)))) : (arr_2 [i_3])));
                            arr_17 [i_0] [i_0] [i_0] [i_3 + 1] [i_0] |= ((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned char) max((((/* implicit */signed char) arr_4 [i_5])), (arr_3 [i_0] [i_0] [i_5])))), (arr_5 [i_0] [i_0] [i_0] [i_0])))), (max((((/* implicit */long long int) var_13)), (var_3)))));
                        }
                        var_18 = ((/* implicit */long long int) (_Bool)1);
                        arr_18 [i_0] |= ((/* implicit */unsigned int) var_5);
                    }
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */unsigned char) var_4);
}
