/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41543
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
    var_11 |= ((/* implicit */int) var_7);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) var_10);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        var_12 -= ((/* implicit */unsigned short) var_10);
                        var_13 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) arr_3 [i_0 - 1] [i_0])), (var_7)))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [i_0] [i_4] [i_0] [i_1] = ((/* implicit */unsigned short) (-(arr_1 [i_0] [i_4])));
                            arr_17 [i_0] [i_0 - 1] [i_1] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned char) ((1674782703) >= (-1674782704)));
                        }
                        for (signed char i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_1] = ((/* implicit */unsigned char) arr_10 [(_Bool)1] [i_1] [i_2] [i_5]);
                            arr_22 [i_0] [i_1] [(unsigned char)1] [i_0] [i_5] = ((/* implicit */long long int) max((((/* implicit */int) ((short) var_5))), ((~(((/* implicit */int) arr_20 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3] [2] [i_3] [i_0]))))));
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((arr_0 [i_5] [i_1]) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) != ((+(0LL)))));
                        }
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_3] [i_2] [i_3] [0LL] [i_3] |= ((/* implicit */unsigned char) arr_7 [11U] [(signed char)8] [i_0 - 1]);
                            var_15 = ((/* implicit */unsigned short) var_10);
                        }
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) ((unsigned char) -1674782704))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [(unsigned short)2] [i_3]))) : (var_7))))))));
                        var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) (-(arr_3 [i_2] [i_0])))) + (min((var_7), (((/* implicit */long long int) arr_18 [i_0] [9] [i_0] [i_0] [9]))))))));
                    }
                    arr_27 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_5);
                }
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned int) var_2);
    var_19 *= ((/* implicit */short) var_8);
}
