/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227390
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_2 [i_0] [i_0]) : (var_0)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [1LL]))))));
                        arr_8 [i_0] [i_0] = ((/* implicit */short) var_11);
                        arr_9 [i_0] [i_1] [15LL] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2])) || (((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) (short)-32739))))))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 1720079377U))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)140)))))));
                            arr_13 [i_0] [i_1] [i_2] [i_0] [i_3] [i_4] = (-(arr_10 [i_4] [i_1] [i_1] [i_2] [i_1] [i_0]));
                        }
                    }
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */short) (signed char)-32)), ((short)-4258)));
                        arr_18 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */short) ((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)3584)), (-3225214366815438121LL))))));
                    }
                    var_22 = ((/* implicit */short) arr_16 [i_0] [i_0] [i_1] [i_2]);
                    arr_19 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((-3225214366815438124LL) >= (3225214366815438118LL)));
                }
                var_23 |= ((/* implicit */unsigned int) ((arr_3 [i_1] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_1]))))));
                arr_20 [(unsigned short)2] [i_0] |= ((/* implicit */short) arr_6 [i_1] [i_1] [i_1] [i_1] [i_1] [18U]);
                arr_21 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)48359);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_6])) || (((/* implicit */_Bool) var_0)))))))), (var_16)));
        arr_26 [i_6] = arr_25 [15ULL];
    }
    for (unsigned int i_7 = 1; i_7 < 15; i_7 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_8 = 1; i_8 < 17; i_8 += 3) 
        {
            arr_33 [i_7 - 1] [i_8] [i_8] = ((/* implicit */unsigned char) (-(arr_2 [i_8] [(unsigned short)18])));
            arr_34 [i_7] = ((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_18)), (var_10))))));
        }
        arr_35 [i_7 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65385))))) ? (((/* implicit */int) var_17)) : (((((/* implicit */_Bool) arr_15 [9U] [i_7] [i_7 + 3] [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_15 [i_7] [i_7] [i_7 - 1] [i_7] [i_7] [i_7])) : (((/* implicit */int) var_5))))));
    }
    for (unsigned char i_9 = 2; i_9 < 10; i_9 += 3) 
    {
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_24 [i_9 - 2] [i_9])) ? (arr_39 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned int) min((arr_27 [i_9]), (arr_4 [i_9]))))))) ? (arr_39 [i_9]) : (((/* implicit */unsigned int) ((int) ((unsigned long long int) arr_1 [i_9]))))));
        var_26 = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) var_14)))), (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (arr_30 [i_9] [(unsigned short)17])))) > (((/* implicit */int) max((var_10), (((/* implicit */unsigned short) arr_5 [i_9] [i_9] [i_9])))))))));
        var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)16)), ((unsigned char)55))))));
        arr_40 [(short)8] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_13)) ? (885308932U) : (var_13))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 220654143U)) ? (((/* implicit */int) ((unsigned short) 6196966769480404146ULL))) : ((-(((/* implicit */int) (unsigned char)96)))))))));
        arr_41 [(unsigned char)3] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) 3225214366815438105LL)) : (14887975288068666460ULL)));
    }
    var_28 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_14)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (var_13))))))), (max((-3225214366815438113LL), (((/* implicit */long long int) var_3))))));
    var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
}
