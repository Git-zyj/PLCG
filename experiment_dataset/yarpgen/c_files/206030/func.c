/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206030
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (unsigned char i_3 = 1; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_19 += ((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_0] [i_1 - 2] [i_3 + 1])))))));
                        var_20 = ((short) (!(((/* implicit */_Bool) arr_4 [i_1 + 2]))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)24576)) ? (((((/* implicit */int) ((_Bool) var_4))) + (((/* implicit */int) min(((unsigned short)32783), ((unsigned short)25460)))))) : (((/* implicit */int) arr_0 [i_2]))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        var_22 = ((/* implicit */unsigned short) var_8);
        var_23 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)32783))))) ? (((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) (unsigned short)25460)))) : (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))));
        var_24 = ((/* implicit */int) max((((((/* implicit */_Bool) (-(523264)))) ? (arr_10 [(signed char)2] [(signed char)2] [i_0] [(signed char)2]) : (((/* implicit */unsigned int) ((var_18) ? (arr_4 [i_0]) : (((/* implicit */int) (unsigned char)0))))))), (((/* implicit */unsigned int) (unsigned short)0))));
    }
    for (short i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned char) (unsigned short)40075);
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */int) (unsigned short)40076)) : (((/* implicit */int) arr_0 [i_4]))))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (arr_6 [i_4] [i_4]))))) + (-2242132782247410027LL))) : (((/* implicit */long long int) max((var_3), (((/* implicit */unsigned int) arr_3 [i_4])))))));
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_1 [i_4]), (((/* implicit */unsigned long long int) var_7))))) ? (arr_1 [i_4]) : (((((/* implicit */_Bool) 2242132782247410026LL)) ? (arr_1 [i_4]) : (arr_1 [i_4])))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        arr_19 [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) != (arr_2 [i_5])));
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            var_27 = ((/* implicit */_Bool) (+(arr_2 [i_5])));
            var_28 |= ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)0)))) ? (((arr_11 [i_5] [i_5] [i_5] [i_5]) ? (((/* implicit */int) var_7)) : (var_8))) : (((/* implicit */int) (unsigned short)32753))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 1; i_7 < 10; i_7 += 3) 
            {
                for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    {
                        arr_28 [i_6] = ((/* implicit */unsigned int) ((int) arr_9 [i_6] [i_6] [i_7 + 2] [i_7 + 3]));
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_7 + 1])) ? (((/* implicit */int) arr_21 [i_7 + 2])) : (((/* implicit */int) arr_21 [i_7 + 2]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 2; i_10 < 10; i_10 += 1) 
                {
                    {
                        var_30 ^= ((/* implicit */signed char) ((2242132782247410027LL) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)32783)) == (((/* implicit */int) arr_14 [i_6]))))))));
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (+(-2242132782247410027LL))))));
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) var_0))));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_33 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (15369200346204206988ULL)));
        /* LoopSeq 1 */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            arr_40 [i_11] [i_12 - 1] [i_12 - 1] = ((/* implicit */int) ((((0LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))))) == (((((/* implicit */long long int) var_10)) / (-3403271786590996928LL)))));
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_18)) > (((/* implicit */int) arr_38 [i_11] [i_11])))))) == (arr_10 [2LL] [i_12 - 1] [i_12 - 1] [2LL])));
            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) arr_10 [0U] [i_12] [i_12 - 1] [i_12 - 1]))));
            var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((arr_4 [i_12 - 1]) <= (((/* implicit */int) var_7)))))));
        }
        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) (-(((/* implicit */int) arr_38 [i_11] [i_11])))))));
    }
}
