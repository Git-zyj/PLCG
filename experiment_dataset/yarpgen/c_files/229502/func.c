/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229502
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
    var_12 = ((/* implicit */unsigned short) ((short) (+(((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
    var_13 = ((/* implicit */unsigned short) ((min((var_6), ((!(((/* implicit */_Bool) (unsigned short)58090)))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned char) ((signed char) var_7))), (((unsigned char) var_4)))))));
    var_14 = ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_7)), (var_9)))) : (((unsigned long long int) var_1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 2; i_2 < 24; i_2 += 4) 
                {
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (4516908956800781330ULL)));
                    var_16 = ((/* implicit */_Bool) ((unsigned int) ((unsigned short) arr_4 [i_1 + 2])));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) (-(-4578764774312339141LL)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 449119237))))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_1] [i_4])))))));
                            var_19 = ((/* implicit */signed char) (~(1377996650709382232LL)));
                            arr_12 [i_1] [i_4] [i_4] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 529494328U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_3 [i_3]))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)25693)) << (((/* implicit */int) var_10)))))));
                            arr_13 [i_3] [i_3] [(unsigned short)21] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (-(var_3)));
                        }
                    }
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 23; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                var_20 ^= ((/* implicit */_Bool) (-(((((/* implicit */int) arr_1 [i_1] [i_6])) & (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                                arr_18 [i_0] [i_0] [i_2] [i_0] [(signed char)16] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)116))) > (((unsigned int) arr_15 [i_0] [i_1] [i_1] [i_0]))))), (min((min((var_3), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) arr_2 [i_1 - 2] [i_1 - 2] [i_2 - 1]))))));
                                arr_19 [i_0] [i_5] |= ((/* implicit */short) (!(((/* implicit */_Bool) 529494319U))));
                                var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */int) max((((/* implicit */signed char) var_10)), (arr_14 [(_Bool)1])))) << (((((((/* implicit */_Bool) 529494328U)) ? (3765472967U) : (2387977576U))) - (3765472955U)))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    var_22 = ((/* implicit */signed char) ((((((((/* implicit */int) (signed char)-88)) + (2147483647))) >> (((((/* implicit */int) arr_22 [i_1 + 1] [i_1 - 2] [i_1 - 1])) - (6378))))) >> (((((((((/* implicit */int) arr_20 [i_0] [i_1] [i_7])) << (((/* implicit */int) (unsigned char)25)))) | (max((-608100774), (((/* implicit */int) arr_11 [(unsigned char)2] [i_0] [i_1] [i_1] [i_7] [i_1] [i_1])))))) - (33564056)))));
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (signed char)98))));
                    var_24 = min((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_16 [7LL] [3U] [i_1] [i_1] [(short)7] [i_1]))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)87)) - (((/* implicit */int) (unsigned char)242))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_0]))))) : (((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [(short)9]))) : (var_11))))));
                }
                arr_23 [i_0] [i_1] = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((signed char) var_9)))))));
                arr_24 [i_0] [i_1] = ((/* implicit */signed char) ((short) var_4));
            }
        } 
    } 
}
