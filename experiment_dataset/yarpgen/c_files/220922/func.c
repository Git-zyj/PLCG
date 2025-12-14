/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220922
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
    var_16 = ((/* implicit */unsigned short) -7714907632416703998LL);
    var_17 = ((((/* implicit */_Bool) var_15)) ? (((((long long int) var_13)) << ((((~(var_8))) - (2298905200655574716LL))))) : (((/* implicit */long long int) var_14)));
    var_18 = min((((((((/* implicit */_Bool) 16751402891087246570ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5956496377045490740LL))) * (((var_11) / (var_8))))), (((long long int) min((((/* implicit */unsigned char) var_7)), (var_5)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 24; i_2 += 2) 
            {
                {
                    var_19 = arr_3 [i_0];
                    var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_2 - 3] [18ULL] [i_2 - 1] [i_2 - 1]))) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) + (var_1))) : ((-(max((var_1), (arr_3 [(_Bool)1])))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 4; i_3 < 24; i_3 += 2) 
                    {
                        var_21 ^= var_12;
                        arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) -5956496377045490740LL)), (11316435285303483127ULL)));
                        arr_10 [i_3] [i_0] [i_2 - 3] [17LL] = arr_7 [i_0];
                    }
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            arr_17 [i_2] [i_2] [i_2 - 1] [i_0] [9ULL] = ((/* implicit */_Bool) min((min((arr_3 [i_0]), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))), (var_1)));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) -5956496377045490740LL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34859))))))));
                            var_23 ^= ((/* implicit */int) arr_1 [i_2 - 3]);
                            arr_18 [i_0] [i_0] [i_0] [6ULL] [i_5] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) min(((short)16376), (((/* implicit */short) (unsigned char)0))))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 1; i_6 < 24; i_6 += 3) /* same iter space */
                        {
                            var_24 ^= ((/* implicit */unsigned long long int) ((arr_15 [i_0] [i_4] [i_2] [i_6 - 1] [i_6]) / (arr_11 [i_6] [i_6] [i_4] [i_6] [i_4])));
                            arr_21 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_4])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (16514968264962111517ULL) : (((/* implicit */unsigned long long int) var_14)))))));
                        }
                        for (unsigned char i_7 = 1; i_7 < 24; i_7 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */short) max((((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [16ULL])) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)16552)))) : (((((/* implicit */_Bool) arr_15 [(_Bool)1] [i_0] [i_2] [i_0] [(unsigned short)6])) ? (-5956496377045490740LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), ((-((+(var_8)))))));
                            arr_25 [i_0] [i_1] [i_1] [i_2] [i_0] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? ((+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_11)) : (var_15))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) <= (var_13)))))));
                            arr_26 [i_0] [i_0] [i_0] [i_4] [i_7 - 1] = arr_2 [i_0] [i_1];
                        }
                        arr_27 [i_0] [i_1 - 2] [i_2] [i_4] [i_4] = ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_2 - 2] [i_2] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [i_4]), ((short)-16377)))))))) : (min((arr_8 [i_1 - 2] [i_0] [i_4] [i_2] [i_1 - 2] [i_0]), (((/* implicit */unsigned long long int) ((var_8) % (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        arr_28 [i_0] [i_0] [i_2] [i_0] = min((-5956496377045490766LL), (((/* implicit */long long int) (unsigned char)1)));
                    }
                }
            } 
        } 
    } 
}
