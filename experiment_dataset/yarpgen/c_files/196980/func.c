/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196980
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) * (((/* implicit */int) arr_3 [i_1 - 2]))))) + (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)30956)))), (var_3)))));
            var_17 = ((/* implicit */long long int) max((((/* implicit */int) var_6)), (((((/* implicit */int) arr_0 [i_1 - 2])) << (((/* implicit */int) ((var_7) < (((/* implicit */int) (unsigned short)30971)))))))));
            var_18 -= ((short) max((((/* implicit */int) ((short) 34359738367ULL))), (var_1)));
            var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) | (var_2)))) ? (((((/* implicit */int) var_4)) | (((/* implicit */int) var_8)))) : ((~(((/* implicit */int) var_15)))))) % ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 - 2])))))))));
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))) ^ (arr_1 [i_0] [i_1])))))) ? (((((unsigned long long int) (unsigned char)165)) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(unsigned char)16])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)44)))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (var_3))))) + (arr_1 [i_0] [i_0])));
            var_22 = ((/* implicit */unsigned char) var_11);
        }
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            arr_13 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_0]) << (((((/* implicit */int) var_16)) - (25405)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_2))))))))));
            var_23 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30956))) & (7772422610395578194ULL))), (((/* implicit */unsigned long long int) var_12))));
        }
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */short) (((~(((/* implicit */int) max((var_12), (var_10)))))) <= (((/* implicit */int) ((((var_8) ? (((/* implicit */long long int) var_1)) : (-17LL))) >= (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_7 - 1] [i_7] [i_6] [i_0]))))))));
                                var_25 -= ((/* implicit */int) var_8);
                                var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_5))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_4])) > (((/* implicit */int) var_4))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) <= (12520035185640690520ULL)))))))));
                                var_27 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)30971)) ? (((((/* implicit */_Bool) var_16)) ? (arr_20 [i_0] [i_4]) : (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_7 - 1]))))) >> (((max((var_2), (((/* implicit */unsigned long long int) (short)-16)))) - (18446744073709551573ULL)))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned short) ((short) ((max((((/* implicit */unsigned int) var_1)), (536870911U))) | (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
                    var_29 = max((max((var_16), (var_16))), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) -1990682197)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0)))))));
                    var_30 = arr_15 [i_4];
                    var_31 = var_16;
                }
            } 
        } 
    }
    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
    {
        var_32 = ((/* implicit */signed char) max((min((((var_13) / (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) ((-460349162) == (((/* implicit */int) var_16))))))), (((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_3))))), (var_9))))));
        var_33 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_15)) / (var_1))), (min((((((/* implicit */int) arr_24 [i_8] [i_8] [i_8] [i_8] [i_8])) * (((/* implicit */int) var_6)))), (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) arr_4 [i_8] [i_8])))))))));
        var_34 = ((short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [(signed char)18])) & (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_8] [i_8] [15] [i_8]))) : (((((/* implicit */_Bool) var_11)) ? (var_2) : (var_3)))));
        var_35 = ((/* implicit */short) max((((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_8]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65515)))))));
    }
    var_36 = ((/* implicit */short) 17);
}
