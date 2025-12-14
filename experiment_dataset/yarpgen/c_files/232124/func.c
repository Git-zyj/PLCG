/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232124
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_9 [20ULL] [i_2 + 1] [i_1] [20ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) max((arr_6 [i_1] [21LL] [i_3]), (min((arr_6 [i_0] [i_0] [4U]), (42851699)))))) : (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (2799109917481838961ULL))))));
                            var_10 = ((/* implicit */unsigned int) ((((_Bool) 1445819937U)) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)86))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)99))))))))));
                            var_11 = ((/* implicit */int) arr_2 [i_0] [i_1] [i_2 - 2]);
                        }
                    } 
                } 
                arr_10 [i_0] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) ((short) var_6))) / (((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 2; i_5 < 17; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                {
                    var_12 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */short) arr_1 [i_4])), (((short) arr_6 [i_4] [i_5] [i_6])))))));
                    arr_19 [(unsigned short)16] [3LL] [6ULL] = ((/* implicit */int) min((arr_14 [i_5 - 2] [i_4]), (((/* implicit */unsigned long long int) var_0))));
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) min((((((((/* implicit */_Bool) arr_0 [i_4])) || (((/* implicit */_Bool) arr_12 [i_4])))) || (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [(short)5] [i_4] [i_4] [1])), (arr_16 [i_4])))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))))))));
        arr_20 [i_4] [i_4] = ((/* implicit */int) ((((((/* implicit */long long int) min((arr_16 [i_4]), (((/* implicit */unsigned int) arr_7 [i_4] [i_4] [i_4] [i_4]))))) + ((~(arr_12 [i_4]))))) - (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_6))) & (2842251882252813113LL))) > ((+(arr_11 [(_Bool)1])))))))));
        var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1)))), (min(((+(var_9))), (min((((/* implicit */unsigned int) var_8)), (arr_16 [i_4])))))));
    }
    for (short i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
    {
        var_15 = ((((/* implicit */int) arr_2 [i_7] [i_7] [i_7])) << (((min((arr_0 [i_7]), (((/* implicit */long long int) (-(((/* implicit */int) var_8))))))) + (19318LL))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_7])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [(_Bool)1] [i_7] [i_7] [i_7]))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (arr_0 [i_7]))))))) << (((int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_8 [i_7] [i_7] [i_7])))))));
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
    {
        var_17 = arr_7 [i_8] [i_8] [i_8] [i_8];
        /* LoopSeq 1 */
        for (long long int i_9 = 3; i_9 < 19; i_9 += 2) 
        {
            arr_31 [i_8] [i_9] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_21 [i_8]))) || (((/* implicit */_Bool) arr_28 [i_8]))));
            arr_32 [(short)19] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_27 [i_8] [i_8]) / (arr_6 [i_9] [i_9] [i_8])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_8]))) : ((-(2799109917481838936ULL)))));
            arr_33 [i_8] [i_8] = ((/* implicit */short) (((-(6008484015014457625ULL))) < (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_8] [i_9] [i_8])))))));
            arr_34 [i_8] = ((/* implicit */unsigned int) ((short) arr_3 [i_9 + 1] [i_9 - 1]));
        }
    }
    var_18 *= ((/* implicit */signed char) max((((/* implicit */int) (short)32767)), ((-(2147483643)))));
}
