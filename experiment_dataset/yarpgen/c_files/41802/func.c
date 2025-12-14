/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41802
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
    for (int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((unsigned int) (unsigned short)65535)), (((((/* implicit */unsigned int) arr_2 [i_0])) ^ (4169488167U)))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) ((unsigned short) (unsigned short)30303)))));
                /* LoopSeq 2 */
                for (signed char i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((int) 66981102U))) & (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 2] [i_2]))) & (arr_8 [i_0 - 1] [i_0 + 1])))))) ? (((((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) (unsigned short)30303)) : (((/* implicit */int) arr_3 [i_0 - 1] [i_1] [i_2 + 1])))) ^ (((/* implicit */int) ((_Bool) (unsigned short)30309))))) : (min((((/* implicit */int) ((unsigned short) (_Bool)1))), (((((/* implicit */int) arr_4 [i_1] [i_2])) + (((/* implicit */int) var_7)))))))))));
                    var_13 = ((/* implicit */_Bool) (signed char)108);
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_8 [i_1 - 3] [i_2 - 1])))) && (((((/* implicit */int) ((((/* implicit */_Bool) 319770963U)) || (var_5)))) == (((/* implicit */int) ((_Bool) var_4)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 8; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) max((min(((signed char)-109), (arr_3 [i_0] [i_1 + 1] [i_3 + 2]))), (((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_2 - 2] [i_4])) <= (((/* implicit */int) arr_3 [i_0 + 1] [i_1 - 3] [i_3 + 2])))))));
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_0 - 1])) <= (((/* implicit */int) arr_13 [i_0] [i_0 - 1]))))) + (((((/* implicit */_Bool) arr_13 [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_13 [i_0] [i_0 - 2])) : (((/* implicit */int) arr_13 [i_0] [i_0 + 1]))))));
                                var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+((-(var_0)))))), (((unsigned int) max(((unsigned short)57022), (((/* implicit */unsigned short) var_1)))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 + 1] [4] [i_1] [i_5] [i_6] [i_6])) ? (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_1])) : (697747889U)))) ? (((/* implicit */int) ((_Bool) 3597219407U))) : (((/* implicit */int) var_5)))), (arr_2 [i_0])));
                        var_19 -= ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_6 [i_0] [(unsigned short)4] [i_1 - 3] [i_6])) == (((/* implicit */int) (unsigned short)41891))))));
                    }
                    var_20 += ((unsigned short) min((((((/* implicit */int) var_3)) + (((/* implicit */int) (signed char)-99)))), (((/* implicit */int) (signed char)108))));
                }
                var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_13 [i_0] [i_1 - 3])) ? (((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_1 - 3] [i_1])) : (var_2))), (((arr_11 [i_0] [i_0 - 2] [i_1 - 2] [i_1 - 3]) ? (((/* implicit */int) arr_11 [i_0] [i_0 - 2] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_11 [(signed char)9] [i_0 - 1] [i_1 + 1] [(signed char)9]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        for (unsigned short i_8 = 2; i_8 < 14; i_8 += 2) 
        {
            for (int i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                {
                    var_22 = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) arr_23 [i_7] [i_7] [i_7])), (var_6))))), (arr_23 [i_8 - 1] [i_8 + 2] [i_8 + 2])));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_25 [i_7]))))) - (((/* implicit */int) arr_22 [(signed char)10]))))) ? (((int) ((unsigned int) var_10))) : (((/* implicit */int) arr_25 [i_9]))));
                    var_24 = ((/* implicit */_Bool) arr_21 [i_9]);
                }
            } 
        } 
    } 
    var_25 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */int) ((var_8) > (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))))) : (((/* implicit */int) var_4))));
    var_26 = ((/* implicit */signed char) var_3);
}
