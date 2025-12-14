/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21769
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
    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) max((var_0), (var_8)))), ((~(var_2))))))));
    var_14 = ((/* implicit */long long int) var_6);
    var_15 = ((/* implicit */signed char) var_12);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_16 = arr_1 [i_0] [i_0];
        var_17 = ((/* implicit */signed char) var_9);
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_18 |= var_5;
        arr_4 [0LL] [i_1] = ((long long int) var_1);
        var_19 ^= ((/* implicit */signed char) var_9);
    }
    for (signed char i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((var_10) <= (((/* implicit */long long int) (+(((/* implicit */int) (signed char)36))))))))));
        var_21 = arr_5 [i_2] [i_2];
        var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_2] [i_2]))))) ? (var_1) : (((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? ((-(arr_6 [i_2]))) : (var_12)))));
    }
    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            var_23 += var_3;
            arr_12 [(signed char)3] = max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_3])) && (((/* implicit */_Bool) arr_7 [i_3]))))), (((long long int) arr_10 [i_3])));
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_5 [i_3] [i_4]), (arr_5 [i_3] [i_4])))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_3])))))));
            var_25 = ((signed char) var_8);
        }
        for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            arr_15 [i_3] [i_3] = ((/* implicit */signed char) (-(var_2)));
            var_26 = ((/* implicit */signed char) ((((max((var_11), (var_5))) > (var_9))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [i_5] [i_5])) : (((/* implicit */int) ((arr_0 [i_3]) > (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5] [3LL]))))))))) : (((long long int) ((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_3])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                for (long long int i_7 = 2; i_7 < 10; i_7 += 3) 
                {
                    {
                        var_27 ^= ((/* implicit */signed char) arr_0 [i_3]);
                        var_28 = ((/* implicit */long long int) var_0);
                        var_29 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) ((arr_11 [i_3] [i_6]) >= (arr_19 [i_3])))) << (((max((var_11), (var_11))) - (7275949266223778973LL)))))) <= (((((/* implicit */_Bool) var_10)) ? (var_1) : (arr_14 [i_7 - 1])))));
                        var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_6), (arr_9 [i_7 - 1] [i_7 - 1] [i_7 - 1]))))));
                    }
                } 
            } 
        }
        for (long long int i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            arr_22 [i_3] [(signed char)0] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3])) || (((/* implicit */_Bool) var_4)))) && (((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) arr_9 [i_3] [i_8] [i_8])))))));
            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_16 [i_8] [i_3] [i_3]) + (9223372036854775807LL))) << (((((((min((9223372036854775807LL), ((-9223372036854775807LL - 1LL)))) - (-9223372036854775792LL))) + (71LL))) - (55LL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_8])) ? (((var_1) ^ (var_12))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3] [i_8]))) : (arr_14 [i_8]))))))));
        }
        var_32 |= ((/* implicit */signed char) ((long long int) ((((/* implicit */int) arr_9 [i_3] [i_3] [i_3])) + (((/* implicit */int) arr_9 [i_3] [i_3] [i_3])))));
        var_33 |= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (var_11) : (arr_0 [i_3]))) < (var_7))))) < (((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_14 [i_3])))));
        arr_23 [i_3] = ((/* implicit */signed char) max((arr_11 [(signed char)6] [i_3]), ((+(arr_13 [i_3] [i_3] [i_3])))));
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            for (signed char i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                for (long long int i_11 = 2; i_11 < 8; i_11 += 1) 
                {
                    {
                        var_34 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_2 [i_11 + 2] [i_11 + 3]))))));
                        arr_32 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) max((((/* implicit */long long int) arr_10 [i_3])), (var_10)));
                        arr_33 [i_11] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_17 [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_2))) : (max((arr_0 [i_10]), (arr_28 [i_3] [i_3] [i_10] [i_11])))))) || (((/* implicit */_Bool) arr_10 [i_3]))));
                    }
                } 
            } 
        } 
    }
}
