/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235107
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) 4279736980U))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned long long int) (~(arr_3 [i_0])));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1])) || (((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 + 1]))));
            var_20 = ((/* implicit */_Bool) var_5);
        }
    }
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (unsigned char i_4 = 3; i_4 < 22; i_4 += 2) 
            {
                {
                    arr_15 [i_2] [i_3] [i_4] = ((/* implicit */_Bool) min((arr_1 [i_4]), ((short)26403)));
                    arr_16 [i_4] [i_2] [i_4] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_2 [i_2] [i_4 - 3])))) ? (-426569138) : (min((((/* implicit */int) (_Bool)1)), (-108420077)))))), (min((((/* implicit */unsigned long long int) min((arr_13 [i_4] [i_3] [i_2]), (((/* implicit */int) arr_7 [i_4]))))), (((var_9) | (1274200737316659360ULL)))))));
                    var_21 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_4 [10ULL]) : (((/* implicit */long long int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-39))))))), (((/* implicit */long long int) var_11)));
                    arr_17 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (unsigned char)148);
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) arr_13 [i_2] [i_2] [i_2]);
    }
    var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) * (0LL)))) ? (var_6) : (((var_17) - (var_2)))))) == (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)15809))) == (var_17))))) | (min((((/* implicit */long long int) var_17)), (var_3)))))));
}
