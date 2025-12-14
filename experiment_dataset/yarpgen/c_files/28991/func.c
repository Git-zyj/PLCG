/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28991
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) (unsigned char)24);
        var_20 = (unsigned char)240;
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            arr_4 [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((arr_1 [i_0] [i_1]) > (((/* implicit */long long int) ((int) (unsigned char)180))))))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)232))) & (min((((/* implicit */long long int) (short)-1503)), (5130197590751691651LL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) (unsigned char)227)))))) : (((((/* implicit */int) (unsigned char)189)) - (((/* implicit */int) ((_Bool) (unsigned char)215)))))));
                        var_22 += ((/* implicit */unsigned int) ((long long int) (_Bool)0));
                        arr_11 [i_1] [i_1] [(signed char)20] [i_3] = ((/* implicit */unsigned short) max((min((((unsigned int) arr_2 [22LL] [22LL] [i_1])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5069165518915845136LL)) ? (((/* implicit */int) (unsigned char)180)) : (((/* implicit */int) (short)-1))))))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 7566720930742968117LL)) ? (((/* implicit */int) (short)13)) : (((/* implicit */int) (short)-1)))), (((/* implicit */int) ((short) 262143LL))))))));
                    }
                } 
            } 
        }
        arr_12 [i_0] = ((((long long int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)22])) - (((long long int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-13))) & (((unsigned int) (~(((/* implicit */int) (short)13762)))))));
    }
    var_24 = ((/* implicit */unsigned short) var_15);
    var_25 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
    var_26 = ((/* implicit */int) ((unsigned int) min((max((var_6), (((/* implicit */long long int) (unsigned char)48)))), (((/* implicit */long long int) ((unsigned short) var_8))))));
}
