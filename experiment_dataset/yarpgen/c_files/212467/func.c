/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212467
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
    var_19 = (!(((/* implicit */_Bool) var_7)));
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -8388608LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_18))))))), (var_8)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) arr_1 [i_0]);
        var_22 -= ((/* implicit */short) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)60852)))))));
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((var_11) & (((/* implicit */long long int) ((/* implicit */int) (short)22545))))))));
            var_25 |= (!(((/* implicit */_Bool) 18446744073709551607ULL)));
            var_26 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_0 [i_0])) + (arr_3 [i_0] [i_0]))) ^ (((18446744073709551602ULL) * (((/* implicit */unsigned long long int) var_11))))));
        }
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
            {
                {
                    arr_10 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_3 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : ((-(var_7)))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        for (long long int i_5 = 2; i_5 < 15; i_5 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)4700)) ^ (((((/* implicit */int) var_10)) >> (((var_8) + (8006503389572356122LL)))))));
                                arr_16 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [5LL] [i_0] [i_4])) ? (-9164966540185619587LL) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))));
                            var_29 = ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */unsigned long long int) -4591646137320756751LL)) : (var_3));
                            var_30 = ((4591646137320756750LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60851))));
                        }
                        arr_22 [i_0] [i_2] [(short)16] [i_2] [i_0] = (!((!(((/* implicit */_Bool) arr_21 [i_6])))));
                        var_31 *= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) * (arr_20 [i_3 + 3] [i_3 + 1] [i_3 + 1] [i_3] [i_6 - 1])));
                    }
                    for (short i_8 = 2; i_8 < 15; i_8 += 1) 
                    {
                        var_32 = arr_1 [i_0];
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -6156332592183930269LL)))))) : (((var_14) ? (4080U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
                    }
                    for (long long int i_9 = 2; i_9 < 16; i_9 += 3) 
                    {
                        arr_28 [1LL] [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
                        var_34 = ((/* implicit */unsigned short) arr_20 [(unsigned short)10] [4LL] [(_Bool)1] [i_2] [i_0]);
                        arr_29 [i_0] [(unsigned short)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_18) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (-(var_8)))) : (arr_11 [i_3 - 1] [i_9 - 2] [i_9] [i_9])));
                        var_35 = ((((/* implicit */int) arr_5 [i_3 + 4] [i_3 - 1])) > (((/* implicit */int) (short)32756)));
                    }
                }
            } 
        } 
        arr_30 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_0] [10U] [i_0] [i_0] [i_0]))));
    }
    var_36 = ((/* implicit */short) ((((var_12) == (-6602612099345544663LL))) ? (((((var_9) / (((/* implicit */long long int) ((/* implicit */int) (short)31))))) / (988833937956912476LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
}
