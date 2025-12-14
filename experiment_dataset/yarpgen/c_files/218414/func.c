/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218414
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
    var_10 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (signed char)-54)), (min((((/* implicit */unsigned long long int) var_5)), (max((16730131623121283702ULL), (((/* implicit */unsigned long long int) var_2))))))));
    var_11 = ((/* implicit */signed char) var_4);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((9322774855584126156ULL), (((/* implicit */unsigned long long int) arr_3 [2U]))))))) ? (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (signed char)70))))))) : (((((/* implicit */unsigned long long int) ((arr_3 [(signed char)3]) - (arr_3 [2U])))) + (802772460484744393ULL)))));
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_7))));
                    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)14708))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [8U] [(unsigned short)6] [10])))))) : (arr_4 [i_2 + 1] [2ULL]))) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10793)))));
                }
            } 
        } 
    } 
}
