/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203305
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_10 = ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) var_7))))))) && (var_6));
        var_11 = ((/* implicit */unsigned char) (!((((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)61426)) >> (((7261378891685325572ULL) - (7261378891685325566ULL))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_12 *= ((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0]);
            var_13 = ((/* implicit */unsigned short) 6466968622459773547LL);
            var_14 = var_1;
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (unsigned short)57696))));
            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2761322274U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (6742355719961718937ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15658)) / (((/* implicit */int) (unsigned short)49877))))) && ((!(((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_1]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) 2044288046U)) || ((_Bool)0))))));
        }
    }
    for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 194299980U)) ? (var_3) : (((/* implicit */unsigned int) arr_5 [i_2]))))) || (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((arr_2 [12ULL] [i_2] [12ULL]), (((/* implicit */long long int) (unsigned char)234))))) || (((/* implicit */_Bool) arr_0 [i_2 + 3])))))));
        var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -6466968622459773548LL)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) var_2)))) ^ (-900581440)))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_2] [i_2 + 3])), ((short)-17149)))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))))) : (var_8)));
        var_19 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_2)), (((((arr_4 [1LL] [i_2 - 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 + 1] [i_2])))))));
    }
    for (unsigned short i_3 = 3; i_3 < 9; i_3 += 4) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3 - 2] [i_3 + 2]))) : (6654020988917882747ULL))))))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_3 + 2] [i_3])), (804114283U)))) && (((/* implicit */_Bool) min((arr_0 [i_3 + 2]), (((/* implicit */int) var_6))))))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_5)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_9 [i_4] [i_4]))))))))) / (((((/* implicit */_Bool) 6466968622459773534LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41216))) : (1297160554U)))));
        var_23 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_2))))) ? (max((((/* implicit */unsigned long long int) arr_11 [i_4])), (6654020988917882747ULL))) : (((/* implicit */unsigned long long int) min((-4209883556889215486LL), (((/* implicit */long long int) var_6))))))));
        var_24 *= ((/* implicit */signed char) var_0);
    }
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (1073741824U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (1800065708U)))) && (((/* implicit */_Bool) ((int) var_1)))))))));
}
