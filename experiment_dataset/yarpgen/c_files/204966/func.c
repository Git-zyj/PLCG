/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204966
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
    var_15 = ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)60)), ((short)-11894)))) || ((!(((/* implicit */_Bool) var_9)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) (-(arr_4 [i_1] [i_0])));
            var_17 ^= ((/* implicit */short) (~(((((/* implicit */int) (unsigned char)124)) / (((/* implicit */int) (short)-11901))))));
            var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0]))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_10 [(signed char)13] [(signed char)13] = (!(((/* implicit */_Bool) var_2)));
                        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)11893))) | (var_1))) | (var_3)));
                        arr_11 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) (-(5323019037254307968ULL)));
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_4))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                for (unsigned char i_5 = 4; i_5 < 20; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6] [i_5 - 2] [i_4] [i_1]))) : (arr_4 [i_4] [i_0]))) : (((/* implicit */unsigned long long int) var_10))));
                            arr_19 [6ULL] [7ULL] [i_4] [i_5 - 3] [i_5] [i_6] [i_5] = (-(((/* implicit */int) var_14)));
                            var_21 = ((/* implicit */unsigned int) (~(((((var_10) + (9223372036854775807LL))) >> (((var_6) - (349419619U)))))));
                        }
                    } 
                } 
            } 
        }
        var_22 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_0] [(unsigned char)21] [i_0] [i_0] [i_0]) < (((/* implicit */int) (signed char)3)))))) - (((unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 3) 
    {
        var_23 = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) var_10)) <= (var_2)))));
        var_24 = ((/* implicit */short) (-((+(arr_7 [i_7 + 2] [i_7])))));
        var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_7] [i_7 + 2]))));
        var_26 = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_7] [8LL] [8LL] [i_7 - 1])) < (((/* implicit */int) var_5))));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 20; i_8 += 3) 
        {
            for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                {
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64758)) ? (12948420685758434728ULL) : (((/* implicit */unsigned long long int) 844424930131968LL)))))));
                    arr_27 [i_9] = ((/* implicit */int) (+(arr_6 [i_7 + 1] [i_8 + 1])));
                    arr_28 [i_9] [i_8] [i_9] = ((/* implicit */unsigned short) (~(((var_2) - (17992687298485761870ULL)))));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 1) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned short i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */int) var_3);
                            var_30 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_33 [i_13] [i_13])) < (((/* implicit */int) ((unsigned char) (unsigned short)64751))))))));
                            var_31 = ((/* implicit */unsigned long long int) (+(((var_1) - (((/* implicit */unsigned int) ((arr_33 [(signed char)10] [i_11]) ? (var_12) : (((/* implicit */int) var_14)))))))));
                            var_32 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (var_11) : (((/* implicit */int) arr_36 [i_10] [i_11] [(unsigned short)3] [i_13]))))));
                            var_33 = (+((((!(((/* implicit */_Bool) (short)11909)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_11)) : (var_0))) : (((/* implicit */unsigned long long int) var_6)))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_9 [i_10] [i_11] [i_11] [i_10] [i_10] [i_10]) ? (((/* implicit */int) arr_9 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_9 [(signed char)10] [i_11] [i_11] [i_10] [i_11] [i_10]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)224))))) : (((((/* implicit */_Bool) arr_15 [i_10] [i_11] [(unsigned short)14])) ? (((/* implicit */int) arr_15 [i_10] [i_11] [i_10])) : (var_11)))));
                arr_40 [7ULL] [7ULL] [7ULL] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) (-(var_10)))) * (((unsigned long long int) arr_9 [i_10] [17U] [i_11] [(signed char)17] [i_11] [i_11])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4))))));
            }
        } 
    } 
    var_35 = ((/* implicit */long long int) ((short) var_3));
}
