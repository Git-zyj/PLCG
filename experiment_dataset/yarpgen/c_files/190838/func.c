/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190838
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
    var_11 = ((/* implicit */unsigned short) var_8);
    var_12 = ((/* implicit */short) var_4);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 4 */
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) / (((/* implicit */int) (_Bool)1))));
            var_13 = ((/* implicit */long long int) ((unsigned short) var_7));
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (max((arr_11 [i_0] [i_1] [i_1 - 1] [i_1 - 1] [i_1]), (arr_6 [i_0] [i_0]))))) << (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11))) + (arr_6 [(_Bool)1] [i_1]))) - (429155835U)))));
                            var_14 = ((/* implicit */long long int) (unsigned short)65528);
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((arr_10 [i_3] [i_2] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (var_0))))) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)12606)) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) (short)8747)))))))));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */short) arr_1 [i_1]);
            arr_14 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)8746)) : (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) (unsigned short)58105)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_10)))))));
        }
        for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (arr_16 [i_0] [i_0] [i_0])))));
            arr_17 [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)7425);
            arr_18 [i_0] = ((/* implicit */_Bool) ((min((((((/* implicit */int) (unsigned short)51159)) - (((/* implicit */int) (unsigned short)58116)))), (((/* implicit */int) var_9)))) + (((/* implicit */int) var_4))));
            arr_19 [i_0] [i_0] = ((/* implicit */short) ((((((11685333532831830158ULL) > (((/* implicit */unsigned long long int) 1563356991U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [i_0] [i_5] [i_5]) && (((/* implicit */_Bool) arr_0 [i_0])))))) : (((1U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) + ((~(arr_11 [i_0] [i_5] [i_0] [i_5] [i_0])))));
        }
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            arr_22 [i_0] [i_6] = ((unsigned short) ((((/* implicit */int) min(((unsigned short)65523), ((unsigned short)51137)))) + (((/* implicit */int) ((arr_0 [i_0]) > (arr_3 [i_0] [i_0]))))));
            var_18 = ((/* implicit */short) (~(min(((+(((/* implicit */int) (unsigned short)65519)))), ((+(((/* implicit */int) var_2))))))));
        }
        for (short i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            var_19 = ((/* implicit */short) arr_3 [i_0] [i_0]);
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_32 [i_0] [i_7] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((short) arr_24 [(unsigned short)1] [i_0] [i_8]))) ? (var_1) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) + (1598736078018812408ULL)))))));
                        var_20 *= ((/* implicit */short) 411078357U);
                    }
                } 
            } 
            var_21 = ((((/* implicit */_Bool) max((min((4294967295U), (((/* implicit */unsigned int) arr_28 [i_0] [i_7] [i_0])))), (((/* implicit */unsigned int) ((unsigned short) (short)16383)))))) ? (arr_16 [i_0] [i_0] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))));
        }
    }
    for (unsigned short i_10 = 3; i_10 < 16; i_10 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_33 [i_10]))));
        arr_36 [i_10] = ((/* implicit */long long int) (~(((/* implicit */int) arr_33 [i_10]))));
    }
    for (unsigned short i_11 = 3; i_11 < 16; i_11 += 2) /* same iter space */
    {
        arr_39 [i_11] [i_11] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned short) min((((/* implicit */short) var_2)), (arr_33 [i_11])))), ((unsigned short)13742))), (((/* implicit */unsigned short) max((((/* implicit */short) arr_37 [i_11] [i_11 - 1])), (arr_33 [i_11 - 2]))))));
        /* LoopSeq 1 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) (((!(arr_41 [i_11 - 2] [i_11]))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (((unsigned int) 11841800545017869620ULL))))));
            var_24 = ((/* implicit */unsigned short) (short)-1);
        }
        arr_42 [i_11] = ((/* implicit */unsigned short) (short)29362);
        var_25 &= ((/* implicit */short) arr_41 [i_11] [i_11]);
        arr_43 [i_11] [i_11] = ((/* implicit */unsigned long long int) ((unsigned int) (short)29370));
    }
}
