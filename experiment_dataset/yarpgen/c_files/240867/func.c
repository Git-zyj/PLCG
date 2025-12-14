/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240867
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
    var_17 = ((/* implicit */unsigned char) 3663796673560256997ULL);
    var_18 = (((+(((9226844827631958878ULL) + (((/* implicit */unsigned long long int) -381403599)))))) > (3663796673560256997ULL));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_19 = max(((-(max((((/* implicit */unsigned long long int) var_14)), (18446744073709551615ULL))))), (((((/* implicit */_Bool) (-(-381403599)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1453))) * (arr_3 [i_2]))) : (((/* implicit */unsigned long long int) (-(var_3)))))));
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19262))) : (10935046722278255061ULL))))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((max((14782947400149294614ULL), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0])))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) arr_0 [i_2] [i_3])))))));
                        var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)201)))))) ? (((((/* implicit */_Bool) (unsigned char)31)) ? (var_7) : (18446744073709551615ULL))) : (max((((/* implicit */unsigned long long int) var_3)), (arr_4 [i_0] [i_1] [i_3])))))) ? (min((arr_8 [i_2] [i_3]), (max((arr_3 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)31)))))) : (max(((-(arr_6 [i_0] [i_1] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_2] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))) * ((-(((((/* implicit */_Bool) var_12)) ? (554675480888769108ULL) : (18446744073709551615ULL))))))))));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0]))));
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_2] [i_4] [i_5] = max((((18446744073709551615ULL) - (((/* implicit */unsigned long long int) 0)))), (((/* implicit */unsigned long long int) 310662792)));
                            var_24 = ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_16)) : (0)))), (((arr_2 [i_0]) / (((/* implicit */unsigned long long int) var_10)))))) | (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0])) ? (((var_8) / (arr_4 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (0)))))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_1] [i_4] [i_5]))) > (((/* implicit */int) arr_14 [i_1] [i_5]))));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((((/* implicit */_Bool) (+(arr_12 [i_0] [i_1] [i_2])))) ? (((((/* implicit */_Bool) var_13)) ? ((-(var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))))) : (max((arr_15 [i_0] [i_1] [i_2] [i_4] [i_5]), (arr_15 [i_0] [i_1] [i_2] [i_4] [i_5])))))));
                        }
                    }
                    arr_18 [i_0] [i_1] [i_2] = max((min((((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_0])), (2147483647))), (((/* implicit */int) ((_Bool) (unsigned char)202))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 3) 
                {
                    {
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) var_11))));
                        arr_29 [i_0] [i_6] [i_7] [i_8] [i_8] = ((/* implicit */short) (_Bool)0);
                        var_28 += ((((/* implicit */int) var_16)) | (((-431032184) / ((-2147483647 - 1)))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(18446744073709551615ULL)))) ? ((+(((/* implicit */int) arr_20 [i_0])))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_20 [i_0])) : (((/* implicit */int) (_Bool)0))))));
        arr_30 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_13)) : (var_10)))))) ? ((+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (var_6)));
        arr_31 [i_0] [i_0] = (-(8566049857899731296ULL));
    }
}
