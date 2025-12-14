/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214831
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
    var_18 = max((((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) var_10))))) ? (var_0) : (((/* implicit */unsigned long long int) ((unsigned int) var_2))))), (((/* implicit */unsigned long long int) var_15)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [(unsigned short)9] [14LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_8)) : (var_17)))) ? (((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) var_12)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_15)))))))) ? (max((((((/* implicit */unsigned long long int) var_9)) / (var_0))), (((/* implicit */unsigned long long int) arr_5 [i_1 + 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1 + 2])))));
                arr_7 [i_0] [1U] = ((/* implicit */int) 3951714315U);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) var_12);
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_13 [i_3 + 1] [i_1 - 2] [i_3 + 1] [i_3]), (arr_13 [i_3 - 1] [i_1 - 2] [i_2] [(_Bool)1])))) ? ((-(var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_5 [i_1 - 1])) : (((/* implicit */int) arr_11 [i_1 + 2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) var_15)))))));
        arr_16 [i_4] [9] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4]))) | (var_8)))) ? (((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) arr_14 [i_4])))) : (((/* implicit */int) var_12))));
        arr_17 [(signed char)0] = ((/* implicit */long long int) ((short) arr_15 [i_4] [(unsigned short)14]));
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 1) 
                {
                    {
                        arr_27 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_22 [i_7] [i_7] [i_7])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_16))))));
                        var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (-2199023255552LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_5))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9045575786604820928ULL)) ? (718942015U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)6126))))))));
}
