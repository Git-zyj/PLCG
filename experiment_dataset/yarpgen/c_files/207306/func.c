/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207306
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_15 -= ((/* implicit */unsigned short) var_7);
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (_Bool)0);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_1] [i_3] [i_3] = ((/* implicit */signed char) (((-((~(((/* implicit */int) var_12)))))) + (((/* implicit */int) arr_0 [i_0] [i_0]))));
                            var_16 = ((/* implicit */short) min((((/* implicit */unsigned short) min(((_Bool)0), (arr_9 [i_3] [i_1] [i_0])))), (max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)58950)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_14))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_12)) >= (((/* implicit */int) var_12))));
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_6 = 3; i_6 < 13; i_6 += 3) 
            {
                for (short i_7 = 1; i_7 < 15; i_7 += 1) 
                {
                    {
                        arr_20 [i_7] [i_6] [i_5] [i_5] [i_4] = ((/* implicit */signed char) var_6);
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            arr_23 [1ULL] [1ULL] [i_5] [i_5] [i_6] [i_7] [i_5] = ((/* implicit */unsigned int) (unsigned short)0);
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1075))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((10567357) <= (((/* implicit */int) (signed char)-93)))))))))));
                            var_20 = ((/* implicit */short) (~(((/* implicit */int) (signed char)93))));
                        }
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned char) max((var_21), (var_13)));
            var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_4] [i_5] [i_5] [i_5]))))) << (((((((-3575458917813753084LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)146)) - (141))))) - (176497284970031947LL)))));
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (signed char)88))));
        }
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            arr_26 [i_4] [(short)12] [i_9] = ((/* implicit */unsigned short) var_14);
            arr_27 [i_4] [10ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) 5927666722799842527LL))) ? (((/* implicit */unsigned long long int) arr_17 [i_4] [i_4] [9ULL] [i_4])) : ((+(var_7)))));
            arr_28 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_11)) >= (arr_12 [i_4] [i_4])));
            var_24 *= ((/* implicit */signed char) -1698126222);
        }
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (-(arr_12 [i_4] [i_4]))))));
    }
    /* vectorizable */
    for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
    {
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (unsigned char)255))));
        var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [i_10] [(signed char)11] [i_10]))));
    }
    var_28 = ((/* implicit */unsigned char) 15898370422285782063ULL);
}
