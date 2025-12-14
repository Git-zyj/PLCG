/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196851
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
    var_19 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) ((-899669881) != (((/* implicit */int) (unsigned char)17))))), (max((((/* implicit */long long int) var_2)), (var_14))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) == (var_3)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_16))) / (var_8))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            var_20 = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (min((var_4), (((/* implicit */long long int) arr_3 [i_0])))) : (((/* implicit */long long int) min((((/* implicit */int) arr_3 [i_0])), (arr_0 [i_0])))))) * (((/* implicit */long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)1)))) >> (((arr_0 [i_0]) + (879588054))))))))) : (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (min((var_4), (((/* implicit */long long int) arr_3 [i_0])))) : (((/* implicit */long long int) min((((/* implicit */int) arr_3 [i_0])), (arr_0 [i_0])))))) * (((/* implicit */long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)1)))) >> (((((arr_0 [i_0]) + (879588054))) - (422493827)))))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_21 &= ((/* implicit */unsigned char) (unsigned short)0);
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_7 [(_Bool)1] [(short)6]), (((/* implicit */short) max(((unsigned char)0), (((/* implicit */unsigned char) var_11)))))))) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) ((unsigned short) ((arr_2 [i_0] [i_1]) ? (1315925338U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 3] [i_0 - 3] [(unsigned short)7] [i_3]))))))))))));
                        arr_11 [i_0] [i_0] [i_0] [(unsigned char)5] [i_0] [i_3] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (((_Bool)0) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-24705)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (min((((/* implicit */long long int) var_5)), (arr_8 [i_0 - 3] [4ULL] [i_2] [i_3]))))), (((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)125)), (arr_3 [i_1 + 2])))))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) var_11);
            var_24 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned short)32705)), (16383LL)));
        }
        for (signed char i_4 = 2; i_4 < 13; i_4 += 4) 
        {
            var_25 -= ((/* implicit */unsigned char) (((-(arr_0 [i_4]))) <= (((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_0 - 2] [i_0 - 2] [(unsigned short)13])))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 3; i_5 < 11; i_5 += 1) 
            {
                for (unsigned short i_6 = 2; i_6 < 13; i_6 += 2) 
                {
                    {
                        var_26 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((var_6), (var_5)))) : (((/* implicit */int) var_11)))), ((~(((/* implicit */int) var_13))))));
                        var_27 = ((/* implicit */short) arr_14 [i_5] [i_5]);
                        arr_19 [i_0] [i_4] [i_5 + 1] [i_4] [i_6 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_0]))))) ? (min((4294967295U), (((/* implicit */unsigned int) (signed char)-69)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)30)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_6 + 1] [i_5] [i_4] [1ULL])), (var_12)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((arr_18 [i_5]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(_Bool)1] [(_Bool)0] [(_Bool)1] [i_4])))))) && (((/* implicit */_Bool) (unsigned char)1)))))));
                        var_28 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_4] [i_4] [i_0] [i_6]))))), (((arr_10 [i_0] [i_4] [i_4] [i_5] [i_5] [i_6]) ? (((/* implicit */unsigned long long int) var_8)) : (var_18))))), (((/* implicit */unsigned long long int) var_13))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                for (long long int i_8 = 2; i_8 < 12; i_8 += 1) 
                {
                    {
                        arr_25 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_3 [i_0]);
                        var_29 &= ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_0] [i_0])) <= (((/* implicit */int) arr_21 [i_0] [i_0]))));
                        var_30 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)32722))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_9 = 3; i_9 < 12; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_31 &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((var_0) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8)))))) ? (arr_12 [i_0]) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_15)), (4294967282U)))))), (((/* implicit */long long int) arr_3 [i_10]))));
                        var_32 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_10] [i_10]))))), (min((((/* implicit */unsigned int) arr_28 [i_9 + 1] [i_9 + 1] [i_10] [i_10])), (arr_6 [i_0] [i_9 - 3] [i_9] [i_9])))));
                    }
                } 
            } 
        }
        for (long long int i_11 = 2; i_11 < 13; i_11 += 4) 
        {
            var_33 -= ((/* implicit */_Bool) var_7);
            var_34 = ((/* implicit */unsigned short) min((var_34), (max((arr_33 [i_0 + 1] [i_11 - 2] [i_11]), (((/* implicit */unsigned short) max((((/* implicit */short) (unsigned char)0)), ((short)-14))))))));
        }
        var_35 = ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) | (var_8)))) - (max((((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-1LL))), (((/* implicit */long long int) (_Bool)1)))));
        var_36 -= ((/* implicit */unsigned char) var_0);
    }
}
