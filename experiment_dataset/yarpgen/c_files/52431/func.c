/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52431
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
    var_19 = ((/* implicit */signed char) var_13);
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_14))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-2542024116547958917LL)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-73)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-99)) ? (140737488355327ULL) : (((/* implicit */unsigned long long int) -2542024116547958886LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)17), ((signed char)119))))) : (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(var_8))))) * (max((var_1), (arr_0 [i_0]))))))));
        var_22 = ((/* implicit */_Bool) ((max((((/* implicit */long long int) (!((_Bool)1)))), (arr_0 [i_0]))) & (((/* implicit */long long int) var_3))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            var_23 = ((/* implicit */_Bool) max((var_23), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-101)), ((unsigned char)127))))) < (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_2])) ? (arr_5 [i_2] [i_2] [i_1]) : (arr_5 [i_1] [i_2] [i_2])))))));
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-45))) && (((/* implicit */_Bool) (~(arr_0 [i_2]))))));
            var_25 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min(((signed char)106), ((signed char)106)))) ? (((long long int) (signed char)-33)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-33))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775806LL)) ? (((/* implicit */int) (short)-29693)) : (((/* implicit */int) (unsigned char)184))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((var_18) <= (((/* implicit */int) (unsigned char)58))))))))));
        }
        var_26 &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((var_5), (arr_2 [i_1] [i_1])))), (((var_17) >> (((((/* implicit */int) var_0)) + (23445)))))));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                {
                    arr_12 [i_3] = ((/* implicit */int) var_17);
                    arr_13 [i_1] [1ULL] [i_1] = ((/* implicit */_Bool) ((long long int) ((unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (unsigned char)197))))));
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) min((min((arr_9 [i_3]), (arr_9 [i_1]))), (((var_8) && (arr_9 [i_1]))))))));
                }
            } 
        } 
    }
}
