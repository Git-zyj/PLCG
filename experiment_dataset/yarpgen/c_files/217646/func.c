/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217646
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
    var_19 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))) : ((((_Bool)1) ? (-2061131748654127089LL) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))), (((/* implicit */long long int) ((unsigned short) 9218868437227405312ULL)))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_16)) <= (((/* implicit */int) arr_3 [i_0] [i_0]))))) - (((/* implicit */int) var_17)))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3423913775U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) || (((/* implicit */_Bool) (unsigned short)64)))))) : ((+(var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 1]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))))) : (min((((((/* implicit */_Bool) var_15)) ? (var_5) : (arr_1 [(signed char)7] [i_0]))), (min((arr_1 [i_1] [10LL]), (((/* implicit */long long int) arr_6 [i_2] [i_1 - 2] [i_0 - 1]))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        var_22 = ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) (signed char)57)) : (((/* implicit */int) (_Bool)1)))))) ? ((-(13580224502733990532ULL))) : (((/* implicit */unsigned long long int) ((long long int) var_7))));
                        arr_9 [i_0] [i_2 + 1] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) (short)29638);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            arr_12 [i_1] [i_3] [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_3 [i_0] [i_1 + 1]);
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) arr_8 [i_2 - 1] [i_1 + 3] [i_2 - 1] [i_3 + 1] [i_0]));
                            arr_14 [i_0] [18LL] [i_0] [18LL] [i_0] [i_0] [(short)19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_17) ? (var_6) : (-2861906723482469901LL)))) || (((((/* implicit */_Bool) arr_2 [i_0])) || ((_Bool)1)))));
                        }
                        var_23 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) 2945837824U)) : (2861906723482469902LL))) >> (((((((/* implicit */_Bool) 3878604240U)) ? (72057594037911552ULL) : (((/* implicit */unsigned long long int) arr_8 [i_0] [8U] [i_2] [16LL] [i_3])))) - (72057594037911543ULL)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) >= (144038524U))))) != (arr_5 [i_0] [i_0] [i_0] [i_2]))))));
                    }
                    for (unsigned int i_5 = 3; i_5 < 18; i_5 += 4) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_1])) & (14966951368681926915ULL)))) ? (495785267U) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) << (((((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) (unsigned char)242)))) - (96)))))) : (min((((/* implicit */long long int) ((arr_2 [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned short)15])))))), (((long long int) arr_7 [i_0]))))));
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(2305843009213693951LL)))), (max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])), (1125899906842623ULL)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(short)10]))) <= (495785256U))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) (unsigned short)40524))))), (2979505613U))))))));
                        var_26 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 809524481559476301ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 3])))), (((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)235)) > (((/* implicit */int) arr_11 [i_0] [i_1 - 2] [i_0] [i_2 - 1] [i_5 - 2] [i_5]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1073741824U)) ? (((-1438133400282581319LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768))))) : (((long long int) (_Bool)1))))) <= (max((arr_10 [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (838000782U) : (arr_2 [(unsigned short)11]))))))));
                    }
                }
            } 
        } 
    } 
    var_28 &= ((/* implicit */signed char) 2047U);
    var_29 = ((/* implicit */unsigned short) var_14);
    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_5)))))) && (((((unsigned int) var_18)) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 17119402178088536343ULL)) && (((/* implicit */_Bool) var_11))))))))));
}
