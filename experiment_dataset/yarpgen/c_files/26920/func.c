/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26920
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), ((-(((/* implicit */int) (unsigned char)231))))))) ? (max((-9223372036854775779LL), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)253)) == (((/* implicit */int) var_11))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((arr_2 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) == ((-(((/* implicit */int) (unsigned char)144))))))))));
                arr_6 [8U] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(var_6)))) ^ (((((/* implicit */_Bool) max((((/* implicit */short) var_5)), (var_8)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (-9223372036854775767LL) : (((/* implicit */long long int) -480916064)))) : (((((/* implicit */long long int) arr_0 [i_0] [i_1])) | (var_1)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) var_4))));
    var_14 = ((/* implicit */long long int) max(((unsigned char)231), (((/* implicit */unsigned char) var_3))));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 18; i_2 += 3) 
    {
        for (unsigned int i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            for (unsigned char i_4 = 1; i_4 < 18; i_4 += 3) 
            {
                {
                    var_15 += ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2])) & (-480916062)))) ? (((/* implicit */int) arr_9 [i_2] [i_2])) : (((((/* implicit */int) (unsigned short)20238)) ^ (((/* implicit */int) (signed char)-110)))))) % ((-(((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) arr_9 [(_Bool)1] [i_2])))))))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)215), (var_5)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */int) arr_11 [i_2] [(unsigned short)6] [i_2 - 1])) : (-480916064)))))) ? (((/* implicit */int) ((((/* implicit */int) ((-1808308545) == (((/* implicit */int) var_11))))) > (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_7 [i_3 + 2]))))))) : (((/* implicit */int) var_7))));
                }
            } 
        } 
    } 
}
