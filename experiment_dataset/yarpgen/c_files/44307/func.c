/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44307
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
    var_12 = ((/* implicit */_Bool) ((max(((_Bool)0), ((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19873))) : (2458948831U)));
    var_13 = ((/* implicit */_Bool) ((var_10) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (max((var_2), (((/* implicit */long long int) var_11)))) : (((var_7) ? (var_2) : (((/* implicit */long long int) var_8))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 1; i_1 < 22; i_1 += 4) /* same iter space */
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) arr_2 [i_1] [i_0]);
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1 + 2] [i_1 + 1])) > (((/* implicit */int) (_Bool)1))));
        }
        for (int i_2 = 1; i_2 < 22; i_2 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned short) 1631951691U);
            var_16 = ((/* implicit */int) ((1243756889U) != (arr_7 [10LL])));
            var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */_Bool) arr_7 [i_2 + 2])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
        }
        for (int i_3 = 1; i_3 < 22; i_3 += 4) /* same iter space */
        {
            arr_12 [(_Bool)1] [i_3] = ((/* implicit */signed char) -6164126650018013018LL);
            arr_13 [i_0] [i_3] = ((/* implicit */_Bool) ((unsigned short) -330801784));
        }
        for (unsigned int i_4 = 2; i_4 < 22; i_4 += 2) 
        {
            arr_17 [i_4 - 1] [(unsigned short)23] [(unsigned short)23] = ((/* implicit */unsigned int) (unsigned short)62180);
            var_18 = (_Bool)1;
        }
        arr_18 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-2375))))) ? (arr_7 [i_0]) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_11)))))));
        var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146))) + (arr_0 [i_0])));
        arr_19 [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_6 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31410))) : (2752747346U)))));
    }
}
