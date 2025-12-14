/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248547
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
    for (int i_0 = 3; i_0 < 6; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */short) ((_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)32767)) != (((/* implicit */int) (short)32760))))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)27))) < (9223372036854775807LL)))))));
                    arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) ((short) (short)32752))) - (32735)))))) && (((/* implicit */_Bool) min((min((279223176896970752LL), (((/* implicit */long long int) var_9)))), (((long long int) 1046132393U)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((short) -8388608)), (((/* implicit */short) min((var_8), (((/* implicit */unsigned char) var_9)))))))), (min((((/* implicit */unsigned int) var_8)), (max((0U), (3248834903U)))))));
                        arr_13 [i_0 + 4] [i_2] = ((/* implicit */_Bool) min((((/* implicit */long long int) max((min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (arr_2 [i_0]))), (((/* implicit */unsigned int) var_5))))), (((long long int) ((unsigned char) arr_5 [i_0] [i_0] [i_0] [i_3])))));
                        arr_14 [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned int) (signed char)56))), (((arr_11 [i_0 + 1] [i_0 + 2]) % (arr_11 [i_0 - 1] [i_0 + 4])))));
                        arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) 1945870502)) || (var_3))))), (((min((arr_2 [i_0]), (((/* implicit */unsigned int) var_1)))) % (max((((/* implicit */unsigned int) var_2)), (arr_2 [i_0])))))));
                        var_12 |= ((((((/* implicit */int) min((((/* implicit */short) (signed char)56)), (arr_6 [i_0] [i_1] [i_2] [i_3])))) >> (((min((arr_12 [i_0] [i_1]), (arr_11 [i_2] [i_3]))) + (7148518554749468708LL))))) >> (((((((int) var_7)) / (((/* implicit */int) min((arr_7 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */signed char) arr_3 [i_0]))))))) - (10958971))));
                    }
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) - (((((int) (unsigned short)41749)) % (((/* implicit */int) ((unsigned short) var_6)))))));
}
