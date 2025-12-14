/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29884
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
    var_16 = ((/* implicit */signed char) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        arr_12 [i_1] = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) arr_1 [(unsigned short)4])), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_1 [i_0 - 4])) : (86472862518945348ULL)))))));
                        var_17 = ((/* implicit */short) (-(140737488355327ULL)));
                        var_18 = ((/* implicit */long long int) 2097151);
                    }
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */unsigned int) arr_4 [i_1 - 3] [i_1] [i_0 + 3])) : (((((/* implicit */_Bool) -1)) ? (794569967U) : (((/* implicit */unsigned int) arr_1 [i_1])))))) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62340))))))));
                        var_20 &= ((/* implicit */unsigned long long int) (unsigned short)3177);
                    }
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1323485571U)) ? (((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_1 - 1] [i_1 + 2] [i_1 - 3])) : (min((1114023704950319548ULL), (((/* implicit */unsigned long long int) (unsigned char)3))))))) ? (((((/* implicit */_Bool) (unsigned short)3195)) ? (arr_7 [i_0 - 2]) : (arr_7 [i_0 + 2]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)11677))))))))));
                    var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) (unsigned short)62347)))));
                }
            } 
        } 
    } 
}
