/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19237
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((min((((/* implicit */int) ((-1618184120) != (arr_0 [i_0])))), (arr_0 [i_0]))) < ((+(min((1789730892), (((/* implicit */int) (unsigned short)65528)))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) 550340107);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 1])))))));
                        var_12 -= ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_2] [i_3] [9ULL]);
                    }
                } 
            } 
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= (3379150137U)));
                    var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 524287ULL)) ? (((/* implicit */int) (_Bool)1)) : (1579208413))) ^ (((int) arr_8 [i_5] [i_4] [i_0] [i_0]))));
                    var_15 = arr_6 [i_0] [i_1 - 2];
                }
                var_16 = ((/* implicit */_Bool) arr_9 [i_1] [i_1 - 2] [i_1 - 2] [i_1] [i_1 + 1]);
            }
            for (unsigned int i_6 = 2; i_6 < 18; i_6 += 4) 
            {
                arr_20 [i_0] = ((/* implicit */_Bool) ((((unsigned int) arr_17 [i_1 + 1])) << (((((/* implicit */int) ((signed char) arr_17 [i_0]))) + (106)))));
                arr_21 [i_0] [(signed char)16] [i_0] = ((/* implicit */unsigned short) var_7);
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (+(((/* implicit */int) var_4)))))));
            }
            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (max((arr_15 [10] [i_1 - 1] [i_1 - 2] [i_1 - 2]), (((/* implicit */unsigned short) (_Bool)0))))));
                var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((arr_1 [i_1] [i_1]), (((/* implicit */unsigned int) arr_23 [i_1 - 2] [i_1] [i_1] [i_1 - 2]))))) || (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) && (((/* implicit */_Bool) arr_1 [(signed char)17] [i_1]))))));
            }
        }
        for (unsigned int i_8 = 1; i_8 < 18; i_8 += 2) 
        {
            arr_27 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_8 + 2]);
            arr_28 [i_0] [i_0] = ((/* implicit */unsigned short) var_3);
        }
        var_20 = ((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (((unsigned short) (unsigned short)56970))));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 2; i_9 < 7; i_9 += 2) 
    {
        arr_31 [i_9] = (-(arr_19 [i_9] [i_9 - 2] [(unsigned short)10]));
        var_21 *= ((/* implicit */unsigned int) arr_15 [i_9] [i_9] [i_9 - 1] [i_9 - 2]);
    }
    var_22 = ((/* implicit */unsigned long long int) 1883814587U);
}
