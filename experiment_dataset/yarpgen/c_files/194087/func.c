/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194087
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
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)30108))));
    var_18 |= ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) (+(0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */unsigned long long int) -1955134172))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22270)))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_19 = (+(((/* implicit */int) (unsigned short)17971)));
                        arr_9 [(unsigned char)0] [(unsigned char)0] |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)-56)))) ? (((/* implicit */unsigned long long int) (+(0U)))) : (((((/* implicit */_Bool) (signed char)9)) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) 2147483647))))));
                        arr_10 [(_Bool)1] |= ((/* implicit */signed char) (-(((/* implicit */int) arr_4 [i_0] [i_1] [i_1 - 2]))));
                        var_20 = ((/* implicit */unsigned short) min((var_20), (arr_4 [i_0] [i_0] [(unsigned short)0])));
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        var_21 |= ((/* implicit */int) 3027261328742928211LL);
        arr_13 [(_Bool)1] = ((/* implicit */short) max((((arr_12 [i_4]) / (arr_12 [i_4]))), (max((arr_12 [i_4]), (((/* implicit */unsigned int) arr_11 [i_4]))))));
    }
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4)) ? (15429598380033843310ULL) : (((/* implicit */unsigned long long int) 548895714U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1960724588U)) ? (3017145693675708306ULL) : (3017145693675708300ULL))))))) : (((/* implicit */int) var_3))));
}
