/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20481
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1] [6])) <= (((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((((/* implicit */_Bool) arr_6 [i_0] [18] [i_2] [(unsigned short)1])) || (((/* implicit */_Bool) arr_0 [i_2] [i_0])))), (((((/* implicit */_Bool) arr_6 [i_0] [20ULL] [i_2] [i_2])) || (((/* implicit */_Bool) arr_2 [20U])))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43640))) | (18446744073709551615ULL)))));
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) || (((/* implicit */_Bool) 228401732))))) >> (((((/* implicit */int) max((arr_7 [21U] [13] [21U]), (arr_7 [11] [11] [11])))) - (97)))))) ? (((((/* implicit */_Bool) ((arr_0 [(_Bool)1] [(_Bool)1]) - (var_13)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (15863459740958067960ULL)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0])), ((unsigned short)47856)))))) : (max((((((/* implicit */int) arr_3 [i_0] [i_1])) ^ (((/* implicit */int) arr_2 [i_0])))), (((((/* implicit */int) (unsigned short)47856)) - (((/* implicit */int) (unsigned short)47858)))))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((2823559558U), (((/* implicit */unsigned int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56))) <= (0ULL))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_1 [i_0 + 2] [i_1 - 3])))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((var_21), (min((((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */unsigned int) var_16)), (2823559558U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (_Bool)1)))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551602ULL)) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)192)) | (((/* implicit */int) (unsigned char)228))))))))))));
    var_22 = ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) var_8)) ? (1058230667353806781LL) : (((/* implicit */long long int) -1082782366)))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)60)) == (-1928451982))))))), (((/* implicit */long long int) max((var_17), (((/* implicit */int) var_9)))))));
    var_23 = ((/* implicit */_Bool) var_0);
}
