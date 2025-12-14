/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3195
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
    var_12 += ((/* implicit */_Bool) min(((-(((((/* implicit */_Bool) var_9)) ? (1851503525) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) var_6))));
    var_13 |= ((/* implicit */unsigned short) max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (-1851503515)))) ? (((/* implicit */int) min(((unsigned short)48864), ((unsigned short)20794)))) : (((/* implicit */int) var_11))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            arr_6 [1ULL] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 4] [i_1] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_1 - 2] [i_0]))))) ? (((((/* implicit */_Bool) arr_3 [i_1 + 4] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 2] [i_1 + 1]))) : (var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 + 1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65531)))))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                arr_9 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_2 - 1]), (arr_0 [i_2 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (min((var_2), (arr_0 [i_2 - 1])))));
                arr_10 [i_1] &= ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [3U] [i_0] [(_Bool)1])) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) var_11))))) & (((((/* implicit */_Bool) arr_5 [7ULL] [i_1])) ? (((/* implicit */long long int) 5)) : (arr_0 [i_2 - 1]))))), (((/* implicit */long long int) ((short) (~(((/* implicit */int) arr_4 [i_0] [i_0]))))))));
            }
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) max((((/* implicit */short) max(((_Bool)1), ((_Bool)0)))), (((short) (_Bool)1)))))));
                arr_13 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_3)))), ((-(((/* implicit */int) var_11))))))) ? (min((arr_12 [i_1 - 1] [i_3]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) arr_1 [i_3] [i_1]))))))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
            }
        }
        for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 4) 
        {
            /* LoopSeq 3 */
            for (long long int i_5 = 2; i_5 < 14; i_5 += 4) 
            {
                var_15 -= (unsigned short)56135;
                arr_19 [i_0] [i_0] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) arr_14 [i_4 + 3] [i_5 + 3])), (var_8))), (((/* implicit */unsigned long long int) ((((arr_14 [i_4 + 3] [i_5 + 2]) + (2147483647))) << (((/* implicit */int) arr_1 [i_4 + 3] [i_5 + 3])))))));
                arr_20 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5 + 3] [i_0]))))))));
                var_16 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((var_9) & (((/* implicit */unsigned long long int) var_4)))) % (((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-79))) : (arr_17 [i_5 + 2] [i_4])))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_0] [i_0])) / (((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-101))))))) : (min((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_4] [i_4]))))), (min((((/* implicit */long long int) arr_18 [i_5 + 2] [i_5 + 2] [i_5])), (var_2)))))));
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    var_17 += ((/* implicit */unsigned int) arr_21 [9U] [i_4] [i_5 + 3] [(unsigned short)3] [i_0] [i_4]);
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_5))));
                }
            }
            for (unsigned char i_7 = 1; i_7 < 14; i_7 += 4) 
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_17 [i_4 + 3] [i_4 + 1]) + (arr_17 [i_4 - 1] [i_4 + 3])))) ? ((-(var_9))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_22 [i_0] [i_4] [i_7 + 1] [i_7 - 1])), ((~(((/* implicit */int) var_7)))))))));
                var_20 -= min((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_21 [i_7] [i_7] [i_4] [i_4] [i_0] [i_0]), (var_10))))))), ((-(((/* implicit */int) max((((/* implicit */unsigned char) arr_25 [i_0] [i_0] [i_0])), ((unsigned char)32)))))));
                var_21 = ((/* implicit */int) ((11850741915500335375ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_24 [i_4] [i_0])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) var_4))))))));
            }
            for (unsigned short i_8 = 1; i_8 < 14; i_8 += 4) 
            {
                arr_30 [i_0] [i_0] [i_4] |= ((/* implicit */unsigned long long int) (_Bool)1);
                var_22 = ((/* implicit */unsigned int) var_2);
            }
            arr_31 [i_0] [i_4] [i_4] = ((/* implicit */int) ((short) (!((_Bool)1))));
        }
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((unsigned char) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        /* LoopNest 3 */
        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            for (unsigned char i_10 = 4; i_10 < 14; i_10 += 3) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_40 [i_0] [i_9] [i_0] [i_0] [i_9] [i_10 + 3] &= ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (_Bool)1))))));
                        arr_41 [i_0] [i_9] [i_0] [i_10] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (1ULL)));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_0])))) << (((arr_27 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))), ((+(var_9)))));
        arr_42 [i_0] [i_0] = ((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0]);
    }
    var_25 = ((/* implicit */long long int) var_11);
}
