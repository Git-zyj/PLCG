/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233517
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
    var_19 = min((((/* implicit */int) (unsigned char)255)), (-1813005487));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_1] [(signed char)9] [i_3] = ((/* implicit */unsigned short) (unsigned char)6);
                            arr_11 [i_0] [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) arr_2 [i_2]);
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) - (14570100519531067233ULL))))))));
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)128))))), (var_18)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1]))))) : ((~((~(((/* implicit */int) (_Bool)1)))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            {
                arr_16 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) (_Bool)1);
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (min((((/* implicit */unsigned long long int) (signed char)-36)), (((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) arr_12 [i_5]))))) ? (max((((/* implicit */unsigned long long int) var_15)), (var_11))) : (12009315938667170911ULL)))))));
                arr_17 [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((562949953159168ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)12)))))))) ? (((/* implicit */int) arr_8 [i_5] [i_5] [7U])) : (((((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_5] [i_5] [i_5])) * (((/* implicit */int) arr_8 [i_4] [i_4] [i_5]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))))))))));
    /* LoopNest 3 */
    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        for (unsigned char i_7 = 3; i_7 < 22; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((((/* implicit */_Bool) (-(min((arr_25 [i_6]), (((/* implicit */unsigned long long int) var_7))))))) ? ((+(((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_11))))) : (((/* implicit */unsigned long long int) arr_18 [i_6] [i_7 - 1]))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) max(((unsigned char)6), (((/* implicit */unsigned char) var_9)))))));
                            arr_30 [(signed char)10] [(unsigned char)18] [i_8] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) (unsigned short)62153))));
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) var_11))));
                            var_27 = (~(((((/* implicit */_Bool) (unsigned char)239)) ? (var_5) : (((/* implicit */int) (unsigned char)100)))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (-((+(((((/* implicit */int) arr_19 [i_7] [i_9])) / (((/* implicit */int) var_12)))))))))));
                            arr_35 [i_6] [i_6] [i_7] [(unsigned char)6] [i_9] [i_11] = ((/* implicit */signed char) (-((~(((((/* implicit */_Bool) var_15)) ? (arr_29 [(unsigned short)6] [i_7] [0U] [18] [i_9] [0U]) : (((/* implicit */unsigned long long int) -881016259))))))));
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (-(((((/* implicit */_Bool) arr_29 [i_7 - 1] [1] [i_7 - 3] [i_7] [i_7 + 1] [(signed char)7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))) : (11462827949591256384ULL))))))));
                            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) 13465148051450827697ULL))));
                            var_31 = ((/* implicit */unsigned long long int) (unsigned short)46989);
                        }
                        arr_36 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) (unsigned char)60);
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) var_13)) : (var_5))))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(201326592))))))))))));
                    }
                    var_33 = ((((/* implicit */_Bool) arr_21 [(unsigned short)10] [(unsigned short)10] [i_8])) ? (((/* implicit */int) (!((_Bool)1)))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_7]))))), (arr_21 [i_7 - 1] [i_7 - 2] [i_7 - 3]))));
                    arr_37 [i_6] [i_7] [i_8] = ((/* implicit */_Bool) min((min((3876643554178484398ULL), (((/* implicit */unsigned long long int) (unsigned short)24638)))), (((/* implicit */unsigned long long int) ((unsigned short) var_12)))));
                }
            } 
        } 
    } 
}
