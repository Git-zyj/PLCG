/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229117
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
    for (signed char i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) (signed char)-74)))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_15 -= ((/* implicit */unsigned char) var_4);
                            arr_13 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) (-(min((((/* implicit */long long int) (short)-11114)), (arr_12 [i_0] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_0 + 1] [i_0] [(_Bool)1])))));
                            var_16 = ((/* implicit */unsigned short) ((unsigned long long int) var_2));
                        }
                        arr_14 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_3]))))) ? (((/* implicit */int) (unsigned short)17443)) : (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) var_14)) : (var_3)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)42908)) % (((/* implicit */int) (unsigned short)22628)))) << (((((/* implicit */int) arr_4 [i_0 + 2] [i_0 - 2] [i_0 - 1])) - (46072)))))) : (((unsigned long long int) (~(((/* implicit */int) (_Bool)0))))));
                        var_17 = ((/* implicit */int) ((((long long int) var_8)) & (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-64), (((/* implicit */signed char) (!(var_4))))))))));
                    }
                    arr_15 [12LL] [12LL] [i_1] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned char)248)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (signed char i_6 = 3; i_6 < 14; i_6 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) (signed char)12)) < (((/* implicit */int) (unsigned short)17438))))), ((+(((/* implicit */int) var_2))))));
                                arr_21 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] = (!(((/* implicit */_Bool) ((int) (unsigned short)42892))));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 568313954)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)24345))) < (((((/* implicit */_Bool) 1505757046)) ? (-4653496886959466425LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)195)))))))) : (((/* implicit */int) (unsigned char)11))));
                                arr_22 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_9 [i_0 - 2])) << (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))), ((-(((/* implicit */int) ((unsigned short) (signed char)0)))))));
                                var_20 -= ((/* implicit */int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)48092))))) ? (max((var_5), (((/* implicit */long long int) (unsigned short)17442)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65341)) ? (((/* implicit */int) (signed char)-22)) : (var_7)))))) % (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_0)) <= (((var_7) % (((/* implicit */int) var_10))))))) + (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)22611)) != (((/* implicit */int) arr_18 [(signed char)6] [(signed char)6] [(signed char)6] [5ULL]))))), ((unsigned short)42930)))))))));
                    var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (var_12)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)31274)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))))) : ((-(var_5)))))) ? (((((/* implicit */_Bool) (+(var_7)))) ? (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [(signed char)9] [(_Bool)1] [i_0]))) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) ((var_9) < (((/* implicit */int) (unsigned short)65322)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_2)), (arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((unsigned short) (unsigned short)213))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)4037)) : (((/* implicit */int) var_11)))))))))));
                }
            } 
        } 
        arr_23 [11LL] = ((/* implicit */short) max((arr_7 [i_0] [i_0] [i_0]), (((var_3) + (((/* implicit */int) (unsigned char)11))))));
    }
    var_23 &= ((/* implicit */unsigned short) ((max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65341)) >> (((/* implicit */int) (_Bool)1))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)17432))) - (9223372036854775778LL))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((var_7) / (((/* implicit */int) (unsigned short)60728)))) : (((int) (unsigned char)242)))))));
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) min((var_6), (((/* implicit */unsigned char) var_14)))))))) ? (max((((/* implicit */int) ((signed char) (unsigned short)172))), ((-(((/* implicit */int) var_11)))))) : (((/* implicit */int) ((max((var_3), (((/* implicit */int) (signed char)64)))) < (((/* implicit */int) var_13)))))));
    var_25 += var_0;
}
