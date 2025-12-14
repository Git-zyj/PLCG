/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233578
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
    for (unsigned int i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    var_16 *= ((/* implicit */_Bool) max(((~(max((((/* implicit */long long int) (_Bool)0)), (var_0))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0 - 4] [i_0 - 4] [i_0 - 2] [i_2])) && (((/* implicit */_Bool) 41561806885186500LL)))))));
                    var_17 = ((/* implicit */long long int) min((min((arr_7 [i_0 - 4] [i_1] [i_0 - 4]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_2])))), (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_2])) ? (((/* implicit */unsigned long long int) arr_4 [i_0 + 2] [i_0 - 3])) : (arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 2])))));
                }
                for (signed char i_3 = 3; i_3 < 14; i_3 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        arr_15 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_8 [i_0 - 4] [i_3 - 1] [i_3 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (13130612211126972476ULL)))));
                        var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((signed char)(-127 - 1)), (arr_2 [i_0 - 1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [14ULL] [i_3])) ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))), (((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)(-127 - 1)))))) / (max((((/* implicit */unsigned int) (_Bool)1)), (arr_9 [i_4] [i_0] [i_0])))))));
                    }
                    arr_16 [i_0] [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_0 [i_3 - 3]) + (9223372036854775807LL))) << (((arr_6 [i_0] [i_0] [i_0 - 1] [i_0 - 1]) - (4264272251U)))))) ? (((/* implicit */long long int) (~((-(var_14)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [3LL] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26247))) : (arr_7 [i_0] [i_1] [i_3])))) ? (-1645162411222718518LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1])))))));
                }
                for (signed char i_5 = 3; i_5 < 14; i_5 += 3) /* same iter space */
                {
                    var_19 *= ((/* implicit */unsigned long long int) ((((((((/* implicit */long long int) arr_9 [(short)11] [i_1] [(short)11])) / (arr_18 [i_0] [i_0 + 1] [i_0]))) == (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8)))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_18 [i_0 - 4] [i_1] [i_5 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) arr_2 [i_1]))))));
                    var_20 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */unsigned int) var_14)) ^ (arr_5 [i_0]))));
                }
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) (short)623))))))));
                    var_22 -= ((/* implicit */_Bool) (-((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (628064573U)))))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3466547559593511216LL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)117))))) : (-1645162411222718518LL)))) ? (-915162828) : (((/* implicit */int) var_5))));
}
