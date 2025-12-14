/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201570
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_13 -= ((/* implicit */unsigned int) min(((+(arr_1 [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-8631)))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (~(((/* implicit */int) ((arr_3 [i_0] [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */int) var_12)) > ((+(((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_8))))))))))));
                var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)8603))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) var_4)))))) ? (min((((((/* implicit */_Bool) 15980092105828762763ULL)) ? (9473146921828057728ULL) : (15980092105828762763ULL))), (((/* implicit */unsigned long long int) (signed char)127)))) : (((unsigned long long int) var_4))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 14; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        {
                            arr_21 [i_0] [i_4] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((arr_3 [i_4 - 1] [i_4 + 1]) <= (9642070225222775408ULL)))));
                            arr_22 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_4 - 1] [i_4] [i_4] [i_4] [i_4])) >= (((/* implicit */int) arr_19 [i_4 - 1] [i_4] [i_4 - 1] [i_4]))))), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) 2609046417U)) : (10ULL)))));
                        }
                    } 
                } 
            }
        }
    }
    var_17 = ((((((/* implicit */_Bool) ((long long int) 5745025817171337908ULL))) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) | (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8630))) : (var_8)))))) : (var_5));
    var_18 &= ((/* implicit */signed char) (+(2759852013345772029LL)));
}
