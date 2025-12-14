/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200992
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
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (signed char)-124)), ((-((+(var_6)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(4294967295U)))) ^ (max((arr_0 [i_0]), (arr_2 [i_0] [i_0])))));
        arr_4 [i_0] = ((/* implicit */long long int) var_5);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */int) max((((signed char) ((17603300649566338275ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)104)))))), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_6 [i_1] [i_1])) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_1])) + (106)))))))))));
        var_18 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_5 [i_1])) ^ (((/* implicit */int) var_14)))), (((/* implicit */int) (unsigned short)50046))));
        var_19 += ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) -1797188250)) && (((/* implicit */_Bool) arr_0 [i_1])))));
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (unsigned short i_3 = 3; i_3 < 7; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_4 = 2; i_4 < 8; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        {
                            arr_17 [(signed char)2] [(short)6] [(_Bool)1] [(short)1] [(short)6] = ((/* implicit */long long int) (-2147483647 - 1));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */long long int) 536870911)) : (301782698307474651LL)));
                        }
                    } 
                } 
                var_21 *= ((/* implicit */unsigned char) max((((((((arr_9 [i_2] [i_3]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [i_2]))))) + (9223372036854775807LL))) << (((((((((/* implicit */int) var_13)) + (2147483647))) >> (((((/* implicit */int) var_5)) - (90))))) - (4194303))))), (((/* implicit */long long int) var_13))));
                arr_18 [0U] = ((((unsigned long long int) arr_2 [i_3 + 3] [i_3 - 3])) != (min((((/* implicit */unsigned long long int) (signed char)-124)), (18446744073709551615ULL))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_4);
}
