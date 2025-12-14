/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44357
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
    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) -2103448357633167457LL))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)253))))) : (((((var_13) + (9223372036854775807LL))) >> (((((/* implicit */int) var_5)) - (34))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-57))) / (arr_4 [i_0] [i_1])))) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? (-2103448357633167445LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    arr_7 [i_0] [i_0] [i_2 - 1] = ((/* implicit */_Bool) ((((arr_0 [i_0] [i_1]) % (((/* implicit */long long int) ((unsigned int) 4737523810853261908LL))))) << (((((/* implicit */_Bool) arr_2 [i_0] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (arr_0 [i_2 + 1] [i_2])))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 4; i_3 < 17; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((unsigned char) arr_10 [i_0])))));
                        var_17 = ((/* implicit */unsigned short) var_4);
                    }
                    arr_11 [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_2]))) & (0LL))))), ((~(max((var_4), (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]))))))));
                    arr_12 [i_0] [i_0] [(unsigned char)17] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
                }
                var_18 = ((/* implicit */unsigned int) -251241066);
            }
        } 
    } 
    var_19 &= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4737523810853261910LL)))))))));
}
