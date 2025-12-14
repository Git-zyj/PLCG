/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221238
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
    var_19 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            arr_11 [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_2] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_1])) == (((((/* implicit */int) arr_6 [(unsigned short)2] [(unsigned short)2] [i_2] [i_3])) << (((((/* implicit */int) var_18)) - (8313))))))))) : (var_1));
                            arr_12 [i_1] [i_3] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93))) : (18446744073709551611ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_3])))))));
                            arr_13 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned short) var_4)))))));
                            arr_14 [(unsigned short)0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_0 [i_1] [i_0])))), (((/* implicit */int) arr_0 [i_3] [i_2]))));
                            var_20 = ((/* implicit */signed char) (unsigned char)255);
                        }
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) max(((signed char)-1), (arr_5 [i_1] [13ULL] [i_0])))) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_1])))), (((((/* implicit */_Bool) arr_9 [i_0])) ? (arr_9 [i_0]) : (655938597)))));
                var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) arr_8 [i_0] [(unsigned short)8] [i_0] [i_0] [i_1])))) | ((~(((/* implicit */int) arr_8 [i_0] [1LL] [i_0] [(short)0] [i_0]))))));
                var_22 = ((/* implicit */long long int) ((short) (((!(((/* implicit */_Bool) var_13)))) ? ((~(((/* implicit */int) arr_6 [i_1] [19] [i_0] [i_0])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0] [i_1])), ((unsigned short)6954)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) var_8);
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)18)) > (((/* implicit */int) (signed char)9))));
}
