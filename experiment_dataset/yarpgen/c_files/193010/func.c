/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193010
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
    var_10 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) 1571230582))))), (var_9)))) ? (var_8) : (((/* implicit */int) (unsigned short)35659)));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */short) 4061486211820163021ULL);
            arr_6 [(unsigned char)19] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1 - 2] [i_0 - 1]))))), (((int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_2 [i_1] [i_1 - 2])))))));
        }
        for (int i_2 = 3; i_2 < 22; i_2 += 3) 
        {
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_9 [i_2] [i_2] [i_2]);
            arr_12 [i_2 - 2] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((min((14843058186819766582ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_2 - 3])))), (((/* implicit */unsigned long long int) ((((arr_8 [i_0]) + (9223372036854775807LL))) << (((532676608U) - (532676608U))))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0 + 2] [i_0 + 2] [i_0 + 2])) ? (arr_7 [i_0 - 1] [i_0 + 2] [i_0]) : (arr_7 [1LL] [i_2 - 2] [i_0 + 2])))) : (((((/* implicit */_Bool) arr_8 [i_0 - 2])) ? (arr_8 [i_0 - 1]) : (arr_8 [i_0 + 1])))));
            arr_13 [i_2] = ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) var_5)))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            var_11 = ((/* implicit */signed char) ((arr_2 [i_0 + 1] [i_0 - 2]) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))), (max((arr_7 [i_0] [i_3] [i_3]), (4246829850U)))))) : (((long long int) arr_16 [i_0 + 2] [i_0 - 2] [i_0 + 1]))));
            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 1])) >> (((((/* implicit */int) arr_15 [i_3])) * (((/* implicit */int) arr_2 [i_0] [i_3]))))))) ? ((-(3100144696U))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_0 + 1] [i_0])) ? (((/* implicit */int) (unsigned short)23540)) : (((/* implicit */int) (unsigned short)0))))) ? (max((2922066406U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) -1571230582))))));
        }
        for (unsigned char i_4 = 3; i_4 < 23; i_4 += 4) 
        {
            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) arr_7 [i_0] [i_0] [i_4]));
            var_13 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4] [i_4 - 3] [15U])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-93))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32753)) ? (((/* implicit */int) (unsigned short)33231)) : (((/* implicit */int) arr_2 [i_4] [i_0]))))))))) > (min((((/* implicit */long long int) min((arr_10 [i_0] [i_0] [i_4]), (((/* implicit */int) arr_0 [i_4]))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3))) : (72057594037927935LL)))))));
            arr_21 [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((short) (+(((/* implicit */int) arr_14 [i_0] [i_0] [i_4])))))) != (((/* implicit */int) ((unsigned char) (signed char)1)))));
            var_14 = ((/* implicit */unsigned char) max(((~(arr_16 [i_0] [i_0] [i_0]))), (((/* implicit */int) ((max((arr_19 [i_4] [i_4] [i_0]), (arr_14 [i_4] [i_4] [i_0 - 1]))) || ((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])))))))));
        }
        arr_22 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(signed char)21] [i_0 - 1] [i_0 - 1])) ? (arr_10 [i_0] [i_0 + 1] [i_0 + 1]) : (arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
    }
}
