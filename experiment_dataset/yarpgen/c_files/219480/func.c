/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219480
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                arr_4 [18LL] |= ((/* implicit */unsigned short) min((1387058944), (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 3 */
                for (int i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    arr_7 [i_1] [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1857414686)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2828)) ? (1857414663) : (((/* implicit */int) (short)-2844))))) ? ((((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) 1857414682)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-52)))));
                    arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_3 [i_1 + 1] [i_1 + 1] [i_2 + 1]) ? (((/* implicit */int) arr_3 [i_1 - 2] [i_0] [i_2 + 1])) : (((/* implicit */int) (unsigned short)6144))))) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))), (min((251658240ULL), (((/* implicit */unsigned long long int) 1857414686)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!((_Bool)0)))))))));
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_6)), (var_0)))) ? (((/* implicit */int) ((8388607ULL) <= (18446744073457893375ULL)))) : (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_14)))))))))));
                    var_17 = ((/* implicit */unsigned char) min(((+(18446744073701162987ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-31033)) ? (((/* implicit */int) ((unsigned short) var_9))) : (((/* implicit */int) min((((/* implicit */short) arr_3 [i_0] [i_1] [(_Bool)1])), (arr_0 [i_0])))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    arr_11 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (_Bool)0)) : (var_5)))), ((-(18446744073457893375ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (-576460752303423488LL) : (((/* implicit */long long int) ((/* implicit */int) (short)23105)))))) ? (((((/* implicit */_Bool) var_13)) ? (arr_5 [i_0] [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1]))))) : (((unsigned long long int) (unsigned short)32768))));
                    arr_12 [i_1] [i_1] = ((/* implicit */long long int) (_Bool)1);
                }
                for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    var_18 = ((/* implicit */signed char) max(((unsigned short)32768), (((/* implicit */unsigned short) (signed char)14))));
                    var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (3840359546584112066ULL)))) ? (((/* implicit */int) min(((unsigned short)60941), ((unsigned short)59392)))) : ((~(((/* implicit */int) (short)-19539)))))), (((/* implicit */int) (short)-31033))));
                }
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((unsigned long long int) 251658240ULL)), (((/* implicit */unsigned long long int) ((var_9) + (((/* implicit */long long int) ((/* implicit */int) arr_10 [(signed char)2]))))))))) ? (((/* implicit */int) ((short) ((signed char) arr_0 [i_0])))) : (((/* implicit */int) min(((short)24416), (((/* implicit */short) (_Bool)1)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)160))) : (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) ^ (((unsigned long long int) (short)-24401))))));
}
