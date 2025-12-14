/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214822
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
    var_17 = ((/* implicit */short) ((signed char) var_5));
    var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
    var_19 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) min((((/* implicit */int) var_6)), ((-2147483647 - 1))))) ? (min((var_12), (((/* implicit */int) var_7)))) : (((/* implicit */int) var_7)))));
    var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((((((/* implicit */int) (signed char)-16)) + (2147483647))) >> (((var_3) - (13566419881892237076ULL)))))) < ((~(min((var_14), (((/* implicit */long long int) var_12))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (short i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2199023255296ULL)) ? (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [16ULL] [i_1]))) % (arr_7 [i_1]))), (((((/* implicit */_Bool) (unsigned short)4096)) ? (((/* implicit */unsigned long long int) -1)) : (18446741874686296319ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_11 [6ULL] [i_0 - 1]))))));
                                arr_12 [(unsigned short)17] [(unsigned short)17] [(signed char)18] [(signed char)18] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_2] [i_1])) << (((var_0) - (4721431801716198580LL)))))), (arr_4 [i_0] [i_0] [i_2] [i_3]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    for (short i_6 = 1; i_6 < 22; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            {
                                arr_20 [(signed char)1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1556663821)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_5] [i_6])) : (((/* implicit */int) arr_10 [i_0] [i_6] [i_7]))))) ? (var_14) : (((/* implicit */long long int) min((((/* implicit */int) arr_11 [i_1] [i_1])), (arr_1 [i_0])))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (var_10) : (((/* implicit */int) arr_11 [i_0 + 3] [i_0])))))));
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((unsigned long long int) var_9)))));
                                arr_21 [i_7] [i_6] [i_5] [(signed char)13] [i_0] = ((/* implicit */int) ((((arr_3 [i_1] [i_1] [i_5]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_6 [i_0 + 3] [i_6]), (arr_6 [i_5] [i_1]))))) : (arr_3 [i_0] [i_0 + 3] [i_0])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
