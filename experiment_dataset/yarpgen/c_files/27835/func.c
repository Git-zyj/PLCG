/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27835
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */int) (-((-(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_12) : (arr_0 [i_0] [i_1])))))));
                arr_6 [i_1] = ((/* implicit */long long int) ((max((arr_2 [i_0]), (((/* implicit */unsigned long long int) ((arr_3 [i_0]) & (((/* implicit */int) arr_4 [i_1 + 2] [i_0] [i_0]))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) min((var_15), (var_3)));
    var_16 = ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            var_17 += ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_2])) == (((/* implicit */int) var_9)))))) < ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))) : (255ULL)))))), ((~(((/* implicit */int) arr_15 [i_5] [i_4] [i_3] [i_2]))))));
                            var_18 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_10)), (min(((+(255ULL))), (((/* implicit */unsigned long long int) (unsigned char)241))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    for (short i_7 = 2; i_7 < 10; i_7 += 4) 
                    {
                        {
                            var_19 |= ((/* implicit */unsigned long long int) max((-1), (var_0)));
                            var_20 += ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                            var_21 = ((/* implicit */_Bool) (signed char)112);
                            arr_23 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) ((arr_13 [i_2] [i_3] [i_6]) == (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3] [i_7])) || (((/* implicit */_Bool) var_2))))))))));
                        }
                    } 
                } 
                var_22 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((12085864324533782849ULL), (((/* implicit */unsigned long long int) (unsigned short)16383))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3] [i_3])))))) : (255ULL)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 17; i_8 += 4) 
    {
        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        {
                            arr_35 [i_8 - 1] [i_10] [i_11] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) -1662482594)) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) (unsigned char)8))))))));
                            arr_36 [i_8 - 1] [i_9] [i_11] = ((/* implicit */signed char) min((((int) (_Bool)1)), (((/* implicit */int) var_10))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30720))) & (arr_27 [i_8 - 2])))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_8 - 2] [i_8 - 2])), (18446744073709551347ULL))))));
                            arr_37 [i_8] [i_8] [i_8] [i_8] [i_8] |= ((/* implicit */unsigned char) var_12);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 17; i_12 += 1) 
                {
                    for (long long int i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        {
                            var_24 -= ((/* implicit */unsigned char) arr_41 [i_13] [i_9] [i_12] [i_8 - 1]);
                            arr_44 [i_13] [i_12] [i_8 + 1] = ((/* implicit */long long int) (+(((max((2253210978303465844ULL), (((/* implicit */unsigned long long int) (signed char)1)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_8 - 2] [i_9] [i_12] [i_13])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_14 = 0; i_14 < 18; i_14 += 1) 
                {
                    for (unsigned short i_15 = 2; i_15 < 16; i_15 += 1) 
                    {
                        for (unsigned int i_16 = 3; i_16 < 16; i_16 += 2) 
                        {
                            {
                                arr_54 [i_9] [i_9] [i_9] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_47 [i_8]))))) ? (((/* implicit */int) arr_46 [i_8] [i_9] [i_9])) : (((/* implicit */int) arr_30 [i_16 - 2] [i_16 - 1] [i_16 - 3]))));
                                var_25 = ((/* implicit */unsigned int) ((8772771218554968255LL) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_53 [i_8 - 2]) & (arr_45 [i_16 + 1] [i_15] [i_14] [i_9]))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_17 = 0; i_17 < 18; i_17 += 4) 
                {
                    for (unsigned short i_18 = 1; i_18 < 17; i_18 += 2) 
                    {
                        for (signed char i_19 = 0; i_19 < 18; i_19 += 1) 
                        {
                            {
                                var_26 ^= arr_53 [i_8];
                                arr_62 [i_18 - 1] [i_18 - 1] [i_9] [i_9] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((18446744073709551347ULL), (((/* implicit */unsigned long long int) var_0))))) ? (max((max((1410166907), (-1662482594))), (((/* implicit */int) arr_46 [i_8] [i_9] [i_19])))) : (((/* implicit */int) min(((_Bool)1), (((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_61 [i_8] [i_8] [i_8] [i_8] [i_8 - 1])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
