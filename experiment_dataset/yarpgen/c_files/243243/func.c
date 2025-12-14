/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243243
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned char)0)))))));
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [12LL])), (arr_2 [i_0] [(short)18] [i_0])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [16U])))))) >= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28036))) : (13517697323603205895ULL)))))) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
                arr_4 [16LL] &= ((/* implicit */unsigned char) min(((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) > (var_9)))))), (((/* implicit */int) arr_0 [i_0] [i_0]))));
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) + (((long long int) ((((/* implicit */_Bool) 4929046750106345720ULL)) ? (4929046750106345726ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)176))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        arr_8 [(unsigned char)16] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
        arr_9 [i_2] [(unsigned char)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)154)) && (((((/* implicit */int) arr_7 [(unsigned char)7] [i_2])) != ((+(((/* implicit */int) var_18))))))));
    }
}
