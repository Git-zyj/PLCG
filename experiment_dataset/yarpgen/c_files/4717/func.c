/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4717
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) max((1692171577), (1047349960)))) ? (((int) arr_1 [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_2])))));
                    var_11 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) (short)21)))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) ((long long int) min((((((/* implicit */_Bool) (short)-50)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_2 [17]))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))))));
        arr_10 [i_3] [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [(short)5] [i_3] [(short)5] [(short)5])) : (var_7)))) ? (((/* implicit */int) var_1)) : ((+(1692171604)))))));
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) -1692171604))), (((((/* implicit */int) arr_1 [i_3])) - ((~(-1692171579)))))));
    }
    for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            arr_16 [i_4] [(signed char)9] [i_4] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */int) arr_3 [i_5])) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (4986131551702480458LL)))) ? (arr_2 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_5))))))));
            arr_17 [i_4] [i_5] [i_5] = ((/* implicit */_Bool) var_6);
            var_13 = ((/* implicit */unsigned int) max((var_13), ((-(((max((((/* implicit */unsigned int) 1692171583)), (63488U))) - (((/* implicit */unsigned int) max((var_7), (var_7))))))))));
        }
        var_14 ^= ((/* implicit */long long int) var_10);
        arr_18 [i_4] [(unsigned char)5] = arr_2 [i_4];
        /* LoopSeq 3 */
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            var_15 = 1692171598;
            var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((unsigned int) 1692171614)) << (((((/* implicit */int) (short)20672)) - (20669)))))) || (((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */short) arr_1 [i_6])), ((short)20596)))), (((((/* implicit */_Bool) arr_1 [i_6])) ? (-1692171615) : (((/* implicit */int) (_Bool)1)))))))));
        }
        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) 0U);
            arr_24 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) 4986131551702480458LL);
            var_18 = ((/* implicit */_Bool) arr_14 [i_4] [8U] [i_7]);
        }
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            arr_27 [i_8 + 1] [i_4] = ((/* implicit */short) ((long long int) max(((-(998049003571105098LL))), (((/* implicit */long long int) var_2)))));
            arr_28 [i_4] = ((/* implicit */long long int) ((14247940134956497696ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)241))))))));
        }
    }
    for (short i_9 = 0; i_9 < 25; i_9 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            arr_35 [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) (signed char)-125)))))) ? (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_6)))) ^ (arr_32 [i_9] [i_9])))) : ((~(((((/* implicit */unsigned long long int) arr_32 [i_9] [i_9])) | (12049463607442293691ULL)))))));
            var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [15U] [i_10] [i_10]))))) ? (max((-35765617), (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))))));
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) ((arr_40 [(short)20] [i_10] [i_9] [i_11] [i_9]) << (((-1LL) + (3LL)))))))));
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_29 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        }
        arr_42 [i_9] = ((/* implicit */long long int) (unsigned short)56031);
        arr_43 [i_9] [i_9] = ((/* implicit */signed char) var_3);
    }
    for (unsigned int i_13 = 2; i_13 < 16; i_13 += 4) 
    {
        var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [(signed char)9])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [i_13 + 2] [i_13 + 2] [(unsigned char)23])) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_13 + 3] [i_13] [7] [i_13 - 2])) : (((/* implicit */int) var_2))))))) : ((-(arr_2 [i_13])))));
        arr_46 [7ULL] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_45 [i_13 + 2])) >= (((/* implicit */int) (signed char)-121)))));
    }
    var_23 = max((((/* implicit */int) var_5)), ((+(((/* implicit */int) (!(((/* implicit */_Bool) 267073734U))))))));
}
