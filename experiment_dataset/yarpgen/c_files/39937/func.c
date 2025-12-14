/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39937
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_7 [(signed char)16] [(signed char)16] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)252)) && (((/* implicit */_Bool) var_11))))) : (((((/* implicit */int) (short)-19198)) - (((/* implicit */int) (short)-19198))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))) - (((2072684625469560013ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_16 = ((/* implicit */int) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_5 = 2; i_5 < 21; i_5 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) var_8)))));
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 3; i_6 < 23; i_6 += 3) 
                        {
                            var_18 = ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) ((signed char) 18446744073709551611ULL))))));
                            arr_18 [i_5] [i_5] = ((((/* implicit */_Bool) ((unsigned int) (unsigned char)4))) ? ((~(((/* implicit */int) (short)19185)))) : ((~(((/* implicit */int) var_3)))));
                        }
                        for (unsigned short i_7 = 1; i_7 < 23; i_7 += 3) 
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-9899))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)30892))))) ^ (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (((/* implicit */int) (_Bool)1))))) ? (((18446744073709551611ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((((-631864129) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))))))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) == (((/* implicit */int) ((signed char) (short)19195)))));
                            var_21 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))));
                        }
                        var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)255))) ? (((((/* implicit */int) (short)-9899)) - (((/* implicit */int) var_9)))) : ((-(((/* implicit */int) (signed char)0))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_8 = 3; i_8 < 24; i_8 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))) > (2969130448U))) ? (((/* implicit */unsigned int) (+(var_4)))) : (((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) var_8)))))));
                            var_24 = ((/* implicit */unsigned int) ((unsigned long long int) (short)-19198));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) (unsigned short)28672)) - (((/* implicit */int) var_14)))) : (((/* implicit */int) ((unsigned short) -645244194543040937LL)))))) && (((/* implicit */_Bool) ((((((((/* implicit */int) (short)-29726)) + (2147483647))) >> (((var_4) + (563790861))))) ^ (((/* implicit */int) var_1)))))));
                        }
                        for (unsigned int i_9 = 3; i_9 < 24; i_9 += 4) /* same iter space */
                        {
                            var_26 *= ((/* implicit */unsigned int) var_11);
                            arr_28 [i_0] [11] [i_0] [11] [i_0] [i_5] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : ((-2147483647 - 1)))) ^ (((/* implicit */int) ((((/* implicit */int) (short)-29726)) >= (((/* implicit */int) var_3))))))) >= (((/* implicit */int) (unsigned char)30))));
                        }
                        /* vectorizable */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) 0)) < (var_6)));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-16962)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)62)))));
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) -9223372036854775793LL)) : (5ULL)));
                        }
                        for (unsigned int i_11 = 1; i_11 < 24; i_11 += 1) 
                        {
                            var_30 = ((/* implicit */int) max((var_30), (((((((/* implicit */_Bool) 5ULL)) || (((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (unsigned char)107))))))));
                            var_31 += ((/* implicit */long long int) ((unsigned int) (~(6398768046067729419LL))));
                            var_32 *= ((/* implicit */unsigned char) ((unsigned int) (((-(((/* implicit */int) var_11)))) + (((/* implicit */int) (short)6718)))));
                            arr_36 [i_5] [i_1] [3ULL] [i_1] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) (unsigned char)250))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))))) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)216))))));
                        }
                        var_33 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : ((~(6398768046067729405LL)))))) & (4164264790443568172ULL)));
                    }
                    /* vectorizable */
                    for (unsigned short i_12 = 2; i_12 < 22; i_12 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) ((unsigned int) 6398768046067729406LL));
                        var_35 -= ((/* implicit */short) ((int) (-(0U))));
                        var_36 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (short)-13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_37 = ((/* implicit */_Bool) var_11);
                        var_38 += ((/* implicit */long long int) (-(((((/* implicit */int) var_12)) % (((/* implicit */int) (signed char)-1))))));
                        var_39 += ((/* implicit */int) ((long long int) (~(13U))));
                        var_40 = ((/* implicit */_Bool) var_5);
                    }
                    var_41 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (4164264790443568176ULL)));
                    var_42 = ((/* implicit */unsigned int) (short)-26926);
                }
            } 
        } 
    } 
    var_43 = ((/* implicit */unsigned char) var_2);
    var_44 = ((/* implicit */signed char) var_2);
}
