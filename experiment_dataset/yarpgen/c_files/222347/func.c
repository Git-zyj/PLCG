/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222347
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
    var_10 = ((/* implicit */unsigned long long int) var_2);
    var_11 = ((/* implicit */unsigned long long int) ((int) (-(max((var_0), (var_1))))));
    var_12 *= (-(max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_3)) : (var_4))), (min((var_9), (var_4))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) 29981988))));
        var_14 *= arr_2 [(_Bool)0] [i_0];
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((arr_0 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))) : (arr_3 [i_0])));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                var_15 &= ((/* implicit */int) ((unsigned char) arr_1 [i_1] [i_0]));
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) > (arr_1 [i_0] [i_0])))) : ((-(-29981998)))));
                var_17 ^= ((/* implicit */signed char) (-(4607744053922939493ULL)));
                var_18 = ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) % (var_1)))) | (((arr_8 [i_0] [i_1]) ? (549751619584ULL) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])))));
            }
            var_19 *= ((/* implicit */signed char) 10215972223737586267ULL);
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    {
                        var_20 ^= ((((/* implicit */_Bool) 3675947402026887842ULL)) ? (2251662374731776ULL) : (((/* implicit */unsigned long long int) (+(503316480)))));
                        arr_17 [i_0] [i_1] [(unsigned char)0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_4])) ? (((/* implicit */int) arr_13 [i_4] [4] [4] [i_0])) : ((+(((/* implicit */int) arr_0 [i_1]))))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) var_7)) : (arr_2 [i_4] [i_0])));
                    }
                } 
            } 
        }
        for (int i_5 = 2; i_5 < 8; i_5 += 1) 
        {
            arr_22 [i_0] = ((/* implicit */int) (-((-(arr_3 [i_0])))));
            var_22 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) var_3)) & (arr_2 [i_0] [i_5 + 3]))));
        }
    }
    var_23 = min((((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_4)))) ? (min((((/* implicit */unsigned long long int) var_1)), (13888131550748444538ULL))) : (((((/* implicit */_Bool) var_5)) ? (0ULL) : (((/* implicit */unsigned long long int) var_1)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))));
}
