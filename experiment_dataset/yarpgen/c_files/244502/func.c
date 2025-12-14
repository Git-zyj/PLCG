/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244502
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
    var_17 = ((((/* implicit */int) ((((var_8) > (((/* implicit */unsigned int) -907172209)))) || (((/* implicit */_Bool) var_2))))) + (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned char)1))))));
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3458210592U)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((((var_15) * (((/* implicit */long long int) 0)))) > (var_11)))))))));
    var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))), (var_10)));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((-(-1300676960))))))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (signed char)0))));
        arr_3 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) max((min((((/* implicit */int) max(((_Bool)0), (arr_1 [i_0])))), (((((/* implicit */int) (signed char)(-127 - 1))) & (arr_2 [i_0] [i_0]))))), (((arr_2 [i_0] [i_0]) >> (((4833197162497858357LL) - (4833197162497858330LL)))))))) : (((/* implicit */unsigned char) max((min((((/* implicit */int) max(((_Bool)0), (arr_1 [i_0])))), (((((/* implicit */int) (signed char)(-127 - 1))) & (arr_2 [i_0] [i_0]))))), (((((arr_2 [i_0] [i_0]) + (2147483647))) >> (((4833197162497858357LL) - (4833197162497858330LL))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */signed char) arr_4 [i_0] [1LL] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) (~(((((/* implicit */int) arr_4 [i_0] [i_2 + 1] [i_0])) ^ (((/* implicit */int) arr_4 [i_0] [i_2 + 1] [i_0]))))));
                                var_23 = ((/* implicit */long long int) ((0) << (((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [(_Bool)1])) < (((/* implicit */int) var_5))))) * (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)53843))))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned long long int) min((1300676960), (((/* implicit */int) arr_14 [i_0] [(signed char)7] [i_0]))))), (((((/* implicit */unsigned long long int) 4346513879431629948LL)) / (var_10)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_5 = 2; i_5 < 16; i_5 += 4) 
    {
        var_24 = ((/* implicit */unsigned int) (+(arr_16 [i_5 - 2] [i_5 - 1])));
        arr_19 [i_5] = ((arr_16 [i_5] [i_5]) << (((/* implicit */int) (_Bool)1)));
    }
    var_25 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_14)), (((((/* implicit */_Bool) min((14753004545230082246ULL), (((/* implicit */unsigned long long int) 0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)105))) : (0U)))));
}
