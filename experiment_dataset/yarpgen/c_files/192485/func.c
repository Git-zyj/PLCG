/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192485
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
    var_18 = ((/* implicit */long long int) (-((~(((/* implicit */int) (unsigned char)97))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            var_19 = ((/* implicit */unsigned long long int) var_15);
            arr_5 [i_0] = max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_4 [i_1 + 2] [i_0 + 3] [i_0 + 1]))))), ((+(7747063082091674764ULL))));
            arr_6 [(_Bool)1] [i_0] [(unsigned char)2] &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned char) (short)13689))), (((((/* implicit */_Bool) 887799413)) ? (((((/* implicit */unsigned long long int) -1776057452)) | (10074112358296777604ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-1439), ((short)1438)))))))));
            arr_7 [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 10981024119600722078ULL)))))));
            arr_8 [i_0] = ((/* implicit */short) arr_4 [i_0] [i_1] [i_1]);
        }
        for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_20 = (_Bool)1;
            arr_13 [i_0] = ((/* implicit */unsigned long long int) (-(3159344291U)));
        }
        arr_14 [i_0] = min(((short)-13690), (((/* implicit */short) (unsigned char)9)));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) max((8538830716288717254LL), (8538830716288717249LL))))));
    }
    for (unsigned short i_3 = 2; i_3 < 18; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 10699680991617876844ULL))))))))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 3; i_6 < 18; i_6 += 3) 
                {
                    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        {
                            arr_31 [i_7] [i_6 + 1] [i_5] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((_Bool) (short)1464));
                            arr_32 [i_3] [i_4] [i_3] [i_4] [i_4] = ((/* implicit */long long int) min((((unsigned int) 13732533406998869024ULL)), (2629228404U)));
                            arr_33 [(signed char)7] [i_4] [i_5] [i_5] [i_4] [i_4] [i_3] = ((/* implicit */unsigned long long int) arr_15 [i_7]);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned char)50)), (1740207390U))))));
            }
            arr_34 [i_3] [i_3] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) (short)-22905)), (max((10699680991617876851ULL), (((/* implicit */unsigned long long int) (unsigned short)7799)))))), (var_1)));
            arr_35 [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_3 - 2])) ? (((/* implicit */int) (unsigned short)26374)) : (((/* implicit */int) (!(arr_18 [i_3]))))))), (min((((/* implicit */unsigned int) (unsigned short)32986)), (2713985669U)))));
            arr_36 [i_3] [(signed char)18] = ((/* implicit */signed char) (_Bool)1);
        }
        arr_37 [i_3] = ((/* implicit */unsigned long long int) (signed char)-94);
        var_24 = ((/* implicit */unsigned short) ((unsigned int) min((arr_0 [i_3]), (((/* implicit */unsigned int) (-(127867679)))))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 2; i_8 < 18; i_8 += 4) /* same iter space */
    {
        var_25 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)17923))));
        arr_41 [i_8] = ((/* implicit */long long int) ((unsigned char) 13732533406998869024ULL));
        var_26 = ((/* implicit */unsigned long long int) (short)-22905);
        var_27 = ((/* implicit */unsigned long long int) 127867685);
    }
    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) var_10))));
}
