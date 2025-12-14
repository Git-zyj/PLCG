/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44144
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        arr_4 [8ULL] = (!(((/* implicit */_Bool) (unsigned short)24493)));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_8 [8ULL] [i_0 + 3] = ((/* implicit */signed char) var_1);
            var_18 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_16)) * (((/* implicit */int) var_6))))), (min((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) << (((((/* implicit */int) var_2)) - (58)))))), (((arr_0 [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
        }
        for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 1) 
        {
            var_19 = ((/* implicit */_Bool) var_10);
            var_20 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) var_11))), (((((/* implicit */_Bool) arr_6 [(unsigned char)3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_9 [i_0] [(_Bool)1]))))))), (min((min((arr_2 [i_2 + 2]), (arr_3 [i_0]))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_10)), (arr_6 [(short)7]))))))));
        }
        /* LoopSeq 2 */
        for (long long int i_3 = 1; i_3 < 10; i_3 += 1) 
        {
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_9 [i_3 + 1] [i_0 - 1])) < (((/* implicit */int) var_2))))))))));
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (+(((/* implicit */int) min((var_12), (((/* implicit */short) arr_10 [i_3 + 2] [i_0 - 1] [i_0 - 1]))))))))));
        }
        /* vectorizable */
        for (long long int i_4 = 2; i_4 < 10; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 2; i_6 < 8; i_6 += 4) 
                {
                    {
                        arr_22 [0ULL] [i_6] &= ((((/* implicit */int) arr_10 [i_0 + 2] [i_0] [i_4 + 1])) / (((/* implicit */int) var_6)));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (-(var_5))))));
                    }
                } 
            } 
            var_24 &= ((/* implicit */unsigned short) ((1465138903U) <= (2829828380U)));
            /* LoopNest 2 */
            for (short i_7 = 2; i_7 < 10; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_9 [1ULL] [i_8]) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4 - 2]))) : (((arr_7 [i_0] [i_4] [i_4]) & (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                        arr_29 [i_0 + 1] [i_0] [i_0] [i_0] [i_4] = ((((arr_7 [i_0] [i_0] [(signed char)10]) + (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (signed char i_9 = 3; i_9 < 9; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 2; i_10 < 10; i_10 += 4) 
            {
                for (signed char i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    {
                        var_26 = ((/* implicit */short) var_2);
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_14), (var_4))))) : (min((1912787950U), (((/* implicit */unsigned int) (signed char)14))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (arr_13 [i_11])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) arr_35 [i_9 - 2] [i_0 + 1] [i_9] [i_11])))) : (((/* implicit */int) var_1))));
                    }
                } 
            } 
        } 
    }
}
