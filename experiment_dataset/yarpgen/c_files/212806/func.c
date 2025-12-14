/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212806
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_11 = max(((((!(var_8))) ? ((+(var_0))) : (((/* implicit */long long int) (-(((/* implicit */int) var_8))))))), (max((-661358925412328301LL), (((/* implicit */long long int) arr_1 [5LL])))));
                arr_8 [(unsigned char)4] |= ((/* implicit */_Bool) (~((~(arr_5 [i_0] [i_0])))));
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) max((var_3), (((/* implicit */unsigned char) arr_0 [1LL]))))), ((~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) arr_0 [(short)0])) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [(_Bool)1])) < (((/* implicit */int) (_Bool)1))))) == (((/* implicit */int) (signed char)-13)))))));
                var_13 = max((((((/* implicit */_Bool) 4729994357914593655ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (-3568234281676351158LL))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)0))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_0] [17ULL] [i_3] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) arr_4 [i_1]))))));
                            arr_15 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -3648694776630318028LL)))))) ^ (arr_13 [i_0] [i_2] [i_2] [i_0] [i_0])))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (((!((_Bool)1))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -7702683528092806161LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)115))))))))));
                            arr_16 [15LL] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_3]))))) ? (((/* implicit */int) ((signed char) var_6))) : (((/* implicit */int) max((var_3), (((/* implicit */unsigned char) arr_4 [i_0])))))));
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_7 [i_3] [9LL] [i_1]))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (arr_7 [i_0] [i_0] [i_0]))))));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) max(((~(((/* implicit */int) (short)19121)))), (((/* implicit */int) arr_9 [i_0] [(signed char)11]))))) * (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)11776)))))) * (((arr_3 [i_0]) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_2])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */int) var_2)) + (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_9))))))))));
    var_17 = ((/* implicit */unsigned char) var_0);
    var_18 |= ((/* implicit */_Bool) ((unsigned char) max((((/* implicit */long long int) max((var_9), (((/* implicit */short) (signed char)57))))), (var_6))));
}
