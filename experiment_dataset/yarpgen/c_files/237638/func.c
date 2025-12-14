/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237638
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
    var_19 = ((/* implicit */_Bool) 2251799813685247LL);
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_18))));
    var_21 = ((/* implicit */unsigned int) 4466062504951763114LL);
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [i_1] [i_3] = ((/* implicit */unsigned int) arr_1 [i_0]);
                        var_23 = ((/* implicit */unsigned long long int) arr_5 [i_3]);
                    }
                } 
            } 
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_4 [i_1]), (((/* implicit */unsigned int) ((int) 17472343097398208481ULL)))))) ? (arr_5 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))));
        }
        arr_14 [i_0] = ((/* implicit */signed char) min((min((((/* implicit */int) min((arr_3 [i_0]), (((/* implicit */short) arr_8 [i_0] [i_0]))))), (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_14)))))), ((-(((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1]))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        var_24 ^= ((/* implicit */long long int) arr_3 [i_4]);
        var_25 = ((/* implicit */long long int) ((var_15) <= (arr_6 [i_4] [i_4] [i_4])));
    }
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        for (signed char i_6 = 3; i_6 < 11; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        var_26 = ((((/* implicit */long long int) (-(((/* implicit */int) arr_25 [i_7]))))) <= (var_17));
                        arr_28 [i_8] [i_7] [i_5] [i_8] = ((((/* implicit */_Bool) min((arr_17 [i_5] [i_5]), (((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_6])) <= (((/* implicit */int) arr_3 [i_5])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) ((((/* implicit */_Bool) -7649541224896390219LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_16)))));
                        arr_29 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1388272097)) + (arr_24 [i_6 + 1] [i_6] [i_6 - 3] [i_6 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_4 [i_8])));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((var_8) == (((/* implicit */long long int) ((/* implicit */int) var_14))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((short) var_2)), (((/* implicit */short) (!(((/* implicit */_Bool) var_18))))))))) : (((((/* implicit */_Bool) arr_31 [i_5] [i_6 + 1] [i_7] [i_7] [i_8] [i_8] [i_5])) ? (((long long int) arr_24 [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */long long int) (-(((/* implicit */int) var_7))))))))))));
                            arr_34 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((arr_7 [i_6] [i_6] [i_6]) | (((/* implicit */unsigned int) arr_21 [i_9] [i_9] [i_8])))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) (short)28672)) ? (((/* implicit */int) (short)17141)) : (((/* implicit */int) (unsigned short)21824)))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)48101)) >= (((/* implicit */int) (short)9753)))))))) : (arr_24 [i_5] [i_6] [i_7] [i_8])));
                        }
                    }
                    var_28 = ((/* implicit */unsigned int) var_11);
                    var_29 ^= ((/* implicit */long long int) var_14);
                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) arr_20 [i_5]))));
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) 
                        {
                            {
                                var_31 = var_16;
                                arr_42 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) arr_19 [i_5] [i_6] [i_6]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
