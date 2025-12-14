/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249031
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
        arr_4 [6LL] = ((/* implicit */unsigned short) 8191LL);
        var_16 = ((/* implicit */signed char) ((var_8) && (((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [(unsigned short)7]))))), (var_6))))));
        var_17 = ((/* implicit */long long int) arr_0 [(signed char)11]);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 1; i_2 < 12; i_2 += 3) 
        {
            var_18 = ((/* implicit */signed char) ((unsigned short) arr_5 [i_2 + 2]));
            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_2 + 2]))));
            /* LoopSeq 4 */
            for (long long int i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                arr_13 [i_1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_11 [i_3 + 1] [i_2] [i_1]);
                arr_14 [i_1] [i_1] = ((((/* implicit */int) var_4)) & (((/* implicit */int) arr_2 [i_1])));
                var_20 = ((/* implicit */signed char) arr_11 [i_1] [i_2] [i_3]);
            }
            for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    arr_21 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)29265)) ? (((/* implicit */int) arr_9 [i_1] [i_2] [i_2 + 2])) : (((/* implicit */int) arr_9 [i_1] [(signed char)0] [i_2 - 1]))));
                    var_21 = ((/* implicit */long long int) 134838030);
                    arr_22 [(short)5] [i_1] = ((/* implicit */long long int) (signed char)-125);
                }
                arr_23 [i_4] [i_2] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [6U] [(unsigned short)7])) && (((/* implicit */_Bool) ((var_10) ^ (-6552785011870209281LL))))));
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2 - 1]))))))));
            }
            for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (+(arr_26 [i_2 + 2] [i_2] [i_6] [i_1]))))));
                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (((-(((/* implicit */int) (unsigned short)28609)))) ^ (((/* implicit */int) arr_16 [i_1] [i_2 + 1] [(signed char)6])))))));
            }
            for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    var_25 *= ((/* implicit */signed char) -5026462378004728614LL);
                    var_26 ^= ((/* implicit */unsigned char) 58720256);
                }
                for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    var_27 = (~(((/* implicit */int) var_0)));
                    arr_37 [i_1] [i_1] [i_7] [i_1] = -6552785011870209275LL;
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_6))));
                }
                var_29 = ((/* implicit */unsigned short) min((var_29), (var_5)));
            }
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 12; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    {
                        arr_43 [i_1] [i_2 + 1] [i_10] [i_10 + 2] [(unsigned char)13] = ((/* implicit */unsigned short) arr_6 [i_2]);
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 14; i_12 += 4) 
                        {
                            arr_46 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) / (-7524506721166725549LL)))) && (((/* implicit */_Bool) (+(131071U))))));
                            var_30 = (~(((/* implicit */int) arr_18 [i_1] [i_2 - 1] [i_11] [1LL])));
                            var_31 ^= ((/* implicit */unsigned int) (-(-4570883464330346147LL)));
                        }
                    }
                } 
            } 
        }
        for (signed char i_13 = 0; i_13 < 14; i_13 += 4) 
        {
            var_32 = ((/* implicit */long long int) var_13);
            var_33 = ((/* implicit */long long int) arr_30 [i_1] [i_13] [i_1] [i_13]);
            var_34 = ((/* implicit */unsigned short) var_7);
        }
        arr_50 [i_1] = ((/* implicit */long long int) var_4);
    }
    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(1773279196U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)65173)))))));
    var_36 ^= ((/* implicit */int) var_15);
    var_37 = min((var_10), (((/* implicit */long long int) (unsigned short)65531)));
    var_38 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
}
