/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213738
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
    var_15 = ((/* implicit */int) max(((((+(var_0))) | (((/* implicit */unsigned long long int) ((2298861947172118766LL) / (var_10)))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_10))))), (((((/* implicit */int) var_4)) << (((((/* implicit */int) var_8)) - (63))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_2)))) ? ((~(((var_13) << (((((/* implicit */int) arr_10 [i_3] [i_2] [i_2] [i_1] [(unsigned char)4])) + (138))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21438)) ? (-2298861947172118766LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)36)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)234))))) : (11537733241859470304ULL)))));
                        arr_12 [i_1] [i_1] [(unsigned char)4] [4] [i_1] = ((/* implicit */unsigned char) arr_2 [2U]);
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_0 [i_0])), (((unsigned short) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4] [i_4] [(_Bool)0]))) <= (((long long int) var_8))));
        arr_18 [i_4] = ((/* implicit */short) (((+(((/* implicit */int) arr_14 [i_4])))) == (((/* implicit */int) (!(arr_14 [i_4]))))));
    }
}
