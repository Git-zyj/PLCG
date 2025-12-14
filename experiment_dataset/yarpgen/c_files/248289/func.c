/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248289
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
    var_17 = ((/* implicit */unsigned long long int) min((min((max((((/* implicit */long long int) (short)12)), (-12LL))), (-6484107668810046400LL))), ((~((~(var_8)))))));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) var_14)))))))) ? (var_8) : (max((var_14), (((/* implicit */long long int) (-(((/* implicit */int) var_15)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_19 = ((/* implicit */_Bool) (~(arr_0 [i_0])));
        var_20 = ((/* implicit */unsigned short) (-(-9020791232291401556LL)));
    }
    /* LoopNest 2 */
    for (short i_1 = 2; i_1 < 18; i_1 += 4) 
    {
        for (long long int i_2 = 3; i_2 < 17; i_2 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_6 [i_1] [i_1 + 1] [i_2 - 3])), (min((var_10), (((/* implicit */unsigned int) arr_7 [i_1] [i_2 + 1])))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) == (((/* implicit */int) var_11)))))));
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))), ((-(4294967277U))))))));
                }
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
                {
                    arr_12 [i_2] [i_2 - 2] [i_4] = ((/* implicit */unsigned short) arr_10 [i_2] [i_2]);
                    var_23 = ((/* implicit */_Bool) (-(((3997820081U) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1 - 2] [i_2]))))))))));
                }
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */long long int) min((var_24), (max((((/* implicit */long long int) (~(var_10)))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (arr_13 [i_1 - 2] [i_1] [i_2 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
                    arr_17 [i_1] [i_2] [i_5] = ((/* implicit */_Bool) min((var_2), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) 576460748008456192LL))))), (max((((/* implicit */long long int) arr_11 [i_1] [(_Bool)1] [i_5] [i_2 + 2])), (-6484107668810046400LL)))))));
                }
                arr_18 [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_14))));
            }
        } 
    } 
}
