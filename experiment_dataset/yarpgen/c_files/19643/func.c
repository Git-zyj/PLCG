/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19643
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)20)) <= (((/* implicit */int) (unsigned short)0))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned char) ((588422741U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)122)))));
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2])))))))) ? (((/* implicit */int) arr_7 [i_2])) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 + 2] [i_0 + 2] [i_0 + 2]))))))))))));
                    var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (arr_2 [i_0] [i_1]) : (((/* implicit */int) arr_6 [i_0]))))))));
                    var_15 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0 + 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [i_0 - 1]))))), (((((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */unsigned long long int) var_7)) : (var_1))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_0 [i_0 - 1])))))))));
                }
            } 
        } 
    }
    for (short i_3 = 1; i_3 < 12; i_3 += 4) /* same iter space */
    {
        var_16 ^= ((/* implicit */short) (-(((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 8698074951836036379LL))))), (min((((/* implicit */unsigned short) (signed char)-112)), ((unsigned short)62042))))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            for (unsigned int i_5 = 1; i_5 < 13; i_5 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) 467673629U);
                    var_18 |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_3])) ? (((/* implicit */unsigned long long int) arr_14 [i_3])) : (arr_18 [i_3] [i_3] [i_3 + 1] [i_4])))) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) ((var_1) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))), ((-(((/* implicit */int) arr_3 [i_3] [i_5 - 1]))))));
                }
            } 
        } 
        var_19 = ((/* implicit */int) (~(max((((/* implicit */long long int) (signed char)-5)), (356454223927147305LL)))));
    }
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((var_12) ? (((long long int) 467673629U)) : (((/* implicit */long long int) ((var_12) ? (var_2) : (((/* implicit */int) var_8))))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)122)))));
    var_21 -= ((/* implicit */unsigned short) var_2);
}
