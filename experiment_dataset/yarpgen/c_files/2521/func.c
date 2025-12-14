/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2521
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
    var_13 &= ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) min(((unsigned char)171), (var_1)))), (var_8))));
    var_14 = ((/* implicit */unsigned long long int) 738857901U);
    var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)13))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) 3556109395U))) ? ((-(arr_3 [i_0]))) : (arr_0 [i_0])));
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            arr_8 [(unsigned char)3] [(unsigned char)3] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))));
            var_16 = ((/* implicit */short) (((_Bool)0) ? ((-(3646058172U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238)))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (unsigned short i_3 = 3; i_3 < 8; i_3 += 3) 
                {
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        {
                            var_17 -= ((/* implicit */short) ((signed char) arr_13 [i_3 + 1] [i_3 + 1] [(unsigned char)5] [i_3] [i_3]));
                            var_18 = (+(((/* implicit */int) arr_1 [i_3 + 1] [i_1 + 3])));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [(unsigned short)4] [i_0] [i_4] = ((/* implicit */unsigned int) ((short) -2147483647));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_5 = 3; i_5 < 10; i_5 += 3) 
        {
            arr_19 [(_Bool)1] |= ((/* implicit */unsigned short) arr_16 [(_Bool)1] [0LL] [(_Bool)1]);
            var_19 = ((/* implicit */unsigned int) ((long long int) arr_17 [i_5 - 1] [i_5 - 2]));
            var_20 = ((/* implicit */int) ((-8573006567499383535LL) + (((/* implicit */long long int) (+(975784995U))))));
        }
    }
    for (unsigned long long int i_6 = 3; i_6 < 15; i_6 += 2) 
    {
        arr_23 [i_6] = ((/* implicit */unsigned char) arr_22 [(unsigned short)8]);
        /* LoopNest 2 */
        for (unsigned char i_7 = 2; i_7 < 15; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                {
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)0))))), ((~(2U))))), (((/* implicit */unsigned int) max(((+(((/* implicit */int) (unsigned short)65522)))), (((/* implicit */int) max((arr_25 [i_7 - 2]), (arr_21 [i_6]))))))))))));
                    var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((13U) << (((738857901U) - (738857872U))))))));
                    arr_30 [i_6] = ((/* implicit */long long int) arr_24 [i_6 - 1] [10]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
            {
                {
                    arr_36 [i_10] [6ULL] [i_10] [(_Bool)1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_33 [i_10] [i_6 - 2] [i_6 - 3]))))), (max(((unsigned short)26411), (((/* implicit */unsigned short) arr_20 [i_6]))))));
                    var_23 &= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-9112138006497924485LL)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 2; i_11 < 14; i_11 += 2) 
                    {
                        for (int i_12 = 0; i_12 < 17; i_12 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) var_9);
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_8))));
                                arr_42 [6ULL] [(unsigned char)2] [6ULL] [(unsigned char)2] [i_12] [i_11] [i_12] = ((/* implicit */unsigned int) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_6]))))))), (arr_41 [i_6 - 3] [i_9])));
                                arr_43 [i_6] [(unsigned short)6] [9] [(unsigned char)14] [i_12] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (((arr_33 [i_6 - 2] [i_9] [i_10]) >> (((arr_33 [i_6 - 2] [i_12] [i_12]) - (8574365492727836953ULL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 &= ((/* implicit */unsigned short) max((((int) max((((/* implicit */short) arr_28 [11LL] [9U] [i_6] [i_6])), ((short)-18420)))), ((((~(arr_31 [i_6] [3U] [i_6]))) ^ (((((/* implicit */int) arr_27 [i_6] [i_6] [i_6])) << (((((/* implicit */int) (unsigned short)35723)) - (35708)))))))));
    }
}
