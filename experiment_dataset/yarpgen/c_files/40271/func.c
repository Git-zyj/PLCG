/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40271
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            arr_4 [7U] [i_1] = ((/* implicit */unsigned long long int) (short)-4025);
            arr_5 [6LL] [i_1] [i_0] = ((/* implicit */_Bool) (short)-25228);
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */unsigned char) (signed char)-115)), ((unsigned char)0)))))));
                var_18 -= ((/* implicit */unsigned short) (short)511);
                var_19 += ((/* implicit */unsigned char) max((((/* implicit */signed char) (_Bool)1)), ((signed char)77)));
                arr_10 [i_1] [i_1] [(unsigned char)11] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((arr_6 [i_1] [10U] [i_0]) - (((/* implicit */long long int) -148128204))))) ? (max((((/* implicit */unsigned long long int) var_8)), (var_1))) : (((/* implicit */unsigned long long int) var_10)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))))));
                var_20 -= ((/* implicit */short) arr_2 [i_2]);
            }
            for (int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                arr_15 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(short)8] [i_1] [i_3] [(signed char)2])))))));
                arr_16 [10U] [i_1 - 1] [i_1] [i_3] = ((/* implicit */_Bool) max((((((/* implicit */long long int) -572494984)) / (arr_6 [i_1] [i_1 - 1] [i_1 - 1]))), (min((((/* implicit */long long int) (unsigned short)3)), (arr_6 [i_1] [i_1 - 1] [i_1 + 2])))));
                arr_17 [i_0] [11U] [i_1] [(signed char)0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_1] [i_1 + 1] [i_1 + 2])))) * (max((var_9), (((/* implicit */unsigned long long int) arr_0 [i_1 + 1] [3U]))))));
            }
        }
        arr_18 [6] [i_0] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [(unsigned char)4])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_14 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 11287656718084794582ULL))))) : (((/* implicit */int) arr_8 [12] [i_0] [i_0] [i_0]))))), (min((min((((/* implicit */unsigned long long int) (short)-512)), (arr_12 [i_0] [i_0] [6ULL] [i_0]))), (var_3))));
        arr_19 [2U] = ((/* implicit */int) (short)-4015);
        var_21 -= ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-4025)) / (((/* implicit */int) (signed char)-76)))) % (((/* implicit */int) max((arr_14 [i_0]), (arr_13 [4ULL] [i_0] [i_0]))))));
    }
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((unsigned char) var_8)))));
    var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)77)) << (((/* implicit */int) ((((/* implicit */_Bool) 2097151U)) || (((/* implicit */_Bool) var_3)))))))) ? (((var_3) % (var_1))) : (((/* implicit */unsigned long long int) var_6))));
}
