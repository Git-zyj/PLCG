/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36057
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [(signed char)0] = ((/* implicit */short) min((((/* implicit */unsigned int) max((max((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (var_3))), (((/* implicit */unsigned short) min((((/* implicit */short) arr_1 [i_0])), (var_16))))))), (max((((/* implicit */unsigned int) min((var_12), (((/* implicit */signed char) (_Bool)1))))), (min((((/* implicit */unsigned int) (signed char)-11)), (1059509219U)))))));
                arr_5 [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */short) min((var_6), (((/* implicit */signed char) var_5))))), (max((var_2), (((/* implicit */short) arr_0 [i_0] [i_0 + 1]))))))), (max((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */short) arr_0 [15U] [i_1]))))), (min((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            {
                arr_10 [i_2] [i_3] = ((/* implicit */_Bool) max((max((max((((/* implicit */unsigned int) var_8)), (arr_7 [i_2] [i_2]))), (((/* implicit */unsigned int) min(((signed char)11), (((/* implicit */signed char) var_0))))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)47848))))));
                arr_11 [i_2] [(short)14] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((max((((/* implicit */short) (signed char)10)), (arr_9 [i_2] [i_3]))), (((/* implicit */short) max((((/* implicit */signed char) var_13)), (var_7))))))), (min((((/* implicit */unsigned long long int) min(((unsigned short)62178), (((/* implicit */unsigned short) (unsigned char)15))))), (max((6016493722202580450ULL), (((/* implicit */unsigned long long int) (signed char)-38))))))));
                arr_12 [i_2] [i_3] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((min((((/* implicit */signed char) (_Bool)1)), (var_12))), (max(((signed char)-123), (((/* implicit */signed char) (_Bool)1))))))), (max((((/* implicit */unsigned long long int) min(((unsigned short)59095), (((/* implicit */unsigned short) (signed char)-60))))), (max((((/* implicit */unsigned long long int) arr_6 [i_2])), (arr_8 [i_2])))))));
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned int) max((min((((/* implicit */unsigned short) min((var_7), (var_7)))), (min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)59072))))), (min((max(((unsigned short)55141), (((/* implicit */unsigned short) var_1)))), (((/* implicit */unsigned short) max((var_6), (var_12))))))));
    var_19 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min(((unsigned short)6440), (((/* implicit */unsigned short) (signed char)-76))))), (1884181588U)))), (max((min((12976678177359859282ULL), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) min(((unsigned short)6440), (((/* implicit */unsigned short) var_7)))))))));
}
