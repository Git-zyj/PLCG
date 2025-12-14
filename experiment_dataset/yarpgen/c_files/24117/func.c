/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24117
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_12 ^= ((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((((/* implicit */_Bool) 9700950055232727768ULL)) ? (6038171528809238555ULL) : (((/* implicit */unsigned long long int) -2091978176815901526LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)12288)) / (((/* implicit */int) arr_2 [i_0] [i_1]))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) ? ((+(((/* implicit */int) arr_0 [i_1] [i_0])))) : (((/* implicit */int) ((signed char) var_0)))))));
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_1] [i_1]))))) : (max((((/* implicit */unsigned long long int) var_8)), (var_0))))) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_2 + 1]))));
                                arr_12 [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((((unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_2 - 1] [i_3])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2 + 4]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1] [i_1])) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))))));
                                var_14 = ((/* implicit */signed char) (~(-2091978176815901512LL)));
                                var_15 = ((/* implicit */_Bool) max(((~(((((/* implicit */int) arr_3 [i_1] [i_1])) << (((/* implicit */int) arr_2 [i_0] [i_1])))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (-5357075654498567172LL)))))));
                                arr_13 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) ((signed char) arr_8 [i_1] [i_1] [i_2 + 2] [i_3]))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) / (arr_5 [i_4 + 1] [i_0] [i_2]))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_1] [i_1])))) : (var_3)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_0] [i_0])) ? (arr_8 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0])))))) ? (((/* implicit */int) ((signed char) arr_5 [i_0] [i_0] [i_1]))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_1] [i_0] [i_1] [i_1] [i_1])), ((unsigned short)65535)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)105))))) ? (((/* implicit */int) ((signed char) var_3))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_5))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_1)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_10) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))))))));
    /* LoopSeq 2 */
    for (signed char i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_15 [i_5]))))) : (((/* implicit */int) arr_15 [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_16 [i_5]))) && (((((/* implicit */_Bool) (signed char)36)) || (((/* implicit */_Bool) var_2)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24021)) ? (-1283133797432480514LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65526)))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5]))) : (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_15 [i_5])))))))));
        var_17 = ((/* implicit */long long int) ((_Bool) (-(7739851793064903915LL))));
        var_18 = ((/* implicit */signed char) var_1);
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_5])))))));
    }
    for (signed char i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 15820585059718260855ULL)) ? (((/* implicit */int) arr_16 [i_6])) : (((/* implicit */int) var_8))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)34))) - (var_3))))));
        arr_22 [i_6] = ((/* implicit */unsigned long long int) var_10);
    }
}
