/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234892
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
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        var_15 = ((/* implicit */int) -9223372036854775805LL);
        arr_2 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (var_11) : (((/* implicit */long long int) arr_1 [i_0])))))))));
        var_16 &= ((/* implicit */unsigned char) ((short) ((((/* implicit */int) ((((/* implicit */_Bool) 2058889131033264726ULL)) && (((/* implicit */_Bool) (short)-20659))))) & ((+(arr_1 [i_0]))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        for (signed char i_2 = 4; i_2 < 21; i_2 += 1) 
        {
            {
                var_17 += ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_8 [(short)14]))))) ? (arr_3 [i_1] [i_1]) : (((/* implicit */int) min((((/* implicit */short) var_5)), ((short)3)))))), (((((/* implicit */_Bool) arr_5 [i_2 - 3])) ? (((/* implicit */int) arr_4 [i_2 - 2] [i_2 - 2])) : (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 4]))))));
                /* LoopNest 2 */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        {
                            arr_15 [i_4] [i_4] [i_4] [i_3] [(signed char)11] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) (short)-7)))));
                            arr_16 [1LL] [i_2] [i_2] [i_2] [(unsigned char)21] [8LL] = ((/* implicit */signed char) (-(((arr_7 [i_4]) ? (((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [10])))))));
                        }
                    } 
                } 
                var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */int) min((((/* implicit */short) arr_7 [i_2 - 3])), ((short)-20659)))) : (((arr_7 [i_1]) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) (short)25))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_5))))) : (max((arr_5 [i_2]), (((/* implicit */long long int) arr_8 [i_1]))))));
                var_19 = ((/* implicit */unsigned char) ((var_10) >= (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2])))));
            }
        } 
    } 
}
