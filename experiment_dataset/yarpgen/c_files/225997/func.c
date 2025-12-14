/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225997
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
    var_14 |= ((/* implicit */short) var_1);
    var_15 &= ((/* implicit */unsigned char) var_5);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((((/* implicit */int) var_11)) > (((/* implicit */int) var_6)))))))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (arr_5 [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))), (((min((((/* implicit */unsigned int) arr_1 [i_0])), (757403203U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                        arr_12 [i_2] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(var_3)));
                        var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) - (((/* implicit */int) var_7)))) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2] [i_1]))))))));
                    }
                    for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_18 [i_0])))))));
                        arr_21 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) var_2);
                    }
                    for (int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))))), (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_2] [i_2])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_6] [i_2] [i_1] [i_0])))))));
                        arr_25 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_10), (((/* implicit */short) var_3))))) ? (var_2) : (((unsigned long long int) var_3))));
                    }
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) * (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))))), (min((max((var_2), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) (-(var_4))))))));
        var_19 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
    }
    for (int i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    for (unsigned short i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        {
                            arr_39 [i_7] [i_7] [i_7] [i_8] [i_7] [i_10] [i_11] = ((/* implicit */signed char) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                            arr_40 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_7] [i_8] [i_8])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((var_3) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))))) == (((/* implicit */int) arr_10 [i_7] [i_7] [i_7] [i_7] [i_7]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 17; i_12 += 4) 
            {
                for (unsigned short i_13 = 0; i_13 < 17; i_13 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_22 [i_7] [i_7] [i_7] [i_7] [i_13])) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((_Bool) arr_33 [i_7] [i_7] [i_7] [i_7]))))))))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_7)) ? (var_1) : (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_13))));
                    }
                } 
            } 
            arr_46 [i_7] [i_7] [i_7] = ((/* implicit */short) var_3);
        }
        /* vectorizable */
        for (short i_14 = 0; i_14 < 17; i_14 += 3) /* same iter space */
        {
            arr_50 [i_14] [i_14] [i_14] = ((/* implicit */unsigned int) ((((int) var_7)) == (((((/* implicit */_Bool) arr_1 [i_14])) ? (((/* implicit */int) var_10)) : (var_4)))));
            arr_51 [i_14] = ((/* implicit */unsigned int) var_12);
        }
        /* vectorizable */
        for (short i_15 = 0; i_15 < 17; i_15 += 3) /* same iter space */
        {
            arr_55 [i_7] [i_7] = ((/* implicit */int) var_7);
            /* LoopNest 2 */
            for (unsigned short i_16 = 0; i_16 < 17; i_16 += 3) 
            {
                for (signed char i_17 = 0; i_17 < 17; i_17 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_18 = 0; i_18 < 17; i_18 += 4) 
                        {
                            arr_62 [i_16] = ((/* implicit */short) ((signed char) ((int) arr_54 [i_7] [i_7])));
                            var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_7])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_1)))) : (((unsigned long long int) var_0))));
                        }
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_16] [i_16] [i_16] [i_7]))) : (((((/* implicit */_Bool) (unsigned short)24351)) ? (((/* implicit */unsigned long long int) arr_47 [i_15] [i_7])) : (var_12)))));
                        var_25 = ((/* implicit */unsigned int) arr_13 [i_7]);
                    }
                } 
            } 
            arr_63 [i_15] [i_7] [i_7] = ((/* implicit */short) (+((~(((/* implicit */int) var_8))))));
        }
        arr_64 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) arr_22 [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_22 [i_7] [i_7] [i_7] [i_7] [i_7])))) : (((/* implicit */int) var_8))));
    }
    for (int i_19 = 0; i_19 < 17; i_19 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */short) ((((/* implicit */int) ((signed char) max((var_6), (((/* implicit */short) var_3)))))) == (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) == (var_9)))) : (((((/* implicit */_Bool) var_11)) ? (-1080217720) : (((/* implicit */int) var_11))))))));
        var_27 = ((/* implicit */long long int) (((~(((/* implicit */int) var_5)))) <= (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_19] [i_19] [i_19] [i_19])) ? (((/* implicit */int) var_6)) : (var_4)))) || (((/* implicit */_Bool) arr_2 [i_19])))))));
    }
}
