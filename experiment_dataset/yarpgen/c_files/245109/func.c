/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245109
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(min((4142686738003106623ULL), (((/* implicit */unsigned long long int) (unsigned char)155))))))) ? ((~(((/* implicit */int) (signed char)15)))) : (((/* implicit */int) (signed char)-63))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        arr_9 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)217))) : (var_14)));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-106)) ? (arr_7 [i_0] [i_0] [i_2] [i_2] [i_2]) : (var_9)));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        var_22 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)21))));
                        arr_13 [i_0] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14257467070435509546ULL)) ? ((~(-1LL))) : (((((/* implicit */long long int) ((/* implicit */int) var_12))) - (arr_1 [i_0] [i_4])))));
                        arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_11))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 19; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_24 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 12071021920068462287ULL))));
                                var_25 ^= ((/* implicit */signed char) ((-4588124160383911100LL) > (((/* implicit */long long int) (+(((/* implicit */int) var_17)))))));
                                arr_21 [i_2] [i_1] [i_2] = (signed char)-120;
                            }
                        } 
                    } 
                }
                for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    arr_24 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) var_17);
                    var_26 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 7597796447972963400ULL)) ? (var_3) : (((/* implicit */int) (signed char)-123))))) ? (((/* implicit */unsigned long long int) 5781130237595624946LL)) : (min((25ULL), (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) (!(((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]) > (((/* implicit */unsigned long long int) var_3)))))))));
                    arr_25 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((arr_11 [i_0] [i_0]) + (max((((/* implicit */long long int) (signed char)-41)), (2199023255551LL)))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (8514854310472194521ULL))) >> (((9691149495798820483ULL) - (9691149495798820422ULL)))))));
                    var_27 = ((((/* implicit */_Bool) 11293143055115345426ULL)) ? (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 9223372036854775807ULL)) ? (18010018924654215293ULL) : (((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_3)) + (arr_23 [i_1] [i_1] [i_7])))))) : (min((((/* implicit */unsigned long long int) max((-1), (((/* implicit */int) (unsigned char)15))))), ((~(arr_16 [i_7] [i_1] [i_7] [i_1]))))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) min((var_15), (max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) <= (var_1)))))))))));
    var_29 = ((/* implicit */long long int) (+(var_13)));
    var_30 = ((/* implicit */unsigned int) ((signed char) var_1));
}
