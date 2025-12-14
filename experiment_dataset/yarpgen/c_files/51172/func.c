/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51172
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) (((-((~(var_2))))) / (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_4))))), (max((((/* implicit */unsigned int) var_7)), (3277565040U)))))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_1 - 3] [i_0 - 1])) | (((/* implicit */int) var_0))))), (arr_0 [i_0 - 1] [i_1 + 1])))) ? (((/* implicit */int) ((signed char) var_9))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_1 + 1] [i_0])), ((unsigned short)15))))));
                var_11 = ((/* implicit */int) (~(max((((/* implicit */long long int) max((arr_5 [i_0] [i_1 - 3]), (((/* implicit */signed char) arr_2 [i_0 + 2] [i_0]))))), (arr_0 [i_0] [i_0 - 1])))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            arr_20 [i_4] [i_4] [i_2] [i_5] [i_4] [i_2] [i_6] = var_9;
                            var_12 ^= ((/* implicit */unsigned int) (short)30877);
                            var_13 ^= ((/* implicit */int) (-((+(arr_16 [i_4] [i_4] [i_4] [i_4] [i_4])))));
                        }
                        for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned short) var_3);
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_12 [i_2]))));
                            var_16 ^= ((/* implicit */unsigned short) ((1017402236U) << ((((+(((/* implicit */int) (signed char)63)))) - (50)))));
                            arr_24 [i_4] [i_4] = ((/* implicit */signed char) (~(1017402271U)));
                        }
                        var_17 |= ((/* implicit */unsigned long long int) arr_19 [i_2] [i_3] [i_3] [i_3] [i_5]);
                        arr_25 [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_2] [i_4]))))) > (562949919866880ULL)));
                        var_18 = ((/* implicit */short) var_3);
                        arr_26 [i_4] [i_2] [i_4] [i_5] = ((/* implicit */unsigned short) ((_Bool) (signed char)-103));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) ((_Bool) arr_7 [i_2] [i_2]));
        var_20 |= ((/* implicit */short) var_9);
    }
    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))))) ? ((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_8]))) : (var_6))) * (((/* implicit */long long int) ((/* implicit */int) (signed char)89))))) : (((long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) (signed char)-106)))))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_28 [6U]))));
        var_23 ^= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [(short)18]))))) / (((/* implicit */int) var_0))));
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_28 [(short)12])), (min((((/* implicit */long long int) var_7)), (var_2)))))) ? (((/* implicit */int) ((_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)59908))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [(unsigned short)8]))))))))));
    }
}
