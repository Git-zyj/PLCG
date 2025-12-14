/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26129
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_18 += ((/* implicit */short) min((max((min((-6961179692220161814LL), (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (4294967295U)))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) + (((/* implicit */int) (short)10594))))), (max((((/* implicit */unsigned int) var_13)), (4294967295U))))))));
                var_19 ^= ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) arr_0 [(unsigned char)2])) <= (((/* implicit */int) arr_0 [(signed char)8]))))), (((((/* implicit */int) var_12)) / (((/* implicit */int) var_6))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_8 [i_4] [i_4] [i_4 + 1])) / (-6961179692220161814LL)))), (max((((/* implicit */unsigned long long int) var_13)), (7869011707231611906ULL)))));
                            arr_14 [i_2] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) var_6)), (1213809288))) & (((/* implicit */int) ((108590271) > (((/* implicit */int) arr_10 [6] [i_4 + 1] [6] [6])))))));
                            arr_15 [(short)12] [i_5] [(signed char)3] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) var_11)), (arr_9 [i_2] [i_5])))) * (((/* implicit */int) min((arr_9 [i_2] [i_3]), ((short)20224))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((min((var_9), (((/* implicit */unsigned int) arr_13 [i_3])))) & (((/* implicit */unsigned int) ((/* implicit */int) min(((short)14176), (arr_9 [i_2] [i_2]))))))))));
                var_22 -= min((max((var_17), (((/* implicit */unsigned long long int) (short)21061)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)20224)) < (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) || (((/* implicit */_Bool) var_16)))))))));
                var_23 = ((/* implicit */signed char) ((((2548470833U) >> (((4234099889U) - (4234099883U))))) & (((3020216571U) >> (((18214846113198794461ULL) - (18214846113198794434ULL)))))));
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) min((min((((/* implicit */int) var_10)), (arr_8 [i_3] [i_3] [i_2]))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (arr_8 [i_2] [i_2] [9])))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        arr_20 [(short)1] = min((((((((/* implicit */int) arr_10 [1] [(short)18] [1] [(short)18])) + (((/* implicit */int) var_2)))) + (((/* implicit */int) arr_5 [i_6] [i_6])))), (((((/* implicit */int) arr_9 [i_6] [i_6])) + (((/* implicit */int) arr_10 [i_6] [i_6] [i_6] [i_6])))));
        arr_21 [i_6] [i_6] = ((/* implicit */short) ((((7433873254365651764ULL) - (((/* implicit */unsigned long long int) 3225878956U)))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32767)) + (((/* implicit */int) (short)-20797)))))));
        arr_22 [i_6] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_6] [i_6] [(short)18] [i_6])) && (((/* implicit */_Bool) min((var_13), (var_15))))))), (min((var_17), (arr_16 [i_6] [i_6])))));
        var_25 *= ((/* implicit */unsigned int) min((((3788171694828661627ULL) * (min((((/* implicit */unsigned long long int) var_10)), (arr_16 [i_6] [(short)5]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_6] [i_6])) ^ (((/* implicit */int) var_15)))))));
    }
}
