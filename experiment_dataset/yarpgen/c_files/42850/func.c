/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42850
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) ^ (var_9)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)16)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0])), (var_3))))))) || (((/* implicit */_Bool) var_16))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_2 - 1] [i_0] [i_0] |= ((/* implicit */unsigned char) arr_4 [i_2 + 3] [i_1]);
                    arr_9 [i_1] [i_1] [i_2] [i_0] |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned int) var_15))), (arr_6 [i_0] [i_0] [i_2])));
                    var_20 += ((/* implicit */unsigned char) min(((+(arr_4 [i_0] [i_1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (1577584156U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2])))))))))));
                }
            } 
        } 
        arr_10 [i_0] |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]))))), (((unsigned char) arr_6 [i_0] [i_0] [i_0]))));
    }
    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
    {
        arr_13 [i_3] = var_2;
        arr_14 [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (var_11) : (((((((/* implicit */_Bool) (signed char)112)) ? (arr_11 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)139))))) ^ (((/* implicit */long long int) ((/* implicit */int) max(((signed char)84), ((signed char)-1)))))))));
    }
    for (signed char i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) arr_5 [i_4] [i_4] [i_4]);
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            var_22 = ((/* implicit */unsigned long long int) ((arr_4 [i_4] [i_4]) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) && (((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_5] [i_5] [i_5] [i_5])))))))));
            var_23 += max((arr_1 [i_5]), (((/* implicit */unsigned char) (signed char)-85)));
            arr_19 [i_4] = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) arr_7 [i_5] [i_4] [i_4] [i_4])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))), (((/* implicit */unsigned long long int) arr_15 [i_4] [i_5])))), (((/* implicit */unsigned long long int) ((max((2097144ULL), (((/* implicit */unsigned long long int) var_19)))) > (((arr_5 [i_4] [i_5] [i_5]) ? (9327173130923357451ULL) : (((/* implicit */unsigned long long int) arr_11 [i_4])))))))));
            arr_20 [i_4] [i_5] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) min(((signed char)-84), (((/* implicit */signed char) var_15))))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_12 [i_5])))))))));
        }
    }
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (max((((((/* implicit */_Bool) (signed char)-1)) ? (var_11) : (var_12))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_0)))))))));
    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_2))));
}
