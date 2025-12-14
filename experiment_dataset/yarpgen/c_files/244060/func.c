/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244060
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
    var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))))), (max((((/* implicit */unsigned int) var_10)), (var_5)))))) ? (((/* implicit */int) max((var_9), (((/* implicit */short) var_2))))) : (((/* implicit */int) var_9))));
    var_15 = (+(min((max((((/* implicit */long long int) var_2)), (var_13))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */int) var_2))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                arr_7 [i_1] = ((((/* implicit */_Bool) max((arr_5 [i_1 + 2] [i_1]), (((/* implicit */unsigned int) var_12))))) ? (min((arr_5 [i_1 + 1] [i_1 + 1]), (arr_5 [i_1 - 1] [i_1]))) : (((((/* implicit */_Bool) arr_5 [i_1 - 2] [4])) ? (var_5) : (arr_5 [i_1 - 2] [i_1 - 2]))));
                var_16 -= ((((/* implicit */_Bool) max((arr_0 [i_1 - 2]), (arr_0 [i_1 + 2])))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_1 - 2])) : (((/* implicit */int) arr_0 [i_1 + 2])))) : (((/* implicit */int) max((var_12), (arr_0 [i_1 - 2])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 1; i_2 < 23; i_2 += 2) 
    {
        var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_2] [i_2] [i_2])), (min((((/* implicit */unsigned int) arr_0 [i_2 + 1])), (arr_5 [i_2] [i_2 - 1])))));
        arr_10 [i_2] = ((/* implicit */short) min((((/* implicit */long long int) min(((+(((/* implicit */int) arr_8 [i_2])))), ((-(((/* implicit */int) arr_0 [(short)12]))))))), (min((-985090071117971420LL), (-985090071117971422LL)))));
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_18 = ((var_11) ? (((((/* implicit */_Bool) var_1)) ? (max((var_13), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (max((((/* implicit */long long int) var_4)), (arr_4 [i_3]))));
                var_19 = min((arr_9 [(_Bool)1]), ((+(((/* implicit */int) arr_2 [i_3] [i_4])))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        {
                            arr_22 [(unsigned short)10] [i_6] [i_6] [(short)9] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_4] [i_5] [i_6])) ? (arr_18 [3] [i_5] [i_6]) : (((/* implicit */unsigned long long int) arr_14 [i_3]))))) ? (max((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) var_7)) ? (arr_12 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_3] [i_4] [i_5] [i_6])) ? (((((/* implicit */_Bool) arr_1 [i_4] [i_6])) ? (((/* implicit */unsigned int) var_10)) : (arr_5 [i_3] [i_3]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))))))));
                            var_20 = ((/* implicit */unsigned short) ((var_3) ? (min((985090071117971431LL), (min((((/* implicit */long long int) (unsigned char)16)), (985090071117971443LL))))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_3] [i_4] [i_3] [i_6] [i_3]))) : (var_4))), (((/* implicit */unsigned int) var_2)))))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_4))));
                            var_22 ^= ((/* implicit */unsigned int) var_1);
                        }
                    } 
                } 
            }
        } 
    } 
}
