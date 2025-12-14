/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215796
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
    var_18 = ((/* implicit */signed char) (~(((((((-2545125662570390727LL) + (9223372036854775807LL))) << (((var_9) - (6927299533697859623LL))))) & (min((-2100940305871521733LL), (((/* implicit */long long int) (signed char)91))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_19 = arr_3 [i_0] [i_1];
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (arr_11 [i_4] [i_1] [i_4] [i_4] [i_4]) : (arr_11 [(signed char)6] [i_1] [i_1] [i_1] [i_1]))) & (((/* implicit */unsigned long long int) max((((arr_7 [i_1] [i_1]) >> (((arr_6 [i_0] [i_1] [(signed char)8] [i_3]) - (11474834179279172848ULL))))), (((/* implicit */long long int) ((int) arr_11 [i_0] [i_1] [(unsigned char)14] [i_3] [(signed char)11])))))))))));
                                var_21 *= (~(((arr_3 [i_0] [i_1]) >> (((arr_3 [i_0] [i_1]) - (2105641752))))));
                                arr_14 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_2] [i_4]);
                                arr_15 [i_0] [i_2] [i_1] [9] [i_2] [i_3] [18ULL] = ((/* implicit */int) var_5);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 17; i_5 += 3) 
                    {
                        for (signed char i_6 = 4; i_6 < 18; i_6 += 2) 
                        {
                            {
                                arr_22 [i_2] [i_5] [i_2] [i_1] [i_2] = ((/* implicit */int) min((281474976710648ULL), (((/* implicit */unsigned long long int) arr_12 [i_5] [i_0] [i_0]))));
                                var_22 = ((/* implicit */int) min((((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_2]))) != (18446462598732840968ULL)))))), (((max((0U), (0U))) >> ((((-(((/* implicit */int) (_Bool)1)))) + (16)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_7 = 1; i_7 < 18; i_7 += 2) 
                    {
                        arr_25 [i_0] [i_2] [5] [(signed char)13] = ((/* implicit */short) var_2);
                        arr_26 [i_7] [i_2] [i_2] [i_2] [14] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_1 [i_7 + 1])) & (((/* implicit */int) var_7))))));
                        var_23 = ((/* implicit */long long int) min((var_23), (((((/* implicit */long long int) arr_16 [i_0] [i_1])) | ((+(((long long int) 4543225223057670141LL))))))));
                    }
                }
                for (unsigned char i_8 = 3; i_8 < 16; i_8 += 4) 
                {
                    arr_30 [i_0] [i_1] [i_0] [i_8] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((signed char) (signed char)-91))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))))) ? (var_14) : (((arr_20 [i_0] [i_1] [i_8] [i_0] [i_0] [i_8]) & (((/* implicit */unsigned long long int) var_3)))))));
                    arr_31 [i_8] [i_8 + 1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_4 [i_8 - 2])), (((unsigned long long int) min((var_8), (((/* implicit */long long int) var_11)))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((long long int) min((max((((/* implicit */long long int) (unsigned char)0)), (4543225223057670141LL))), (((/* implicit */long long int) (signed char)-91)))));
}
