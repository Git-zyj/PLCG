/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198657
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) ^ (3088933206U)))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            var_12 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 1478952111U)), (max((((((/* implicit */_Bool) (short)-7196)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (18301380163336955372ULL))), (((unsigned long long int) 9279093080845565003ULL))))));
            var_13 = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_3)))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7936))) - (var_9)))))));
            var_14 = ((/* implicit */unsigned short) arr_4 [i_1 - 1] [9]);
            var_15 = ((long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) > (var_0)));
        }
        for (unsigned int i_2 = 2; i_2 < 11; i_2 += 4) 
        {
            var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_2] [i_0])) : (((/* implicit */int) (unsigned short)57598)))))))));
            var_17 = min((((/* implicit */unsigned int) ((short) var_11))), (((((/* implicit */_Bool) var_8)) ? (arr_4 [i_2] [i_0]) : (var_8))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (short i_4 = 1; i_4 < 10; i_4 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            arr_17 [i_5] = ((/* implicit */long long int) ((unsigned int) var_5));
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_3])) ? (((/* implicit */int) arr_12 [i_2] [(_Bool)1] [i_3] [i_4])) : (((/* implicit */int) ((_Bool) (unsigned short)7930)))))))))));
                            var_19 += ((/* implicit */long long int) (unsigned short)7936);
                            var_20 &= ((/* implicit */short) min((min((((/* implicit */unsigned int) (signed char)-6)), (arr_5 [7U] [i_4]))), (((/* implicit */unsigned int) var_11))));
                            var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)6))))) ? ((+(((/* implicit */int) arr_16 [i_5] [i_4] [i_2] [i_2 - 1] [(short)2])))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_2 + 1] [i_2] [i_5] [i_5])) ? (((/* implicit */int) arr_16 [i_5] [i_2 - 1] [i_2] [i_4] [i_5])) : (((/* implicit */int) var_1))))));
                        }
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)20)) ? (var_9) : (((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)39154)), (-4133110761774191658LL)))) / ((+(10573250482641157171ULL)))))));
                        arr_18 [i_0] [i_2] [i_2] [i_3] [i_4 + 2] = ((/* implicit */unsigned short) ((short) min((arr_4 [i_4] [i_2]), (((((/* implicit */_Bool) 4294967280U)) ? (arr_5 [i_2] [8ULL]) : (var_2))))));
                    }
                } 
            } 
            var_23 += ((/* implicit */_Bool) (unsigned char)29);
        }
        for (int i_6 = 3; i_6 < 10; i_6 += 2) 
        {
            arr_21 [i_0] [i_0] = arr_4 [i_6] [i_6 - 2];
            var_24 += ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                arr_25 [i_7] = ((/* implicit */short) max((((max((arr_20 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0] [i_0])))) / (((/* implicit */unsigned long long int) ((unsigned int) 5433672374794134940LL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_7] [i_6 - 2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_19 [i_0]), (arr_24 [i_0] [i_6] [i_6] [i_7]))))) : (max((((/* implicit */unsigned int) (_Bool)1)), (3041084499U))))))));
                arr_26 [i_0] [i_6] [i_7] = ((/* implicit */unsigned int) arr_22 [i_0] [i_6] [i_7] [i_6]);
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        {
                            arr_31 [i_0] [i_6] = ((/* implicit */short) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_7] [i_7] [i_9])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)29))))), (((long long int) arr_10 [i_7])))), (((/* implicit */long long int) var_8))));
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_5 [i_6 - 3] [i_7]) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57599)))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_29 [(signed char)6] [(signed char)6] [i_7] [i_8] [i_9]), (var_1))))) * (max((8589934591ULL), (((/* implicit */unsigned long long int) (unsigned char)44)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_8] [i_8] [i_8]))))))));
                            arr_32 [i_0] [i_6 - 1] [i_7] [(_Bool)1] [i_6 - 1] [i_9] = ((/* implicit */signed char) ((unsigned long long int) (-(arr_14 [i_6 - 2] [i_6 - 1] [i_6 - 1] [i_0]))));
                            var_26 *= ((/* implicit */signed char) (-(((unsigned int) arr_13 [i_0] [i_6] [i_6] [i_8] [i_8] [i_9]))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_10 = 3; i_10 < 9; i_10 += 1) 
                {
                    var_27 += ((/* implicit */short) max((max((((/* implicit */unsigned long long int) arr_12 [i_0] [i_6] [i_7] [i_10])), (arr_10 [i_6 + 1]))), (((/* implicit */unsigned long long int) (~(arr_13 [(short)2] [i_6 + 1] [i_6 - 1] [i_6 - 2] [i_6] [i_6 + 1]))))));
                    var_28 = ((max((arr_20 [i_10] [i_10 + 1]), (((/* implicit */unsigned long long int) (unsigned char)220)))) << ((((+(((/* implicit */int) var_3)))) - (24170))));
                }
                for (int i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_6))) ? (4255159640002442329ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60978)))));
                    var_30 |= ((/* implicit */short) ((signed char) arr_33 [i_6] [i_6] [i_6 + 2] [i_6 - 1] [i_6 - 3]));
                }
            }
            for (signed char i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                var_31 += ((/* implicit */signed char) var_0);
                var_32 = ((/* implicit */short) (((+(max((arr_20 [i_12] [7U]), (((/* implicit */unsigned long long int) var_3)))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_6 - 2] [i_12] [i_12])) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_12] [i_6] [i_0] [i_0]))))) : (((/* implicit */int) var_3)))))));
            }
            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_0]))) : (5922610358376897150LL))) - (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)13)), (arr_27 [i_0] [i_6] [i_0] [i_0] [i_0])))))))) : (((((/* implicit */_Bool) ((short) var_6))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))))))));
        }
    }
    var_34 |= ((/* implicit */long long int) (_Bool)1);
    var_35 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((unsigned int) 198792370606076550ULL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (var_9) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))))));
}
