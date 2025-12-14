/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41583
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */_Bool) 6680648908520276210LL)) ? (-6680648908520276210LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-17806))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) -472123838880734936LL);
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] = ((/* implicit */int) var_8);
                            arr_11 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) 4294967286U))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_3 + 2] [i_2 + 2])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2 - 1] [i_0] [i_2 + 2] [i_0]))))));
                        }
                    } 
                } 
                var_12 ^= arr_6 [i_0] [i_0] [i_0];
                /* LoopSeq 1 */
                for (signed char i_4 = 3; i_4 < 18; i_4 += 2) 
                {
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1169017700U)) ? (6680648908520276201LL) : (((/* implicit */long long int) 11U))))) ? (min((((/* implicit */unsigned int) (short)461)), (4294967286U))) : (((((/* implicit */_Bool) var_6)) ? (arr_7 [i_4 + 4] [i_4 - 2] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                    var_14 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (signed char)98)), (-6680648908520276215LL)));
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) (signed char)45);
                        arr_18 [i_0] [i_0] [i_0] [i_5] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (var_7) : (((/* implicit */unsigned long long int) 4294967273U))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_12 [i_4 + 1] [i_4 - 3] [i_0] [i_0]))))) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (short)21062))));
                        var_15 -= ((((((/* implicit */_Bool) 4294967293U)) && ((!(((/* implicit */_Bool) (short)14)))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)3897)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (1512420760U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)93))));
                    }
                    arr_19 [i_0] = (!((_Bool)1));
                }
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (0U)));
            }
        } 
    } 
}
