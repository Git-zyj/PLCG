/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213140
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        var_16 += ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [8LL]))));
        arr_2 [(_Bool)1] = ((int) (!(((/* implicit */_Bool) var_9))));
        var_17 = ((/* implicit */_Bool) max((var_17), ((!(((((/* implicit */_Bool) arr_0 [13])) && (((/* implicit */_Bool) (unsigned char)0))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_3 [4U] [i_3]))));
                    arr_10 [i_3] = ((/* implicit */int) arr_6 [i_1]);
                }
            } 
        } 
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (arr_0 [i_1]))))))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 2; i_5 < 21; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                {
                    var_20 |= ((/* implicit */_Bool) arr_0 [0U]);
                    arr_21 [i_4] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_5 - 2] [i_4] [(unsigned char)21])) | (((/* implicit */int) (unsigned short)11644))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [(signed char)22] [i_5] [12] [i_5])))))) / ((-(var_13)))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((unsigned short) (unsigned char)255)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 1; i_7 < 21; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */_Bool) (-(arr_23 [i_4] [(unsigned char)20] [20U] [i_4] [(unsigned char)20])));
                        var_24 = ((/* implicit */long long int) ((signed char) arr_19 [12LL] [12LL] [i_5 + 1] [i_5 - 2]));
                    }
                    for (unsigned int i_8 = 2; i_8 < 21; i_8 += 1) 
                    {
                        arr_26 [19LL] [i_6] [i_6] [(unsigned char)10] = ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) arr_11 [21LL])))));
                        arr_27 [(_Bool)1] [i_6] [20LL] [i_6] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((arr_18 [i_4] [16U] [i_6]) ? (((/* implicit */int) (unsigned short)25825)) : (((/* implicit */int) var_12))))) != (var_2)));
                    }
                }
            } 
        } 
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) var_12))));
    }
    var_26 = ((/* implicit */unsigned int) var_3);
    var_27 = ((/* implicit */_Bool) (unsigned char)2);
}
