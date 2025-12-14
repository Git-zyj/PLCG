/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249079
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (((~(((/* implicit */int) var_6)))) <= (((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (var_7)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))) : (var_7))))))));
    var_12 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_2 [i_0 - 1] [i_1] [(signed char)20])))), (arr_0 [i_0 + 1])))) ? (((((((/* implicit */int) arr_5 [i_0] [(signed char)10] [i_0 + 2])) >> (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) arr_4 [i_1] [i_1] [(unsigned char)0])))) : (min((arr_0 [i_1]), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [20])) : (((/* implicit */int) arr_5 [i_1] [(signed char)16] [(signed char)16])))))))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) arr_1 [(unsigned char)6]))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [i_1]);
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_1] [(unsigned char)10] [i_0])))))));
                                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((~(arr_0 [i_3]))) < (((/* implicit */int) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-60))))) < (var_3))))));
                                arr_16 [i_4] [i_0] [i_3] [(_Bool)1] [i_2] [i_0] [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            {
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_18 [i_0] [i_0] [i_0] [i_0]);
                                arr_27 [i_0] [i_0] = ((/* implicit */signed char) min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_1] [i_0 + 2] [i_0])) ? (((/* implicit */int) var_1)) : (var_2))))));
                                arr_28 [i_0] [i_6] [i_6] [i_0] [i_6] [i_6] [i_6] = ((/* implicit */long long int) arr_2 [i_0] [(_Bool)1] [i_0]);
                                var_16 -= ((/* implicit */unsigned char) (-(arr_17 [i_5] [i_5] [i_5])));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) var_0);
                }
                var_18 = ((/* implicit */signed char) (~(((/* implicit */int) (!((_Bool)1))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_4))));
}
