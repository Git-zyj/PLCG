/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3978
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
    var_20 = ((/* implicit */short) (-(((/* implicit */int) var_17))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_21 = ((/* implicit */_Bool) min(((+(((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) ((short) (_Bool)1)))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [(unsigned short)6] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) (~(((((/* implicit */int) max(((unsigned short)12288), (((/* implicit */unsigned short) (_Bool)1))))) & (((/* implicit */int) max(((unsigned short)21302), (((/* implicit */unsigned short) (short)124)))))))));
                    var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [0ULL] [i_2])) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))))) ? ((-(141863388262170624ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) arr_0 [i_2] [i_0])) + (1167994209))) <= (((/* implicit */int) (signed char)-70))))))));
                    var_23 = ((/* implicit */unsigned long long int) (+(((int) 7516192768ULL))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_1 [i_3]))))))));
        var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_3])))))));
    }
    for (short i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        var_26 -= ((/* implicit */long long int) ((((/* implicit */long long int) max(((~(((/* implicit */int) arr_11 [i_4])))), (arr_10 [i_4])))) <= (((((/* implicit */_Bool) (signed char)7)) ? (22LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
        var_27 = ((/* implicit */unsigned short) (short)10215);
        var_28 = ((/* implicit */unsigned short) var_14);
    }
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        var_29 = ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_5 + 1]))))))));
        var_30 = ((/* implicit */int) var_16);
    }
}
