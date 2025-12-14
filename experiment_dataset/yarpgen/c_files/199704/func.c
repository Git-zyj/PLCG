/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199704
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 11719325498315257897ULL))))), (((unsigned short) 14398963427723389999ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)51217))))), (((unsigned long long int) ((unsigned short) 1244081091U)))));
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) var_9)), (arr_1 [i_0])))))), (max((((/* implicit */unsigned long long int) arr_1 [i_0])), ((-(4047780645986161606ULL)))))));
        var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (unsigned short)65527)))))))), (max((((8650032350207580531ULL) | (((/* implicit */unsigned long long int) arr_5 [i_1])))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_4 [i_1])), (var_5))))))));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_1]), (((/* implicit */unsigned int) var_8))))) ? (((((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))))) << (((((/* implicit */int) arr_0 [i_1])) - (14599))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (signed char)-2))) >> ((((~(((/* implicit */int) (unsigned short)65535)))) + (65564))))))));
    }
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            {
                var_15 = ((/* implicit */int) ((((/* implicit */long long int) arr_5 [i_2])) - (min((((/* implicit */long long int) arr_4 [i_3])), (max((((/* implicit */long long int) var_2)), (2305843009213693952LL)))))));
                var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_5 [i_3])))) ? (((long long int) -1099590894)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) (unsigned short)5857)) : (((/* implicit */int) (unsigned short)43443)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_7);
}
