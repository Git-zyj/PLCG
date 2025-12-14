/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29957
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
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_16 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_0])), (((long long int) arr_2 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)27233))) ? ((+(((/* implicit */int) (signed char)31)))) : ((~(((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = (~(-3514852303206417624LL));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_18 = ((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) arr_2 [i_2] [i_1])))));
            var_19 = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_2] [i_1] [i_1])) > (((/* implicit */int) arr_8 [i_2] [i_1] [i_1]))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 1) 
            {
                for (short i_4 = 2; i_4 < 17; i_4 += 2) 
                {
                    {
                        var_20 = ((/* implicit */short) (-((~(arr_13 [i_3])))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((short) ((_Bool) var_11))))));
                        var_22 += ((/* implicit */int) ((((((/* implicit */int) arr_14 [i_1] [i_4])) - (((/* implicit */int) var_11)))) <= (((/* implicit */int) (unsigned char)255))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                var_23 = arr_0 [i_5];
                arr_19 [i_5] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)46500))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 2; i_6 < 16; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)19062))));
                            arr_24 [i_5] [i_1] [i_5] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(4126389696U))))));
                        }
                    } 
                } 
            }
            for (signed char i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_1] [i_1] [i_2] [i_2] [i_8])) | (((/* implicit */int) arr_20 [i_1] [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) <= (((/* implicit */int) (_Bool)1)))))) : (((unsigned long long int) arr_13 [i_8]))));
                arr_27 [i_1] [i_8] [i_1] [i_1] = ((((/* implicit */int) arr_18 [i_1] [i_2] [i_8])) * (((/* implicit */int) ((arr_11 [i_1] [i_2] [i_1]) <= (((/* implicit */int) arr_9 [i_2]))))));
            }
            for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                var_26 = ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (short)-30047))) < (arr_21 [i_2])))));
                var_27 = ((/* implicit */short) ((((/* implicit */int) arr_17 [i_1])) / (((/* implicit */int) ((unsigned short) var_13)))));
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_35 [i_1] [i_11] [i_9] [i_10] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-26473)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_14) : (((/* implicit */unsigned long long int) arr_34 [i_11]))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (unsigned short)26836)))) : (((((/* implicit */int) (unsigned short)46500)) % (((/* implicit */int) arr_9 [i_10])))))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned int) ((unsigned short) (+(arr_7 [i_9]))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 2) 
            {
                var_30 = ((/* implicit */signed char) arr_5 [i_12]);
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_1] [i_2] [i_12] [i_1] [i_2] [i_13]))) > (var_10))));
                            var_32 = ((((/* implicit */int) arr_40 [i_2] [i_12] [i_14])) ^ (((/* implicit */int) var_1)));
                        }
                    } 
                } 
            }
        }
        var_33 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((min((var_4), (((/* implicit */unsigned long long int) arr_34 [i_1])))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))))) - (arr_5 [i_1])));
    }
    var_34 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_11))))))) ? (-3597539331946061077LL) : (((/* implicit */long long int) var_2))));
}
