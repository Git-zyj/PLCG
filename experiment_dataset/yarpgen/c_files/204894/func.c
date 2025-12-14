/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204894
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
    for (signed char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 4; i_3 < 21; i_3 += 4) 
                {
                    {
                        arr_12 [18LL] [i_3] [(signed char)14] [i_1] [i_0] = ((/* implicit */signed char) max((var_6), (((/* implicit */long long int) ((((/* implicit */int) ((signed char) (_Bool)1))) < ((+(((/* implicit */int) var_5)))))))));
                        arr_13 [i_0] [i_1] = ((/* implicit */signed char) ((var_1) ? (-6614386811295959257LL) : (min((((/* implicit */long long int) ((((/* implicit */int) var_5)) < (((/* implicit */int) (_Bool)1))))), (17179865088LL)))));
                        arr_14 [i_2] [i_2] [i_2] [(signed char)5] = min((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_3 [i_0 + 2] [i_2] [i_0 + 2]))))), ((+(arr_9 [i_0 + 1]))));
                        arr_15 [i_0] [i_1] = var_5;
                    }
                } 
            } 
        } 
        var_10 = ((/* implicit */_Bool) max((var_10), (var_1)));
        arr_16 [4LL] = ((/* implicit */signed char) ((((((((arr_9 [(_Bool)1]) + (9223372036854775807LL))) << (((((((/* implicit */int) var_5)) + (115))) - (46))))) / (arr_7 [i_0 + 1] [i_0 + 2] [i_0 - 1]))) - (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) -5287061287610745925LL)) && (var_1))) && (((/* implicit */_Bool) arr_2 [i_0 + 2]))))))));
    }
    var_11 = ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) (_Bool)1))))), ((~(((/* implicit */int) var_7))))))) ? (((var_0) / (((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-98))))))) : (((/* implicit */long long int) ((/* implicit */int) var_7))));
    var_12 = var_2;
    /* LoopSeq 2 */
    for (signed char i_4 = 1; i_4 < 14; i_4 += 2) /* same iter space */
    {
        var_13 = (~(arr_0 [i_4 - 1] [i_4]));
        /* LoopSeq 2 */
        for (signed char i_5 = 1; i_5 < 13; i_5 += 1) 
        {
            arr_23 [(_Bool)1] [(signed char)8] [i_4] |= ((/* implicit */signed char) max(((((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-98)) - (((/* implicit */int) arr_2 [i_4]))))) : (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_4] [i_5] [i_5]))))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)57)) != (((/* implicit */int) ((signed char) var_5))))))));
            var_14 -= ((/* implicit */_Bool) var_2);
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_4))));
            var_16 ^= (signed char)43;
        }
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            for (signed char i_8 = 0; i_8 < 15; i_8 += 1) 
            {
                {
                    arr_31 [i_4] &= ((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (-7523839806320410322LL)))));
                    var_17 |= ((/* implicit */signed char) (_Bool)0);
                }
            } 
        } 
    }
    for (signed char i_9 = 1; i_9 < 14; i_9 += 2) /* same iter space */
    {
        arr_34 [0LL] [i_9] = ((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_18 [i_9 + 1]))))) <= ((~(((long long int) var_4))))));
        arr_35 [(signed char)5] [i_9] = ((/* implicit */signed char) max((((/* implicit */long long int) min(((signed char)-22), ((signed char)-35)))), (arr_6 [i_9 + 1] [i_9 - 1] [i_9])));
    }
}
