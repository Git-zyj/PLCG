/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231101
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((3752061936267407987LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((unsigned int) arr_7 [i_3 - 1] [i_1 + 1])) : (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_9 [i_0])) * (((/* implicit */int) arr_7 [i_0] [i_0])))))))));
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(unsigned short)10] [(_Bool)1] [i_0] [i_2])) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_9 [i_0]))))) ? (arr_8 [i_1] [i_3]) : (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_1] [(_Bool)1])))))))));
                            var_16 = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [7]);
                        }
                    } 
                } 
                var_17 = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) 54043195528445952ULL))), ((~(((/* implicit */int) (_Bool)1))))));
                arr_15 [i_0] [i_1 + 1] [i_1 + 1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((short) arr_9 [i_0]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1])) : (arr_10 [(unsigned short)3] [(unsigned short)3] [i_2] [i_2])))))), (((-1394069559654220901LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            }
            var_18 = ((/* implicit */short) ((min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), ((-9223372036854775807LL - 1LL)))) > (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_13 [(_Bool)1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_0])))) ^ (((((/* implicit */int) arr_7 [i_1] [i_1])) - (((/* implicit */int) arr_6 [i_0])))))))));
            arr_16 [i_0] [4LL] [i_0] = ((/* implicit */_Bool) ((((arr_6 [i_0]) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(short)3] [i_0] [(_Bool)1] [(short)3]))) | (arr_12 [i_0] [i_0] [i_1 + 1] [i_0] [i_1 - 1] [i_1 - 1] [i_1 + 1]))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_8 [i_0] [i_1])))) ? (((((/* implicit */_Bool) 4294967276U)) ? (3752061936267407987LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)126))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_6 [i_0])))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (long long int i_7 = 2; i_7 < 10; i_7 += 3) 
                    {
                        {
                            arr_24 [i_0] [i_7] [i_7] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_1])) ? (((/* implicit */int) arr_20 [(short)4] [i_1] [(short)4] [i_7 - 1])) : (((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_5] [i_6])) : (((((/* implicit */int) arr_13 [2LL] [2LL] [i_6] [i_7 - 1])) + (((/* implicit */int) arr_22 [i_7] [i_1 + 1] [i_7]))))))));
                            arr_25 [i_1] [i_7] = ((/* implicit */short) max((max((((/* implicit */long long int) arr_7 [i_0] [(short)0])), (((arr_19 [i_6]) & (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0]))))))), (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_0]))));
                        }
                    } 
                } 
            } 
            arr_26 [i_0] = ((/* implicit */short) (((~((~(511804888))))) == (((/* implicit */int) (!(((_Bool) arr_6 [i_0])))))));
        }
        var_19 = (~(((((/* implicit */_Bool) 1694174079)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967271U))));
        var_20 = ((/* implicit */short) (-(((((/* implicit */_Bool) (~(arr_5 [i_0])))) ? (((arr_22 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_13 [10] [i_0] [(_Bool)1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0])))) : (((/* implicit */int) arr_21 [i_0] [i_0]))))));
    }
    var_21 = ((/* implicit */short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_9))))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((int) 5U))), (((unsigned int) var_9))))) : (((((var_8) | (((/* implicit */long long int) ((/* implicit */int) var_11))))) / (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_1)))))));
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */signed char) (!(var_7)))), (var_0)))) && (((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_14)))) && ((!(((/* implicit */_Bool) var_6))))))));
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            {
                arr_32 [i_8] [i_9] |= ((/* implicit */long long int) ((short) (((!(((/* implicit */_Bool) arr_29 [i_8])))) ? (((((/* implicit */int) arr_28 [i_8])) % (((/* implicit */int) arr_31 [i_9])))) : (((/* implicit */int) ((arr_27 [i_8]) || (((/* implicit */_Bool) arr_30 [9LL] [i_9] [i_9]))))))));
                var_23 *= ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (4294967266U)))), (((unsigned long long int) 4294967293U)))) < (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) min((((int) min((var_2), (((/* implicit */long long int) var_0))))), ((+(((int) var_0))))));
}
