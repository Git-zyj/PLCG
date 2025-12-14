/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5188
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 6; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)10))) & (((((/* implicit */_Bool) (unsigned short)2149)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)10))) : (arr_1 [i_0 + 4])))))) ? (max((((/* implicit */unsigned long long int) arr_0 [8U])), (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)209)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_1 [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) (signed char)82);
            arr_6 [i_0] = ((/* implicit */unsigned short) (signed char)15);
        }
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) arr_9 [i_2] [i_2]);
        var_18 = max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_8 [i_2])) <= (arr_9 [i_2] [i_2])))), (arr_9 [i_2] [i_2]));
    }
    var_19 = ((/* implicit */unsigned long long int) var_16);
    /* LoopNest 2 */
    for (unsigned int i_3 = 2; i_3 < 16; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    var_20 &= ((/* implicit */unsigned long long int) 0U);
                    var_21 = ((((/* implicit */int) (signed char)109)) << (((max((arr_13 [i_3 + 2] [i_3 + 1]), (((/* implicit */unsigned long long int) var_12)))) - (6065870283931853530ULL))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        var_22 ^= ((/* implicit */short) ((((/* implicit */long long int) (+(max((arr_12 [i_3] [i_3]), (((/* implicit */int) arr_16 [i_3] [(unsigned char)6] [i_5]))))))) > (((((/* implicit */_Bool) ((unsigned int) 3246061313U))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)125)), ((short)31887))))) : (max((131941395333120LL), (((/* implicit */long long int) (_Bool)1))))))));
                        arr_20 [i_3] [i_3] [i_3 + 2] [i_3 + 2] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((short) 1573880950U));
                        var_23 = ((/* implicit */int) arr_14 [i_4]);
                        /* LoopSeq 1 */
                        for (long long int i_7 = 1; i_7 < 17; i_7 += 1) 
                        {
                            var_24 = (+(((((((/* implicit */_Bool) 1606872835)) ? (((/* implicit */unsigned int) 1606872839)) : (arr_18 [i_3] [i_3] [i_3] [i_6]))) / (((/* implicit */unsigned int) ((/* implicit */int) var_16))))));
                            arr_24 [i_7] [i_4] [i_3] [i_4] [2ULL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_4] [i_4] [i_5] [i_6] [i_3 - 1] [i_7 + 1])))))));
                        }
                        var_25 = ((unsigned int) ((((/* implicit */_Bool) (unsigned char)170)) && (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-113)))))));
                    }
                }
                /* LoopSeq 3 */
                for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (unsigned char)170))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 3; i_9 < 17; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) min((-1606872842), (((/* implicit */int) (unsigned char)176))));
                                var_28 += ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_12 [i_9 - 2] [i_9 - 2])))) ? (((/* implicit */long long int) arr_12 [i_9 + 1] [i_9 + 1])) : (((long long int) arr_12 [i_9 - 2] [i_9]))));
                                var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)59235))));
                                var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (((((/* implicit */_Bool) (~(arr_11 [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-20) != (-1377081742))))) : (((((/* implicit */_Bool) arr_12 [3] [i_4])) ? (((/* implicit */unsigned int) -1237384409)) : (arr_14 [17U])))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_11 = 4; i_11 < 17; i_11 += 4) 
                {
                    var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) max((arr_28 [(unsigned char)9]), (((/* implicit */unsigned int) var_7))))) % (((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)195))) : (1180806430635858902LL))))))))));
                    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)61452)) > (((/* implicit */int) (signed char)10)))))));
                }
                for (unsigned short i_12 = 0; i_12 < 18; i_12 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        arr_44 [i_3] [i_3] [(short)5] [1LL] = ((/* implicit */long long int) var_6);
                        /* LoopSeq 1 */
                        for (signed char i_14 = 3; i_14 < 16; i_14 += 3) 
                        {
                            var_33 += ((/* implicit */unsigned char) 9223336852482686976LL);
                            var_34 += ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_25 [i_3 - 2] [(signed char)12] [i_14 + 2] [i_14 - 3]))) > (((((/* implicit */int) (unsigned short)6300)) << ((((~(7357026760318662290LL))) + (7357026760318662301LL)))))));
                        }
                        var_35 ^= ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_3))))));
                    }
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)220))) : (2120768882U)))) ? ((-(2556911840U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((1738055451U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)906)))))))))) ? (((long long int) (signed char)12)) : (((/* implicit */long long int) max((((/* implicit */unsigned int) max((arr_12 [(unsigned short)6] [i_12]), (((/* implicit */int) (signed char)-29))))), (1738055455U))))));
                    var_37 = ((/* implicit */unsigned long long int) -9223336852482686962LL);
                    arr_48 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64649))) | (3935275531U))))));
                    /* LoopSeq 1 */
                    for (short i_15 = 0; i_15 < 18; i_15 += 1) 
                    {
                        arr_51 [(unsigned short)2] [i_3] [9] [i_3] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)85), ((unsigned char)152))))) > (((13344711262200552711ULL) - (((/* implicit */unsigned long long int) 1606872840)))))) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_3]))) > (3059062585U))))))));
                        var_38 ^= ((/* implicit */short) max((((/* implicit */unsigned int) (signed char)54)), (3935275531U)));
                    }
                }
                var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(arr_12 [i_3 - 1] [(short)0])))) - (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_50 [10U])), (arr_27 [i_4] [i_4])))) ? (((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_3] [17U] [i_3]))) : (arr_11 [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) (short)15898)))))));
            }
        } 
    } 
}
