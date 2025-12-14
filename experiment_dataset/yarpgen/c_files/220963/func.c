/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220963
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_12 &= ((/* implicit */unsigned long long int) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((((_Bool) arr_4 [i_0] [i_1] [i_1])) ? ((+(2532344733U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), ((_Bool)1)))))))));
                arr_11 [i_0] [i_1] [(short)1] = ((/* implicit */long long int) arr_2 [i_0] [i_0] [i_1]);
            }
            for (unsigned char i_3 = 2; i_3 < 10; i_3 += 2) 
            {
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((min((arr_7 [i_0] [i_3 - 1] [i_3 + 1] [i_0]), (arr_2 [i_3] [i_3 - 2] [i_3]))) ? (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 8141098870422857552LL))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) % (10043570611024941853ULL))))) : (min((((((/* implicit */unsigned long long int) 8141098870422857553LL)) * (10043570611024941853ULL))), (((/* implicit */unsigned long long int) (_Bool)0)))))))));
                var_14 = ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) (~(3569346955940965445LL))))))) && (((/* implicit */_Bool) (~((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))))));
                var_15 = arr_5 [i_1];
                arr_16 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_9 [i_3 + 2]))))) ? (((((/* implicit */_Bool) arr_9 [i_3 + 2])) ? (-4619991748282052670LL) : (((/* implicit */long long int) arr_1 [i_3 + 2])))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_3 + 2]), (((/* implicit */short) var_3))))))));
            }
            arr_17 [i_1] = ((/* implicit */_Bool) ((((arr_14 [i_1] [i_1]) ? (arr_8 [i_1]) : (arr_8 [i_0]))) + ((-(((/* implicit */int) arr_14 [i_1] [(_Bool)1]))))));
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) | (max(((+(var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 551552435892097000LL)) ? (((/* implicit */int) arr_14 [i_0] [i_1])) : (((/* implicit */int) arr_9 [i_0])))))))));
            arr_18 [i_1] [i_1] = ((max((236266208), (((/* implicit */int) arr_15 [i_1] [i_1] [i_0])))) >= ((-(((var_6) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_11)))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            arr_21 [i_0] [i_4] [i_0] = ((min((arr_12 [i_0] [i_4]), (((8388592U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) >> (((min((((/* implicit */unsigned long long int) min((arr_9 [i_0]), (((/* implicit */short) var_11))))), ((((_Bool)1) ? (17083197415654291879ULL) : (((/* implicit */unsigned long long int) -7099721211860374449LL)))))) - (110ULL))));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned short i_6 = 2; i_6 < 8; i_6 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned long long int) max((max((arr_22 [i_6 + 4] [i_5] [i_0] [(unsigned short)5]), ((!(((/* implicit */_Bool) arr_15 [i_6 - 2] [i_5] [i_0])))))), ((!(((/* implicit */_Bool) arr_8 [i_6 + 4]))))));
                        arr_27 [i_0] [(short)2] [i_4] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) arr_0 [i_6]))))) ? (((/* implicit */int) max((var_11), (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_6])))))))) ? (((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)9067)) : (((/* implicit */int) (_Bool)1))))) + (((((/* implicit */_Bool) 606880931)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_7 [i_0] [i_5] [i_4] [i_0]), (var_2)))))))));
                        arr_28 [i_0] [i_0] [i_5] [i_6] [i_0] [i_0] |= ((/* implicit */short) var_2);
                    }
                } 
            } 
            arr_29 [i_4] [i_4] [(unsigned char)9] = ((/* implicit */unsigned short) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) min((arr_15 [i_4] [i_0] [i_0]), (((/* implicit */short) (unsigned char)15))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_4] [i_4] [i_4] [i_4] [i_4]))))));
            var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2040901858954577217LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)194))));
        }
        var_19 = ((/* implicit */unsigned int) min((min((var_1), (((/* implicit */unsigned long long int) arr_23 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((arr_23 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_14 [i_0] [i_0])) : (((/* implicit */int) (_Bool)0)))))));
    }
    var_20 = ((/* implicit */long long int) var_3);
    var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_5)) ? (((var_2) ? (700215428827778715ULL) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) min((min(((unsigned char)232), (((/* implicit */unsigned char) var_8)))), (((/* implicit */unsigned char) max(((_Bool)1), (var_3)))))))));
    /* LoopNest 2 */
    for (short i_7 = 1; i_7 < 11; i_7 += 4) 
    {
        for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            {
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) min(((-(6043717257986506392ULL))), (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) arr_22 [i_7] [11] [i_7 - 1] [i_7])) : (((/* implicit */int) var_8)))))))) ? (min((((/* implicit */int) ((unsigned char) var_1))), (((((/* implicit */int) arr_0 [i_7 + 1])) | (((/* implicit */int) arr_24 [i_7 + 1] [i_7] [i_7] [0ULL] [i_7])))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) > (((arr_6 [i_8]) ? (((/* implicit */int) (short)-9068)) : (((/* implicit */int) arr_9 [i_7 - 1]))))))))))));
                arr_37 [i_8] [i_8] = (!(((/* implicit */_Bool) (unsigned short)58618)));
                arr_38 [i_8] [i_7] [8] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_7 + 1] [i_7 - 1] [i_8])) ? (((/* implicit */int) arr_24 [3ULL] [i_7] [i_7 + 1] [i_8] [i_7])) : (((/* implicit */int) arr_24 [i_7] [i_7] [i_7 + 1] [i_8] [i_7]))))), (((((/* implicit */_Bool) arr_24 [i_7] [i_7] [i_7 + 1] [i_8] [i_7 + 1])) ? (arr_19 [i_7] [(short)0] [i_8]) : (arr_19 [(short)11] [i_7] [i_8])))));
            }
        } 
    } 
}
