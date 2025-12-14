/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237223
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
    var_10 = ((/* implicit */unsigned int) var_8);
    var_11 = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned char)171))))), (min((((/* implicit */unsigned int) var_4)), (var_7)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2485179708U)) ? (7229450521594207827LL) : (-6232577878807600680LL)))) ? (((/* implicit */int) (unsigned short)28045)) : (((/* implicit */int) (short)-25221)))) - (28014)))));
        /* LoopSeq 2 */
        for (long long int i_1 = 3; i_1 < 16; i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_1 [i_1 + 2])))) + (((/* implicit */int) (unsigned char)85))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_1])), (-7198375489073722609LL)))) ? (max((14599677290483277568ULL), (((/* implicit */unsigned long long int) (unsigned short)28054)))) : (((/* implicit */unsigned long long int) max((1809787580U), (((/* implicit */unsigned int) arr_1 [i_1 - 3]))))))) : (((((/* implicit */_Bool) (-(1809787587U)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (7ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) arr_0 [i_1 - 2]))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_3 [i_2]);
                arr_9 [i_2] [i_1] [i_0] = min((((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 + 2]))), (((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (arr_0 [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))))));
                arr_10 [i_0] [i_1] [i_2] = ((max((min((((/* implicit */unsigned long long int) var_0)), (arr_7 [i_2]))), (((/* implicit */unsigned long long int) arr_3 [i_0])))) / (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(29U)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47285))) : (arr_6 [i_0])))))));
                arr_11 [i_0] = ((/* implicit */long long int) (~(max((min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [(unsigned short)4]))), (((/* implicit */unsigned int) arr_3 [i_1 - 2]))))));
            }
            arr_12 [i_0] [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */long long int) var_3)) - (arr_6 [i_0])))) ? (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */int) (unsigned char)32))))) : (max((((/* implicit */unsigned long long int) arr_6 [i_1])), (arr_7 [i_1]))))), (((/* implicit */unsigned long long int) ((arr_7 [i_1 + 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))))))));
            arr_13 [i_0] = ((/* implicit */long long int) arr_3 [i_0]);
        }
        for (long long int i_3 = 3; i_3 < 16; i_3 += 1) /* same iter space */
        {
            arr_16 [i_0] = ((/* implicit */signed char) (((+(((arr_7 [(_Bool)0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) / (((/* implicit */unsigned long long int) arr_0 [i_0]))));
            arr_17 [i_0] [i_0] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3 - 3])) ? (arr_6 [i_3 + 2]) : (arr_6 [i_3 - 2])))), ((+((~(13743797499815899547ULL)))))));
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
            {
                arr_20 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [(_Bool)1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_5)))) <= (((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_3])))))))) | (min((((/* implicit */long long int) arr_19 [i_3 - 1] [i_3 - 3] [i_3 - 3])), (8077643332002471304LL)))));
                arr_21 [i_0] [i_0] [i_4] &= ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) arr_18 [i_0] [i_3] [0LL])), (816266905192864228ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)244)))))));
                arr_22 [i_4] [i_4] [i_4] = ((min((((/* implicit */int) (short)-31884)), (1986921167))) <= (((((int) arr_14 [i_0] [i_3 - 2] [i_0])) | (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), (var_2)))))));
            }
            /* vectorizable */
            for (short i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        {
                            arr_29 [i_3] [i_3] = ((/* implicit */unsigned int) arr_18 [i_0] [i_0] [i_0]);
                            arr_30 [i_7] [i_6] [i_5] [10ULL] [i_3 - 1] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))));
                            arr_31 [(_Bool)1] [i_0] [i_3] [i_5] [i_6] [i_6] [(_Bool)1] = ((arr_26 [i_3 + 2] [i_3] [i_3 + 2] [i_3]) >> (((arr_26 [i_3 - 3] [i_3] [13ULL] [i_3 - 2]) - (2137160774U))));
                        }
                    } 
                } 
                arr_32 [i_5] [i_5] [(signed char)2] [i_5] = ((/* implicit */long long int) (short)25238);
            }
        }
        arr_33 [i_0] [i_0] = ((/* implicit */unsigned int) 17004524673950218446ULL);
    }
}
