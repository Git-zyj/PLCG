/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199769
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_8))));
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */_Bool) (signed char)46);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        arr_11 [8LL] [i_2] [i_2] [i_3] [i_2 + 1] = (signed char)-47;
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [7ULL])) : (((/* implicit */int) (unsigned char)97))))) ? (((((/* implicit */int) var_8)) / (((/* implicit */int) (unsigned char)226)))) : (((/* implicit */int) (signed char)55))))) ? (((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_1 + 1])))) : (((var_1) ? (((((/* implicit */_Bool) 793034967)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (unsigned short)17))))));
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) arr_10 [i_2] [(signed char)4] [i_0] [i_2 - 2])) ? (((/* implicit */int) (signed char)-75)) : (var_9))))))));
                        arr_12 [i_0] [i_3] &= ((/* implicit */int) min((((long long int) (unsigned short)65518)), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)156)) / (((/* implicit */int) arr_3 [i_2 - 3] [i_1 - 1])))))));
                        arr_13 [i_2] = ((/* implicit */signed char) ((int) (unsigned short)17));
                    }
                    /* vectorizable */
                    for (short i_4 = 2; i_4 < 7; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((unsigned int) arr_8 [i_1 + 1] [i_4 + 1] [i_2] [i_2 - 1] [i_2 - 1] [i_0]))));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4]))) : (-6395534827389012211LL)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)121)))))));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_10))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)130))));
                arr_22 [i_6] [i_5] = ((/* implicit */long long int) arr_17 [i_6] [i_5]);
            }
        } 
    } 
}
