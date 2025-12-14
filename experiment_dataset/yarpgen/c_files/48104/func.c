/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48104
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
    var_17 = (-(((/* implicit */int) (signed char)-59)));
    var_18 = max((((/* implicit */int) (unsigned short)1)), (((((/* implicit */int) var_6)) & (((/* implicit */int) (unsigned short)32651)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                for (unsigned int i_3 = 2; i_3 < 17; i_3 += 2) 
                {
                    {
                        arr_13 [i_1] [i_1] [i_1 + 1] [i_1 - 1] = ((/* implicit */unsigned short) var_13);
                        var_19 = ((/* implicit */int) min((((long long int) var_13)), (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))));
                        var_20 += ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (~(((/* implicit */int) ((short) (unsigned short)10678)))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_12 [i_3 - 2] [i_3] [i_3 - 2] [i_3] [i_3 - 1]))))) : (arr_2 [i_0])))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] |= ((/* implicit */unsigned char) ((_Bool) min((((((/* implicit */_Bool) 11335567702902053330ULL)) ? (7111176370807498278ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned long long int) var_9)))));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        var_21 = ((unsigned long long int) (!(((/* implicit */_Bool) var_15))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                {
                    arr_23 [i_4] [i_4] [i_4] [i_5] = ((/* implicit */_Bool) -1314828490);
                    arr_24 [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)54847))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (11335567702902053330ULL)));
    }
    /* LoopSeq 1 */
    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        var_23 = ((/* implicit */_Bool) min((max((((unsigned char) var_9)), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 3239227243U)))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_7] [i_7] [i_7] [i_7]))) > (1632074594U))))))));
        arr_29 [i_7] [i_7] = ((/* implicit */short) arr_1 [i_7]);
    }
    var_24 = ((/* implicit */unsigned long long int) (~(0)));
}
