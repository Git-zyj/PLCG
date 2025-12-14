/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42406
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
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) max((max((((/* implicit */long long int) var_0)), (933710506673352455LL))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_2))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_18 -= ((/* implicit */unsigned short) min((var_7), (((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */int) (!(var_11)))) : (((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15))))))));
                            arr_11 [i_0] [i_3] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((/* implicit */int) arr_6 [11ULL] [11ULL])) % (((/* implicit */int) arr_10 [i_0] [i_0] [(_Bool)1] [i_3] [(unsigned short)10] [i_1])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) (_Bool)0)))))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] = ((/* implicit */long long int) ((short) min((arr_9 [(unsigned short)8] [i_1 + 1] [i_0] [i_0] [i_0]), (arr_9 [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1] [(unsigned short)16]))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_0] [i_0]))));
                            var_20 = ((_Bool) (-(min((((/* implicit */int) var_15)), (var_16)))));
                            var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (arr_7 [i_1 + 1] [i_1 + 1] [i_5 + 1] [i_5 - 1]) : ((+(((/* implicit */int) (signed char)-98)))))), ((~(((/* implicit */int) min((arr_2 [i_5]), (((/* implicit */short) arr_4 [i_0])))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_10 [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_13)))))))) ? ((+(((/* implicit */int) ((unsigned short) var_4))))) : (min(((~(arr_7 [i_0] [(_Bool)1] [i_1] [i_1]))), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (arr_15 [i_0] [i_0] [2ULL] [i_1]))))))));
            }
        } 
    } 
}
