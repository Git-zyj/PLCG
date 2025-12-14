/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32616
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
    var_13 = ((/* implicit */_Bool) (unsigned char)96);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                var_14 &= ((/* implicit */unsigned long long int) ((-14LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)90)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)176)))))));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [12ULL] = ((/* implicit */unsigned long long int) ((27LL) >> (((arr_5 [i_1 + 2] [i_2 - 1]) + (756585952528269204LL)))));
                                var_15 *= ((/* implicit */unsigned long long int) ((3624427120U) != (arr_4 [i_0])));
                            }
                        } 
                    } 
                    var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)210))) <= (arr_5 [i_1 + 2] [i_1 + 1])));
                    arr_16 [i_0] [i_1 + 1] [i_2] [i_0] = ((/* implicit */unsigned short) ((long long int) arr_13 [(unsigned char)0] [(unsigned char)0]));
                }
                for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    var_17 = ((/* implicit */short) arr_2 [i_1 + 2]);
                    /* LoopSeq 4 */
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5]))) <= (12777993544145110895ULL)));
                        var_19 = ((/* implicit */unsigned long long int) (unsigned short)43548);
                        var_20 = ((/* implicit */unsigned char) arr_17 [i_0] [i_1] [i_5]);
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [(unsigned short)3] [i_1 + 1] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4))) : (arr_19 [i_0] [i_1 + 2] [i_7] [i_7])));
                        var_22 = ((/* implicit */unsigned char) ((unsigned int) 3662367193U));
                        var_23 -= ((/* implicit */unsigned char) arr_11 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 2]);
                    }
                    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) (((~(arr_3 [i_1 + 2]))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [i_0])) != (((((/* implicit */int) arr_6 [i_8] [i_8] [i_8] [(unsigned char)4])) >> (((arr_17 [(unsigned char)0] [i_1] [(unsigned char)0]) + (1046476531540969336LL)))))))))));
                        var_25 = (-(6188915127257838886ULL));
                        arr_27 [i_8] [i_5] [14U] [(unsigned char)4] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)180)), (max((-1345022335), (((/* implicit */int) (unsigned char)177))))));
                        var_26 = (unsigned char)128;
                    }
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((unsigned short) 12777993544145110883ULL))));
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) arr_21 [i_9] [i_5] [i_1] [i_0] [i_0]))));
                        arr_30 [i_0] = (unsigned char)184;
                        var_29 ^= ((/* implicit */signed char) (-((~(((/* implicit */int) ((signed char) arr_7 [10U] [i_1] [i_5])))))));
                    }
                }
                var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)23))))))) : (max((2171638307U), (((/* implicit */unsigned int) var_0)))))));
    var_32 = ((/* implicit */unsigned long long int) (-(-12LL)));
    var_33 = ((/* implicit */unsigned long long int) (-(var_8)));
}
