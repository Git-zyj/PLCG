/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213751
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [(_Bool)1] = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_13 = ((/* implicit */long long int) min((((((((/* implicit */_Bool) 1734661776U)) && (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (_Bool)1)))))), ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] = (~(max((((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) 2560305520U)) && (arr_1 [i_0])))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_16 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_10 [i_4 - 1] [i_1]);
                            var_14 = ((/* implicit */short) max((((/* implicit */int) (signed char)105)), (min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((18446744073709551612ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106))))))))));
                            var_15 = ((/* implicit */short) ((max(((+(((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [14ULL] [i_1] [(unsigned short)2] [i_0]))))))) + (((max((arr_6 [i_0] [i_0] [i_0]), (0))) + (((/* implicit */int) (!(((/* implicit */_Bool) 10)))))))));
                        }
                    } 
                } 
            } 
            arr_17 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (((~(((/* implicit */int) ((unsigned short) (_Bool)1))))) + (((/* implicit */int) max((((/* implicit */short) var_12)), (arr_4 [(signed char)18] [i_1]))))));
        }
        for (unsigned short i_5 = 2; i_5 < 17; i_5 += 2) 
        {
            /* LoopSeq 4 */
            for (long long int i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
            {
                var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_10 [i_0] [i_5])) ? (arr_10 [i_0] [i_0]) : (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_5 + 2])))), (arr_7 [i_6] [i_5 + 2] [i_5 - 1] [i_6])));
                var_17 &= ((/* implicit */short) min(((_Bool)1), ((!(((/* implicit */_Bool) arr_4 [i_5 + 2] [i_5 - 1]))))));
            }
            for (long long int i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
            {
                var_18 += ((/* implicit */long long int) ((short) ((max((arr_19 [(short)12] [(short)12] [i_7]), (((/* implicit */long long int) var_7)))) > (((/* implicit */long long int) (~(((/* implicit */int) var_3))))))));
                var_19 ^= ((/* implicit */signed char) arr_23 [i_7] [i_0] [i_0] [i_0]);
            }
            for (int i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                arr_28 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */_Bool) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_3))));
                var_20 ^= ((/* implicit */unsigned int) ((arr_8 [i_8]) - (((int) arr_26 [i_5] [i_8]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    arr_33 [i_0] [i_0] [i_5] [(short)9] [i_8] [(short)9] = ((/* implicit */unsigned char) (_Bool)1);
                    var_21 -= ((((((/* implicit */_Bool) arr_10 [i_0] [i_5])) ? (((/* implicit */int) var_8)) : (arr_13 [i_9]))) + (((/* implicit */int) arr_21 [i_8])));
                }
                var_22 = ((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_8]);
            }
            for (short i_10 = 3; i_10 < 18; i_10 += 1) 
            {
                var_23 += ((/* implicit */_Bool) var_5);
                arr_36 [i_10] [i_5 + 2] [i_10] [i_10] = ((/* implicit */_Bool) ((unsigned int) arr_10 [i_0] [i_0]));
            }
            var_24 -= ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) arr_15 [i_0])), (var_2))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) 26))))))));
        }
    }
    var_25 = ((/* implicit */_Bool) ((unsigned int) (((_Bool)1) && ((_Bool)1))));
}
