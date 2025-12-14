/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217042
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
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) (unsigned short)45859))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (long long int i_3 = 3; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */signed char) max((((/* implicit */int) ((((unsigned long long int) (unsigned char)124)) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))), (((((/* implicit */int) ((unsigned short) (signed char)-119))) >> (((((((/* implicit */_Bool) 4384010933425693186LL)) ? (arr_1 [17] [i_0]) : (((/* implicit */int) arr_2 [(unsigned short)2] [i_0] [i_3])))) - (1718564044)))))));
                            arr_11 [(unsigned short)15] [i_0] [i_3] [(unsigned short)15] [i_0] [i_0 - 1] = var_7;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    for (signed char i_5 = 3; i_5 < 20; i_5 += 3) 
                    {
                        {
                            arr_18 [i_0] [i_1] [(unsigned short)14] [i_5] [i_1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) var_9)), (((int) var_3))));
                            arr_19 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-1678052023566488119LL))), (((/* implicit */long long int) min((2244029459U), (((/* implicit */unsigned int) (unsigned short)8571))))))) < (((/* implicit */long long int) 1064999409U))));
                            arr_20 [i_0] [i_0] [i_4] [6LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2580419510616930528ULL)) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) (unsigned short)8593))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_29 [i_0] [i_1] [i_6 - 1] [i_6] [i_7] [i_8] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_1] [14])), (arr_23 [i_0])))) ? (((/* implicit */unsigned long long int) min((arr_3 [i_8]), (((/* implicit */long long int) arr_6 [i_8] [i_7] [i_1]))))) : (arr_23 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0 - 2] [i_0 - 2] [i_0 + 1] [(_Bool)1] [i_0] [i_0 - 2]))) / (var_2))))));
                                arr_30 [i_0] [i_0] [i_6] [i_7 + 1] [i_8] = ((/* implicit */_Bool) (signed char)-112);
                                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_6 - 1] [i_6 - 1] [i_1] [i_0] [i_7])) ? (((((2163491312U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) ? (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_5))));
                                var_12 *= ((/* implicit */unsigned long long int) ((long long int) (signed char)-48));
                                arr_31 [i_0] [i_8] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((min((arr_24 [(_Bool)1] [i_0] [i_6 - 1] [i_7] [i_6 - 1] [i_1]), (((/* implicit */long long int) var_1)))) != (((/* implicit */long long int) max((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (_Bool)1)))))))), (((long long int) 9169759420797075484LL))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
    {
        arr_35 [i_9] = ((/* implicit */unsigned long long int) var_9);
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) min(((~(4577333082918976737ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_15 [i_9] [i_9] [16U] [i_9])) : (((/* implicit */int) (unsigned short)6626))))))))));
    }
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_1))));
    var_15 &= ((/* implicit */_Bool) min(((~(((11362897690565636352ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20))))))), (1371325637024993408ULL)));
}
