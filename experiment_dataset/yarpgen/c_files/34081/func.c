/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34081
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
    for (signed char i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 += ((/* implicit */long long int) 15ULL);
                var_19 = ((/* implicit */unsigned int) (signed char)-40);
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    arr_6 [i_2] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) ((signed char) arr_5 [i_1]))))), (((/* implicit */int) min((var_1), (arr_0 [i_0]))))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_4 [i_0] [i_0] [i_0 + 1] [i_0]))) ? (((/* implicit */int) (!(arr_5 [i_0 - 2])))) : (arr_2 [i_0])));
                    var_20 *= ((/* implicit */_Bool) (unsigned short)12769);
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_0] [i_2] [i_0 - 2])) + (((/* implicit */int) var_10))))) ? (((int) var_15)) : ((-(((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_0 - 2]))))));
                    var_22 = ((/* implicit */signed char) var_0);
                }
                for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max(((-(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1])) || (((/* implicit */_Bool) var_14))))))), ((~(((/* implicit */int) ((signed char) 2147483584)))))));
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) arr_8 [i_3] [i_3]))))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((unsigned int) var_3))) + (((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)158))) : (var_2)))))));
    var_25 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) & ((+(((/* implicit */int) (unsigned short)27726)))))))));
    var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
}
