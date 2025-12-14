/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249212
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((((((/* implicit */_Bool) min((-1372871401), (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_1 [i_0])))))), (((/* implicit */int) min((((short) arr_0 [i_0])), (arr_1 [i_0 + 1])))))))));
        var_19 = ((/* implicit */int) (_Bool)1);
        var_20 = arr_1 [i_0];
    }
    for (signed char i_1 = 3; i_1 < 23; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)23884)), (-974052862)))) ? (((/* implicit */int) ((short) 17670475628039409132ULL))) : (((/* implicit */int) arr_3 [i_1 - 2]))))));
        var_22 = ((signed char) ((((/* implicit */_Bool) max((5745502250237967137ULL), (((/* implicit */unsigned long long int) arr_3 [i_1]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) < (((/* implicit */int) (short)32070)))))));
        var_23 = ((/* implicit */unsigned long long int) max((((signed char) ((((/* implicit */int) (short)-829)) ^ (((/* implicit */int) arr_3 [i_1]))))), (max((((/* implicit */signed char) arr_2 [i_1 - 1])), ((signed char)-47)))));
    }
    for (int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    {
                        var_24 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6193))) ^ (((((/* implicit */_Bool) (unsigned short)41159)) ? (1602171043U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) ((unsigned int) arr_4 [(signed char)23] [i_5]))))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_16 [i_5] [i_4] [i_3] [i_2]), (((/* implicit */short) arr_13 [i_5] [i_4] [(short)3] [i_2]))))) ? (((/* implicit */int) min((((/* implicit */short) arr_13 [i_2] [i_3] [i_4] [i_5])), (arr_16 [i_2] [i_4] [i_4] [i_5])))) : (((/* implicit */int) ((short) arr_16 [i_2] [i_2] [i_2] [22ULL])))));
                    }
                } 
            } 
        } 
        arr_18 [i_2] = ((/* implicit */unsigned short) ((long long int) (signed char)10));
    }
    var_27 = ((/* implicit */short) ((((/* implicit */int) var_8)) * (((((/* implicit */int) (unsigned char)24)) * (((/* implicit */int) (_Bool)1))))));
}
