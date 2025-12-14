/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53456
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
    var_15 -= ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((var_5) + (9223372036854775807LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [3U]))))))))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((-1563383550) + (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_1 [i_0] [i_0 + 1]))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3467155114566880697ULL)) ? (2027554201U) : (240U)));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) ((signed char) arr_3 [i_1]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_0 [i_1]))))))))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                arr_7 [i_2] [i_0] [i_0 - 1] = ((/* implicit */int) (+(((var_4) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50831))) : (var_5)))));
                var_19 -= ((/* implicit */unsigned int) ((arr_4 [i_0] [i_0 + 1] [i_2]) ? (((/* implicit */int) arr_1 [i_2] [i_1])) : (((/* implicit */int) var_4))));
            }
            for (unsigned int i_3 = 1; i_3 < 13; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) 3467155114566880711ULL))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0 + 1] [i_0 + 1] [i_0])))));
                            var_21 = ((/* implicit */long long int) (~(3467155114566880691ULL)));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((signed char) (+(((/* implicit */int) var_0))))))));
                            var_23 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)55512)))) ? (var_3) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13)))))));
                            var_24 -= ((/* implicit */signed char) (-((~(((/* implicit */int) (signed char)-35))))));
                        }
                    } 
                } 
                var_25 ^= ((/* implicit */unsigned char) arr_10 [i_0 - 1]);
                var_26 *= ((/* implicit */unsigned long long int) var_6);
                var_27 = ((/* implicit */short) var_11);
                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) var_4)))))));
            }
            arr_15 [i_0] [i_1] = ((_Bool) arr_8 [i_0] [i_0]);
        }
    }
    var_29 *= ((/* implicit */signed char) var_2);
    var_30 = ((unsigned long long int) var_9);
}
