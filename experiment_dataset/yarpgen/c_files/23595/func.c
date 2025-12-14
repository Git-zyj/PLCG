/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23595
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_19 += ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) / (((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1)))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_15))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_3] [i_3] [(signed char)4] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) 4193792U)), (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (unsigned short)25)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16)))))));
                        var_20 = ((/* implicit */signed char) (-(((((/* implicit */int) (unsigned char)248)) / (((/* implicit */int) arr_7 [i_2]))))));
                        var_21 = ((/* implicit */long long int) arr_8 [i_3] [i_3] [i_0] [i_3] [i_3]);
                        var_22 = ((/* implicit */short) arr_4 [i_0] [i_2] [i_3]);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                for (unsigned int i_6 = 3; i_6 < 17; i_6 += 3) 
                {
                    {
                        var_23 = ((/* implicit */short) arr_12 [i_5] [i_6 + 1] [i_6 + 3] [i_6 - 3]);
                        var_24 |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_1))))), (max((((/* implicit */unsigned int) var_14)), (var_15)))));
                    }
                } 
            } 
        } 
        arr_16 [i_0] = ((/* implicit */_Bool) var_7);
    }
    for (unsigned char i_7 = 3; i_7 < 24; i_7 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_22 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 4193796U)) : (arr_21 [i_8] [4])));
            var_25 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_20 [i_8] [(signed char)23] [(signed char)23])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)124)))) == (((/* implicit */int) arr_18 [i_8]))));
        }
        /* LoopSeq 1 */
        for (signed char i_9 = 4; i_9 < 24; i_9 += 1) 
        {
            var_26 += ((/* implicit */_Bool) (+(arr_21 [(short)24] [i_7])));
            var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_25 [i_7] [i_7]))));
        }
        arr_27 [i_7] [i_7] = ((/* implicit */signed char) (~(max((((/* implicit */long long int) arr_26 [i_7 + 1] [i_7])), (max((((/* implicit */long long int) (unsigned char)0)), ((-9223372036854775807LL - 1LL))))))));
    }
    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)112))) % (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (69805794224242688LL)))) ? ((~(9223372036854775791LL))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (unsigned short)12955)) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */unsigned int) var_11)) : (((unsigned int) var_6))))) ? (var_13) : (var_13)));
    var_30 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */unsigned long long int) var_11)) : (18256304565715166ULL))))), (((/* implicit */unsigned long long int) var_11))));
}
