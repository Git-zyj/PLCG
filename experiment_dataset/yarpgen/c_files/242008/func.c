/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242008
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
    var_15 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((6826939736663337214LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)123)))))) : (((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) var_3)))))), (var_2)));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_8 [10ULL] [i_1 - 1] [i_1] [i_2] [i_2] [i_3 + 1] &= ((/* implicit */unsigned short) min((((1287286023541700064LL) / (((((/* implicit */_Bool) (signed char)5)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-12))))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((signed char) var_8))), (var_0))))));
                            arr_9 [i_0] [i_1 + 1] [4ULL] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (var_9)))), (((unsigned long long int) arr_4 [i_2] [i_3 + 1] [8U] [(unsigned short)11]))));
                            var_16 = ((/* implicit */unsigned int) (+(var_9)));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 2; i_4 < 11; i_4 += 1) 
                            {
                                arr_14 [i_0 + 1] [i_1 - 1] [i_0] [i_3 - 1] [8LL] = (-(((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1 + 1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_6))))));
                                var_17 = ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */long long int) var_3)), (6336115321663345917LL))));
                                var_18 = ((/* implicit */unsigned short) ((((long long int) arr_4 [i_0 + 1] [i_1 - 1] [i_3 - 1] [i_4 - 1])) % (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (arr_11 [i_0 + 1] [i_0 - 2] [i_1 - 1] [i_1 - 1] [i_3 - 1] [i_4 - 2]))))));
                            }
                            var_19 = ((/* implicit */long long int) ((var_13) + (((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */unsigned long long int) min((var_12), (var_12)))) : ((-(var_13)))))));
                        }
                    } 
                } 
                arr_15 [2U] [8ULL] [i_1] &= ((/* implicit */long long int) ((signed char) ((long long int) var_4)));
            }
        } 
    } 
}
