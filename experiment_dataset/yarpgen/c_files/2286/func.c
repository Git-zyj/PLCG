/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2286
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_10))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */int) arr_0 [i_1])) <= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [2LL])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) var_12)))))))))));
                    arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((unsigned int) arr_3 [i_0] [(_Bool)1])) >= (max((((/* implicit */unsigned int) 2130054799)), (var_3)))))) > (((/* implicit */int) min((arr_2 [i_1 - 2] [i_1 + 1] [i_1 + 1]), (((/* implicit */short) max(((signed char)-67), ((signed char)-67)))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)(-127 - 1))))))));
        arr_7 [(signed char)3] = ((/* implicit */long long int) var_11);
    }
    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) max((((signed char) ((((/* implicit */_Bool) (short)27176)) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) arr_10 [i_3] [1ULL]))))), (((/* implicit */signed char) (((-(arr_9 [i_3] [i_3]))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) (signed char)-67)))))))))))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)51)) < (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_14))) | (9223372036854775807LL))) > (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3]))))))));
        var_24 = ((/* implicit */short) arr_11 [i_3]);
        var_25 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [11LL])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) var_4))))) : ((-(1593453513534311059LL))))))));
        var_26 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (signed char)58)), (-2764536763359763752LL)));
    }
    for (short i_4 = 3; i_4 < 14; i_4 += 1) 
    {
        arr_15 [i_4 - 3] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((((/* implicit */int) (signed char)-65)) + (((/* implicit */int) var_15)))) - ((+(arr_12 [i_4])))))), (((((/* implicit */long long int) var_3)) - (arr_9 [i_4 - 1] [i_4 - 2])))));
        var_27 |= ((/* implicit */long long int) (signed char)-59);
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_13)))))))));
    }
}
