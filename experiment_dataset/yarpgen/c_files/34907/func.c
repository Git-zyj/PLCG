/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34907
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
    var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((230978865U), (((/* implicit */unsigned int) -707951153))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_14))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 262016U))))))))));
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 835605618U))));
    var_18 += ((/* implicit */unsigned long long int) (+((+(262020U)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_19 -= ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [2ULL]))) == (var_4))))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 261991U))))), (((3815122458U) % (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)58746)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5493))) : (6029747413359952587ULL)));
        var_20 = var_10;
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_1 = 4; i_1 < 12; i_1 += 3) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 3]))) / (arr_5 [i_1] [i_1 - 3])));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (+(arr_5 [i_1 - 2] [i_1]))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            arr_9 [i_2] = ((/* implicit */unsigned long long int) ((arr_5 [i_1] [i_2]) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8))))));
            var_23 = ((((/* implicit */unsigned int) ((/* implicit */int) ((var_1) < (var_1))))) & (((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 4]))))));
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                var_24 = ((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1] [i_1]))));
                arr_12 [i_1 - 4] [i_1] [i_2] [i_3] = ((/* implicit */int) var_10);
                arr_13 [2U] [i_2] [i_3] = ((/* implicit */unsigned long long int) (-(arr_7 [i_1 - 3])));
                var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2]))) : (var_9)));
            }
            var_26 = ((/* implicit */int) min((var_26), ((+(((/* implicit */int) (unsigned short)0))))));
        }
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((unsigned int) arr_11 [i_1 - 4] [i_1 - 3])))));
    }
}
