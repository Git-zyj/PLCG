/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192770
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)54343)), (16ULL)));
                        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_2])), (287104476244869120ULL)))) ? (max((arr_6 [i_0] [i_1] [i_2]), (8111608767482804344ULL))) : (arr_7 [i_0] [i_1] [i_3] [i_3])))) ? (arr_7 [i_3] [i_2] [(unsigned char)5] [7ULL]) : ((+(min((var_3), (18446744073709551588ULL))))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_3] [i_2]))))), (((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_1] [5ULL])) ? (17146370231546491597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) ? ((((!(((/* implicit */_Bool) 17146370231546491597ULL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [(unsigned short)0]))))) : (((((/* implicit */_Bool) 18446744073709551605ULL)) ? (417969941003576312ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_3])) ? (((/* implicit */int) arr_5 [i_1] [i_0])) : (((/* implicit */int) arr_2 [(signed char)5]))))) ? (((unsigned long long int) 14477796465984649468ULL)) : (((((/* implicit */_Bool) arr_8 [i_3] [6ULL] [(_Bool)1] [i_2] [6ULL] [i_0])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59303)))))))));
                    }
                    var_20 = ((/* implicit */_Bool) (unsigned char)128);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))))), (min((((/* implicit */unsigned long long int) (unsigned char)241)), (1811722068190331448ULL))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14)))));
}
