/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189721
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
    for (signed char i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned short) ((signed char) var_6));
                                var_11 = ((/* implicit */unsigned int) arr_11 [i_0] [(unsigned short)13] [(_Bool)1] [(signed char)7] [i_4 + 1]);
                                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) 471908908U))));
                            }
                        } 
                    } 
                    arr_13 [i_1 - 2] = ((/* implicit */unsigned long long int) ((long long int) (unsigned char)140));
                    arr_14 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_0] [i_0 - 2] [i_0] [i_2] [i_2]))));
                }
                for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    arr_17 [i_0] [i_1] |= ((unsigned char) max((((/* implicit */unsigned int) arr_6 [i_0 - 4] [i_0 - 2])), (var_8)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        for (signed char i_7 = 1; i_7 < 20; i_7 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) arr_10 [i_0] [i_1 - 1] [i_7 - 1] [i_7 - 1])))));
                                var_14 = ((/* implicit */long long int) ((signed char) min((3823058388U), (3823058391U))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (unsigned char)111)), (-5788875256885808754LL))), (((/* implicit */long long int) 471908908U))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_5])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_5] [i_0]))))), (((unsigned long long int) var_1))))));
                }
                for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    arr_25 [i_8] [i_1] = ((/* implicit */int) max((max((min((arr_10 [i_0] [i_0] [i_8] [i_0]), (((/* implicit */long long int) (unsigned char)115)))), (((/* implicit */long long int) (-(arr_12 [i_0] [i_1] [(unsigned short)4] [i_1] [i_1] [i_0])))))), (max((((var_9) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_8]))))), (((/* implicit */long long int) arr_12 [i_0] [i_0] [17ULL] [i_0 + 2] [i_0] [(unsigned char)2]))))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_8] [(signed char)19] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0 - 2] [i_0 - 2] [i_8]))) : (var_2)))) ? (2746546098U) : (((/* implicit */unsigned int) min((arr_12 [i_0] [i_0] [i_0] [i_0 - 4] [i_0] [i_0]), (((/* implicit */int) arr_22 [i_8] [i_0 + 1] [i_1 - 3] [i_1] [i_8] [i_0])))))));
                }
                var_17 *= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [(_Bool)1] [(_Bool)1]))));
                var_18 = ((/* implicit */signed char) (~(4610560118520545280ULL)));
                arr_26 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) -1408538746958318490LL));
            }
        } 
    } 
    var_19 *= ((/* implicit */unsigned int) var_9);
    var_20 = ((/* implicit */short) min((((var_5) + (((int) var_9)))), (((/* implicit */int) ((unsigned char) max((var_4), (var_1)))))));
}
