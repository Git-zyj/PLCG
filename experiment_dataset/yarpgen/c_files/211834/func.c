/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211834
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 |= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_5 [i_0] [i_2])), (((unsigned int) (unsigned short)37283))))), (max((((/* implicit */long long int) (unsigned char)24)), (8750554033476654706LL)))));
                        var_19 *= ((/* implicit */short) min((((arr_8 [i_0] [i_1] [i_2] [i_1]) ? (((/* implicit */unsigned int) 343039774)) : (arr_9 [i_0] [i_2]))), (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_2] [i_3]))));
                    }
                    var_20 |= ((/* implicit */int) arr_0 [i_0] [i_1]);
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 1; i_4 < 13; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            arr_17 [i_0] [i_1] [(_Bool)1] [i_4] [(unsigned char)7] = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) ((short) arr_10 [i_4]))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [6] [i_4]))) > (arr_6 [i_4])))))));
                            var_21 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) min((var_17), (((/* implicit */int) (unsigned char)231))))) + (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)214))) : (arr_3 [i_0] [i_1]))))))));
                        }
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((unsigned int) arr_16 [i_4 - 1] [i_4] [i_4 - 1] [(unsigned char)1] [i_4] [i_4])))));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            arr_20 [i_4] [i_4] = ((/* implicit */signed char) max((min((arr_6 [i_4 + 1]), (arr_6 [i_4 - 1]))), (((((/* implicit */unsigned long long int) 7101091533563219753LL)) & (arr_6 [i_4 + 2])))));
                            arr_21 [i_4] [i_4] [i_1] [i_1] [i_4] [i_4 + 1] [i_1] = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)38887))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)24)) > (((/* implicit */int) (unsigned char)25)))))) : (min((((/* implicit */unsigned int) arr_16 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_6] [i_6])), (arr_18 [i_4 + 1] [i_4 + 1] [i_6] [i_4 + 1] [i_4] [i_6] [i_6]))));
                            arr_22 [i_4] [i_4] = ((/* implicit */unsigned char) min((((((2529325718768488361ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))))) >> (((var_12) - (55050941))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) (signed char)-94)) + (115)))))) ? (((((/* implicit */int) (signed char)91)) % (arr_14 [i_1] [i_1] [i_4]))) : (((/* implicit */int) ((unsigned char) arr_1 [i_2] [i_2]))))))));
                        }
                        arr_23 [i_0] [i_4] [i_2] [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) max((((unsigned short) (unsigned short)53182)), (((/* implicit */unsigned short) ((unsigned char) (unsigned short)53182))))));
                        var_23 &= ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned short)37752)), (893575666U)));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_3)), (var_7)));
    var_25 = ((/* implicit */short) ((_Bool) var_9));
    var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (-7101091533563219753LL))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_16)))) != (min((((/* implicit */unsigned long long int) (unsigned short)12333)), (2560090265765742582ULL)))))))));
}
