/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26550
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
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned int) var_9))), ((-(var_14)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) var_10))))), (min((((/* implicit */long long int) (unsigned short)8)), (7377101563747853744LL)))))))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 2; i_4 < 16; i_4 += 3) 
                        {
                            var_19 -= ((/* implicit */long long int) (-(((/* implicit */int) (signed char)35))));
                            arr_12 [i_0] [i_2] [i_2] [i_1 + 1] [i_1 + 2] [i_0] = (+(-6998486009559820089LL));
                        }
                        var_20 = ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_0] [i_0]);
                        arr_13 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_5 [i_1 + 2] [i_3 + 3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)38)))));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-76))))) ? (var_3) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))))))));
                    }
                    arr_14 [i_0] = ((/* implicit */unsigned long long int) ((max((arr_5 [i_2 + 2] [i_2 + 2] [i_2]), (arr_5 [i_2 + 2] [i_2 + 2] [i_2]))) / (((/* implicit */long long int) ((/* implicit */int) max((arr_8 [i_2 + 2] [i_2 + 2] [i_0] [i_2]), (arr_8 [i_2 + 2] [i_2] [i_0] [15ULL])))))));
                    var_22 = ((/* implicit */unsigned char) (-(min((7885601856785968713LL), (-1160440602691173753LL)))));
                    arr_15 [i_0] [i_1 + 1] [i_0] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1160440602691173763LL))));
                    var_23 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_8 [i_1] [i_1 + 2] [i_0] [i_1])) | (((/* implicit */int) arr_4 [i_1] [i_0])))) > (((/* implicit */int) max((arr_9 [i_1 - 1] [i_1 + 1] [i_2] [i_2 + 2] [i_1 + 2] [i_2]), (((/* implicit */short) var_11)))))));
                }
                /* LoopNest 2 */
                for (long long int i_5 = 4; i_5 < 16; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        {
                            var_24 = max((((/* implicit */int) (unsigned short)1987)), ((-(((/* implicit */int) var_11)))));
                            arr_21 [i_0] [i_1] [i_0] [i_0] [i_6] = ((/* implicit */long long int) (unsigned char)0);
                            var_25 = ((/* implicit */unsigned long long int) ((unsigned char) min((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_0] [i_0] [i_6])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))), (((/* implicit */int) min((arr_16 [i_5]), (var_11)))))));
                            arr_22 [i_0] [i_1 + 1] [12] [i_6] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_1 - 1] [i_1] [i_1 + 2] [i_5 - 3] [i_6] [i_6])) > (((/* implicit */int) ((((/* implicit */int) (unsigned short)44763)) != (((/* implicit */int) arr_8 [i_1 + 1] [i_1] [i_0] [i_5 - 1])))))));
                            var_26 ^= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)41))) : (0LL))))), (((((/* implicit */_Bool) ((short) var_15))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : ((+(1886299916U)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-(var_8)))), (var_6)));
    var_28 = min((((long long int) (unsigned short)63546)), (((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */long long int) var_1)), (-1889191869203594509LL))) : (((/* implicit */long long int) ((/* implicit */int) ((1175953921U) > (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
}
