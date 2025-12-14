/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23400
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
    var_16 = ((/* implicit */long long int) var_12);
    var_17 = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (short)16604)) : (((/* implicit */int) var_14)))))) | (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((unsigned short) (unsigned short)54627))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (var_11))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 1648307547191068734LL)) ? (((1308753800130526382LL) - (((((/* implicit */_Bool) var_8)) ? (1648307547191068734LL) : (((/* implicit */long long int) ((/* implicit */int) (short)11922))))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) - (((/* implicit */int) (signed char)-17)))))));
                var_19 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (short)-2048)))) << (((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) - (((/* implicit */int) (unsigned short)45677))))), (max((((/* implicit */unsigned long long int) (unsigned short)248)), (5723150795993925385ULL))))) - (5723150795993925373ULL)))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 6; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) arr_0 [i_0] [i_1 + 1]);
                                var_21 = ((/* implicit */short) ((((/* implicit */int) (short)11103)) ^ (((/* implicit */int) (unsigned char)52))));
                                var_22 = ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_1)))));
                                var_23 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2255)) ? (((/* implicit */int) (unsigned short)21)) : (((/* implicit */int) (unsigned short)6))))) ? (((/* implicit */int) (unsigned short)13625)) : (((/* implicit */int) min(((unsigned short)18), ((unsigned short)6622))))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_2] [i_2])) && (((/* implicit */_Bool) (short)24408)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (-2134887804) : (((/* implicit */int) (signed char)4))))))) || ((!(((((/* implicit */_Bool) (unsigned char)181)) && (((/* implicit */_Bool) 0))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] = ((/* implicit */int) max(((~(((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [2ULL] [i_0]))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) var_13))))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_5 = 1; i_5 < 12; i_5 += 4) 
    {
        arr_16 [(short)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */int) arr_14 [i_5 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) 25353521)))))));
        arr_17 [i_5] [i_5 - 1] |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_15)) ? (((((-5399880722006919516LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)30641)) - (30641))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) var_0))))))));
    }
}
