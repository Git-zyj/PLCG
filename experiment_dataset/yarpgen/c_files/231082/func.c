/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231082
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
    var_20 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) var_10)), (min(((~(var_9))), (((/* implicit */long long int) ((unsigned int) var_18)))))));
    var_21 = var_19;
    var_22 = ((/* implicit */unsigned short) ((_Bool) ((unsigned long long int) (+(var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 2; i_2 < 11; i_2 += 2) /* same iter space */
                {
                    arr_8 [6] [6] [i_2 - 2] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned char) var_8)), (((unsigned char) var_0))));
                    arr_9 [i_0 - 1] [i_1] [i_2 - 2] [i_0] = ((/* implicit */unsigned int) var_7);
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((unsigned int) max((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-68)))), (min((((/* implicit */int) var_6)), (arr_2 [i_2]))))))));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) - ((~(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
                }
                for (signed char i_3 = 2; i_3 < 11; i_3 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) max(((+(((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_18 [i_0] [i_0] [i_3 + 1] [i_4] [i_3] = ((/* implicit */long long int) max(((+(((((/* implicit */_Bool) (short)25616)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_4])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))), (((/* implicit */int) ((unsigned char) arr_16 [i_0] [i_0] [i_0] [i_0])))));
                        arr_19 [i_0] [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */int) var_8)) / ((~(((/* implicit */int) (signed char)68))))));
                        arr_20 [i_0] [(_Bool)1] [i_3] [10LL] [i_4] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (!(((/* implicit */_Bool) (((+(((/* implicit */int) arr_12 [(_Bool)1] [i_3] [i_3] [i_0])))) ^ (((/* implicit */int) var_5))))))))));
                    }
                    var_27 = ((/* implicit */unsigned short) (!(((_Bool) arr_0 [i_0]))));
                }
                /* vectorizable */
                for (signed char i_5 = 2; i_5 < 11; i_5 += 2) /* same iter space */
                {
                    var_28 = (+(0U));
                    var_29 = ((((/* implicit */unsigned long long int) arr_17 [i_0 - 1] [i_0] [i_0 + 1])) ^ ((~(arr_0 [i_0]))));
                }
                var_30 = ((/* implicit */int) min((arr_21 [i_0] [i_1] [i_0] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) - ((-(((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned short)11])))))))));
            }
        } 
    } 
}
