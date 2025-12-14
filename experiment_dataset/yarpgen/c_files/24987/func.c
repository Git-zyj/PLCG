/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24987
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
    var_15 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_0))))) ? (((3213761881U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3 + 1] [i_2 - 2] [i_1 + 3] [i_0 - 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3 - 1] [i_2 - 2] [i_1 - 3] [i_0 + 1])))));
                            var_17 ^= ((/* implicit */unsigned int) (+(max(((+(((/* implicit */int) arr_5 [(signed char)2])))), (((/* implicit */int) var_12))))));
                            var_18 ^= ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0 - 4] [i_1 - 1] [i_3 - 3]))) % (-8127375968108518473LL)))) ? (min((((/* implicit */long long int) 1148666193U)), (((((/* implicit */_Bool) (unsigned short)6741)) ? (-4800581089161612941LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6741))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((var_3) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)6727)) - (6670)))))))))));
                            var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 1821388790U)) ? (((/* implicit */int) (signed char)-117)) : (min((((/* implicit */int) (signed char)-127)), (((int) 4481605402887903416LL))))));
                            var_20 |= ((/* implicit */unsigned long long int) (signed char)27);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 2; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned char i_5 = 2; i_5 < 10; i_5 += 1) 
                    {
                        {
                            var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) ((signed char) (short)-29092))) : (min((((((/* implicit */int) (unsigned char)7)) << (((((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1] [i_1])) - (102))))), (((/* implicit */int) min((arr_3 [i_0]), (((/* implicit */unsigned short) (unsigned char)4)))))))));
                            var_22 = ((/* implicit */signed char) arr_11 [i_5 - 1] [i_5] [(short)1] [i_5] [i_5 - 1] [i_5]);
                            var_23 = (+(-252849898));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_14)) == (max((((/* implicit */unsigned long long int) arr_7 [i_0 - 2] [i_1] [i_1 + 1] [i_0 - 1] [i_1 + 2])), (18446744073709551615ULL)))));
                var_25 += ((/* implicit */long long int) (+(var_14)));
            }
        } 
    } 
}
