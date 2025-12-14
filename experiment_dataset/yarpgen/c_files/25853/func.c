/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25853
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) ((-1799583347) != (((/* implicit */int) (signed char)-82))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_1] [(signed char)1] = ((/* implicit */unsigned char) ((int) min((arr_6 [i_0]), (max((-1799583335), (1799583347))))));
                    arr_10 [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((arr_5 [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ^ (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0]))) : (-5693123943337046716LL))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((arr_4 [i_0] [(signed char)3] [i_0]) || (((/* implicit */_Bool) var_10))))), (min((((/* implicit */unsigned int) (short)15909)), (arr_2 [i_0] [i_0]))))))));
                }
            } 
        } 
    }
    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned short) arr_12 [i_3] [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 17; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                {
                    var_20 = ((((/* implicit */_Bool) var_10)) ? (((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (var_1))) ? (((/* implicit */int) ((unsigned char) arr_19 [i_3] [i_3] [i_5]))) : (arr_17 [i_4 - 3] [i_4 - 2]))) : (((/* implicit */int) (short)-15910)));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned short) ((signed char) arr_26 [i_4 - 3] [i_3] [i_7 - 1]))), (max((((/* implicit */unsigned short) arr_18 [i_3] [i_3] [i_7 + 1])), (arr_13 [i_4 - 1] [i_3])))));
                                arr_27 [i_3] [i_4 - 3] [i_4 - 1] [i_3] [i_6] [i_3] = ((/* implicit */unsigned int) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_22 = ((/* implicit */int) var_13);
}
