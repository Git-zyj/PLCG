/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205146
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (unsigned short)19)), (arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))) % (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [(signed char)0] [i_1 - 1] [i_2])) << (((arr_7 [i_0] [i_1 - 1] [i_0] [i_1]) - (3779767121U))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) + ((-(((/* implicit */int) arr_8 [i_4] [i_4] [i_4 - 1]))))));
                                var_20 = ((/* implicit */unsigned long long int) min((arr_11 [i_4] [i_0] [i_2] [i_0] [i_0]), ((+(min((0U), (((/* implicit */unsigned int) -1863370723))))))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0]))))), ((-(4294967286U)))))) | (min((((/* implicit */unsigned long long int) ((unsigned char) 1U))), (min((((/* implicit */unsigned long long int) 4294967295U)), (var_12)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (signed char i_6 = 4; i_6 < 20; i_6 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_16 [i_6 - 4] [i_6 - 3])), (min((arr_18 [i_6 - 3] [i_6 - 3] [i_6 + 1]), (((/* implicit */long long int) 2601416797U))))));
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_9))));
                var_24 = ((/* implicit */signed char) arr_17 [i_6]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            {
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (signed char)-107)), ((+(arr_22 [i_7] [i_8] [i_8]))))))));
                var_26 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((arr_22 [i_7] [(unsigned short)8] [i_7]), (((/* implicit */unsigned long long int) (unsigned char)112)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)144)), (var_8))))))) ? (16747570684320877718ULL) : (((/* implicit */unsigned long long int) 4294967295U))));
                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) var_15))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_9 = 1; i_9 < 20; i_9 += 3) 
    {
        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_11 = 1; i_11 < 17; i_11 += 3) 
                {
                    for (long long int i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        {
                            var_28 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_31 [i_9] [i_9 + 1] [i_9] [16]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [2LL] [i_9 - 1] [i_11])))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)128)), (arr_25 [18LL] [i_9 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_31 [i_9] [i_9 + 1] [(_Bool)1] [4U]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [(unsigned short)12] [i_9 - 1] [i_11])))))))));
                            var_29 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 1883274844U)), (((unsigned long long int) arr_24 [i_9 + 1]))));
                        }
                    } 
                } 
                arr_34 [i_9] = min((((/* implicit */unsigned int) var_7)), (max((max((var_1), (((/* implicit */unsigned int) (unsigned char)143)))), (((/* implicit */unsigned int) arr_16 [i_9 - 1] [i_9 - 1])))));
                var_30 += max((2375280558U), (((/* implicit */unsigned int) var_7)));
                arr_35 [i_9] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_9] [i_9 - 1] [i_9 + 1])) || ((!(((/* implicit */_Bool) arr_16 [i_10] [i_10]))))));
            }
        } 
    } 
    var_31 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)14858)) | (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_13))))))));
}
