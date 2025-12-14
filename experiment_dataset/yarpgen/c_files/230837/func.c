/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230837
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
    var_14 *= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)0), (((/* implicit */short) (unsigned char)19)))))) : (((((/* implicit */_Bool) 1618601735)) ? (((/* implicit */unsigned long long int) var_12)) : (17290739497602765997ULL))))), (((/* implicit */unsigned long long int) ((unsigned char) (-(var_7)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)29810)))) ? (((/* implicit */int) arr_1 [i_0] [(_Bool)1])) : (((/* implicit */int) ((short) (short)12867)))));
        var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0] [(unsigned char)4])))) ^ ((-(((/* implicit */int) var_13))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) 1618601737)) : (3138941918U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))) : (var_10)));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        var_17 *= ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)46))) | (arr_3 [i_2]))), (((/* implicit */unsigned long long int) ((arr_3 [i_2]) == (arr_3 [i_4]))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_1]))))), (17290739497602765997ULL)));
                            var_19 = ((((/* implicit */int) var_9)) * (min((((/* implicit */int) min(((unsigned char)113), (((/* implicit */unsigned char) (signed char)70))))), ((-(var_4))))));
                            var_20 = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)142)), (((((((/* implicit */_Bool) (short)-31634)) && (((/* implicit */_Bool) arr_6 [i_1])))) ? ((-(((/* implicit */int) (_Bool)0)))) : ((+(((/* implicit */int) (unsigned char)40))))))));
                        }
                        var_21 = (short)11362;
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_22 *= ((/* implicit */unsigned char) arr_18 [(short)7]);
                            var_23 = ((/* implicit */int) min((((/* implicit */unsigned int) arr_19 [i_1] [i_2] [i_4])), (min((max((((/* implicit */unsigned int) (short)-24747)), (arr_17 [i_6] [16ULL] [i_3] [i_2] [9ULL] [i_1]))), (arr_17 [i_1] [i_2] [i_3] [i_4] [i_4] [i_6])))));
                            var_24 = ((/* implicit */long long int) max((((((/* implicit */int) var_1)) * (((/* implicit */int) arr_8 [i_1])))), (((/* implicit */int) arr_8 [i_1]))));
                            var_25 = ((/* implicit */short) arr_16 [i_1] [i_1]);
                        }
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned long long int) max((arr_7 [i_2]), (((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_17 [i_1] [6ULL] [i_1] [i_1] [8U] [(unsigned char)8])) ? (((/* implicit */int) (short)-1863)) : (((/* implicit */int) (unsigned char)204))))))));
            var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) 379983448U))));
            var_28 = min((((((/* implicit */unsigned int) -1)) | (arr_15 [i_1] [(short)5] [i_2] [i_2] [i_2]))), (((/* implicit */unsigned int) -1076167489)));
            arr_20 [i_1] [(unsigned short)0] [i_1] = ((/* implicit */unsigned char) arr_19 [i_1] [i_2] [i_1]);
        }
        arr_21 [i_1] = ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_6 [i_1]))))), (3170910938358497501ULL)))));
    }
    var_29 = ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            {
                arr_26 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(15451126198135369223ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_24 [i_7] [i_8])))))))) ? (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_23 [i_7] [(unsigned short)8])) : (((/* implicit */int) arr_1 [(signed char)12] [i_8])))), ((+(1209371594))))) : (((/* implicit */int) (_Bool)1))));
                var_30 = ((/* implicit */long long int) max((var_30), (((max((((/* implicit */long long int) (short)-1)), ((~(-1LL))))) + (((/* implicit */long long int) max((-1618601737), (((/* implicit */int) (short)21670)))))))));
                var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) var_5))));
            }
        } 
    } 
    var_32 = ((/* implicit */int) var_9);
}
