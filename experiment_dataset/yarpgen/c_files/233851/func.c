/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233851
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
    var_10 = (+(((/* implicit */int) var_4)));
    var_11 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_8)) ? ((~(var_7))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        var_12 = ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (arr_0 [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))));
        var_13 &= ((/* implicit */unsigned int) var_5);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 3])));
            var_14 = ((/* implicit */unsigned int) ((arr_1 [1ULL]) + (arr_1 [0ULL])));
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 1143832035247894720ULL)) && (((/* implicit */_Bool) var_1))))) <= ((+(((/* implicit */int) (signed char)-10))))));
            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_3 [i_0 - 3] [i_0 - 3])));
            arr_7 [i_1] = (+(((((/* implicit */unsigned int) var_3)) / (9U))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            var_17 = ((/* implicit */int) (~(((((/* implicit */_Bool) 1078545767U)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) arr_2 [i_0]))))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_18 &= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -6052052309863514428LL)) * (3436623372536355085ULL)))) ? (((/* implicit */unsigned long long int) -2033157326)) : (((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (64653749830650849ULL) : (((/* implicit */unsigned long long int) 1409956291U)))));
                        arr_16 [i_0 - 2] [i_2] [i_0 - 2] [i_4] [i_3] [8U] |= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_15 [i_0 + 1] [i_0] [i_2] [i_3] [i_4])) > (((/* implicit */int) (signed char)127)))));
                        var_19 = ((/* implicit */short) var_1);
                    }
                } 
            } 
            arr_17 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 3])));
            arr_18 [i_0] [i_0] = ((/* implicit */unsigned int) arr_15 [i_0] [8ULL] [i_2] [i_0 - 2] [(_Bool)1]);
        }
    }
    for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        var_20 |= ((/* implicit */unsigned int) ((long long int) ((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)42)))) << (((-2033157326) + (2033157335))))));
        var_21 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_21 [21] [i_5])) ? (arr_21 [i_5] [10ULL]) : (arr_20 [i_5] [i_5])))))));
    }
    var_22 = ((/* implicit */int) ((var_2) - (((/* implicit */unsigned int) (-((((_Bool)1) ? (((/* implicit */int) var_4)) : (var_3))))))));
}
