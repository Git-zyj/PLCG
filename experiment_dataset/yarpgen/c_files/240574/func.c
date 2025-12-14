/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240574
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 7; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_2] [i_2 - 2] [i_2] [i_2 - 1])) : (((/* implicit */int) arr_0 [i_1 + 1] [(unsigned char)9]))));
                            var_21 = ((/* implicit */unsigned short) arr_2 [i_0]);
                            var_22 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)61476)) / (((/* implicit */int) arr_5 [i_0] [i_2] [i_0])))) > (((/* implicit */int) ((_Bool) arr_11 [2U] [i_1] [i_1 - 2] [i_1] [i_1])))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_1 - 2] [i_1 - 2] [i_2 - 3])) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4064)) && (((/* implicit */_Bool) (unsigned short)61465))))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_2] [i_2])) : (((/* implicit */int) (unsigned short)61471))))));
                        }
                        var_24 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_1 - 1] [i_2] [i_3] [(signed char)0])) ? (((/* implicit */int) arr_5 [i_0] [i_3] [i_3])) : (((/* implicit */int) (unsigned short)0))))) || (((/* implicit */_Bool) (unsigned short)65517))));
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 3; i_5 < 9; i_5 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned short) (_Bool)0);
                            var_26 += ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))));
                            var_27 = arr_10 [(_Bool)1] [i_2] [i_2];
                        }
                        for (signed char i_6 = 2; i_6 < 9; i_6 += 3) 
                        {
                            var_28 = ((/* implicit */_Bool) ((arr_16 [i_6 - 2] [i_1 + 2]) ? (((/* implicit */int) arr_16 [i_0] [i_0])) : (((/* implicit */int) arr_16 [i_0] [i_0]))));
                            var_29 = ((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_3] [i_3]);
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (~(arr_13 [i_0] [i_2 - 3] [i_3] [i_6]))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)61478)) != (((/* implicit */int) (_Bool)0))));
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 2511784322U)) != (var_10)))) ^ (((/* implicit */int) arr_1 [i_1 - 1]))));
                            var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 - 3])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (arr_4 [i_1] [i_3] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
                        }
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_3] [i_2] [i_2 - 3] [i_2] [i_1] [(signed char)4])) - (((/* implicit */int) (_Bool)1))))) > (arr_8 [i_1 + 2] [i_1 - 1] [i_1 + 3])));
                    }
                } 
            } 
        } 
        var_35 -= ((/* implicit */long long int) ((arr_16 [i_0] [i_0]) ? (((/* implicit */int) arr_16 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)0))));
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4))) + (var_3)));
        var_37 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4))) * (0U)))) / (((var_12) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    var_38 = ((/* implicit */signed char) ((((((/* implicit */int) max((var_18), (((/* implicit */unsigned short) (_Bool)1))))) <= (((/* implicit */int) var_13)))) ? ((~(((/* implicit */int) ((((/* implicit */int) var_18)) != (((/* implicit */int) (_Bool)0))))))) : (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) var_11)), (var_3)))))));
}
