/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50822
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
    var_18 = ((/* implicit */signed char) (unsigned short)1143);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (2518448242U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -7652823378797874463LL)) ? (-1968611332) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0 - 2]))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65150)) * (((/* implicit */int) (signed char)47))))) ? (((/* implicit */unsigned int) (+(-1918833059)))) : (((var_6) ^ (((/* implicit */unsigned int) arr_7 [i_2] [(signed char)18] [9U] [i_0 - 1]))))))));
                    arr_8 [i_0 - 2] [i_1] [i_2] = min((max((((/* implicit */unsigned int) -1968611332)), (var_6))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_4 [(unsigned short)13] [i_0 - 2] [i_0 - 1])), (1297591867)))));
                    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_2 [i_0 + 1])), (((unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)27))))))));
                    var_21 *= ((/* implicit */short) (_Bool)1);
                    var_22 = ((/* implicit */long long int) var_2);
                }
                /* vectorizable */
                for (unsigned short i_3 = 2; i_3 < 23; i_3 += 3) 
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-15561)) ? (((((/* implicit */int) (signed char)111)) << (((((/* implicit */int) (short)-15547)) + (15563))))) : (((/* implicit */int) (unsigned short)385))));
                    var_24 ^= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_3]))) >= (3816553384U))));
                }
                arr_11 [i_1] [i_0] = var_17;
                var_25 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0 - 2])) & (((/* implicit */int) var_4))))) : (max((((/* implicit */long long int) arr_7 [i_0 - 2] [i_0] [i_0 - 1] [i_0 + 1])), (4763118000232257707LL)))));
                var_26 &= ((/* implicit */_Bool) ((arr_4 [i_1] [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) ((var_6) <= (((((/* implicit */_Bool) (unsigned short)65139)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(_Bool)1] [i_1] [(signed char)6]))))))))));
            }
        } 
    } 
}
