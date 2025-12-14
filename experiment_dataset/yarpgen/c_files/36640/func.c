/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36640
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
    var_14 = ((/* implicit */unsigned int) ((var_6) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_9))) ? (var_0) : (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) (_Bool)1))))))))));
    var_15 = (-(((/* implicit */int) ((((/* implicit */_Bool) max((3139305067U), (((/* implicit */unsigned int) (_Bool)1))))) || (((/* implicit */_Bool) var_8))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [5] [5] = ((/* implicit */unsigned short) min(((~(max((var_7), (var_8))))), (((arr_2 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0 + 1]), (((/* implicit */short) var_12))))))))));
                    var_16 -= ((/* implicit */unsigned int) ((((/* implicit */int) max((var_12), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [3]))) <= (9049107032060195272ULL)))))) >> (((arr_4 [i_0 - 1] [(short)0] [i_1]) - (11415282474731076911ULL)))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(4292870144U)))) ? (((((((/* implicit */int) (signed char)-53)) < (((/* implicit */int) (unsigned char)74)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53))) : (((9786627940446323601ULL) << (((((/* implicit */int) (unsigned short)21297)) - (21292))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        arr_11 [7ULL] [i_2] [8] [5] &= ((/* implicit */short) ((((/* implicit */_Bool) 1341659129)) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) (_Bool)1))));
                        var_18 *= ((/* implicit */short) (((((-(var_8))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)74))))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned char)2] [i_3])) ? (((/* implicit */int) arr_6 [i_0] [7LL] [i_2] [i_3])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (-1))) : (((/* implicit */int) arr_1 [i_0 - 1])))))));
                        var_19 = ((/* implicit */unsigned short) (~(var_0)));
                    }
                    for (short i_4 = 2; i_4 < 8; i_4 += 1) 
                    {
                        arr_16 [2] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (min((2199019061248ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) >> (((max(((-(((/* implicit */int) (unsigned short)58105)))), (((((/* implicit */int) (unsigned short)44238)) + (((/* implicit */int) var_11)))))) - (26141))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)231)) & (((/* implicit */int) (short)26720))));
                    }
                }
            } 
        } 
    } 
}
