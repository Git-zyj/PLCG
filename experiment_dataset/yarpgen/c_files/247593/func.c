/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247593
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) ((signed char) var_0));
        arr_2 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1)))))) ? (var_2) : (((/* implicit */unsigned long long int) arr_6 [i_2 - 1] [i_1] [i_2 + 1]))));
                    arr_7 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_6 [i_2 + 1] [i_2] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                    var_18 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_19 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)30938)))) >= (((/* implicit */int) (unsigned short)34590))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 3; i_3 < 17; i_3 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_13)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)30938)))) : (((/* implicit */int) max(((unsigned short)34598), (var_15))))))));
        arr_11 [i_3] [(unsigned short)14] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) ? ((-(max((4043540755U), (((/* implicit */unsigned int) var_0)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) var_10)))))));
    }
    for (unsigned int i_4 = 3; i_4 < 17; i_4 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned short)34597)) / (((/* implicit */int) var_12))))))), (((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_1))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_8 [i_4] [i_4])))))))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16382LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_3)))) ? (((/* implicit */int) ((_Bool) (signed char)115))) : (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0)))))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)63127), (((/* implicit */unsigned short) (_Bool)1))))) ? (((arr_8 [i_4 - 3] [i_4]) ? (((/* implicit */int) (unsigned short)36947)) : (((/* implicit */int) var_12)))) : (min((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_14 [i_4] [(unsigned short)12])) : (((/* implicit */int) (unsigned short)16403))))))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        var_24 = ((/* implicit */long long int) ((unsigned int) var_6));
        arr_17 [(unsigned char)6] = ((/* implicit */unsigned short) (~(-1832275532308918970LL)));
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)34598)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))) : (var_2)));
        arr_18 [i_5] = ((/* implicit */unsigned short) (~(144115188075855870ULL)));
        var_26 = ((/* implicit */unsigned short) ((arr_8 [i_5] [i_5]) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) (_Bool)1))));
    }
    var_27 = ((/* implicit */long long int) min((((/* implicit */int) var_9)), ((~(-1085971681)))));
}
