/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198024
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_12 -= ((/* implicit */unsigned char) (-(var_1)));
                    arr_8 [i_0] [i_1 + 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))));
                }
                /* LoopNest 3 */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (int i_4 = 3; i_4 < 21; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) var_4);
                                arr_22 [i_0] [i_1] [i_0] [i_1] [16ULL] = ((/* implicit */int) min((var_1), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_3 - 1] [i_0] [i_5])) : (var_10)))) ? (((((/* implicit */long long int) var_6)) / (var_1))) : (((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */long long int) var_0))))))));
                                arr_23 [(signed char)13] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) (signed char)-114);
                                arr_24 [i_1] [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 9223372036854775799LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-4)))) / (((/* implicit */int) (_Bool)1))))), (max((((((/* implicit */_Bool) var_1)) ? (var_8) : (var_6))), (((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_2)))))));
                                var_13 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_11 [i_1] [i_4 + 2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_1)))) : (((((/* implicit */long long int) var_8)) + (7154231003513006443LL)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) 2450542561U))));
                            var_15 = ((/* implicit */int) ((max(((!(((/* implicit */_Bool) var_3)))), ((!(((/* implicit */_Bool) arr_9 [i_1])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [(signed char)8] [i_0] [i_0])) / (((/* implicit */int) (signed char)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-85)) && (((/* implicit */_Bool) var_7))))) : (((int) var_1))))) : ((((-(var_6))) >> (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_6])) : (((/* implicit */int) (signed char)-116)))) + (10480)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((unsigned int) var_8)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_8)))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)9))) * ((+(var_6)))))) : (var_7)));
    var_17 -= ((/* implicit */unsigned int) var_5);
}
