/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209890
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || ((((!(((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) var_7))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (min((min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_7)) : (var_8))), (((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0 + 1])))), (((/* implicit */unsigned long long int) ((((15728640) >= (2048))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) -785810450)) : (var_10)))))))))));
        arr_3 [i_0] = min((min((max((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_13))), (((/* implicit */unsigned long long int) arr_2 [i_0 - 1])))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_7))), (var_7)))));
        var_16 = ((/* implicit */unsigned char) (-(max((arr_1 [i_0 - 1] [i_0 + 1]), (arr_1 [i_0 - 1] [i_0 + 1])))));
        var_17 = ((/* implicit */_Bool) min(((-(((((/* implicit */_Bool) var_10)) ? (var_4) : (arr_2 [i_0]))))), (((/* implicit */long long int) var_12))));
    }
    for (unsigned int i_1 = 4; i_1 < 15; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            var_18 = (-(((((/* implicit */_Bool) ((0U) ^ (var_11)))) ? (((/* implicit */unsigned long long int) (~(var_1)))) : (var_13))));
            arr_10 [i_2] [i_1] [i_1] = ((/* implicit */int) (((((~(var_8))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((7861546978145262169ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16383))))))))) >> (((/* implicit */int) ((min((var_5), (((/* implicit */unsigned long long int) 785810443)))) >= (((/* implicit */unsigned long long int) var_0)))))));
            var_19 = ((/* implicit */unsigned short) ((min((((var_1) / (var_7))), (((/* implicit */long long int) min((-2059), (((/* implicit */int) (unsigned short)16333))))))) + (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_11))))), (min((var_10), (var_0)))))));
            var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)144))) | (((unsigned int) min(((short)127), (((/* implicit */short) (signed char)81)))))));
        }
        for (short i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) (((((+(((/* implicit */int) (_Bool)0)))) >> (((var_10) + (5410846916751404221LL))))) / (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((int) arr_7 [2LL]))))))));
            arr_13 [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */long long int) var_12)) + (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)111)) : (-2052)))) ? (((2091138397U) * (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
        }
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-8)) ? (785810449) : (((/* implicit */int) (short)-30649)))))));
        var_23 -= ((/* implicit */signed char) arr_11 [i_1 - 1]);
        var_24 ^= ((/* implicit */unsigned short) var_2);
    }
}
