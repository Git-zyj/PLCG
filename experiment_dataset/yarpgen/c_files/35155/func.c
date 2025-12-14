/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35155
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
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_12)) ? (var_10) : (var_13))), (((/* implicit */long long int) ((((/* implicit */int) var_12)) >> (((var_1) - (5314785930790327434LL))))))))) : (((((((/* implicit */_Bool) -1613723998)) ? (((/* implicit */unsigned long long int) 2892297581U)) : (14914400248918655308ULL))) - (min((var_4), (((/* implicit */unsigned long long int) var_0)))))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max((min((((/* implicit */int) var_7)), (((int) arr_0 [(_Bool)1] [i_0])))), ((~(((/* implicit */int) arr_0 [16] [i_0 - 2])))))))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) (unsigned short)12897))))) ? (((((/* implicit */_Bool) min(((unsigned char)12), ((unsigned char)90)))) ? (4252258857982907044ULL) : (((/* implicit */unsigned long long int) max((1960805432), (((/* implicit */int) (signed char)46))))))) : (((/* implicit */unsigned long long int) var_13)))))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 7022795091582510754LL)) ? (7022795091582510754LL) : (5950204139266318163LL))))));
        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_3 [i_0] [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 2] [i_0]))))))));
        var_19 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_12))))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (unsigned char i_3 = 3; i_3 < 7; i_3 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (7022795091582510754LL)))) - ((-(var_6))))))));
                        arr_14 [(unsigned char)5] [i_2] [i_1] [(unsigned char)5] = ((/* implicit */unsigned char) ((arr_10 [i_1]) - (arr_10 [i_1])));
                        arr_15 [i_1] = ((((/* implicit */_Bool) 6895188792645687671ULL)) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9253))))));
                        var_21 -= ((/* implicit */unsigned long long int) ((arr_12 [i_4] [i_4] [i_4] [i_1]) ? (((/* implicit */int) arr_12 [i_4] [i_3] [i_2] [i_1])) : (((/* implicit */int) arr_12 [i_4] [i_4] [i_4] [i_4]))));
                        var_22 &= ((/* implicit */short) ((var_13) <= (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3 + 3] [i_3 + 1] [i_3 + 3] [i_3 - 2])))));
                    }
                    for (long long int i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        var_23 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [i_3 - 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)22757)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) : ((-(arr_17 [i_5])))))) ? (max((((/* implicit */unsigned long long int) ((unsigned short) var_0))), (((unsigned long long int) 1788545162U)))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (max((((/* implicit */long long int) var_8)), (arr_17 [i_1]))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                        {
                            var_24 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_9 [i_2]))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((_Bool) (signed char)-21)))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
                        {
                            var_26 &= ((/* implicit */signed char) arr_7 [i_5]);
                            arr_23 [i_2] [i_2] [i_3 - 1] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 9293726423047065140ULL)) ? (min((((/* implicit */unsigned long long int) (unsigned char)145)), (((((/* implicit */_Bool) 6895188792645687673ULL)) ? (5296905152587358471ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (11675975029019800004ULL)));
                        }
                    }
                    for (int i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        arr_28 [i_1] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_22 [i_8] [i_1] [i_3 + 4] [i_1] [i_1]), (((/* implicit */unsigned char) var_0))))), ((+(((/* implicit */int) var_11))))));
                        arr_29 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                    }
                    arr_30 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_17 [i_3])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), ((+(-7116014025631205512LL)))))) ? (((/* implicit */int) arr_12 [i_3 - 2] [i_2] [i_1] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                }
            } 
        } 
        arr_31 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)153)), (1775345330373078816LL)))) ? ((-(((/* implicit */int) arr_26 [i_1])))) : (((((/* implicit */_Bool) max((17235285444229793364ULL), (7542409908077885140ULL)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_16 [i_1] [i_1] [i_1] [i_1])), (var_7))))))));
        var_27 *= ((/* implicit */unsigned char) ((max((((/* implicit */long long int) (+(((/* implicit */int) var_9))))), (arr_17 [i_1]))) - (max((((/* implicit */long long int) arr_27 [i_1] [i_1] [i_1] [i_1])), (min((329379277817725274LL), (((/* implicit */long long int) arr_21 [i_1] [10LL] [i_1] [i_1] [i_1]))))))));
    }
    for (unsigned char i_9 = 2; i_9 < 18; i_9 += 3) 
    {
        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (+(((((/* implicit */_Bool) arr_34 [i_9 + 4] [i_9 + 2])) ? (arr_34 [i_9 + 2] [i_9 - 1]) : (var_10))))))));
        var_29 = ((/* implicit */_Bool) (((_Bool)1) ? (6362531980539384335LL) : (-7132410971791175084LL)));
        var_30 = ((/* implicit */long long int) max((var_30), (((((/* implicit */_Bool) (signed char)53)) ? (7022795091582510754LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108)))))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 2) 
    {
        var_31 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)169))) ^ (553277768214967489LL))))) : (((((/* implicit */int) max(((signed char)48), ((signed char)-49)))) - (arr_32 [i_10] [i_10]))));
        /* LoopSeq 2 */
        for (long long int i_11 = 1; i_11 < 14; i_11 += 1) /* same iter space */
        {
            arr_43 [i_11] [i_10] [i_11] = (+(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_37 [i_11])), (var_12)))) || (((/* implicit */_Bool) max((var_8), (var_5))))))));
            var_32 = ((/* implicit */unsigned short) arr_41 [i_11] [i_11] [i_11 + 1]);
        }
        for (long long int i_12 = 1; i_12 < 14; i_12 += 1) /* same iter space */
        {
            arr_46 [i_10] |= ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_41 [i_10] [i_12] [i_10])))), ((-(((/* implicit */int) (short)-4821))))));
            arr_47 [i_10] |= ((/* implicit */_Bool) var_11);
            var_33 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
            var_34 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) arr_39 [i_12 + 1] [i_12 + 1] [i_12 + 1])) > ((~(arr_32 [i_10] [i_12]))))));
            arr_48 [i_10] [i_12] = ((/* implicit */long long int) ((unsigned long long int) (signed char)46));
        }
    }
}
