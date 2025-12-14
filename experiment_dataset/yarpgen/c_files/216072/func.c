/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216072
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
    var_10 = ((/* implicit */unsigned long long int) var_6);
    var_11 += ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) var_8);
        var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (5525825430147239396ULL)));
    }
    for (int i_1 = 3; i_1 < 9; i_1 += 1) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) <= (arr_1 [(_Bool)1]))))) : (var_3))))))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) (-(1397763157)))) / ((((-(var_9))) ^ (((/* implicit */long long int) arr_1 [6U]))))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 1) 
    {
        var_16 = ((/* implicit */long long int) ((-3LL) > (((/* implicit */long long int) -1397763179))));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 8; i_3 += 1) 
        {
            for (unsigned int i_4 = 1; i_4 < 8; i_4 += 1) 
            {
                {
                    var_17 &= ((/* implicit */unsigned long long int) (-(((arr_7 [i_4 + 1] [i_4 + 1]) % (((/* implicit */int) arr_9 [i_2 + 1]))))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_2]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((unsigned long long int) var_3)) : (((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                    var_19 = ((/* implicit */unsigned char) ((_Bool) ((int) ((var_7) ? (var_0) : (((/* implicit */unsigned long long int) var_9))))));
                    var_20 = ((/* implicit */unsigned int) ((var_3) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))));
                    var_21 = ((/* implicit */unsigned long long int) arr_0 [i_3]);
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            arr_17 [i_2] [i_5] [6LL] = ((/* implicit */unsigned int) var_0);
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 2; i_6 < 8; i_6 += 1) 
            {
                var_22 = var_1;
                var_23 = ((/* implicit */int) -8955930378059425396LL);
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_24 = (-(((/* implicit */int) ((var_3) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2])))))));
                var_25 += ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))));
                var_26 -= ((((/* implicit */int) arr_11 [i_2] [3U])) / (((/* implicit */int) arr_11 [i_2 - 2] [i_5])));
            }
            for (unsigned char i_8 = 1; i_8 < 9; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 2; i_9 < 8; i_9 += 1) 
                {
                    for (unsigned char i_10 = 3; i_10 < 7; i_10 += 1) 
                    {
                        {
                            arr_33 [(short)6] [(short)6] [i_8] [(short)6] [(short)6] = ((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) arr_8 [i_2] [i_5] [i_8])))));
                            var_27 = ((/* implicit */signed char) ((var_4) == (((/* implicit */unsigned long long int) arr_1 [i_8]))));
                            var_28 -= ((/* implicit */unsigned char) var_9);
                        }
                    } 
                } 
                arr_34 [i_2] [i_2] [9U] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) | (((((/* implicit */int) var_5)) - (((/* implicit */int) var_7))))));
            }
        }
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_29 -= ((/* implicit */unsigned long long int) arr_16 [i_2] [i_11]);
            /* LoopNest 2 */
            for (long long int i_12 = 0; i_12 < 10; i_12 += 1) 
            {
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    {
                        arr_44 [i_13] [i_11] = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) var_5)))));
                        var_30 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_3) >= (((/* implicit */unsigned long long int) var_1)))))));
                        var_31 = ((/* implicit */unsigned long long int) var_7);
                        /* LoopSeq 1 */
                        for (unsigned char i_14 = 0; i_14 < 10; i_14 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned char) -185213377791974158LL);
                            var_33 += ((/* implicit */long long int) ((arr_35 [i_2 - 2]) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (var_0)))))));
                        }
                    }
                } 
            } 
            var_34 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4198230424397792210ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3157117265U)));
        }
    }
}
