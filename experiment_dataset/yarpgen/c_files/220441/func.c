/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220441
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_9))));
        arr_3 [i_0] = ((/* implicit */unsigned char) var_10);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    var_14 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))));
                    arr_9 [i_0] [i_0] [i_0] [i_2 + 2] = ((/* implicit */unsigned char) min(((-(((((/* implicit */_Bool) var_6)) ? (var_2) : (var_7))))), (((/* implicit */unsigned long long int) (short)0))));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 1) 
        {
            var_15 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_8 [(short)8] [i_3] [i_4 + 3])) ? (((/* implicit */int) (short)24728)) : (((/* implicit */int) arr_10 [i_4])))) : ((-(((/* implicit */int) arr_12 [i_3])))))));
            var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_3]))))), ((unsigned char)242))))));
            arr_14 [(unsigned char)8] = ((/* implicit */unsigned char) 0ULL);
            var_17 += ((/* implicit */short) (~(((/* implicit */int) var_11))));
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        {
                            arr_22 [i_3] [i_4] [i_5] [i_4] [(short)21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)211))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)18))))))) : (((/* implicit */int) (unsigned char)249))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (short)0)) ? (min((((/* implicit */unsigned long long int) arr_20 [i_3] [i_7] [i_5] [i_3] [i_7])), (max((var_7), (((/* implicit */unsigned long long int) arr_19 [i_7] [i_6] [(unsigned char)10] [(unsigned char)10])))))) : (var_10)));
                            var_19 *= ((/* implicit */short) (-(min((var_10), (((/* implicit */unsigned long long int) var_1))))));
                            var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)49))));
                            var_21 = ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)24728)) : (((/* implicit */int) (unsigned char)211))))), (16416415338838067140ULL)))));
                        }
                    } 
                } 
            } 
        }
        var_22 = min(((unsigned char)22), (var_9));
    }
    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_15 [i_8] [i_8] [i_8]), (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)155))) : (((((/* implicit */_Bool) (unsigned char)107)) ? ((-(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_8] [(short)0] [i_8])) && (((/* implicit */_Bool) 4079247432905224733ULL))))))))));
        arr_25 [10ULL] [i_8] &= ((/* implicit */short) min((((((/* implicit */_Bool) (-(var_10)))) ? (min((var_6), (var_8))) : (min((((/* implicit */unsigned long long int) var_4)), (14261760791734482215ULL))))), (((/* implicit */unsigned long long int) (short)0))));
        var_24 = ((/* implicit */unsigned char) (short)(-32767 - 1));
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_8] [i_8] [i_8])) || (((/* implicit */_Bool) 7729160025024920533ULL))))))));
    }
    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
    {
        arr_28 [i_9] [i_9] = ((/* implicit */unsigned char) min((((/* implicit */short) ((max((2030328734871484476ULL), (((/* implicit */unsigned long long int) (short)24728)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)19)))))), ((short)-24701)));
        arr_29 [i_9] [15ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_9] [i_9] [i_9])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)60))))) : (((/* implicit */int) arr_0 [(unsigned char)2]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) (short)-20991)))))) : (max(((~(4079247432905224733ULL))), (min((var_3), (((/* implicit */unsigned long long int) (short)20990))))))));
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 25; i_10 += 3) 
        {
            for (unsigned char i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 3; i_12 < 23; i_12 += 2) 
                    {
                        for (short i_13 = 0; i_13 < 25; i_13 += 2) 
                        {
                            {
                                var_26 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_33 [i_9] [i_12 - 3] [20ULL]))));
                                var_27 = ((/* implicit */unsigned long long int) (short)0);
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) arr_34 [i_9] [i_11] [(unsigned char)10] [i_10])) : ((~(((/* implicit */int) arr_37 [i_9] [i_9] [i_9] [i_9]))))))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned long long int) min((var_29), ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) * (((((/* implicit */_Bool) (unsigned char)5)) ? (var_3) : (var_2)))))))));
}
