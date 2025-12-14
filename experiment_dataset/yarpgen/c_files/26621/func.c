/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26621
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
    var_13 = ((/* implicit */unsigned char) max((var_3), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_2)), (var_10))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_6 [i_0] [i_0] [(unsigned short)15]), (1186700905)))), (((((/* implicit */_Bool) var_2)) ? (55778026799537715ULL) : (arr_5 [(unsigned short)13] [(_Bool)1] [i_0])))))) ? (var_8) : (((arr_3 [i_0] [i_0]) << (((((((/* implicit */int) var_2)) + (68))) - (4)))))));
                    arr_10 [(signed char)17] [i_1] [11LL] [i_0] = ((/* implicit */int) var_5);
                    var_15 = ((/* implicit */unsigned char) 10244701571198566535ULL);
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((max((((/* implicit */int) var_7)), (arr_6 [(unsigned short)17] [i_1] [i_1]))) <= (((/* implicit */int) (unsigned char)216))))), (var_4))))));
                }
            } 
        } 
    } 
}
