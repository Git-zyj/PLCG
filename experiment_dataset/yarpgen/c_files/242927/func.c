/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242927
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
    for (short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) max(((-(arr_1 [i_0 - 1] [i_0 - 1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (1681627947U)))))))));
        arr_3 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_12)), ((-(min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)57937))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            var_13 = ((/* implicit */_Bool) (unsigned short)59130);
            var_14 += ((/* implicit */short) 119358815U);
            var_15 = ((/* implicit */unsigned int) max(((-(min((var_5), (((/* implicit */int) (unsigned short)59106)))))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)59130))) < (arr_5 [i_1] [i_1])))) != (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)59127)))))))));
        }
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        arr_16 [i_0] [i_0] [9U] [(_Bool)1] [i_3] [i_3] = ((/* implicit */signed char) (-(min((((18446744073709551615ULL) & (6287780188633722573ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_13 [(signed char)14] [i_2] [i_3] [i_4])))))))));
                        var_16 ^= ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) 17LL)) * (131071ULL)))));
                    }
                } 
            } 
        } 
        var_17 *= ((max((((/* implicit */long long int) min(((-2147483647 - 1)), (((/* implicit */int) (unsigned short)6397))))), (var_3))) / (((/* implicit */long long int) ((unsigned int) min((1681627966U), (((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_0] [i_0])))))));
    }
    var_18 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 6228301687448650875ULL))))), (((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))), (min((var_9), (var_9)))));
    var_19 = min((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (17925509762778589054ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (8841632608562185107LL)))));
}
