/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43409
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
    var_14 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))), (min((1875513399), (((/* implicit */int) ((signed char) 3054308008549399621ULL)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) min(((+(((long long int) arr_4 [i_0] [i_1 + 1] [i_0])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_6) + (((/* implicit */unsigned int) arr_3 [i_0]))))))))));
                var_15 = ((/* implicit */int) ((unsigned long long int) (~(((unsigned long long int) arr_3 [i_0])))));
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((15392436065160151970ULL) <= ((~(((var_3) ^ (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])))))))))));
            }
        } 
    } 
    var_17 = var_2;
    var_18 = ((/* implicit */unsigned int) (signed char)98);
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        arr_9 [i_2] = ((((/* implicit */unsigned long long int) (~(max((arr_1 [i_2]), (((/* implicit */int) arr_6 [i_2] [2]))))))) & (((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)106)), (9223372036854775807LL)))) ? (16492573004167228345ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_2]))))));
        arr_10 [i_2] = ((/* implicit */unsigned long long int) arr_0 [i_2]);
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-102))) : (((unsigned int) (signed char)58))));
        var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((+(var_5))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (arr_7 [i_2]) : (((((((/* implicit */int) arr_6 [i_2] [i_2])) + (2147483647))) >> (((var_11) - (2173749304511859029LL)))))))));
    }
    for (int i_3 = 2; i_3 < 13; i_3 += 1) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (+(((((/* implicit */_Bool) 3054308008549399633ULL)) ? (2055153890U) : (((/* implicit */unsigned int) 2147483647)))))))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((arr_11 [i_3]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
    }
}
