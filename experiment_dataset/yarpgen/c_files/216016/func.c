/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216016
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
    var_10 = ((/* implicit */long long int) (-(3824695526308290160ULL)));
    var_11 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)230)), (min((((/* implicit */int) var_8)), ((-(((/* implicit */int) var_9))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_12 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (max((arr_1 [i_0]), (arr_1 [i_0])))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (((((_Bool)1) && (((/* implicit */_Bool) max((arr_3 [i_0] [i_2]), (((/* implicit */int) (unsigned char)127))))))) || (((/* implicit */_Bool) max((arr_0 [16ULL]), (arr_0 [6])))))))));
                        arr_9 [(signed char)3] [i_1] [i_0] [i_3] [i_0] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned char)82)), (3824695526308290160ULL)));
                        var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((454479488) / (arr_3 [i_0] [i_1]))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned int) arr_0 [i_0]);
        arr_10 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]))))) + (((/* implicit */int) arr_2 [i_0] [i_0] [(unsigned char)15]))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 19; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) (-(arr_19 [(unsigned char)3] [i_5])));
                        arr_21 [i_4] [i_6] [i_6] = arr_14 [i_4];
                        var_17 = ((/* implicit */unsigned char) (-(arr_13 [i_4])));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */short) ((1170495129U) / (((/* implicit */unsigned int) -1132873454))));
        var_19 = ((/* implicit */_Bool) ((arr_19 [i_4] [i_4]) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_4] [5U] [i_4] [i_4])) / (((/* implicit */int) arr_5 [i_4] [(_Bool)1] [(unsigned char)18] [i_4])))))));
        arr_22 [i_4] = ((/* implicit */long long int) arr_5 [i_4] [i_4] [i_4] [(signed char)3]);
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
        var_21 = ((/* implicit */long long int) arr_24 [(unsigned char)2] [i_8]);
        arr_26 [i_8] [(unsigned char)1] = ((/* implicit */unsigned char) 1170495129U);
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_23 [i_8] [i_8]))));
    }
    var_23 = ((/* implicit */signed char) var_4);
}
