/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196777
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [9ULL] [9ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */int) var_4))))) ? (((var_0) + (((/* implicit */long long int) ((/* implicit */int) var_11))))) : ((-(var_2)))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) < (var_13))))) <= (((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */long long int) var_5))))));
        var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_0))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))) ? (var_2) : (((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_0)))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_1) : (var_2)));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_0))))));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                for (long long int i_4 = 1; i_4 < 15; i_4 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) (~(var_8)));
                        var_18 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_5)) ? (var_8) : (var_8)))));
                        arr_15 [i_1] = ((/* implicit */unsigned int) (+((+(var_13)))));
                        arr_16 [i_1] [i_4] [i_4] = var_8;
                        var_19 ^= (+(var_5));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) * (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_0))))))));
            var_21 |= ((/* implicit */unsigned int) var_0);
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                arr_19 [i_1] = ((((/* implicit */_Bool) -6747489064755023033LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (116823537U));
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)143)) && (((/* implicit */_Bool) 8829480653752250811ULL))));
                /* LoopSeq 2 */
                for (int i_6 = 3; i_6 < 16; i_6 += 1) 
                {
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (~(var_10))))));
                    arr_22 [i_1] [i_2] [i_1] [i_5] [i_6 + 2] = ((/* implicit */unsigned int) ((var_1) >= (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))));
                }
                for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((var_13) ^ (var_13))))));
                    var_25 = ((/* implicit */_Bool) (-(9617263419957300809ULL)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 2; i_8 < 19; i_8 += 1) 
    {
        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            {
                arr_32 [i_8] [i_9] [i_9] = ((/* implicit */_Bool) (~((+(((/* implicit */int) var_9))))));
                var_26 = ((/* implicit */unsigned long long int) var_12);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_10 = 3; i_10 < 20; i_10 += 3) 
    {
        for (long long int i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            for (unsigned int i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (-(((/* implicit */int) var_9)))))));
                    var_28 = (!(((/* implicit */_Bool) (-(var_1)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        for (short i_14 = 0; i_14 < 24; i_14 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned int) var_10);
                                var_30 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) (unsigned short)16))));
                                var_31 -= ((/* implicit */short) (((~(((/* implicit */int) var_11)))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_5)))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) < (var_13)))))))) ? ((-(((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned long long int) var_12)))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_6)) / (((/* implicit */int) var_7)))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_16 = 3; i_16 < 23; i_16 += 1) 
                        {
                            var_33 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3773844715656007957LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-24))))) : (((((/* implicit */unsigned long long int) var_0)) % (var_3))));
                            arr_49 [i_12] [i_15] [i_12] [(_Bool)1] [i_10] = ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_7))));
                            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) 9617263419957300809ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41))) : (1809407696181501655ULL)));
                            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) var_9)))) : (((((/* implicit */int) var_11)) - (var_12))))))));
                        }
                        for (unsigned int i_17 = 0; i_17 < 24; i_17 += 4) 
                        {
                            arr_53 [i_10 + 2] [i_11] [i_12] [i_15] [i_17] |= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))));
                            var_36 += ((((/* implicit */_Bool) 770043262U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-89))) : (14613314493194397449ULL));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_37 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_10))) - (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                            arr_57 [i_18] [i_18] [i_12] [i_15] [i_12] = (-(((/* implicit */int) (!(var_11)))));
                        }
                        arr_58 [i_10] [i_10] [i_10] [i_10] [(unsigned char)13] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_12)) ? (var_0) : (var_2)))));
                    }
                    arr_59 [(short)2] [i_11] [(short)2] [13ULL] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(var_2)))) * ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (var_13)))))));
                }
            } 
        } 
    } 
    var_38 = ((/* implicit */long long int) (+(var_3)));
}
