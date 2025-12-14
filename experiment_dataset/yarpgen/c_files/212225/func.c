/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212225
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
    var_12 &= (-(min((332835118), (((/* implicit */int) min(((unsigned short)13634), ((unsigned short)13628)))))));
    var_13 = ((/* implicit */unsigned short) var_5);
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))));
    var_15 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) ((1907359907U) > (min((arr_13 [i_3] [(_Bool)1] [4] [i_3] [i_0]), (((/* implicit */unsigned int) var_9))))))))))));
                                var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_13 [i_0] [i_4] [i_4] [i_4 - 1] [i_0]) % (arr_13 [i_0] [i_4] [i_4 + 2] [i_4 + 2] [i_0])))) && (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_0 [(unsigned short)7] [i_1]))))))));
                                var_18 -= ((/* implicit */short) 970892214);
                                arr_16 [i_4] [i_4] [i_2] [i_4] [i_0] = (~(((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned char)209)))));
                                arr_17 [i_4] [i_4] [i_3] [i_2] [i_2] [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 1366468342)) < (13926719033122680519ULL)));
                            }
                        } 
                    } 
                } 
                var_19 -= ((/* implicit */unsigned short) 3);
                var_20 = ((/* implicit */short) (+(((((((/* implicit */int) (short)-7665)) + (2147483647))) >> ((((+(-41891481))) + (41891493)))))));
            }
        } 
    } 
}
