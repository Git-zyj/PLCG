/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243881
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 2) 
                        {
                            {
                                var_18 = (unsigned short)53975;
                                arr_17 [i_3] [i_3] [5U] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (~((+(((/* implicit */int) (_Bool)1))))));
                                arr_18 [i_0] [i_1] [i_1] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) == (arr_1 [i_0])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 8; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_12 [7U] [(signed char)2] [i_2] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) || (((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) var_0))))))) % (((/* implicit */int) (short)8191))));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((arr_6 [i_1] [i_2] [i_5]) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))))));
                                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_9 [i_5] [i_1] [(unsigned short)0] [i_6])) ^ (((/* implicit */int) var_10))))))));
                            }
                        } 
                    } 
                    var_22 ^= ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) & (262143ULL))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 15; i_7 += 3) 
    {
        for (int i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 3) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_33 [i_7 - 3] [(unsigned char)14] [i_8] [i_7] [(unsigned char)14] [7LL] = ((/* implicit */long long int) arr_32 [i_7] [i_10] [i_10] [i_7]);
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (arr_29 [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) == ((-(arr_28 [i_7] [i_9 + 1])))));
                        }
                    } 
                } 
                arr_34 [i_7 - 2] [i_7 - 2] [i_7] = ((/* implicit */int) (_Bool)0);
                var_25 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_26 [i_7 + 1])) ? (((/* implicit */int) arr_26 [i_7 - 1])) : (((/* implicit */int) arr_26 [i_7 - 2]))))));
                var_26 = ((/* implicit */unsigned short) 1206070252U);
                /* LoopNest 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (int i_12 = 2; i_12 < 14; i_12 += 2) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 4) 
                        {
                            {
                                arr_41 [i_7 + 1] [i_7 + 1] [i_7] [i_7 - 3] [i_7 + 1] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((short) arr_39 [i_13] [(unsigned char)3] [(unsigned char)3] [i_12 - 1] [i_7] [i_7] [i_13]))) ? (((arr_39 [i_7] [i_8] [i_8] [i_11] [i_7] [i_8] [i_13]) * (((/* implicit */unsigned int) -2015872280)))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) | (((/* implicit */int) var_0))))))));
                                var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 134217727U)) ? (-1567454152) : (-1567454152)))) <= (641492009U)));
                                arr_42 [i_7] [i_7] [i_11] [i_7] [i_13] = ((/* implicit */unsigned char) (_Bool)1);
                                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2975634983220664706ULL)) ? (1567454151) : (-1567454151)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_14 = 0; i_14 < 24; i_14 += 2) 
    {
        for (unsigned short i_15 = 0; i_15 < 24; i_15 += 1) 
        {
            for (short i_16 = 3; i_16 < 22; i_16 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_17 = 2; i_17 < 20; i_17 += 2) 
                    {
                        for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */long long int) (~(var_7)));
                                var_30 = ((/* implicit */short) arr_48 [i_16 + 1] [i_17 + 2] [i_18]);
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_47 [i_16 + 2] [i_16 - 1] [i_16 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_52 [i_16] [i_16 - 1] [i_16 + 2] [i_16 + 1]))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_16 - 2] [i_16 - 2] [i_16 - 1])))));
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */_Bool) var_17);
}
