/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49000
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
    var_15 = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */unsigned short) var_3)), (var_12)))), (min((var_6), (min((((/* implicit */long long int) (signed char)-1)), (var_6)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 11707276264281578171ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1]))))) : (((/* implicit */int) (!(arr_2 [(_Bool)1])))))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (18446744073709551615ULL)))))));
                var_17 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((unsigned char) var_0))) < (((/* implicit */int) ((_Bool) arr_1 [i_0]))))) ? (((/* implicit */int) (!(arr_0 [i_0])))) : (((((/* implicit */int) ((signed char) arr_2 [i_0]))) >> (((unsigned long long int) arr_2 [i_0]))))));
                var_18 = ((/* implicit */unsigned char) arr_0 [11LL]);
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((((/* implicit */int) arr_5 [i_3] [i_2 + 1] [i_0])) == (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_2 [i_0])))) : (((11707276264281578171ULL) / (((/* implicit */unsigned long long int) 2559073905U)))))))));
                            var_20 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) 14853628295857718708ULL)) ? (6739467809427973444ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_3]))))), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 4294967295U))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3593115777851832907ULL))))) : (((/* implicit */int) (_Bool)0)))))));
                            var_21 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) arr_7 [i_0] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned short)18] [i_1] [i_2]))) : (arr_1 [(unsigned short)9]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [17ULL] [i_2 - 2] [18]), (((/* implicit */signed char) arr_0 [i_0])))))))), ((_Bool)0)));
                            var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_5 [i_2 - 2] [i_2 - 1] [i_2 - 3])))) ? (((((/* implicit */_Bool) ((arr_6 [i_3] [i_3] [11U] [i_2 - 3] [9U] [i_0]) & (arr_6 [i_0] [15U] [i_1] [i_3] [i_3] [i_1])))) ? (((((/* implicit */_Bool) arr_7 [i_0] [(unsigned short)14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_1]))) : (6205563799599648362ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [(unsigned short)15]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))) != (var_10)))))));
                            var_23 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [8U])))) ? (14853628295857718703ULL) : (((unsigned long long int) ((unsigned int) (signed char)-27)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_24 |= ((/* implicit */unsigned long long int) ((unsigned short) (!(arr_0 [i_4]))));
                    var_25 = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_4]);
                    var_26 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_4] [i_1] [i_0])), (arr_8 [i_0] [i_1] [i_4])))) / (((/* implicit */int) var_12))))), (min((0ULL), (13ULL)))));
                    arr_10 [i_1] [12] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_1 [i_4]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) > (18446744073709551615ULL))))))) ? (((((/* implicit */_Bool) 11707276264281578171ULL)) ? (5599715462325564576ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_9 [(unsigned short)16] [i_1] [i_4] [i_1]))))) + (((/* implicit */int) min(((unsigned short)46309), (((/* implicit */unsigned short) var_3))))))))));
                }
            }
        } 
    } 
}
