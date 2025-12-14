/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45769
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
    var_16 = max((((((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)61))))) % (((/* implicit */unsigned long long int) ((long long int) var_4))))), (((/* implicit */unsigned long long int) var_9)));
    var_17 *= max((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4922474444781889526LL))))), (((unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) 1427772241)));
    var_18 ^= ((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_4)))))))) : (((((11253812336064985756ULL) + (((/* implicit */unsigned long long int) -4922474444781889526LL)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_2] [i_0] [4ULL] = ((unsigned long long int) (((~(((/* implicit */int) var_9)))) | (((((/* implicit */int) var_10)) ^ (arr_0 [i_3])))));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_3 [8LL] [1ULL])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) : (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [9ULL] [1] [i_2] [i_2] [i_2] [i_2])) != (((/* implicit */int) (short)-31054)))))) + (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) arr_0 [i_0])) : (var_8))))))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -4922474444781889526LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_0] [4U] [i_1] [i_1])))) > (((/* implicit */int) max((var_14), (((short) (_Bool)0))))))))));
        }
        for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                arr_15 [i_0] [i_4] [i_4] [6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0] [i_0])) * (((/* implicit */int) arr_4 [i_0] [i_4] [i_4]))))) || (((/* implicit */_Bool) ((arr_12 [i_5] [i_4] [(signed char)9]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))) <= (max((((((/* implicit */int) var_15)) & (((/* implicit */int) var_11)))), (arr_7 [i_5] [i_4] [i_4] [7ULL])))));
                var_21 = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_4] [i_5]);
            }
            var_22 = (+(274877906943ULL));
            arr_16 [i_4] [i_4] [i_0] = ((/* implicit */long long int) ((unsigned char) (~((+(var_12))))));
            var_23 = arr_6 [i_0] [i_0];
        }
        var_24 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & (0ULL)))));
    }
}
