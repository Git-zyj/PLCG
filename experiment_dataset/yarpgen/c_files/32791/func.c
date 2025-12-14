/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32791
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
    var_18 = ((/* implicit */_Bool) max(((-(var_9))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (7645340277101280194ULL)))) : ((~(var_14))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_19 ^= ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (var_0)))) ? (((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0]) : (((/* implicit */long long int) arr_0 [i_0] [i_0])))) : (((long long int) var_1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))) : (arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_8);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned int) -377975529)), (max((1552369793U), (((/* implicit */unsigned int) (short)30))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_13 [i_1] [i_2] [i_1] [i_1] = (short)30049;
                        arr_14 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (_Bool)1);
                    }
                    arr_15 [i_1] [i_1] = ((/* implicit */short) arr_1 [i_0]);
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_6 [i_0] [i_0])) % (((/* implicit */int) (signed char)-61))))));
    }
    var_21 = ((/* implicit */_Bool) min((max((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_16) : (((/* implicit */unsigned int) 0))))))), (((/* implicit */unsigned long long int) var_9))));
    var_22 = ((/* implicit */long long int) (unsigned short)32839);
    var_23 += ((/* implicit */long long int) (short)-2196);
}
