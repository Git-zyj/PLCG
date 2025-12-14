/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243234
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
    var_18 = ((/* implicit */signed char) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((((var_6) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0])) + (70))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) arr_3 [i_1]);
                    arr_9 [i_0] [i_0] [i_2] [i_2 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((144044819331678208LL) - (-144044819331678208LL)))) ? (-144044819331678208LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_1))));
                    arr_10 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) var_10);
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) max((var_21), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) % (541096256U)))));
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [i_3 + 1] [i_3 + 1])) < (var_9)))) <= (((/* implicit */int) ((unsigned char) var_9)))));
        var_22 = ((/* implicit */signed char) ((((((var_15) - (541096264U))) + (541096264U))) >> (((((/* implicit */int) ((unsigned short) var_1))) - (26828)))));
        arr_15 [i_3] [i_3 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_0 [i_3 + 1])) : (((/* implicit */int) var_17))))) : (((arr_11 [i_3]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */int) max(((unsigned char)192), (((/* implicit */unsigned char) ((var_8) < (78254998))))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3 + 1] [i_3] [i_3 + 1]))) >= (3783501545204574735LL)))) > (((/* implicit */int) (_Bool)0)))))));
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_16))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                for (signed char i_6 = 1; i_6 < 11; i_6 += 1) 
                {
                    {
                        arr_24 [i_5] [i_4] [i_5] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((max(((unsigned short)65535), (((/* implicit */unsigned short) arr_12 [i_6 + 1] [i_4])))), (((/* implicit */unsigned short) ((arr_18 [i_3 + 1] [i_3] [i_3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))) + (max((var_1), (((/* implicit */unsigned int) min((((/* implicit */int) var_17)), (arr_4 [i_3] [i_5]))))))));
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_16))));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_3 + 1] [i_3 + 1])) && (arr_19 [i_3 + 1] [i_4] [i_4])))) >> (((arr_4 [i_4] [i_4]) + (1972965718))))))));
            /* LoopNest 3 */
            for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                for (int i_8 = 2; i_8 < 11; i_8 += 2) 
                {
                    for (int i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        {
                            var_26 |= ((/* implicit */unsigned int) var_7);
                            var_27 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (3975593071U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (18016080948412980999ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (2239300633220430632ULL)));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */unsigned short) (((+(arr_21 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]))) << (((((((((/* implicit */_Bool) arr_21 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])) ? (arr_4 [i_3 + 1] [i_3 + 1]) : (arr_21 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]))) + (1972965734))) - (26)))));
        }
        /* LoopNest 3 */
        for (signed char i_10 = 3; i_10 < 8; i_10 += 2) 
        {
            for (signed char i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 3; i_12 < 9; i_12 += 2) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) max((((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_10] [i_11]))) & (4294967295U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) min((0U), (16777215U)))))))));
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (((-(min((var_11), (((/* implicit */unsigned int) arr_8 [i_3] [i_3] [i_11] [i_12])))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) == (var_9))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_13 = 2; i_13 < 11; i_13 += 1) 
                        {
                            var_31 = ((/* implicit */int) (-(arr_43 [i_12 - 1])));
                            var_32 = ((/* implicit */unsigned long long int) arr_46 [i_13 - 2] [i_13 + 1] [i_13 + 1] [i_13] [i_13 - 1] [i_13 - 1]);
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65532))))) ? (((/* implicit */int) (signed char)-123)) : (((((/* implicit */int) (_Bool)1)) >> (((144044819331678208LL) - (144044819331678194LL)))))));
                            var_34 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 16207443440489120983ULL)))))));
                        }
                        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) min((955993672U), (((/* implicit */unsigned int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
    }
    for (int i_14 = 1; i_14 < 18; i_14 += 1) 
    {
        var_36 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_14 + 1] [i_14 - 1])) || ((_Bool)1)))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) 152493103U)) : (18446744073709551610ULL))))))));
        arr_49 [i_14] [i_14 + 1] |= ((/* implicit */short) max((var_10), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (1777598615))))))));
    }
}
