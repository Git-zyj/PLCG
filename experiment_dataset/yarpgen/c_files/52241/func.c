/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52241
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
    var_19 = max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)122)) | (((/* implicit */int) (unsigned short)42997))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)20)) >> (((((/* implicit */int) var_5)) - (74)))))) : ((~(var_16))))), (((/* implicit */unsigned long long int) ((var_12) >> (((((((/* implicit */_Bool) -1800682689)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)18)))) + (182)))))));
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (signed char)118)), (var_12)));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 1] [i_0 - 1])))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_0 + 4] [i_1] [i_2] [(signed char)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_1 + 1] [i_1 + 1])) ? (arr_6 [i_0 + 4] [i_1 + 1] [i_1 + 1]) : (arr_6 [i_0 - 1] [i_1 + 1] [i_1 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)35))) > (arr_6 [i_0 + 4] [i_1 + 1] [i_1 + 1]))))) : (min((((/* implicit */unsigned long long int) (unsigned short)22549)), (arr_6 [i_0 + 4] [i_1 + 1] [i_1 + 1])))));
                    arr_9 [i_0] [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4294967272U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_0 [i_0])))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_5)) ? (-849377274) : (((/* implicit */int) (unsigned short)22538)))), ((~(((/* implicit */int) (signed char)120))))))) : (var_6)));
                }
            }
        } 
    } 
}
