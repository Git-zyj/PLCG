/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190020
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
    var_12 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_1)), (var_10)));
    var_13 = ((/* implicit */unsigned short) min((var_8), (((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                arr_9 [i_0 - 2] [14LL] [i_2] = ((/* implicit */_Bool) min((max(((unsigned char)25), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) max(((signed char)-32), ((signed char)44))))));
                var_14 += ((/* implicit */unsigned int) max((max((6949274825020635581LL), (var_11))), (((/* implicit */long long int) min((2590118544U), (((/* implicit */unsigned int) (signed char)19)))))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_15 = ((/* implicit */_Bool) min((max((max((((/* implicit */int) var_7)), (0))), (((/* implicit */int) arr_11 [i_1 - 1] [i_3] [i_3] [i_0 + 2])))), (min((((/* implicit */int) var_4)), (arr_3 [i_1 - 1])))));
                var_16 ^= min((max((((/* implicit */unsigned int) (signed char)-113)), (arr_1 [i_0 - 2]))), (((/* implicit */unsigned int) min((var_2), ((signed char)114)))));
                var_17 |= ((/* implicit */unsigned short) min((max((var_2), (((/* implicit */signed char) (_Bool)0)))), (max(((signed char)-92), ((signed char)-105)))));
            }
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((max((var_11), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) min((((/* implicit */int) (signed char)-3)), ((-2147483647 - 1))))))))));
        }
        for (long long int i_4 = 1; i_4 < 18; i_4 += 1) /* same iter space */
        {
            arr_15 [i_0] [i_0] [i_4 + 1] = ((/* implicit */int) min((min(((signed char)113), (((/* implicit */signed char) (_Bool)0)))), (max(((signed char)32), (((/* implicit */signed char) var_4))))));
            arr_16 [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_7)), (3759830842U))), (((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)38))))));
            var_19 = ((/* implicit */signed char) max((((/* implicit */long long int) min((arr_6 [i_0 + 2] [i_0 + 1]), (3759830830U)))), (min((((/* implicit */long long int) 0U)), (-9223372036854775788LL)))));
        }
        arr_17 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)-124)), (arr_14 [i_0 - 1])))), (min((((/* implicit */long long int) 535136436U)), (-9223372036854775798LL)))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */int) max((max((var_10), (arr_1 [i_5]))), (((/* implicit */unsigned int) max((arr_8 [i_5] [i_5] [i_5]), (((/* implicit */int) arr_19 [i_5] [i_5])))))));
        arr_21 [i_5] = ((/* implicit */signed char) min((((/* implicit */long long int) min((((/* implicit */int) var_5)), (1160186295)))), (min((((/* implicit */long long int) (unsigned char)34)), ((-9223372036854775807LL - 1LL))))));
        arr_22 [i_5] = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) 98994846)), (4267859088055417111LL))), (((/* implicit */long long int) max((max(((unsigned short)38504), (((/* implicit */unsigned short) var_5)))), (((/* implicit */unsigned short) var_0)))))));
        var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_2)), ((unsigned char)24)))), (max((arr_13 [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) var_2))))));
    }
    var_21 = ((/* implicit */int) max((var_6), (((/* implicit */long long int) var_4))));
}
