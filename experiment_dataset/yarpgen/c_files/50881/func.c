/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50881
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((arr_9 [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_0)))) + (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [(_Bool)1] [i_2] [i_2] [i_0])) < (((/* implicit */int) (unsigned short)49483)))))))));
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_0]), (var_2)))) ? (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_4))))))) : ((+(arr_5 [i_2] [i_3])))));
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_5 [i_2] [8U]) / (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))) : (arr_7 [i_0] [i_1] [i_2] [i_2]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) (unsigned short)61051))))))));
                            var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) var_10)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 12; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) (((((~(6172177033190497119LL))) ^ (((/* implicit */long long int) (~(4294967278U)))))) % (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_10 [i_0] [i_4 + 1] [i_4])))))));
                            var_17 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_4 - 3] [i_5] [11U] [i_4 - 1])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    for (unsigned char i_7 = 3; i_7 < 11; i_7 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))) < ((~(((((/* implicit */int) arr_19 [i_0] [i_1] [i_0])) | (((/* implicit */int) arr_1 [i_0])))))))))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(2299486973U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))) : (4294967295U)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_8 = 1; i_8 < 21; i_8 += 3) 
    {
        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        {
                            var_20 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)99))));
                            var_21 = ((/* implicit */int) var_1);
                            var_22 += ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_28 [i_8 + 2] [i_8 + 1] [i_8 - 1] [i_8 - 1]), (arr_28 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 + 1]))))));
                            var_24 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_14 = 3; i_14 < 20; i_14 += 1) 
    {
        for (short i_15 = 2; i_15 < 20; i_15 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 23; i_16 += 1) 
                {
                    for (long long int i_17 = 4; i_17 < 22; i_17 += 3) 
                    {
                        for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) (~(1068190353U)));
                                var_26 = ((/* implicit */short) (((+((~(((/* implicit */int) arr_20 [i_14 + 3])))))) < (((((/* implicit */int) arr_46 [i_14 + 3] [i_14])) & (((/* implicit */int) arr_46 [i_14 - 3] [i_14]))))));
                                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((arr_38 [i_14] [(short)11]) != (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_15] [i_14]))))))))) || (((/* implicit */_Bool) ((unsigned int) arr_40 [i_17 + 1] [i_14])))));
                                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */unsigned long long int) (+(var_2)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (arr_44 [i_14 + 3] [i_14 + 3] [i_16] [i_17 - 4])))))) ? (((((arr_51 [(short)4] [i_15 + 3]) + (var_8))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */unsigned int) (-((((_Bool)1) ? (((/* implicit */int) arr_46 [(unsigned char)14] [i_14])) : (((/* implicit */int) var_9)))))))));
                                var_29 ^= ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) 9007199254740988LL)), (18446744073709551612ULL))) >= (((/* implicit */unsigned long long int) min(((~(var_2))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_40 [i_18] [i_18])) ^ (((/* implicit */int) (unsigned short)18))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_19 = 0; i_19 < 23; i_19 += 1) 
                {
                    for (unsigned char i_20 = 0; i_20 < 23; i_20 += 3) 
                    {
                        for (int i_21 = 0; i_21 < 23; i_21 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */short) (unsigned short)38121);
                                var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) var_8))));
                                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_35 [i_14] [i_20] [i_15 + 3] [i_20] [i_14])), (((((/* implicit */long long int) ((/* implicit */int) var_0))) & (arr_23 [i_14 - 2] [i_19])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_14])) % (((/* implicit */int) arr_34 [i_14] [i_15] [i_19] [i_20] [15ULL]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) arr_26 [i_14] [i_15 - 1] [(signed char)8]))))) && (((/* implicit */_Bool) ((unsigned int) var_8))))))));
                                var_33 = ((/* implicit */unsigned long long int) min((var_33), (((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (1736397625U))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_26 [i_14] [i_15] [(_Bool)1])))))))) ? ((+((+(9ULL))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_59 [i_14 + 1] [i_15 - 1] [i_15 + 3] [18U] [i_15 - 2])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
