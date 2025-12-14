/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193008
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
    var_13 -= max((((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_12) : (18020055459827202794ULL)))), (((min((((/* implicit */unsigned long long int) var_1)), (10953496726105253502ULL))) * (((/* implicit */unsigned long long int) (+(var_1)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_1]) && (((/* implicit */_Bool) (+(409625486))))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((long long int) arr_2 [i_2])) | (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)113)))))))) ? (((/* implicit */unsigned long long int) arr_2 [(signed char)8])) : (((unsigned long long int) arr_5 [i_1]))));
                    arr_9 [i_0] [i_0] [i_1] = ((/* implicit */int) (!(arr_4 [i_0] [i_2])));
                    arr_10 [i_1] = ((/* implicit */_Bool) -409625486);
                    var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0])) && (((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0] [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(short)6] [i_2] [i_2]))) : (min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) arr_2 [i_2])))), (((/* implicit */unsigned long long int) 2147483648U))))));
                }
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (max((((/* implicit */unsigned int) arr_2 [i_0])), (((unsigned int) ((arr_2 [i_1]) | (((/* implicit */int) arr_4 [i_0] [i_3])))))))));
                    var_17 -= ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 15196209930162212395ULL)))) ? (max((((/* implicit */unsigned long long int) var_5)), (arr_1 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) max((-1015807131), (((/* implicit */int) (signed char)-81)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_4 [i_0] [(_Bool)1]))))) <= (((unsigned long long int) arr_2 [i_1]))))) : (((/* implicit */int) arr_7 [i_0] [i_1])));
                    arr_13 [i_0] [i_1] [i_1] [0U] = ((/* implicit */long long int) var_11);
                    arr_14 [i_1] = (+(var_2));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((arr_11 [i_0] [i_1] [i_1] [i_3]), (((/* implicit */unsigned int) (short)-24204))))) && ((!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))) : (min((max((((/* implicit */int) arr_7 [i_0] [(unsigned short)3])), (arr_5 [i_1]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))))))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_3);
}
