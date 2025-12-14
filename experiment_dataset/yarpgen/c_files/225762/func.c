/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225762
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
    var_11 = ((/* implicit */short) var_0);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) > (((/* implicit */int) arr_1 [i_0 - 2]))))) : (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) (short)-4)) : (((/* implicit */int) arr_1 [i_0 + 3]))))));
        var_13 = min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1])))), (((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
        var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [(_Bool)1]) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (signed char)-30))))) ? (((((/* implicit */int) (unsigned char)1)) + (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) min(((unsigned char)22), (((/* implicit */unsigned char) arr_0 [i_0])))))))) ? (((((/* implicit */int) (short)22117)) >> (((/* implicit */int) arr_0 [i_0 - 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) (signed char)96))))))))));
        var_15 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) max(((unsigned char)157), (((/* implicit */unsigned char) var_6)))))))) >= (((/* implicit */int) min((arr_0 [i_0 + 2]), ((_Bool)1))))));
    }
    for (unsigned int i_1 = 2; i_1 < 14; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) min((((/* implicit */int) min((arr_0 [i_3]), (arr_0 [i_1 + 1])))), (((arr_0 [i_3]) ? (((/* implicit */int) arr_6 [i_2] [i_3])) : (((/* implicit */int) arr_0 [i_1 + 3]))))));
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((((unsigned short) arr_6 [i_1] [i_1])), (((/* implicit */unsigned short) ((((((/* implicit */int) (short)22108)) % (((/* implicit */int) var_10)))) < (((/* implicit */int) min(((unsigned char)255), (arr_12 [i_1] [i_1]))))))))))));
                    }
                } 
            } 
        } 
        arr_13 [i_1] = ((/* implicit */unsigned short) min((var_9), ((!(arr_0 [i_1 + 2])))));
    }
}
