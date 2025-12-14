/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230571
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
    var_12 = ((/* implicit */long long int) ((unsigned int) min((((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174))))), (((/* implicit */unsigned long long int) ((_Bool) (unsigned char)82))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        arr_3 [i_0 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_3))) == (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) (signed char)-8))))))) % (((/* implicit */int) (signed char)-1))));
        arr_4 [i_0] = ((/* implicit */int) ((((int) (unsigned char)0)) > (max((-2147483623), (((((/* implicit */_Bool) (short)8064)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (unsigned char)0))))))));
    }
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) (signed char)-26))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-1)) % (((/* implicit */int) ((short) var_0)))));
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        for (short i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((arr_12 [i_1] [i_2] [i_3]) <= (arr_12 [i_1] [i_2] [i_3])))), (((16201835591910085072ULL) - (arr_12 [i_1] [i_1] [i_1])))));
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_13 [i_1] [i_2] [i_3] [i_3]))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_2] [i_3]))) + (var_4)))));
                }
            } 
        } 
    } 
}
