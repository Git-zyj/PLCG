/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222721
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) max((3475372335U), (var_1)))) : (((((/* implicit */_Bool) 16006794177425751220ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 819594946U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1])) ? (var_6) : (((/* implicit */unsigned long long int) 4105084596378027447LL))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) >= (18446744073709551603ULL))))))), (min((((((/* implicit */_Bool) 2439949896283800421ULL)) ? (3475372349U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))))));
                arr_4 [i_0] [i_0 + 3] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (arr_3 [i_0 + 1] [i_0 + 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0] [i_0 + 1])))))))));
                var_17 = ((((unsigned long long int) min((1125899898454016ULL), (2439949896283800395ULL)))) + (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (short)5026))))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */_Bool) 10885267201638914426ULL);
                        arr_10 [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_8);
                    }
                    for (unsigned short i_4 = 1; i_4 < 12; i_4 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned char) ((4136949802U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-20525)))));
                        arr_13 [i_0] [i_0] [i_0] [i_4 + 1] = var_0;
                        arr_14 [i_0] [(unsigned char)5] [12U] [i_0] [i_0] = ((/* implicit */_Bool) (-(4088U)));
                    }
                    for (unsigned short i_5 = 1; i_5 < 12; i_5 += 2) /* same iter space */
                    {
                        var_20 &= ((/* implicit */unsigned short) ((min((((long long int) var_0)), (((/* implicit */long long int) (-(1073479680U)))))) / (((/* implicit */long long int) ((/* implicit */int) ((((long long int) var_7)) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_13))))))))));
                        var_21 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((8191ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_2])))))), (arr_3 [i_1] [i_1])))) ? (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [(unsigned char)6])) : (17592185913344ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) << (((((/* implicit */int) arr_2 [i_5] [i_0] [i_0 - 3])) - (234)))))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17))) % (15076514007329467124ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28747))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned short) var_7);
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))))) <= (((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]) >> (((((/* implicit */int) (signed char)123)) - (84)))))));
                            arr_21 [i_0] = ((/* implicit */short) (-(max((18445618173811097599ULL), (((/* implicit */unsigned long long int) 819594964U))))));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((unsigned long long int) (((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (7585436359571463008LL))) != (((/* implicit */long long int) ((var_3) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)79))))))))))));
                            arr_22 [i_6] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_5 + 1]);
                        }
                    }
                    arr_23 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) min(((~(arr_6 [i_0] [(unsigned char)8] [(unsigned char)5] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) | (var_13))))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_7 = 2; i_7 < 16; i_7 += 1) 
    {
        arr_26 [i_7] = ((/* implicit */unsigned int) (+(555835549482478257ULL)));
        var_24 = ((/* implicit */unsigned int) min(((short)960), (((/* implicit */short) (signed char)-102))));
        arr_27 [5ULL] [i_7 - 2] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) var_14)), (arr_24 [i_7 + 1] [i_7 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7] [i_7 + 2]))) : (((unsigned int) var_12))))), ((-(((((/* implicit */long long int) var_10)) / (arr_25 [i_7])))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
    {
        var_25 *= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)25110)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (signed char)115))))), (-2305843009213693952LL)));
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)97)))))));
        var_27 = ((/* implicit */unsigned char) (-(-2305843009213693952LL)));
    }
}
