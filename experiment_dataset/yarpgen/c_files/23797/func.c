/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23797
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
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_7 [(unsigned char)1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (((((/* implicit */_Bool) (unsigned char)89)) ? (var_11) : (((/* implicit */int) arr_3 [i_1] [i_0]))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_17 [i_4] [i_4] [i_3] [i_0] [i_4] [i_1] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((_Bool) var_15))), ((-(((1965193906361586823ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4)))))))));
                                arr_18 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) ((long long int) max((max((68719476735LL), (((/* implicit */long long int) (unsigned char)9)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_3] [i_3])) ? (((/* implicit */int) (short)-11950)) : (((/* implicit */int) (unsigned char)118))))))));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_6 [i_2]), (((/* implicit */short) var_12))))) ? (((/* implicit */unsigned long long int) min((4294967295U), (((/* implicit */unsigned int) (unsigned char)16))))) : (max((((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [i_2] [(unsigned char)3])), (var_2)))));
                            }
                        } 
                    } 
                } 
                arr_19 [5U] [5U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (min((var_2), (((/* implicit */unsigned long long int) arr_16 [i_1] [(short)9] [i_1] [i_1] [i_1] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((((/* implicit */int) var_7)) != (((/* implicit */int) var_9)))), ((_Bool)1)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) (short)8192))))) && (((/* implicit */_Bool) ((long long int) (unsigned char)240)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        for (unsigned short i_6 = 3; i_6 < 12; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                {
                    var_18 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (arr_20 [i_7]) : (arr_20 [i_7]))) > (((((/* implicit */_Bool) arr_20 [i_7])) ? (arr_20 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                    var_19 = ((/* implicit */short) (~(max((max((var_8), (var_0))), (((/* implicit */unsigned int) arr_11 [i_6 + 1] [i_6] [i_7] [i_6]))))));
                    arr_27 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned char)234), (arr_1 [i_5] [(short)7]))))))) ? (max((((/* implicit */long long int) ((int) -1))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 2253190070U)) : (68719476753LL))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) 951694103652696111ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)439))) : (1797951845U))), (((/* implicit */unsigned int) (unsigned char)251)))))));
                }
            } 
        } 
    } 
}
