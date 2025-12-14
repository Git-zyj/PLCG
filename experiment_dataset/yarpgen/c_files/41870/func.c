/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41870
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
    var_13 = ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)7314))))) & (var_11));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_4] [i_1] [i_2] [i_3] [i_3] [i_4] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (4895727764849629988LL) : (((/* implicit */long long int) ((/* implicit */int) ((var_9) > (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3])))))))))) && (((/* implicit */_Bool) min((((-1087114899) & (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (unsigned short)7295)) ? ((-2147483647 - 1)) : (var_6))))))));
                                arr_12 [i_0] [i_0] [i_2] [i_4] [i_2] = ((/* implicit */unsigned int) var_0);
                                var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        var_15 = ((/* implicit */_Bool) 1047079705);
                        arr_15 [i_0] [i_5] [i_5] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 642359464)) >= ((+(1309050134001467027ULL)))));
                        arr_16 [i_0] [(signed char)3] [i_5] = ((/* implicit */unsigned short) (~(min(((+(var_9))), (var_8)))));
                    }
                    for (int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        arr_19 [i_2] = ((/* implicit */unsigned short) var_8);
                        var_16 = ((/* implicit */int) var_8);
                        var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [9U] [i_1] [i_1])) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) var_10)) : ((-(((/* implicit */int) var_0)))))))));
                        var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_14 [i_0])) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) -8374038044169767546LL)) : (72057594037927935ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (-8374038044169767546LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [i_2])))))))), (((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned long long int) var_2)), (var_5)))))));
                    }
                }
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    var_19 = ((/* implicit */unsigned short) min((max((var_5), (((/* implicit */unsigned long long int) arr_20 [i_1] [i_1] [i_7])))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_2) : (var_9)))) | (max((var_5), (((/* implicit */unsigned long long int) var_8))))))));
                    arr_24 [i_7] [i_7] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (var_4)));
                }
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_8 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (3682764292U) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_10), (var_10)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (17137693939708084583ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)21))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_1])) : (var_3))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_18 [(signed char)3] [i_0] [i_1] [i_1])) : (((/* implicit */int) var_10))))) ? (arr_20 [i_0] [i_0] [i_1]) : ((-(((/* implicit */int) var_1)))))))));
                arr_25 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)47279)) / ((+(max((642359457), (((/* implicit */int) var_0))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) var_11)) ? (min((((/* implicit */unsigned long long int) var_6)), (var_7))) : (var_5)))));
    var_22 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) -8638526959529643536LL)))))))), ((+(((((/* implicit */unsigned long long int) var_9)) - (var_7)))))));
    var_23 = ((/* implicit */int) ((var_3) < (((/* implicit */long long int) var_11))));
}
