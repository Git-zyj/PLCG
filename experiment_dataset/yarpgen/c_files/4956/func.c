/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4956
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
    var_16 = ((/* implicit */unsigned short) max((var_1), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-27108)), ((-(((/* implicit */int) var_9)))))))));
    var_17 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) max((var_5), ((short)-1)))) ? (3136098794989942175LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)7)))))))));
    var_18 = ((/* implicit */short) ((((/* implicit */int) var_4)) % (((/* implicit */int) ((unsigned char) var_5)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_12 [(short)9] [i_0] [i_1] [i_1] [i_0] [(unsigned short)3] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) max((var_3), (arr_0 [(short)4] [i_1])))) ? (((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) (unsigned short)31330)) - (31330))))) : (((/* implicit */int) arr_7 [i_0] [i_0 - 3] [i_0 - 1]))))));
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                            {
                                var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) (-(850367801)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (-2147483647 - 1))))) : ((~(var_11))))), (((/* implicit */long long int) (~((((-2147483647 - 1)) - (((/* implicit */int) (short)-27108)))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0 - 3] [i_0 + 1] [i_0 - 2] [i_0 - 2]))))) ? (min((arr_9 [i_0 - 1] [i_0 - 3] [i_0 - 1] [10]), (((/* implicit */unsigned int) arr_13 [i_0 - 1] [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 1] [i_0])))) : (((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_6 [i_3] [i_0])))))))));
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_10 [i_0 - 1])), (arr_11 [i_0 - 2] [i_1] [i_2] [i_2])))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_10 [i_0])))))))))));
                            }
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) max((1396559882), (((/* implicit */int) var_15)))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [12ULL] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_0 - 3] [i_0] [i_0 + 1] [i_0] [i_0 - 2])) : (((/* implicit */int) var_15))))), (((unsigned int) arr_1 [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 3])) * ((-(((/* implicit */int) var_15)))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */signed char) arr_2 [i_0] [i_1]);
            }
        } 
    } 
}
