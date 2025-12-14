/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191178
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
    var_15 -= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)11565))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0])), (((unsigned short) min((var_3), (var_7))))));
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned int) (unsigned short)53971);
    }
    /* LoopSeq 2 */
    for (int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((unsigned short) arr_1 [i_1] [i_1]));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) <= (arr_1 [i_1] [i_1])))), (((((/* implicit */int) arr_5 [i_1] [i_1])) | (((/* implicit */int) (unsigned short)65247)))))));
        arr_8 [i_1] = ((/* implicit */int) (unsigned short)11565);
        var_17 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_14), (arr_4 [i_1] [i_1])))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_1])), (var_6))))))), (max((((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */long long int) var_4)) : (-2352129067335325816LL)))), (((unsigned long long int) var_11)))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53981)) ? (((((/* implicit */int) arr_9 [i_2])) - (((/* implicit */int) arr_10 [14ULL] [14ULL])))) : (((/* implicit */int) arr_0 [i_2]))))) ? (((/* implicit */int) (unsigned short)33545)) : (((/* implicit */int) ((signed char) (unsigned short)31837))))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) min((var_2), (((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_2] [(signed char)4]))))), (((((/* implicit */_Bool) var_2)) ? (arr_11 [i_2] [i_2]) : (arr_11 [i_2] [i_2])))))))))));
        var_20 = ((((/* implicit */int) ((signed char) arr_1 [i_2] [i_2]))) + (((/* implicit */int) var_8)));
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            arr_15 [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) var_4);
            arr_16 [i_2] = ((/* implicit */signed char) (~((+(-2352129067335325816LL)))));
            arr_17 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) (-((+(0LL)))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            arr_20 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_2] [i_4] [i_2])) != (((((/* implicit */int) arr_18 [i_2] [i_2] [i_2])) ^ (((/* implicit */int) arr_18 [i_2] [i_4] [i_2]))))));
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) max((min((((/* implicit */int) arr_12 [i_2])), (-1800713229))), (((/* implicit */int) ((signed char) (unsigned short)53990))))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_9 [i_5]) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)11546))))) : (((((/* implicit */long long int) 362474891)) - (arr_21 [i_5] [i_5])))))) ? (arr_19 [i_2] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53971)))));
            var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned short)11546)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)448))))) : (((/* implicit */unsigned int) var_9)))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2])))));
            arr_23 [i_5] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((16383U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41713)))))) ? (((/* implicit */int) arr_14 [i_2])) : (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_12 [i_2])))) + (((/* implicit */int) arr_14 [i_2]))))));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_2] [i_5])) ? (arr_21 [i_2] [i_2]) : (arr_21 [i_2] [i_2])))) ? (min((arr_21 [i_2] [i_5]), (arr_21 [i_2] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) -362474898)) != (arr_21 [i_2] [i_5])))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            var_25 = ((/* implicit */_Bool) var_14);
            var_26 = ((/* implicit */unsigned long long int) (_Bool)0);
        }
    }
}
