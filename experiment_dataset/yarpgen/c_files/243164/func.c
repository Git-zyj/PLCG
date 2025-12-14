/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243164
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)21363)) << (((((/* implicit */int) (unsigned char)255)) - (243)))))) : ((~(var_6)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    var_13 = ((/* implicit */short) (-((-(((/* implicit */int) (unsigned short)35650))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2]);
                                arr_11 [i_2] = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35677))) : (arr_8 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)29886)) * (((/* implicit */int) (unsigned char)116))))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) (unsigned short)35696)) | (((/* implicit */int) (short)32767)))) : (((/* implicit */int) max(((unsigned short)29866), ((unsigned short)35692)))))))));
                            }
                        } 
                    } 
                    arr_12 [i_2] [i_2] [i_2] [i_2 + 1] = ((/* implicit */signed char) ((((min((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), ((-(((/* implicit */int) (unsigned short)29819)))))) + (2147483647))) << (((/* implicit */int) ((arr_8 [i_0] [i_0 + 3] [i_0 + 1] [i_0 + 2] [i_2 + 1] [i_0 + 2]) < (arr_8 [(short)1] [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_2 - 1] [(short)1]))))));
                }
                for (signed char i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                {
                    var_15 = (~(((((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_0 + 3] [i_0 + 1])) / (((/* implicit */int) var_0)))));
                    arr_15 [i_0] = ((/* implicit */unsigned short) min((var_8), (((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)0))))), (var_9))))));
                    var_16 = ((/* implicit */unsigned int) (short)(-32767 - 1));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */short) max(((~(((/* implicit */int) arr_0 [i_0 + 1])))), (((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_0 [i_0 + 1]))))));
                        arr_18 [i_0] [i_1] [i_6] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max((var_7), (((/* implicit */int) arr_7 [(signed char)14] [i_1] [i_1] [i_1]))))), (var_4)))) ? (arr_10 [i_0] [i_1] [i_5] [i_1] [i_6 + 3]) : (((/* implicit */long long int) arr_2 [(short)12] [i_1])));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10)))))));
                        arr_23 [0U] [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned short)35650);
                        var_19 *= ((/* implicit */_Bool) var_1);
                    }
                    var_20 = ((/* implicit */unsigned short) arr_13 [(unsigned short)7] [(unsigned short)7] [5U] [i_1]);
                }
                for (signed char i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
                {
                    arr_27 [i_0 + 3] [i_0] [i_1] [i_8] = ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (4294967295U)))))) ^ (var_2));
                    arr_28 [i_0] [i_1] [i_1] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((12772639132450717718ULL) >> (((((/* implicit */int) (unsigned short)10702)) - (10684))))))));
                }
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)40)), ((unsigned short)29823))))) / (arr_24 [i_0] [(short)1] [i_0] [12U]))), (((/* implicit */long long int) ((int) max((5674104941258833898ULL), (((/* implicit */unsigned long long int) var_7)))))))))));
                var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)187)), (1242394020)));
                arr_29 [(unsigned short)11] [i_0] = ((/* implicit */unsigned long long int) arr_26 [i_0] [i_1]);
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))))) : (var_9)));
}
