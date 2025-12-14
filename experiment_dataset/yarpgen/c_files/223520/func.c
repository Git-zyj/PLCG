/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223520
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
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    arr_8 [i_2] [i_1 - 2] [i_1] [i_0 - 1] = ((/* implicit */short) 3007124970U);
                    var_17 = ((/* implicit */short) (signed char)56);
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_3 = 2; i_3 < 10; i_3 += 3) 
                {
                    arr_13 [(unsigned char)7] [i_1] [(unsigned char)7] [i_1 - 1] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_13)) % (((/* implicit */int) arr_1 [i_0])))));
                    arr_14 [3U] [(short)7] [(signed char)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) << (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_5 [(short)0] [i_0] [i_3 + 2] [i_3 + 2])));
                }
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
                {
                    arr_17 [(unsigned short)2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)21513)) >= (((/* implicit */int) (_Bool)1)))))) > (((unsigned int) (signed char)-104)))))) > (((long long int) arr_7 [i_4] [i_1 + 2] [i_0] [(short)2]))));
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_15))));
                    arr_18 [i_4] [i_1] [i_0] [i_0] = min((((_Bool) ((_Bool) 574208952489738240LL))), (var_0));
                    arr_19 [(_Bool)1] [i_1] [i_4] [i_1 - 2] = ((/* implicit */_Bool) var_3);
                    var_19 = ((/* implicit */unsigned int) ((((arr_15 [i_1 - 2] [4U] [i_1 - 3] [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1 - 2]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))) : (((arr_15 [i_0] [i_1] [i_1 - 3] [i_1]) / (arr_15 [i_1] [i_1] [i_1 - 2] [i_1])))));
                }
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                {
                    arr_24 [(signed char)7] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_16 [i_1 - 2] [i_1] [i_1 + 1] [i_0 - 1])), (var_7)))) ? (((((/* implicit */_Bool) (unsigned short)62579)) ? (((/* implicit */int) arr_16 [i_1 - 1] [i_0] [i_1 - 1] [i_0])) : (((/* implicit */int) arr_16 [i_1 - 3] [i_0] [i_0] [(_Bool)1])))) : (((int) (short)-12591)));
                    arr_25 [i_5] [i_5] [i_1] [i_0] = ((/* implicit */int) ((unsigned int) (~(-1423677407747543394LL))));
                    var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)65535))));
                }
                var_21 = ((/* implicit */_Bool) (+(((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_12 [i_0 + 3] [i_0 + 3] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                arr_26 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)10)) ? (((((/* implicit */_Bool) (signed char)-48)) ? (arr_15 [i_1 + 1] [i_0 - 2] [i_0] [i_0]) : (((/* implicit */unsigned long long int) 4294967295U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38697))))))));
                arr_27 [i_0 + 2] [i_1 - 1] [i_1] = ((/* implicit */short) var_11);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
}
