/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189627
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) var_4)) << (((112861274) - (112861264))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) && ((!(var_4)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */int) min((var_5), (((/* implicit */long long int) max((((int) var_7)), (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_7))))))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_3 [i_0] [i_2]) % (((/* implicit */int) arr_2 [i_0]))))) - (var_5))))));
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) max((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */_Bool) max((arr_6 [i_0] [i_1] [i_2] [i_1]), (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */int) (!(var_2)))) : (((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */int) var_7)))))))))));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [9U]) << (((1023124423) - (1023124423)))))) ? (((/* implicit */int) min((((/* implicit */short) arr_4 [i_1] [i_1])), (var_6)))) : ((~(((/* implicit */int) var_2))))))) ? (((/* implicit */int) ((((/* implicit */int) max((arr_2 [i_1]), (((/* implicit */unsigned short) var_0))))) < ((+(((/* implicit */int) arr_2 [i_0]))))))) : (((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) arr_8 [0])) : (-1792622054))))))));
                }
                var_17 += ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))))) - (7694460866131768558LL)));
                arr_10 [9] [6U] [i_1] = ((/* implicit */unsigned char) max(((((!(((/* implicit */_Bool) 2046532581)))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_1])) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 5359921)) * (13846210628986794005ULL)))) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) (unsigned short)11047))))));
            }
        } 
    } 
}
