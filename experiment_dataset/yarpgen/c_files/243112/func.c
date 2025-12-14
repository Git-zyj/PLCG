/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243112
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
    var_20 += ((/* implicit */short) var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_2] = ((/* implicit */unsigned long long int) -3317157008475582851LL);
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */long long int) var_7);
                }
                for (short i_3 = 1; i_3 < 16; i_3 += 4) 
                {
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_7)))) << ((((-(arr_1 [i_3 - 1]))) + (977445524466031310LL))))))));
                    arr_12 [i_3] = ((/* implicit */short) var_8);
                    arr_13 [i_0] [15LL] [i_1] [i_0] = min(((~(arr_10 [i_0] [i_3 + 1] [i_3 + 1] [i_3]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((unsigned short)5), (((/* implicit */unsigned short) (unsigned char)0)))))))));
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))));
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (+(((/* implicit */int) min((arr_9 [i_3 - 1]), (((/* implicit */unsigned short) (_Bool)0))))))))));
                }
                var_23 *= ((/* implicit */short) (((!(((15408353017180747579ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))) || (((/* implicit */_Bool) (+(min((-4550985640421997301LL), (480366829913369262LL))))))));
                arr_15 [8LL] = ((/* implicit */_Bool) var_8);
                arr_16 [i_0] = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_0]))))), (((((/* implicit */_Bool) arr_10 [(unsigned short)15] [(_Bool)1] [i_1] [i_1])) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))));
            }
        } 
    } 
}
