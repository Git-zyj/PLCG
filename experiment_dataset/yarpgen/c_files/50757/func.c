/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50757
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
    var_20 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_21 &= ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (3113486328940548584ULL)))));
        var_22 = ((/* implicit */short) (-(max((((((/* implicit */_Bool) var_1)) ? (16227647011796542557ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)222))))), (min((((/* implicit */unsigned long long int) -4017367644681543662LL)), (4294950912ULL)))))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        var_23 = var_8;
        var_24 = ((/* implicit */unsigned short) var_18);
    }
    for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        arr_7 [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */long long int) arr_1 [i_2] [i_2])) : (min((((/* implicit */long long int) arr_2 [i_2])), (var_0)))))), (max((((/* implicit */unsigned long long int) arr_6 [i_2] [i_2])), (((((/* implicit */_Bool) 13995286883339511842ULL)) ? (9315324121126431970ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36)))))))));
        arr_8 [i_2] = ((/* implicit */unsigned char) arr_0 [18LL]);
        var_25 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned int) var_7))), (max((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) 13995286883339511842ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)36))) : (0ULL)))))));
        arr_9 [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)16383)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_2]))))) : (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_4)))))) >= ((-9223372036854775807LL - 1LL))));
    }
    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 15724810284625514971ULL)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) 13995286883339511842ULL))))), (min(((short)17457), (((/* implicit */short) var_10)))))))) : (min((((/* implicit */long long int) (-(((/* implicit */int) var_8))))), (9223372036854775795LL)))));
        arr_13 [i_3] = ((/* implicit */long long int) 645863664);
        var_26 = ((/* implicit */_Bool) min((var_26), (((var_6) == (((/* implicit */int) ((((/* implicit */int) min((arr_2 [i_3]), (arr_2 [i_3])))) <= (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-36)))))))))));
    }
}
