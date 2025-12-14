/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41945
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) (short)-17897)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) == ((+(3121996859397578042LL))))))) : (min((((/* implicit */unsigned long long int) ((8921139901113350521LL) < (((/* implicit */long long int) ((/* implicit */int) var_1)))))), (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_5)))))))))));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-14)))))));
        var_14 = (unsigned char)25;
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_8))));
            arr_4 [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_0] [(_Bool)1]);
        }
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        arr_7 [i_2] [i_2] = ((/* implicit */long long int) ((((arr_0 [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (((/* implicit */signed char) arr_5 [i_2])))))))) == (((((/* implicit */_Bool) 16ULL)) ? (((/* implicit */unsigned long long int) var_7)) : (max((((/* implicit */unsigned long long int) var_6)), (arr_0 [i_2])))))));
        var_16 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */long long int) 1714020547U)) - (8921139901113350530LL)))) ? (((((/* implicit */int) var_1)) / (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */_Bool) 26)) && (((/* implicit */_Bool) var_5)))))))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_2])))))));
    }
    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) max(((+(var_6))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (1418094652)))))) : (max((((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))))), (((var_10) + (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3])))))))));
        arr_11 [i_3] |= ((/* implicit */long long int) arr_8 [i_3]);
    }
    var_19 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_8)) ? (3121996859397578052LL) : (((/* implicit */long long int) ((/* implicit */int) ((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
    var_20 = ((/* implicit */unsigned long long int) max(((+((+(var_7))))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) + ((+(((/* implicit */int) (unsigned char)34)))))))));
}
