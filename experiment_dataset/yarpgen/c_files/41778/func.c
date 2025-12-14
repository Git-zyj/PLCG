/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41778
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
    var_10 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 3157739064U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [(_Bool)1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)17141))))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_4 [i_0])), (arr_0 [i_0]))))) : ((~(arr_2 [i_0] [(_Bool)1])))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    var_12 = (-(min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0]))))), (((((/* implicit */_Bool) arr_2 [5LL] [5LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_6 [(signed char)4] [i_1] [i_2] [i_0]))))));
                    var_13 = ((/* implicit */unsigned char) ((_Bool) ((int) ((((/* implicit */_Bool) (short)-17141)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)56697))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_14 = ((((((/* implicit */long long int) arr_1 [i_1])) - (((long long int) arr_7 [i_0] [i_0])))) - (((((/* implicit */_Bool) 8722869376346205643LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-17141))) : (min((((/* implicit */long long int) (short)17136)), (-1LL))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (+((-9223372036854775807LL - 1LL)));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_13 [i_3] [19LL] [i_3] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) (unsigned short)14977)), ((-(((/* implicit */int) arr_0 [i_0]))))));
                        var_15 = ((/* implicit */_Bool) (~((~(((((/* implicit */long long int) ((/* implicit */int) (short)3992))) ^ (arr_12 [(short)3])))))));
                        var_16 += ((/* implicit */unsigned long long int) (~(((((((/* implicit */int) (unsigned char)91)) >> (((((/* implicit */int) (unsigned short)50566)) - (50550))))) + (((/* implicit */int) (short)-31313))))));
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((signed char)5), (((/* implicit */signed char) arr_11 [i_4] [(_Bool)1] [i_4] [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_6 [i_4] [i_1 - 1] [i_1 - 1] [i_4])) ? (((long long int) 714667043U)) : (((0LL) / (arr_7 [i_0] [i_0])))))));
                    }
                    var_18 = ((/* implicit */short) -6143388652998850514LL);
                }
            }
        } 
    } 
}
