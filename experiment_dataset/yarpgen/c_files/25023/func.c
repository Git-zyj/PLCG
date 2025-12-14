/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25023
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
    var_18 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) var_2)) * (((/* implicit */int) (unsigned short)1353)))) : (((/* implicit */int) var_7)))), (((/* implicit */int) (signed char)-110))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                var_19 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (arr_3 [i_0] [(unsigned short)6]) : (arr_3 [i_1] [i_0]))));
                var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_6 [i_1] [i_1] [i_1])), (max((arr_8 [(signed char)3] [(signed char)3] [i_2]), (((/* implicit */short) var_5)))))))) - ((((_Bool)1) ? (7981572588385089312ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1353))))));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [(signed char)7]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4] [i_1] [i_0]))) & (var_14)))))), (min((((/* implicit */unsigned long long int) ((unsigned short) (signed char)-42))), (((arr_14 [i_0] [i_1] [1LL] [i_3] [i_2] [i_3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64182)))))))));
                            var_22 *= min((((/* implicit */short) var_17)), ((short)-24678));
                        }
                    } 
                } 
            }
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */short) var_0)), ((short)19423)))), (((((/* implicit */_Bool) (unsigned short)64182)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_1] [i_1])) == (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1] [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
        }
        for (short i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                for (int i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    {
                        var_24 = ((/* implicit */long long int) var_4);
                        var_25 ^= var_7;
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (+(max((min((arr_11 [i_0] [i_5] [i_6] [i_6] [i_0] [i_6]), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_22 [i_0] [i_0] [i_5] [i_6] [i_7])), (var_2)))))))))));
                        arr_24 [i_0] [i_5] [i_6] [i_7] = ((/* implicit */signed char) min((((/* implicit */short) var_2)), (arr_12 [i_7] [i_5] [i_5] [i_7] [i_7] [i_7])));
                    }
                } 
            } 
            arr_25 [i_5] [i_5] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_3 [i_0] [i_5])) ? (arr_3 [i_0] [i_0]) : (var_6))), (arr_3 [i_0] [i_5])));
            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (285418227044804306LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */int) var_0)) & (((/* implicit */int) var_1)))) : (((/* implicit */int) var_2))))) <= (((((/* implicit */_Bool) min(((unsigned short)64182), (((/* implicit */unsigned short) var_12))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)64209)), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3)))))))))));
        }
        var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) * (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (6848044561051116033ULL)))) ? (((((/* implicit */int) (short)1)) >> (((arr_20 [i_0] [i_0]) - (13165876969681671059ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1358)))))))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                {
                    var_29 *= ((/* implicit */short) var_12);
                    arr_30 [(unsigned short)4] [(short)8] [0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((~(((/* implicit */int) arr_18 [(short)2])))) <= (((/* implicit */int) (unsigned short)65531)))))) == (max((((/* implicit */unsigned long long int) arr_11 [(unsigned short)4] [i_8] [i_8] [i_9] [i_8] [i_8])), (((((/* implicit */_Bool) (short)13700)) ? (arr_14 [i_0] [i_0] [(signed char)4] [i_0] [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                }
            } 
        } 
    }
}
