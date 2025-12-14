/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249135
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((-185471412) >= (-338246523)))), (max((((/* implicit */unsigned long long int) var_8)), (var_1)))))) && (((/* implicit */_Bool) ((int) ((signed char) var_7))))));
    var_13 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (338246522) : (var_5)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) ((((/* implicit */unsigned int) var_5)) != (var_2))))))) >= (((min((964536022U), (((/* implicit */unsigned int) var_10)))) ^ (((/* implicit */unsigned int) ((var_5) & (((/* implicit */int) var_10)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */short) ((max((((/* implicit */int) ((-338246522) != (var_5)))), (max((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])), (var_5))))) >= (((/* implicit */int) ((((((/* implicit */unsigned long long int) 338246553)) + (arr_2 [i_0]))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */long long int) -338246534))))))))));
                    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((short) ((max((arr_5 [i_0] [i_1] [i_2] [i_2]), (((/* implicit */unsigned long long int) (short)26299)))) % (max((((/* implicit */unsigned long long int) var_7)), (4298845336269148328ULL)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_3 = 3; i_3 < 11; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            var_15 = ((((((/* implicit */_Bool) 8744834077803430474LL)) || (((/* implicit */_Bool) (signed char)68)))) ? (((/* implicit */int) ((signed char) arr_1 [i_3]))) : (((/* implicit */int) ((-338246523) >= (338246522)))));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 13; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (short i_7 = 4; i_7 < 13; i_7 += 4) 
                        {
                            var_16 = ((/* implicit */short) ((((/* implicit */unsigned int) -338246509)) < (1590679339U)));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))) >= (((((/* implicit */long long int) var_4)) % (var_3)))));
                        }
                        for (signed char i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            arr_24 [i_3] [i_4] [i_4] [i_4] [i_5] [i_6] [i_3] = ((int) ((arr_20 [i_3 - 1] [i_3 - 1] [i_4] [i_3 - 1] [i_6] [i_8] [i_8]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [i_5] [i_6])))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) && (((/* implicit */_Bool) ((var_4) / (var_6))))));
                        }
                        for (int i_9 = 1; i_9 < 10; i_9 += 2) 
                        {
                            var_19 = ((/* implicit */short) ((((long long int) arr_3 [i_3] [(short)8] [i_3])) * (((((/* implicit */long long int) ((/* implicit */int) (signed char)18))) & (arr_26 [i_3] [i_4] [i_5] [i_6] [i_9 + 3])))));
                            arr_28 [i_3] [i_5 + 1] = ((/* implicit */int) ((((arr_9 [i_3]) & (((/* implicit */unsigned int) var_6)))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10))) > (var_1)))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) % (7762282468793630417ULL)))) || (((((/* implicit */unsigned long long int) arr_18 [i_3] [i_5 + 1] [i_6] [(short)10])) < (arr_20 [i_3] [i_3] [i_3] [i_5 - 1] [i_3] [i_6] [i_9])))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 4) 
                        {
                            arr_31 [0U] [i_3] = ((/* implicit */short) ((unsigned int) ((-8744834077803430474LL) / (((/* implicit */long long int) ((/* implicit */int) (short)21912))))));
                            arr_32 [i_3] [i_4] [i_5] [i_6] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 338246522)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) arr_30 [i_4] [i_5] [i_6] [i_3]))))) & (((((/* implicit */_Bool) arr_26 [i_3] [i_4] [i_5] [i_6] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (208546163U)))));
                        }
                        arr_33 [i_3] [i_4] [i_5] [i_6] = ((/* implicit */long long int) ((short) ((((/* implicit */long long int) -1190602227)) <= (8744834077803430474LL))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_8)) & (var_11)))) ? (((((/* implicit */_Bool) -338246525)) ? (var_7) : (((/* implicit */int) arr_4 [i_3])))) : (((/* implicit */int) ((short) arr_0 [i_4])))));
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_3] [i_3] [i_4] [i_4] [i_5] [i_3]))) | (var_3))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))))));
                        var_23 = ((/* implicit */unsigned int) ((signed char) ((-6469802569808042523LL) + (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_6]))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((unsigned long long int) ((short) -1475842187))))));
        }
        var_25 ^= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) arr_14 [i_3] [i_3 + 2] [i_3])) - (((/* implicit */int) arr_14 [i_3 - 2] [i_3] [i_3 - 3])))));
    }
}
