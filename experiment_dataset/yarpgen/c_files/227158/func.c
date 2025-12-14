/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227158
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
    var_14 = ((/* implicit */_Bool) var_11);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [(unsigned short)13] [i_2 + 3] [i_2 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_2 + 2] [i_2] [i_2 + 2])), ((~(var_11)))))) || (((/* implicit */_Bool) arr_4 [i_0] [(_Bool)0]))));
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) max((var_15), (arr_5 [i_0] [i_1])));
                                arr_13 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (((~(((/* implicit */int) arr_8 [i_3] [i_3 - 2] [(_Bool)1] [(_Bool)1])))) > ((-(((/* implicit */int) arr_2 [i_1] [i_3]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)22452)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) arr_2 [i_2 + 2] [i_0]))))));
                                var_16 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0] [i_3 + 3] [i_3 + 3] [i_3 + 3] [i_4])) > (((((/* implicit */_Bool) arr_1 [(unsigned char)3])) ? (((/* implicit */int) (unsigned short)43084)) : (((/* implicit */int) var_8))))))), (((long long int) max((((/* implicit */unsigned short) (signed char)-73)), (arr_10 [i_0] [i_0] [(signed char)2] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                    var_17 &= ((/* implicit */_Bool) var_4);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) var_1);
}
