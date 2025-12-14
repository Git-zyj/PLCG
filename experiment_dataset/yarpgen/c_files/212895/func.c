/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212895
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
    var_16 &= ((/* implicit */unsigned int) var_2);
    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */short) ((((/* implicit */int) var_14)) == (((/* implicit */int) var_7))))), (var_7)))), (((var_6) / (((long long int) var_5))))));
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_1))));
    /* LoopSeq 4 */
    for (long long int i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0 - 2] = ((/* implicit */unsigned int) ((min((max((72022409665839104ULL), (2111579020547352552ULL))), (min((arr_1 [i_0]), (arr_1 [i_0 - 4]))))) & (arr_1 [i_0])));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (max((((/* implicit */unsigned long long int) (-(arr_0 [i_0])))), ((+(arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) ((var_6) * (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (arr_0 [i_0 + 2]))))))));
    }
    for (long long int i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        var_20 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 + 1]))))));
        var_21 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) (+(2111579020547352573ULL)))))));
        var_22 = ((/* implicit */long long int) ((_Bool) ((_Bool) arr_4 [i_1 + 1])));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_23 = (!(((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_2 - 1] [i_2 - 1] [(_Bool)1]))));
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_6 [i_2 - 1]), (((/* implicit */unsigned int) arr_10 [i_2 - 1] [(_Bool)1] [i_3]))))) ? ((+(((arr_7 [i_3]) * (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))))))) : (((long long int) 10478891673243421130ULL))));
            /* LoopSeq 2 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                var_25 = ((min((((2111579020547352584ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_3] [i_4]))))), (((/* implicit */unsigned long long int) arr_11 [i_4 - 1])))) >> (((max((arr_11 [i_2 - 1]), (((/* implicit */unsigned int) ((arr_8 [i_2]) && (arr_9 [i_2])))))) - (3153212822U))));
                var_26 = ((/* implicit */long long int) min((max((arr_11 [i_2]), (((var_15) ? (arr_6 [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))))))), (max((arr_11 [i_4 - 1]), (arr_11 [i_4 - 1])))));
            }
            for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                arr_16 [i_5] &= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_5])) || (((/* implicit */_Bool) arr_12 [i_5])))))));
                arr_17 [i_2] = ((/* implicit */unsigned char) arr_12 [i_2]);
                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) min((min((((arr_13 [i_5] [i_3] [i_2 - 1]) / (((/* implicit */unsigned long long int) arr_6 [i_3])))), (((/* implicit */unsigned long long int) arr_12 [i_5])))), (((/* implicit */unsigned long long int) (+(min((652729058863316717LL), (-22LL)))))))))));
                /* LoopSeq 2 */
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    var_28 = ((/* implicit */_Bool) (+((+(((((/* implicit */_Bool) arr_7 [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2 - 1] [i_2] [17U]))) : (var_13)))))));
                    arr_20 [i_2] [i_2] [i_3] [i_3] [13LL] [i_6] = ((/* implicit */_Bool) arr_13 [i_2 - 1] [i_3] [i_5]);
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2 - 1] [i_5] [18LL]))) / (max((9223372036854775790LL), (9223372036854775790LL)))));
                    var_30 = ((unsigned long long int) min((((/* implicit */unsigned long long int) ((-9223372036854775801LL) != (arr_7 [i_2 - 1])))), (arr_13 [i_6] [i_5] [i_2 - 1])));
                }
                for (long long int i_7 = 3; i_7 < 20; i_7 += 3) 
                {
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (+(-9223372036854775801LL)))) ^ ((-(var_12))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_2 - 1] [i_3] [i_5] [i_7 - 1] [i_5])) & (((arr_18 [i_2] [i_5] [i_7 - 3]) ? (((/* implicit */int) arr_12 [i_5])) : (((/* implicit */int) var_8))))))))))));
                    var_32 = (!((_Bool)1));
                    var_33 *= ((/* implicit */unsigned char) max((((arr_13 [i_7 - 1] [i_7] [i_7]) | (((/* implicit */unsigned long long int) arr_7 [i_2])))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(arr_11 [i_2 - 1])))), (((long long int) 2111579020547352586ULL)))))));
                }
            }
            var_34 -= ((/* implicit */unsigned long long int) var_0);
            arr_23 [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_22 [i_2 - 1]) || (arr_18 [i_3] [i_2] [i_2 - 1])))), ((((-(arr_13 [i_2] [i_2 - 1] [i_3]))) & (((/* implicit */unsigned long long int) ((long long int) var_11)))))));
        }
        for (short i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            var_35 = ((/* implicit */unsigned int) ((((unsigned long long int) (!(((/* implicit */_Bool) -1LL))))) < (((/* implicit */unsigned long long int) var_2))));
            var_36 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_2] [i_8] [7ULL] [i_8] [i_2]))) / (var_0)));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_29 [i_2] [i_2] = ((/* implicit */short) max((((((/* implicit */_Bool) min((arr_7 [i_9]), (arr_27 [i_2])))) ? (arr_26 [i_2 - 1]) : (max((((/* implicit */unsigned long long int) var_2)), (arr_28 [i_2 - 1] [i_2 - 1] [i_9]))))), (((/* implicit */unsigned long long int) ((short) (-(arr_26 [i_2 - 1])))))));
            var_37 = ((/* implicit */_Bool) ((arr_7 [(_Bool)1]) << (((/* implicit */int) arr_18 [i_9] [i_9] [i_2]))));
        }
        /* LoopNest 2 */
        for (short i_10 = 2; i_10 < 18; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 2) 
            {
                {
                    var_38 ^= ((((/* implicit */_Bool) -7435300321964998993LL)) && (((/* implicit */_Bool) 412819804U)));
                    var_39 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_31 [i_10]))));
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_40 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) <= (2111579020547352572ULL)));
                        arr_40 [i_2 - 1] [i_2] [i_2] [i_11] [i_12] [i_12] = ((/* implicit */_Bool) ((((_Bool) (!(((/* implicit */_Bool) arr_26 [i_2]))))) ? (arr_27 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_31 [i_11]), (((/* implicit */short) (_Bool)1))))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_25 [i_2 - 1] [i_11])) : (((/* implicit */int) (_Bool)1)))))))))));
                    }
                    var_41 = (-(min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_2]))))), ((-(arr_37 [i_2] [i_10 + 3] [6LL] [i_11] [(_Bool)1]))))));
                }
            } 
        } 
        arr_41 [i_2] [i_2] = (-(((unsigned int) 6376763438090167147LL)));
    }
    for (long long int i_13 = 4; i_13 < 17; i_13 += 4) 
    {
        var_42 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_13] [i_13] [i_13 - 4]))) - (arr_27 [i_13]))));
        var_43 = ((/* implicit */unsigned int) var_9);
    }
}
