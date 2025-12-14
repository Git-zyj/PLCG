/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227936
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) arr_0 [i_0])) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-1986317788715620405LL)))))) : (((var_15) << (((arr_0 [i_0]) - (3057124641U)))))));
                var_17 = ((/* implicit */long long int) min((var_17), (min((arr_4 [i_1 + 1] [i_1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21497)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_3 [i_0])))))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned int i_3 = 4; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) arr_6 [i_3 - 4] [i_1 - 1] [i_1]);
                            /* LoopSeq 1 */
                            for (long long int i_4 = 1; i_4 < 22; i_4 += 3) 
                            {
                                var_19 &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_4 [i_1 + 1] [i_3 - 1]), (arr_4 [i_1 + 1] [i_3 + 2])))) ? (((/* implicit */int) min((arr_11 [i_0] [i_0] [i_0] [i_0]), (arr_11 [i_4 - 1] [i_4 + 1] [i_3 + 2] [i_1 + 1])))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_13 [i_0] [i_1 - 1] [i_2] [i_3] [i_4])), (var_1)))) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_2])) : (((/* implicit */int) max(((unsigned char)63), ((unsigned char)53))))))));
                                var_20 = ((/* implicit */unsigned long long int) var_14);
                                var_21 += ((/* implicit */unsigned short) min((((/* implicit */int) arr_7 [i_0])), (((((/* implicit */int) var_12)) * (((/* implicit */int) arr_7 [i_3 - 2]))))));
                            }
                            /* LoopSeq 2 */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_22 += ((/* implicit */_Bool) (unsigned short)41183);
                                arr_17 [i_0] [i_0] [2ULL] = ((/* implicit */long long int) ((((/* implicit */int) var_13)) / (((int) (unsigned short)24347))));
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_23 = ((/* implicit */unsigned int) ((arr_16 [i_0] [i_1 - 1] [i_1] [i_1 - 1] [i_3] [i_6] [i_6]) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((4236559896U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41180)))))))))));
                                var_24 = ((((/* implicit */_Bool) ((arr_9 [i_6] [i_2]) ? (((/* implicit */int) arr_9 [i_3 + 2] [i_1 - 1])) : (((/* implicit */int) arr_9 [i_3 + 1] [i_3 - 2]))))) ? (((long long int) max((((/* implicit */unsigned long long int) var_7)), (var_0)))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)24336))))));
                                var_25 = (+(-1986317788715620405LL));
                                var_26 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (short)15563)), (1071644672)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3 - 1] [i_1 - 1] [i_1]))) : (min((2979711651062881263LL), (((/* implicit */long long int) (unsigned char)115))))));
                            }
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        for (short i_8 = 3; i_8 < 14; i_8 += 1) 
        {
            {
                arr_25 [i_7] [i_7] = ((/* implicit */signed char) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41195))) ^ (var_15))) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))))), (min((var_1), (((/* implicit */unsigned long long int) arr_12 [i_8] [i_8 - 2] [i_8] [i_8 - 2] [i_8 + 1]))))));
                var_28 = ((/* implicit */signed char) arr_18 [i_8]);
            }
        } 
    } 
}
