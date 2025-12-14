/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212604
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
    var_20 &= var_8;
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) 13688490784889115687ULL))) ? (((/* implicit */int) ((((/* implicit */int) (short)2733)) == (arr_0 [i_0] [i_0])))) : (((/* implicit */int) ((_Bool) (signed char)-98)))))), ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) ^ (arr_1 [i_0 + 1]))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                for (signed char i_3 = 3; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_1] [i_0] [0] [14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3 + 2]))) : (arr_1 [i_2]))), (max((5510288328418282488ULL), (4611686018427387903ULL)))))) ? (min((-1329274534), (-842270767))) : ((~(((/* implicit */int) (signed char)(-127 - 1))))))))));
                        var_22 &= ((/* implicit */unsigned int) ((arr_1 [i_1]) << (((/* implicit */int) ((unsigned char) 2835850993980892178LL)))));
                    }
                } 
            } 
        } 
    }
    for (int i_4 = 1; i_4 < 21; i_4 += 2) /* same iter space */
    {
        var_23 = ((((/* implicit */unsigned int) -537247353)) - (((((/* implicit */_Bool) arr_9 [8U] [2LL] [i_4 + 1] [2LL] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21))) : (min((var_6), (arr_12 [i_4] [4LL]))))));
        var_24 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_11 [i_4])) ? (min((((/* implicit */long long int) var_12)), (6095013865808428195LL))) : (((/* implicit */long long int) max((arr_12 [i_4] [i_4 - 1]), (1542322894U)))))), (((/* implicit */long long int) arr_0 [12] [12]))));
    }
    var_25 = ((/* implicit */signed char) var_7);
}
