/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34205
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
    for (signed char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) (_Bool)0);
                arr_6 [i_0] [i_1] = ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)98)) ? (9574818380343286598ULL) : (((/* implicit */unsigned long long int) var_7))))) ? (min((((/* implicit */unsigned int) (unsigned short)50012)), (3467237063U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (unsigned short)6521))))))));
                arr_7 [i_0] [2U] &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)4))))) ? (arr_1 [(signed char)12]) : (((/* implicit */int) arr_4 [(signed char)8] [i_0 - 1] [i_0 - 1])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [12ULL] [i_1] [i_1]))) <= (min((var_2), (((/* implicit */unsigned long long int) (unsigned char)27)))))))));
                arr_8 [i_0] [(unsigned short)1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_0 [i_0]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (signed char)4)) ? (9587971561572994373ULL) : (9587971561572994373ULL)))))) ? (min((arr_1 [i_0]), (((((/* implicit */_Bool) (short)-14614)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_0 [i_0])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((((/* implicit */int) (signed char)127)) | (((/* implicit */int) (short)-14614)))) : (min((2011797998), (((/* implicit */int) (short)0))))))));
            }
        } 
    } 
    var_19 = var_9;
}
