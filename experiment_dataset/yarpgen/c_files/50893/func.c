/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50893
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
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [(signed char)17] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? ((~(((unsigned int) var_6)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((long long int) (signed char)22)))))));
                            arr_11 [i_0] [(short)6] [i_0] [i_2 - 1] [i_0] [(signed char)1] &= ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) (short)-29849)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29848))) : (var_5))))) >= (((((/* implicit */_Bool) ((signed char) arr_7 [12U] [i_1]))) ? (((((/* implicit */_Bool) arr_5 [6LL] [i_3] [(unsigned short)5])) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_0] [i_2 - 1]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        {
                            arr_16 [i_0 + 1] [i_1] [i_4] [i_4] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) (short)-7898)))));
                            var_11 &= ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (unsigned short)1920)) ? (9223372036854775807LL) : ((-9223372036854775807LL - 1LL)))) != (((/* implicit */long long int) ((int) var_10))))) ? (((arr_14 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 2]) % (arr_14 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1]))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) ((short) 9223372036854775804LL))) : (((/* implicit */int) ((signed char) (short)-29849)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        for (int i_7 = 4; i_7 < 17; i_7 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) ((unsigned long long int) (((!(((/* implicit */_Bool) var_8)))) && (((/* implicit */_Bool) ((((/* implicit */long long int) arr_12 [i_7 - 3])) / (9223372036854775807LL)))))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 4) 
                    {
                        {
                            arr_31 [(unsigned short)8] [(unsigned short)8] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6] [i_6] [i_6]))))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) 575334852396580864ULL)) ? (((/* implicit */unsigned long long int) 1078752169U)) : (10330383259169894090ULL)))) ? (((((/* implicit */_Bool) arr_15 [i_9])) ? (var_1) : (((/* implicit */unsigned long long int) -1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_3))))))));
                            arr_32 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (+(arr_1 [i_8])))) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */_Bool) arr_0 [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [(signed char)14] [(signed char)14] [i_8] [(signed char)14] [(signed char)14]))) : (var_2))))));
                            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((unsigned char) ((long long int) var_4))))));
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_6] [i_7] [i_7] [i_8] [i_9])) ? (arr_1 [i_6]) : (((/* implicit */int) (_Bool)1))))) * (((long long int) (unsigned short)16616))))))));
                            arr_33 [i_6] [i_6] [i_7] [i_8] [i_9 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_30 [i_6] [i_6] [i_6]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_6] [i_6] [15] [i_6] [i_6])))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [10ULL] [i_7] [i_7]))) < (arr_6 [i_6] [i_7] [i_6])))) : (((/* implicit */int) ((unsigned short) arr_2 [i_6] [i_7])))))) ? (((unsigned int) (signed char)-59)) : ((~(((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
