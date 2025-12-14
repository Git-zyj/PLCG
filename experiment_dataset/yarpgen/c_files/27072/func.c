/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27072
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
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_13), (((/* implicit */unsigned short) var_6)))))) : (-3975963574671814136LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2547841500696507828LL)) ? (1726360903247579098LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-29446)))))) : (arr_3 [i_1])));
                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 3] [i_0 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (arr_0 [i_1] [i_0]))))) : (((((/* implicit */_Bool) var_5)) ? (arr_2 [i_0]) : (var_9))))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    arr_7 [i_0] [i_0] [i_0] = ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (0LL)));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3975963574671814140LL)) ? (((/* implicit */int) (unsigned short)32256)) : (((/* implicit */int) (signed char)27))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 3])) ? (arr_2 [(unsigned char)6]) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) << (((((/* implicit */int) var_8)) - (29991)))))))))))));
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) max(((+(((((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) | (-3975963574671814119LL))))), (((/* implicit */long long int) max((((/* implicit */int) (short)-29453)), (1599996478))))));
                }
                arr_9 [i_0] = ((/* implicit */unsigned int) ((long long int) arr_6 [i_1 + 2] [i_0 - 2]));
            }
        } 
    } 
    var_17 |= ((/* implicit */signed char) var_6);
    var_18 &= ((((/* implicit */_Bool) (-(var_4)))) ? (288229826395897856LL) : (max((2854841174133940744LL), (((long long int) var_9)))));
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        for (short i_4 = 2; i_4 < 17; i_4 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_19 = ((/* implicit */short) (-(((/* implicit */int) var_11))));
                    var_20 = ((/* implicit */unsigned int) (-(((long long int) ((((/* implicit */_Bool) arr_12 [i_3] [i_4])) ? (9090980545910411400ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                    arr_16 [i_4] = ((/* implicit */signed char) ((((unsigned int) (((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))))) >= (((/* implicit */unsigned int) ((arr_15 [i_4 + 3]) / (((/* implicit */int) var_6)))))));
                }
                for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3])) ? ((-(((/* implicit */int) (signed char)-118)))) : (((/* implicit */int) arr_12 [i_3] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((-(((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_4])) ? (var_9) : (((/* implicit */long long int) arr_15 [i_6]))))))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_19 [i_4]), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */long long int) arr_19 [i_4])) : (((((/* implicit */_Bool) (signed char)-16)) ? (288229826395897856LL) : (288229826395897864LL)))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((min((((/* implicit */long long int) max((var_7), (((/* implicit */unsigned int) (unsigned char)43))))), (var_4))) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-81))))))));
                        var_24 = ((/* implicit */unsigned short) max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) (~(8955257907510470037LL)))) ? (((/* implicit */int) ((short) (unsigned char)43))) : (min((arr_5 [i_4] [i_4] [i_4]), (((/* implicit */int) var_6))))))));
                        arr_25 [i_3] [i_3] [i_3] [i_8] [i_4] = ((/* implicit */unsigned int) var_5);
                    }
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((_Bool) (-((-(((/* implicit */int) (_Bool)1))))))))));
                        var_26 &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)28345)) % (-1572169049)))), (arr_3 [i_6])));
                        /* LoopSeq 3 */
                        for (long long int i_10 = 0; i_10 < 21; i_10 += 3) 
                        {
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (short)-31)) + (((/* implicit */int) (unsigned char)248))))))) ? ((~(((/* implicit */int) ((_Bool) var_0))))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
                            var_28 = ((/* implicit */unsigned short) -3975963574671814102LL);
                        }
                        for (int i_11 = 0; i_11 < 21; i_11 += 3) 
                        {
                            var_29 = ((_Bool) ((short) -1572169049));
                            var_30 |= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-36)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_6 [i_4] [i_4]))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)0)))))))), (((((/* implicit */_Bool) arr_14 [i_4 + 4] [14ULL] [i_4 + 1])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_14 [i_4 + 2] [(_Bool)1] [i_4 - 1]))));
                            arr_36 [i_3] [i_3] [i_6] [i_9] [i_4] = ((/* implicit */_Bool) max((((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2187610299U))), (max((var_7), (((/* implicit */unsigned int) var_13))))));
                            arr_37 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_18 [i_4] [i_4] [i_4 + 2] [i_4 + 2]), (arr_18 [i_4] [i_3] [i_4 + 4] [i_3])))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_24 [i_4 - 1] [i_3] [i_4 + 1] [i_3] [i_3])) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) ((unsigned short) var_11)))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) 
                        {
                            arr_40 [i_4] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (-(1572169046)))), (-5931255480604687450LL)));
                            arr_41 [i_3] [i_4] [i_4] [i_4] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) (_Bool)1))));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) var_3)) ? (8233061404741568503ULL) : (((/* implicit */unsigned long long int) -2854841174133940745LL))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((arr_29 [i_3] [i_3] [i_6] [i_9] [i_12] [i_3] [i_12]) ^ (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) : (max((arr_19 [i_4]), (11349128U)))));
                        }
                        var_32 = ((/* implicit */unsigned int) max(((-(8233061404741568503ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_4) == (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_3] [i_4] [i_3] [i_9] [i_3])))))) > (((/* implicit */int) var_10)))))));
                    }
                    arr_42 [i_4] = ((/* implicit */short) (+((-(var_4)))));
                    var_33 = ((/* implicit */unsigned short) (((~(((11349154U) >> (((331919498U) - (331919473U))))))) >> (((((/* implicit */int) arr_12 [i_4 + 2] [i_4])) + (21757)))));
                    arr_43 [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) (((~(var_9))) / (((/* implicit */long long int) 4283618165U))));
                    var_34 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_20 [i_3] [i_3]))))))))) ^ (((11349136U) & (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_3] [i_3])) < (min((((/* implicit */int) max((var_2), (var_2)))), (((((/* implicit */int) arr_20 [i_3] [i_3])) ^ (((/* implicit */int) var_0)))))))))));
                    var_36 += ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_4 + 3] [i_4 + 2])))))));
                    var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) (unsigned char)75))));
                }
                var_38 = ((/* implicit */signed char) max((((short) ((arr_27 [i_4]) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) arr_24 [i_4] [i_4] [i_3] [i_3] [i_3]))))), (((/* implicit */short) ((((/* implicit */long long int) var_7)) < ((-(var_9))))))));
            }
        } 
    } 
    var_39 = ((/* implicit */signed char) max((1572169050), (((/* implicit */int) (unsigned short)63510))));
}
