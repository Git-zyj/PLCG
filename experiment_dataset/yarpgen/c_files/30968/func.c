/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30968
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_19 |= ((/* implicit */int) (!(((/* implicit */_Bool) (((~(arr_1 [i_0]))) * (((/* implicit */unsigned long long int) var_10)))))));
        var_20 = ((/* implicit */short) max((min((min((var_14), (((/* implicit */unsigned long long int) arr_3 [i_0])))), (((/* implicit */unsigned long long int) min(((unsigned short)39904), (((/* implicit */unsigned short) arr_3 [i_0]))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)28104)) ? (arr_0 [i_0] [11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)28104)) >= (((/* implicit */int) (unsigned short)28104)))))))))));
        var_21 = ((/* implicit */short) ((var_15) != (((/* implicit */int) ((((/* implicit */_Bool) 878062713)) && (((/* implicit */_Bool) var_15)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = max((var_9), (((/* implicit */int) (!(((/* implicit */_Bool) 1241241378))))));
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_1])) != ((+(arr_10 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0]))))))));
                                var_23 = ((((/* implicit */_Bool) min((var_7), (var_4)))) ? (min((((var_14) | (((/* implicit */unsigned long long int) 0LL)))), (((((/* implicit */_Bool) arr_5 [18] [i_0] [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_1)))))) : (((((/* implicit */unsigned long long int) var_5)) & (arr_0 [i_3] [i_2]))));
                            }
                        } 
                    } 
                    var_24 += ((/* implicit */short) ((min((((/* implicit */unsigned long long int) (+(var_17)))), (arr_5 [i_0] [i_1] [5LL]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_13)))))))));
                    var_25 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_17)), (var_14)))) ? ((~(arr_1 [i_2]))) : (((arr_5 [i_0] [i_1] [i_2]) & (arr_5 [(unsigned char)19] [i_1] [i_2]))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_10)))) ? (-1LL) : (((/* implicit */long long int) 1241241378))));
}
