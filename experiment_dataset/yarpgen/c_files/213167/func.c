/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213167
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_6))) ? (((((/* implicit */_Bool) var_7)) ? (45613533) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_2))))) : (((long long int) var_6))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 2; i_2 < 21; i_2 += 2) 
                {
                    var_14 = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */int) ((unsigned int) (!(arr_16 [i_4] [i_3] [i_2 + 1] [i_2] [i_1] [i_0] [i_0]))));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) * (var_7)));
                            }
                        } 
                    } 
                }
                for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1] [i_1 - 1] [i_1] [i_1 + 1] [i_1])) ? (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 - 4] [i_1 - 1] [i_1 + 1] [i_1 + 1] [7] [i_0 - 4]))))) == (((unsigned long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_9)))))));
                    var_18 = -2809225949184114833LL;
                }
                var_19 = ((/* implicit */long long int) max(((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [20LL] [20LL])) : (((/* implicit */int) (signed char)125)))))), (((((/* implicit */int) var_3)) << (((arr_17 [i_1 - 1] [i_1] [i_0 - 3]) - (3805752210267755963LL)))))));
                var_20 = ((((/* implicit */long long int) ((/* implicit */int) max((var_3), (arr_0 [i_0 + 2] [i_0 - 4]))))) == (((((/* implicit */_Bool) arr_6 [(signed char)10] [21ULL])) ? (arr_1 [i_0 + 2] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_1]))))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15784)) ? (((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_0 - 3] [i_1]))) : ((-(arr_10 [i_0] [i_0] [i_0 + 3] [i_1] [i_1])))))) ? (((((var_11) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15792))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)15776)) || (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_1 + 1] [i_1]))))) : (((/* implicit */int) arr_19 [i_0 + 2] [i_0 + 2] [i_1])))) : ((+(((/* implicit */int) arr_3 [i_0 + 1] [i_1 + 1]))))));
                var_22 = ((/* implicit */int) ((((((11041311013173314915ULL) << (((((/* implicit */int) arr_9 [(signed char)9] [i_1 - 1] [(signed char)9] [i_0 - 1])) + (96))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1746351050)) ? (4787018612112437971LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65516)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_19 [i_0 - 3] [i_0 - 3] [i_1 - 1])), ((unsigned short)49740))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)43627)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (unsigned short)15816))))) & ((-(15315339166497639464ULL)))))));
            }
        } 
    } 
}
