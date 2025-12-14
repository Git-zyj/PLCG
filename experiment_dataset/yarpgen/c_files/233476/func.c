/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233476
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) min((4294967270U), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            var_13 = ((/* implicit */signed char) min((max(((~(arr_4 [i_0]))), (((/* implicit */unsigned long long int) (short)-1)))), (((/* implicit */unsigned long long int) arr_5 [i_0]))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)35329)))) ? (((/* implicit */long long int) ((int) arr_1 [i_0]))) : (max((((/* implicit */long long int) 522215163)), (8057158399077822352LL)))));
        }
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_14 = ((/* implicit */int) (~(3896678364820520660ULL)));
            var_15 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (((+(arr_7 [i_2]))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_1 [i_2])))))))) != (arr_7 [i_2])));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    {
                        arr_15 [i_0] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_4])) >> (((((/* implicit */int) var_3)) - (25139)))))) * (((((/* implicit */long long int) 1610612736)) % (601861282532288354LL))))));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)127))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 511LL)) ? (1069439851) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)15937))) <= (288230376150663168LL))))))) : (((((/* implicit */_Bool) ((unsigned long long int) -1232956679))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_9 [i_0] [i_2] [i_0])) >= (4294967295U))))) : (((2082405641174901820LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
                        var_17 = ((/* implicit */long long int) max((var_17), (max((-5601225121316420146LL), (((/* implicit */long long int) (((-(((/* implicit */int) (short)2976)))) / (1583195111))))))));
                        arr_16 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) ((int) -1232956679));
                    }
                } 
            } 
        }
        arr_17 [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0])) : (((unsigned long long int) arr_8 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (unsigned int i_7 = 3; i_7 < 15; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_12))));
                                arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_8] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) arr_11 [i_5] [i_6] [i_6] [i_6])))));
                            }
                        } 
                    } 
                    arr_31 [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)170))) / (arr_0 [i_5 - 1])));
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 4) 
                        {
                            var_19 &= ((/* implicit */signed char) arr_27 [i_5] [i_5] [i_5] [i_5 - 1]);
                            var_20 = ((/* implicit */unsigned char) ((unsigned long long int) ((_Bool) arr_35 [i_5] [i_5] [i_6] [i_10] [i_5])));
                            var_21 = ((/* implicit */short) arr_8 [i_7] [i_5]);
                            arr_38 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5 - 1] [i_5] = ((/* implicit */int) var_9);
                        }
                        for (long long int i_12 = 0; i_12 < 16; i_12 += 1) 
                        {
                            var_22 += (((-(((/* implicit */int) var_2)))) + (((/* implicit */int) arr_14 [i_5] [i_6] [i_7 - 2] [i_10] [i_5] [i_7 - 3])));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((int) (unsigned short)8188)) * (((/* implicit */int) var_10)))))));
                            arr_41 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)6144)) ? (15333748791481413346ULL) : (((/* implicit */unsigned long long int) 4872408010446084142LL))));
                            var_24 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) -9064665773499674395LL)) / (1159386354549633169ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)4880)) % (((/* implicit */int) (_Bool)1)))))));
                            var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_21 [i_5]))));
                        }
                        arr_42 [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)13394)) ? (((/* implicit */long long int) 3)) : (4872408010446084142LL))) ^ (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 9))) ? (arr_36 [i_5] [i_5] [i_5] [i_5] [(short)8]) : (arr_20 [12U]))))));
        var_27 = ((/* implicit */unsigned long long int) ((_Bool) (signed char)41));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 13; i_13 += 4) 
    {
        var_28 = ((/* implicit */unsigned char) (((-(31133432U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)-8))))));
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_13] [i_13])) ? (arr_5 [i_13]) : (arr_5 [i_13]))))));
        arr_45 [i_13] [i_13] = ((/* implicit */short) ((unsigned long long int) arr_25 [i_13] [i_13] [i_13] [i_13]));
        /* LoopNest 2 */
        for (short i_14 = 0; i_14 < 13; i_14 += 2) 
        {
            for (unsigned char i_15 = 0; i_15 < 13; i_15 += 3) 
            {
                {
                    arr_50 [i_13] [i_14] [i_14] [i_15] = ((/* implicit */short) ((-1232956669) >= (((/* implicit */int) (signed char)-23))));
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 0; i_16 < 13; i_16 += 1) 
                    {
                        arr_53 [i_13] [i_14] [i_15] [i_16] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_15]))));
                        arr_54 [i_13] [i_15] [i_13] = ((/* implicit */unsigned int) var_4);
                        var_30 = ((/* implicit */short) arr_35 [i_13] [i_13] [i_13] [i_13] [i_13]);
                        arr_55 [i_13] [i_15] [i_15] [i_16] = ((/* implicit */long long int) (-(((int) 15409147254273641003ULL))));
                    }
                    var_31 -= ((/* implicit */int) ((arr_3 [i_15] [i_15] [i_15]) >> (((arr_8 [i_13] [i_14]) + (676376924)))));
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (~(((/* implicit */int) arr_21 [i_14])))))));
                }
            } 
        } 
        arr_56 [i_13] = ((/* implicit */long long int) 1159386354549633174ULL);
    }
    var_33 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30284))) / (5497505008066477731ULL)));
}
