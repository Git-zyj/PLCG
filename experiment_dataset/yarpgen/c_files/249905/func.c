/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249905
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
    var_13 = ((/* implicit */long long int) var_10);
    var_14 = ((/* implicit */unsigned int) max((((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1575763360) == (((/* implicit */int) (unsigned char)216)))))) : (((unsigned long long int) 6ULL)))), (((/* implicit */unsigned long long int) var_6))));
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) 13742483561374361808ULL))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) (-(arr_1 [i_1])));
                arr_6 [(short)0] [i_1] = ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) arr_0 [(_Bool)1] [(short)20])) : (24ULL)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)199))))))));
                arr_7 [i_0] = ((/* implicit */signed char) ((int) (unsigned short)65535));
                var_17 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_1 [10]), (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)42)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */long long int) (unsigned char)0);
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) > (arr_3 [i_2]))))) % (6ULL)))) ? ((~(var_2))) : (((((var_0) == (arr_0 [i_2] [i_2]))) ? (((/* implicit */long long int) arr_1 [i_2])) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)54428))) | (arr_8 [i_2] [i_2])))))));
    }
    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 2) 
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (_Bool)1))))) - (((unsigned int) 3893884978U))))) || (((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_4)), (arr_3 [i_3]))), (((/* implicit */unsigned long long int) ((unsigned int) arr_12 [i_3])))))))))));
        arr_13 [i_3] = ((/* implicit */long long int) max((arr_5 [i_3 + 1]), ((unsigned char)20)));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_20 [4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) || ((!(((/* implicit */_Bool) (signed char)(-127 - 1)))))));
                    arr_21 [i_3] [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) arr_8 [i_3 + 2] [i_4]));
                }
            } 
        } 
        arr_22 [i_3] [i_3 - 1] = ((/* implicit */unsigned char) arr_2 [i_3] [i_3 + 2]);
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */int) var_10))))))) ? (((/* implicit */int) ((short) ((unsigned long long int) arr_2 [11U] [i_3])))) : (((((/* implicit */_Bool) arr_2 [i_3 - 1] [i_3])) ? (max((var_0), (var_3))) : ((~(((/* implicit */int) arr_12 [i_3 + 1])))))))))));
    }
}
