/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237623
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [(short)9] [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_1]);
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_2] [i_2] [(short)14] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (arr_0 [i_0] [i_3])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (3U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3 + 2] [i_0]))) / (arr_6 [i_0] [i_1] [i_0] [i_0])))))) ? ((+(((((/* implicit */_Bool) (unsigned short)39113)) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) (unsigned char)224)))))) : (((/* implicit */int) (signed char)-5))));
                            arr_10 [10ULL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [(signed char)3] [i_0] [i_3 + 1])) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned char)128))))) ? (((unsigned long long int) ((((/* implicit */_Bool) 358065154U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) arr_6 [i_2] [i_2] [(short)11] [13U]))))), (arr_7 [(signed char)13] [i_1] [i_0])))))));
                            var_16 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_2 - 2] [i_2 - 2] [i_3 - 1])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)39101)))) << (((((/* implicit */int) (unsigned short)39229)) - (39214)))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_12 [8LL] [8LL] [i_2]))));
                                var_18 = ((/* implicit */int) ((unsigned int) arr_2 [i_2 + 1] [i_3 - 1]));
                                arr_13 [i_0] [(short)10] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39))) > (7U)));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                            {
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_3 [8ULL] [8ULL])) ? (1) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_8 [(signed char)6] [i_2 - 2] [i_2] [i_3 - 1])) ? (min((((/* implicit */unsigned int) (unsigned short)12)), (4040656428U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-83)))))))));
                                arr_17 [i_3] [i_2] [i_3] [i_3] [(short)2] |= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_2] [i_2] [i_5])), (arr_6 [i_2] [0LL] [i_2] [i_2])))) ? (((((/* implicit */_Bool) 8492417886641553464LL)) ? (13240102097486057829ULL) : (var_5))) : (((arr_0 [i_5] [i_3]) | (arr_8 [i_0] [i_1] [i_2 + 1] [i_0])))))));
                            }
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) (_Bool)1);
                arr_18 [i_0] [i_0] = max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)20712))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)31)), ((unsigned short)9)))) ? ((-(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) 1570647844U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-8753)))))) : (((((/* implicit */int) var_10)) | ((((_Bool)1) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) var_6))))))));
}
