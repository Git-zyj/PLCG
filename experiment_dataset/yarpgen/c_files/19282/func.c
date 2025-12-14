/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19282
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [15LL]))) <= (arr_0 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115))) : (arr_0 [i_0 + 1])));
        var_18 += ((/* implicit */unsigned char) arr_0 [i_0 - 1]);
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (-(12363922436776930765ULL))))));
                            var_20 = ((/* implicit */short) var_1);
                            arr_13 [i_2] [i_2] [i_2] [i_1] [10ULL] [i_2] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_10 [i_0])) / (((/* implicit */int) var_9)))));
                        }
                        for (unsigned short i_5 = 1; i_5 < 22; i_5 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-(((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1])))))));
                            var_22 = ((/* implicit */int) ((((((/* implicit */int) var_9)) + (((/* implicit */int) var_14)))) != (((/* implicit */int) arr_4 [i_0] [i_0 + 1]))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_7 [i_0] [(unsigned char)11]))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)51704)) + (((/* implicit */int) (unsigned short)2047))));
                        }
                        for (unsigned short i_6 = 1; i_6 < 22; i_6 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) var_9))));
                            var_26 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_11 [i_6 + 3] [i_3] [i_2] [i_1] [i_0] [i_1] [i_0]))))));
                            var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_0 + 1] [i_1 + 2] [i_6 + 2] [i_1]))));
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((arr_0 [i_0]) - (arr_9 [i_2]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))))))));
                        }
                        var_29 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_1] [i_1 - 1] [i_1]))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        var_30 = ((/* implicit */short) ((((/* implicit */unsigned long long int) 1806789629U)) == (18446744073709551615ULL)));
        /* LoopSeq 1 */
        for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            var_31 = (~(((/* implicit */int) (_Bool)1)));
            var_32 *= ((/* implicit */_Bool) (unsigned short)28331);
        }
        var_33 = ((/* implicit */int) (_Bool)1);
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_34 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_15 [i_9] [i_9] [12] [i_9])), (arr_1 [i_9]))))) >= (min((((18446744073709551593ULL) + (((/* implicit */unsigned long long int) 4294967295U)))), (max((arr_0 [i_9]), (var_16)))))));
        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((min((4118892957U), (((/* implicit */unsigned int) max(((signed char)-115), ((signed char)114)))))) / (4294967278U))))));
        var_36 *= ((/* implicit */unsigned char) ((((((/* implicit */int) max((var_4), (((/* implicit */unsigned char) var_1))))) ^ (((/* implicit */int) arr_2 [i_9])))) + (((/* implicit */int) ((short) arr_2 [i_9])))));
    }
    var_37 = ((/* implicit */_Bool) max((-677501461), (((/* implicit */int) (unsigned short)42987))));
}
